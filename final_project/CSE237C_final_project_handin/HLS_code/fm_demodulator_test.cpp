#include "fm_demodulator.h"
#include "samples.h"
#include <hls_stream.h>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define TEST_FUNCTIONS_SEPARATE 0

void test_demodulation(){
	float out[20];

	fm_demodulator(sample_r, sample_i, out);

	float true_value[20] = {0.00000000e+00,  7.31321570e-05,  1.84203970e-03,  8.73632022e-03,
							6.08203465e-03, -6.32316208e-02, -3.06307221e-02,  4.06914636e-01,
							8.38432094e-01,  5.08956915e-01, -9.91108533e-02, -5.66018052e-02,
							1.84439153e-01, -7.49240331e-02, -2.48235409e-01,  9.82173158e-02,
							2.56085741e-01, -5.81916335e-02, -1.55167605e-01,  9.96252618e-02};

	float mae = 0;
	for(int i = 0; i < 20; i++){
		mae += (true_value[i] - out[i])*(true_value[i] - out[i]);
	}

	float treshold = 1e-12;
	if(mae/20 > treshold){
		std::cout << "ERROR: MAE too high" << std::endl;
	}
	else{
		std::cout << "PASS: ";
	}
	std::cout << "MAE: " << mae/20 << std::endl;
}

void test_discrim(){
	hls::stream<DOWNSAMPLE_TYPE, STREAM_DEPTH> in_r, in_i;
	hls::stream<DISCRIM_TYPE, STREAM_DEPTH> out;

	for(int i = 0; i < 1000; i++){
		in_r.write(sample_r[i]);
		in_i.write(sample_i[i]);
	}

	discriminant(in_r, in_i, out, 10000);

	float mae = 0;
	for(int i = 0; i < 1000; i++){
		float R = out.read();
		mae += (true_discrim[i] - R)*(true_discrim[i] - R);
	}
	float treshold = 1e-12;
	if(mae/1000 > treshold){
		std::cout << "ERROR: MAE too high" << std::endl;
	}
	else{
		std::cout << "PASS: ";
	}
	std::cout << "MAE: " << mae/1000 << std::endl;
}

void test_lfilter1(){
	hls::stream<LFILTER_TYPE, STREAM_DEPTH> out_r, out_i;

	lfilter1(sample_r, sample_i, out_r, out_i);

	float mae_r = 0;
	float mae_i = 0;
	for(int i = 0; i < 1000; i++){
		float R = out_r.read();
		float I = out_i.read();
		mae_r += (true_lfilter1_r[i] - R)*(true_lfilter1_r[i] - R);
		mae_i += (true_lfilter1_i[i] - I)*(true_lfilter1_i[i] - I);
	}
	float treshold = 1e-12;
	if(mae_r/1000 > treshold){
		std::cout << "ERROR: MAE_R too high" << std::endl;
	}
	else{
		std::cout << "PASS: ";
	}
	std::cout << "MAE_R: " << mae_r/1000 << std::endl;
	if(mae_i/1000 > treshold){
		std::cout << "ERROR: MAE_I too high" << std::endl;
	}
	else{
		std::cout << "PASS: ";
	}
	std::cout << "MAE_I: " << mae_i/1000 << std::endl;
}

void test_lfilter2(){
	hls::stream<DISCRIM_TYPE, STREAM_DEPTH> in;
	hls::stream<LFILTER_TYPE, STREAM_DEPTH> out;

	for(int i = 0; i < 1000; i++){
		in.write(sample_r[i]);
	}

	lfilter2(in, out, 10000);

	float mae = 0;
	for(int i = 0; i < 1000; i++){
		float R = out.read();
		mae += (true_lfilter2[i] - R)*(true_lfilter2[i] - R);
	}
	float treshold = 1e-12;
	if(mae/1000 > treshold){
		std::cout << "ERROR: MAE too high" << std::endl;
	}
	else{
		std::cout << "PASS: ";
	}
	std::cout << "MAE: " << mae/1000 << std::endl;
}



constexpr int SIZE = 1000;
void test_downsample(){
	// First downsampling of factor 10
	hls::stream<LFILTER_TYPE, STREAM_DEPTH> in_r, in_i;
	for(int i = 0; i < 1000; i++){
		in_r.write(sample_r[i]);
		in_i.write(sample_i[i]);
	}

	hls::stream<DOWNSAMPLE_TYPE, STREAM_DEPTH> out_r, out_i;

	downsample10(in_r, in_i, out_r, out_i);

	float output_array_r[100];
	float output_array_i[100];
	for(int i = 0; i < 100; i++){
		output_array_r[i] = out_r.read();
		output_array_i[i] = out_i.read();
	}

	float mae = 0;
	float treshold = 1e-6;
	for(int i = 0; i < 100; i++){
		mae += abs(output_array_r[i] - true_downsample10_r[i]);
		mae += abs(output_array_i[i] - true_downsample10_i[i]);
	}

	mae = mae/1000;
	if(mae  < treshold){
		std::cout << "PASS: DOWNSAMPLING FACTOR 10 WORKS LIKE A CHARM :)" << " MAE: " << mae << std::endl;
	}
	else{
		std::cout << "ERROR: too high MAE: " << mae << std::endl;
	}

	// Second downsampling of factor 5
	hls::stream<LFILTER_TYPE, STREAM_DEPTH> in;
	float out[200];
	for(int i = 0; i < 1000; i++){
		if(in.full()){
			std::cout << "ATTEMPTED WRITE ON FULL STREAM" << std::endl;
		}
		else{
			in.write(sample_r[i]);
		}
	}

	downsample5(in, out, 10000);

	mae = 0;
	for(int i = 0; i < 200; i++){
		mae += abs(out[i] - true_downsample5[i]);
	}

	mae = mae/1000;
	if(mae  < treshold){
		std::cout << "PASS: DOWNSAMPLING FACTOR 5 WORKS LIKE A CHARM :)" << " MAE: " << mae << std::endl;
	}
	else{
		std::cout << "ERROR: too high MAE: " << mae << std::endl;
	}

}




int main(){
	if(TEST_FUNCTIONS_SEPARATE){
		std::cout << "***TESTING DOWNSAMPLING***" << std::endl;
		test_downsample();

		std::cout << "\n***TESTING LFILTER1***" << std::endl;
		std::cout << "LFILTER1" << std::endl;
		test_lfilter1();
		std::cout << "LFILTER2" << std::endl;
		test_lfilter2();

		std::cout << "\n***TESTING DISCRIM***" << std::endl;
		test_discrim();
	}
	else{
		std::cout << "\n***TESTING ALL TOGETHER***" << std::endl;
		test_demodulation();
	}
	return 0;
}
