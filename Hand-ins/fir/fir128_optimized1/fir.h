/*
	Filename: fir.h
		Header file
		FIR lab wirtten for WES/CSE237C class at UCSD.

*/
#ifndef FIR_H_
#define FIR_H_

#include "ap_int.h"

constexpr int N=128;

typedef ap_int<5> coef_t;
typedef int	data_t;
typedef int	acc_t;

void fir (
  data_t *y,
  data_t x
  );

#endif
