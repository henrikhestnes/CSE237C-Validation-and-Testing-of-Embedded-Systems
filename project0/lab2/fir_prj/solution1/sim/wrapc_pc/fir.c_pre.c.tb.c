// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================
# 1 "/home/henrikhestnes/Documents/CSE237C_Embedded/ug871-design-files/Introduction/lab2/fir.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 348 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/henrikhestnes/Documents/CSE237C_Embedded/ug871-design-files/Introduction/lab2/fir.c" 2
# 46 "/home/henrikhestnes/Documents/CSE237C_Embedded/ug871-design-files/Introduction/lab2/fir.c"
# 1 "/home/henrikhestnes/Documents/CSE237C_Embedded/ug871-design-files/Introduction/lab2/fir.h" 1
# 50 "/home/henrikhestnes/Documents/CSE237C_Embedded/ug871-design-files/Introduction/lab2/fir.h"
typedef int coef_t;
typedef int data_t;
typedef int acc_t;

void fir (
  data_t *y,
  coef_t c[11 +1],
  data_t x
  );
# 47 "/home/henrikhestnes/Documents/CSE237C_Embedded/ug871-design-files/Introduction/lab2/fir.c" 2

void fir (
  data_t *y,
  coef_t c[11],
  data_t x
  ) {

  static data_t shift_reg[11];
  acc_t acc;
  data_t data;
  int i;

  acc=0;
  Shift_Accum_Loop: for (i=11 -1;i>=0;i--) {
  if (i==0) {
   shift_reg[0]=x;
      data = x;
    } else {
   shift_reg[i]=shift_reg[i-1];
   data = shift_reg[i];
    }
    acc+=data*c[i];;
  }
  *y=acc;
}
#ifndef HLS_FASTSIM
#ifdef __cplusplus
extern "C"
#endif
void apatb_fir_ir(int *, int *, int);
#ifdef __cplusplus
extern "C"
#endif
void fir_hw_stub(int *y, int *c, int x){
fir(y, c, x);
return ;
}
#ifdef __cplusplus
extern "C"
#endif
void apatb_fir_sw(int *y, int *c, int x){
apatb_fir_ir(y, c, x);
return ;
}
#endif
# 71 "/home/henrikhestnes/Documents/CSE237C_Embedded/ug871-design-files/Introduction/lab2/fir.c"

