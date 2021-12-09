#include <hls_stream.h>

typedef float DTYPE;
#define SIZE 256 		/* SIZE OF DFT */
//void dft(DTYPE XX_R[SIZE], DTYPE XX_I[SIZE]);

void dft(hls::stream<DTYPE, SIZE> &INPUT_R, hls::stream<DTYPE, SIZE> &INPUT_I, hls::stream<DTYPE, SIZE> &OUTPUT_R, hls::stream<DTYPE, SIZE> &OUTPUT_I);

