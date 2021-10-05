# 1 "/home/henrikhestnes/Documents/CSE-237C-Validation-and-Testing-of-Embedded-Systems/project1/fir128/fir.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/henrikhestnes/Documents/CSE-237C-Validation-and-Testing-of-Embedded-Systems/project1/fir128/fir.cpp"
# 13 "/home/henrikhestnes/Documents/CSE-237C-Validation-and-Testing-of-Embedded-Systems/project1/fir128/fir.cpp"
# 1 "/home/henrikhestnes/Documents/CSE-237C-Validation-and-Testing-of-Embedded-Systems/project1/fir128/fir.h" 1
# 10 "/home/henrikhestnes/Documents/CSE-237C-Validation-and-Testing-of-Embedded-Systems/project1/fir128/fir.h"
const int N=128;

typedef int coef_t;
typedef int data_t;


void fir (
  data_t *y,
  data_t x
  );
# 14 "/home/henrikhestnes/Documents/CSE-237C-Validation-and-Testing-of-Embedded-Systems/project1/fir128/fir.cpp" 2

void fir (
  data_t *y,
  data_t x
  )
{

 coef_t c[N] = {10, 11, 11, 8, 3, -3, -8, -11, -11, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -11, -11, -8, -3, 3, 8, 11, 11, 10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 8, 3, -3, -8, -11, -11, -10, -10, -10, -10, -10, -10, -10, -10, -11, -11, -8, -3, 3, 8, 11, 11, 10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 8, 3, -3, -8, -11, -11, -10, -10, -10, -10, -10, -10, -10, -10, -11, -11, -8, -3, 3, 8, 11, 11, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};


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
