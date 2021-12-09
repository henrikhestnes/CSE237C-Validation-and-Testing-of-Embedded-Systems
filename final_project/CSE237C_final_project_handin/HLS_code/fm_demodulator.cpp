#include "fm_demodulator.h"
#include <hls_stream.h>
#include <string.h>

void fm_demodulator(float* INPUT_R, float* INPUT_I, float* OUTPUT){
	const int samples = SAMPLES;

#pragma HLS INTERFACE mode=s_axilite port=samples bundle=CTRL
#pragma HLS INTERFACE mode=s_axilite port=return bundle=CTRL
#pragma HLS INTERFACE mode=m_axi depth=samples offset=slave port=INPUT_R bundle=input
#pragma HLS INTERFACE mode=m_axi depth=samples offset=slave port=INPUT_I bundle=input
#pragma HLS INTERFACE mode=m_axi depth=samples/50 offset=slave port=OUTPUT bundle=output
#pragma HLS INTERFACE mode=s_axilite port=INPUT_R bundle=CTRL
#pragma HLS INTERFACE mode=s_axilite port=INPUT_I bundle=CTRL
#pragma HLS INTERFACE mode=s_axilite port=OUTPUT bundle=CTRL
#pragma HLS DATAFLOW

	hls::stream<LFILTER_TYPE, STREAM_DEPTH> LFILTER1_OUTPUT_R("LFILTER1_OUTPUT_R"), LFILTER1_OUTPUT_I("LFILTER1_OUTPUT_I");
#pragma HLS STREAM variable=LFILTER1_OUTPUT_R depth=1000 type=fifo
#pragma HLS STREAM variable=LFILTER1_OUTPUT_I depth=1000 type=fifo
	lfilter1(INPUT_R, INPUT_I, LFILTER1_OUTPUT_R, LFILTER1_OUTPUT_I, samples);

	hls::stream<DOWNSAMPLE_TYPE, STREAM_DEPTH> DOWNSAMPLE10_OUTPUT_R("DOWNSAMPLE10_OUTPUT_R"), DOWNSAMPLE10_OUTPUT_I("DOWNSAMPLE10_OUTPUT_I");
#pragma HLS STREAM variable=DOWNSAMPLE10_OUTPUT_R depth=1000 type=fifo
#pragma HLS STREAM variable=DOWNSAMPLE10_OUTPUT_I depth=1000 type=fifo
	downsample10(LFILTER1_OUTPUT_R, LFILTER1_OUTPUT_I, DOWNSAMPLE10_OUTPUT_R, DOWNSAMPLE10_OUTPUT_I, samples);

	hls::stream<DISCRIM_TYPE, STREAM_DEPTH> DISCRIM_OUTPUT("DISCRIM_OUTPUT");
#pragma HLS STREAM variable=DISCRIM_OUTPUT depth=1000 type=fifo
	discriminant(DOWNSAMPLE10_OUTPUT_R, DOWNSAMPLE10_OUTPUT_I, DISCRIM_OUTPUT, samples);

	hls::stream<LFILTER_TYPE, STREAM_DEPTH> LFILTER2_OUTPUT("LFILTER2_OUTPUT");
#pragma HLS STREAM variable=LFILTER2_OUTPUT depth=1000 type=fifo
	lfilter2(DISCRIM_OUTPUT, LFILTER2_OUTPUT, samples);

	downsample5(LFILTER2_OUTPUT, OUTPUT, samples);
}

struct X_DX{
	DISCRIM_TYPE x;
	DISCRIM_TYPE dx;
};

void derivative(hls::stream<DISCRIM_TYPE, STREAM_DEPTH> &INPUT_R, hls::stream<DISCRIM_TYPE, STREAM_DEPTH> &INPUT_I, hls::stream<X_DX, STREAM_DEPTH> &OUTPUT_R, hls::stream<X_DX, STREAM_DEPTH> &OUTPUT_I, const int samples){
	static DISCRIM_TYPE shift_reg_r[2], shift_reg_i[2];
	for(int sample_num = 0; sample_num < samples/10; sample_num++){
		DISCRIM_TYPE R = INPUT_R.read();
		DISCRIM_TYPE I = INPUT_I.read();

		shift_reg_r[1] = shift_reg_r[0];
		shift_reg_i[1] = shift_reg_i[0];
		shift_reg_r[0] = R;
		shift_reg_i[0] = I;
		X_DX temp_r{R, R - shift_reg_r[1]};
		X_DX temp_i{I, I - shift_reg_i[1]};

		OUTPUT_R.write(temp_r);
		OUTPUT_I.write(temp_i);
	}
}

