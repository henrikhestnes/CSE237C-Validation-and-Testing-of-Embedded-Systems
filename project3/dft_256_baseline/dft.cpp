#include<math.h>
#include "dft.h"
#include"coefficients256.h"

void dft(DTYPE real_sample[SIZE], DTYPE imag_sample[SIZE])
{
	//Write your code here
	DTYPE real_temp[SIZE];
	DTYPE imag_temp[SIZE];

	FOR1OUTER:
	for(int i = 0; i < SIZE; i++){
#pragma HLS PIPELINE off
		real_temp[i] = 0;
		imag_temp[i] = 0;

		DTYPE w = 2 * M_PI * i/SIZE;

		FOR1NESTED:
		for(int j = 0; j < SIZE; j++){
#pragma HLS PIPELINE off
			DTYPE c = cos(j*w);
			DTYPE s = -sin(j*w);

			real_temp[i] += real_sample[j]*c - imag_sample[j]*s;
			imag_temp[i] += real_sample[j]*s + imag_sample[j]*c;
		}
	}
	FOR2:
	for(int i = 0; i < SIZE; i++){
#pragma HLS PIPELINE off
		real_sample[i] = real_temp[i];
		imag_sample[i] = imag_temp[i];
	}
}
