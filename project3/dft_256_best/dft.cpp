#include<math.h>
#include "dft.h"
#include"coefficients256.h"

constexpr int FAC = 2;

void dft(DTYPE INPUT_R[SIZE], DTYPE INPUT_I[SIZE], DTYPE OUTPUT_R[SIZE], DTYPE OUTPUT_I[SIZE]){
	//Write your code here

#pragma HLS ARRAY_PARTITION variable=INPUT_R type=cyclic factor=FAC
#pragma HLS ARRAY_PARTITION variable=INPUT_I type=cyclic factor=FAC
#pragma HLS ARRAY_PARTITION variable=OUTPUT_R type=cyclic factor=FAC
#pragma HLS ARRAY_PARTITION variable=OUTPUT_I type=cyclic factor=FAC

	FOR1OUTER:
	for(int i = 0; i < SIZE; i++){
		OUTPUT_R[i] = 0;
		OUTPUT_I[i] = 0;

		FOR1NESTED:
		for(int j = 0; j < SIZE; j++){
			DTYPE c = cos_coefficients_table[i*j%SIZE];
			DTYPE s = sin_coefficients_table[i*j%SIZE];

			OUTPUT_R[i] += INPUT_R[j]*c - INPUT_I[j]*s;
			OUTPUT_I[i] += INPUT_R[j]*s + INPUT_I[j]*c;
		}
	}
}
