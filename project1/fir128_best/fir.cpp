/*
	Filename: fir.cpp
		FIR lab wirtten for WES/CSE237C class at UCSD.
		Match filter
	INPUT:
		x: signal (chirp)

	OUTPUT:
		y: filtered output

*/

#include "fir.h"
#include "ap_int.h"


void fir (data_t *y, data_t x){

	coef_t c[N] = {10, 11, 11, 8, 3, -3, -8, -11, -11, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -11, -11, -8, -3, 3, 8, 11, 11, 10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 8, 3, -3, -8, -11, -11, -10, -10, -10, -10, -10, -10, -10, -10, -11, -11, -8, -3, 3, 8, 11, 11, 10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 8, 3, -3, -8, -11, -11, -10, -10, -10, -10, -10, -10, -10, -10, -11, -11, -8, -3, 3, 8, 11, 11, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
#pragma HLS ARRAY_PARTITION variable=c type=block factor=2
#pragma HLS BIND_STORAGE variable=c type=rom_np

	// Write your code here
    static data_t shift_reg[N];
#pragma HLS ARRAY_PARTITION variable=shift_reg type=block factor=4
#pragma HLS BIND_STORAGE variable=shift_reg type=ram_2p impl=bram
    acc_t acc = 0;

    for(int i = N-1; i > 0; i--){
#pragma HLS pipeline II = 1
            shift_reg[i] = shift_reg[i-1];
            acc += shift_reg[i]*c[i];
    }
    shift_reg[0] = x;
    acc += x*c[0];

    *y = acc;
}



