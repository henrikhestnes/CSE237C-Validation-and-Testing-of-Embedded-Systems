#include<math.h>
#include "dft.h"
#include"coefficients1024.h"


void dft(DTYPE* INPUT_R, DTYPE* INPUT_I, DTYPE* OUTPUT_R, DTYPE* OUTPUT_I){
#pragma HLS INTERFACE s_axilite port=return bundle=CTRL
#pragma HLS INTERFACE axis depth=1024 port=INPUT_R register_mode=both
#pragma HLS INTERFACE axis depth=1024 port=INPUT_I register_mode=both
#pragma HLS INTERFACE axis depth=1024 port=OUTPUT_R register_mode=both
#pragma HLS INTERFACE axis depth=1024 port=OUTPUT_I register_mode=both

	DTYPE INTERNAL_R[SIZE];
	DTYPE INTERNAL_I[SIZE];
	DTYPE INTERNAL_R_OUT[SIZE];
	DTYPE INTERNAL_I_OUT[SIZE];

	for(int i = 0; i < SIZE; i++){
		INTERNAL_R[i] = *INPUT_R++;
		INTERNAL_I[i] = *INPUT_I++;
	}

	for(int i = 0; i < SIZE; i++){
		float temp_i = 0;
		float temp_r = 0;

		for(int j = 0; j < SIZE; j++){
			float c = cos_coefficients_table[i*j%SIZE];
			float s = sin_coefficients_table[i*j%SIZE];

			temp_r += static_cast<float>(INTERNAL_R[j].data)*c - static_cast<float>(INTERNAL_I[j].data)*s;
			temp_i += static_cast<float>(INTERNAL_R[j].data)*s + static_cast<float>(INTERNAL_I[j].data)*c;
		}

		ap_uint<1> last = (i + 1 == SIZE) ? 1 : 0;
		DTYPE R, I;

		R.data = reinterpret_cast<int&>(temp_r);
		R.last = (i + 1 == SIZE) ? static_cast<ap_uint<1>>(1) : static_cast<ap_uint<1>>(0);
		I.data = reinterpret_cast<int&>(temp_i);
		I.last = (i + 1 == SIZE) ? static_cast<ap_uint<1>>(1) : static_cast<ap_uint<1>>(0);

		*OUTPUT_R++ = R;
		*OUTPUT_I++ = I;
	}
}
