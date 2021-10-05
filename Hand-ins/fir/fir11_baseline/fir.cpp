/*
	Filename: fir.cpp
		FIR lab wirtten for WES/CSE237C class at UCSD.

	INPUT:
		x: signal (chirp)

	OUTPUT:
		y: filtered output

*/

#include "fir.h"

void fir (data_t *y, data_t x){
	coef_t c[N] = {53, 0, -91, 0, 313, 500, 313, 0, -91, 0,53};
	// Write your code here
	static int shift_reg[N];
	int sum = 0;

	for(int i = N-1; i > 0; i--){
		shift_reg[i] = shift_reg[i-1];
		sum += shift_reg[i]*c[i];
	}
	shift_reg[0] = x;
	sum += x*c[0];

	*y = sum;
}


