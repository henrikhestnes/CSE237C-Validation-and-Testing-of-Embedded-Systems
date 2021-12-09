#include <ap_int.h>
#include "ap_axi_sdata.h"

/*					Sample structure for streaming. You can use this for the demo.
struct DTYPE
{
	float data;
	ap_uint<1> last;
};
*/

typedef ap_axiu<64, 1, 1, 1> DTYPE;

//typedef float DTYPE;
#define SIZE 1024 		/* SIZE OF DFT */
//void dft(DTYPE real_sample[SIZE], DTYPE imag_sample[SIZE],DTYPE real_op[SIZE], DTYPE imag_op[SIZE]);
void dft(DTYPE *, DTYPE *,DTYPE *, DTYPE *);// use this for doing the demo//