void calc_discrim(hls::stream<X_DX, STREAM_DEPTH> &INPUT_R, hls::stream<X_DX, STREAM_DEPTH> &INPUT_I, hls::stream<DISCRIM_TYPE, STREAM_DEPTH> &OUTPUT, const int samples){
	for(int sample_num = 0; sample_num < samples/10; sample_num++){
		X_DX R = INPUT_R.read();
		X_DX I = INPUT_I.read();
		DISCRIM_TYPE dis = (R.x*I.dx - I.x*R.dx)/(R.x*R.x + I.x*I.x);
		OUTPUT.write(dis);
	}
}

void discriminant(hls::stream<DOWNSAMPLE_TYPE, STREAM_DEPTH> &INPUT_R, hls::stream<DOWNSAMPLE_TYPE, STREAM_DEPTH> &INPUT_I, hls::stream<DISCRIM_TYPE, STREAM_DEPTH> &OUTPUT, const int samples){
#pragma HLS dataflow
	hls::stream<X_DX, STREAM_DEPTH> R("R"), I("I");
#pragma HLS STREAM variable=R depth=1000 type=fifo
#pragma HLS STREAM variable=I depth=1000 type=fifo
	derivative(INPUT_R, INPUT_I, R, I, samples);
	calc_discrim(R, I, OUTPUT, samples);
}

void lfilter1(float* INPUT_R, float* INPUT_I, hls::stream<LFILTER_TYPE, STREAM_DEPTH> &OUTPUT_R, hls::stream<LFILTER_TYPE, STREAM_DEPTH> &OUTPUT_I, const int samples){
	if(DO_TESTING){
		const int num_taps = 64;
		static LFILTER_TYPE shift_reg_r[num_taps], shift_reg_i[num_taps];
		float b[num_taps] =   {-0.00057098, -0.00022201,  0.0002486 ,  0.00079229,  0.00129681,
								0.00157633,  0.00141003,  0.00063018, -0.00076622, -0.00252994,
							   -0.00414857, -0.0049459 , -0.00428825, -0.00184781,  0.00216364,
								0.00688941,  0.01092662,  0.01264875,  0.01069752,  0.00451942,
							   -0.00521788, -0.01648693, -0.02613759, -0.03050801, -0.02629528,
							   -0.01147865,  0.01395219,  0.04768449,  0.08531217,  0.12109753,
								0.14911115,  0.16448689,  0.16448689,  0.14911115,  0.12109753,
								0.08531217,  0.04768449,  0.01395219, -0.01147865, -0.02629528,
							   -0.03050801, -0.02613759, -0.01648693, -0.00521788,  0.00451942,
								0.01069752,  0.01264875,  0.01092662,  0.00688941,  0.00216364,
							   -0.00184781, -0.00428825, -0.0049459 , -0.00414857, -0.00252994,
							   -0.00076622,  0.00063018,  0.00141003,  0.00157633,  0.00129681,
								0.00079229,  0.0002486 , -0.00022201, -0.00057098};

		float in_r[samples];
		float in_i[samples];
	    memcpy(in_r, (const float*) INPUT_R, samples * sizeof(float));
	    memcpy(in_i, (const float*) INPUT_I, samples * sizeof(float));

		for(int sample_num = 0; sample_num < samples; sample_num++){
			for(int i = num_taps - 1; i > 0; i--){
				shift_reg_r[i] = shift_reg_r[i-1];
				shift_reg_i[i] = shift_reg_i[i-1];
			}

			shift_reg_r[0] = in_r[sample_num];
			shift_reg_i[0] = in_i[sample_num];

			LFILTER_TYPE real = 0;
			LFILTER_TYPE imag = 0;
			for(int i = num_taps - 1; i >= 0; i--){
				real += b[i]*shift_reg_r[i];
				imag += b[i]*shift_reg_i[i];
			}

			OUTPUT_R.write(real);
			OUTPUT_I.write(imag);
		}
	}
	else{
		const int num_taps = 54;
		const float b[num_taps] =   {-0.00057098, -0.00022201,  0.0002486 ,  0.00079229,  0.00129681,
								0.00157633,  0.00141003,  0.00063018, -0.00076622, -0.00252994,
							   -0.00414857, -0.0049459 , -0.00428825, -0.00184781,  0.00216364,
								0.00688941,  0.01092662,  0.01264875,  0.01069752,  0.00451942,
							   -0.00521788, -0.01648693, -0.02613759, -0.03050801, -0.02629528,
							   -0.01147865,  0.01395219,  0.04768449,  0.08531217,  0.12109753,
								0.14911115,  0.16448689,  0.16448689,  0.14911115,  0.12109753,
								0.08531217,  0.04768449,  0.01395219, -0.01147865, -0.02629528,
							   -0.03050801, -0.02613759, -0.01648693, -0.00521788,  0.00451942,
								0.01069752,  0.01264875,  0.01092662,  0.00688941,  0.00216364,
							   -0.00184781, -0.00428825, -0.0049459 , -0.00414857};

		static LFILTER_TYPE shift_reg_r[num_taps], shift_reg_i[num_taps];

	#pragma HLS ARRAY_PARTITION variable=shift_reg_r type=cyclic factor=18
	#pragma HLS ARRAY_PARTITION variable=shift_reg_i type=cyclic factor=18

		float in_r[samples];
		float in_i[samples];
	    memcpy(in_r, (const float*) INPUT_R, samples * sizeof(float));
	    memcpy(in_i, (const float*) INPUT_I, samples * sizeof(float));

	OUTER_LOOP:
		for(int sample_num = 0; sample_num < samples; sample_num++){
	SHIFT_REG_LOOP:
			for(int i = num_taps - 1; i > 0; i--){
	#pragma HLS UNROLL factor=18
				shift_reg_r[i] = shift_reg_r[i-1];
				shift_reg_i[i] = shift_reg_i[i-1];
			}

			shift_reg_r[0] = in_r[sample_num];
			shift_reg_i[0] = in_i[sample_num];

			LFILTER_TYPE real = 0;
			LFILTER_TYPE imag = 0;
	MAC_LOOP:
			for(int i = num_taps - 1; i >= 0; i--){
				real += b[i]*shift_reg_r[i];
				imag += b[i]*shift_reg_i[i];
			}

			OUTPUT_R.write(real);
			OUTPUT_I.write(imag);
		}
	}
}

