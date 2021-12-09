#include<math.h>
#include "dft.h"
#include"coefficients256.h"

void dft(DTYPE INPUT_R[SIZE], DTYPE INPUT_I[SIZE], DTYPE OUTPUT_R[SIZE], DTYPE OUTPUT_I[SIZE]){
	//Write your code here

	FOR1OUTER:
	for(int i = 0; i < SIZE; i++){
#pragma HLS PIPELINE off
		OUTPUT_R[i] = 0;
		OUTPUT_I[i] = 0;

		FOR1NESTED:
		for(int j = 0; j < SIZE; j++){
#pragma HLS PIPELINE off
			DTYPE c = cos_coefficients_table[i*j%SIZE];
			DTYPE s = sin_coefficients_table[i*j%SIZE];

			OUTPUT_R[i] += INPUT_R[j]*c - INPUT_I[j]*s;
			OUTPUT_I[i] += INPUT_R[j]*s + INPUT_I[j]*c;
		}
	}
}
