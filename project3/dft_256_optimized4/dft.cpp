//#include<math.h>
#include "dft.h"
#include"coefficients256.h"
#include<iostream>


constexpr int FAC = 2;

void dft(hls::stream<DTYPE, SIZE> &INPUT_R, hls::stream<DTYPE, SIZE> &INPUT_I, hls::stream<DTYPE, SIZE> &OUTPUT_R, hls::stream<DTYPE, SIZE> &OUTPUT_I){
	//Write your code here

#pragma HLS INTERFACE mode=s_axilite port=return bundle=CTRL
//#pragma HLS INTERFACE mode=axis depth=256 port=INPUT_R
//#pragma HLS INTERFACE mode=axis depth=256 port=INPUT_I
//#pragma HLS INTERFACE mode=axis depth=256 port=OUTPUT_R
//#pragma HLS INTERFACE mode=axis depth=256 port=OUTPUT_I
#pragma HLS STREAM variable=INPUT_R type=fifo depth=256
#pragma HLS STREAM variable=INPUT_I type=fifo depth=256
#pragma HLS STREAM variable=OUTPUT_R type=fifo depth=256
#pragma HLS STREAM variable=OUTPUT_I type=fifo depth=256

	DTYPE INTERNAL_R[SIZE], INTERNAL_I[SIZE];
	for(int i = 0; i < SIZE; i++){
		if(INPUT_R.empty() || INPUT_I.empty()){
			printf("attempted read on empty stream");
		}
		else{
			INTERNAL_R[i] = INPUT_R.read();
			INTERNAL_I[i] = INPUT_I.read();
		}
	}

	FOR1OUTER:
	for(int i = 0; i < SIZE; i++){
#pragma HLS PIPELINE off
		DTYPE temp_r = 0;
		DTYPE temp_i = 0;

		FOR1NESTED:
		for(int j = 0; j < SIZE; j++){
#pragma HLS PIPELINE off
			DTYPE c = cos_coefficients_table[i*j%SIZE];
			DTYPE s = sin_coefficients_table[i*j%SIZE];

			temp_r += INTERNAL_R[j]*c - INTERNAL_I[j]*s;
			temp_i += INTERNAL_R[j]*s + INTERNAL_I[j]*c;
		}
		if(OUTPUT_R.full() || OUTPUT_I.full()){
			printf("attempted Write on full stream");
		}
		else{
			OUTPUT_R << temp_r;
			OUTPUT_I << temp_i;
		}
	}
}