void lfilter2(hls::stream<DISCRIM_TYPE, STREAM_DEPTH> &INPUT, hls::stream<LFILTER_TYPE, STREAM_DEPTH> &OUTPUT, const int samples){
	static LFILTER_TYPE shift_reg[64];
	float b[64] = {-0.00036654, -0.00013417,  0.00015024,  0.00050861,  0.0009492 ,
			        0.00145387,  0.00196926,  0.0024045 ,  0.00263739,  0.00252959,
			        0.00194958,  0.00080089, -0.00094856, -0.00324077, -0.00591034,
			       -0.00867995, -0.01117124, -0.01293192, -0.01347777, -0.01234556,
			       -0.00915132, -0.00364692,  0.00423247,  0.01433693,  0.0262916 ,
			        0.0395107 ,  0.05323597,  0.06659648,  0.07868416,  0.08863713,
			        0.09572185,  0.09940465,  0.09940465,  0.09572185,  0.08863713,
			        0.07868416,  0.06659648,  0.05323597,  0.0395107 ,  0.0262916 ,
			        0.01433693,  0.00423247, -0.00364692, -0.00915132, -0.01234556,
			       -0.01347777, -0.01293192, -0.01117124, -0.00867995, -0.00591034,
			       -0.00324077, -0.00094856,  0.00080089,  0.00194958,  0.00252959,
			        0.00263739,  0.0024045 ,  0.00196926,  0.00145387,  0.0009492 ,
			        0.00050861,  0.00015024, -0.00013417, -0.00036654};

#pragma HLS ARRAY_PARTITION variable=shift_reg type=cyclic factor=2

	for(int sample_num = 0; sample_num < samples/10; sample_num++){
		for(int i = 64 - 1; i > 0; i--){
#pragma HLS UNROLL factor=2
			shift_reg[i] = shift_reg[i-1];
		}
		shift_reg[0] = INPUT.read();

		LFILTER_TYPE y = 0;
		for(int i = 64 - 1; i >= 0; i--){
			y += b[i]*shift_reg[i];
		}

		OUTPUT.write(y);
	}
}



void downsample10(hls::stream<LFILTER_TYPE, STREAM_DEPTH> &INPUT_R, hls::stream<LFILTER_TYPE, STREAM_DEPTH> &INPUT_I, hls::stream<DOWNSAMPLE_TYPE, STREAM_DEPTH> &OUTPUT_R, hls::stream<DOWNSAMPLE_TYPE, STREAM_DEPTH> &OUTPUT_I, const int samples){
	for(int sample_num = 0; sample_num < samples; sample_num++){
		if(sample_num % 10 == 0){
			OUTPUT_R.write(INPUT_R.read());
			OUTPUT_I.write(INPUT_I.read());
		}
		else{
			INPUT_R.read();
			INPUT_I.read();
		}
	}
}

void downsample5(hls::stream<LFILTER_TYPE, STREAM_DEPTH> &INPUT, float* OUTPUT, const int samples){
	float result[samples/50];
	for(int sample_num = 0; sample_num < samples/10; sample_num++){
		if(sample_num % 5 == 0){
			result[sample_num/5] = INPUT.read();;
		}
		else{
			INPUT.read();
		}
	}
    memcpy(OUTPUT, (const float*) result, samples * sizeof(float) / 50);
}


