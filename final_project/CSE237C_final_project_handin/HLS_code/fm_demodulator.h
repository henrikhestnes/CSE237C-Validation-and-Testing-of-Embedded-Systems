#ifndef FM_DEMODULATOR_H
#define FM_DEMODULATOR_H

#include <hls_stream.h>
#include <ap_axi_sdata.h>
#include "ap_int.h"

#define DO_TESTING 1  // 1 for C Simulation testing, 0 for C Synthesis and export

#if DO_TESTING
	#define SAMPLES 1000
#else
	#define SAMPLES 32000
#endif

#define STREAM_DEPTH			1000

typedef float FM_TYPE;
typedef float DOWNSAMPLE_TYPE;
typedef float LFILTER_TYPE;
typedef float DISCRIM_TYPE;

void fm_demodulator(float* INPUT_R, float* INPUT_I, float* OUTPUT);

void discriminant(hls::stream<DISCRIM_TYPE, STREAM_DEPTH> &INPUT_R, hls::stream<DISCRIM_TYPE, STREAM_DEPTH> &INPUT_I, hls::stream<DISCRIM_TYPE, STREAM_DEPTH> &OUTPUT, const int samples=1000);

void lfilter1(float* INPUT_R, float* INPUT_I, hls::stream<LFILTER_TYPE, STREAM_DEPTH> &OUTPUT_R, hls::stream<LFILTER_TYPE, STREAM_DEPTH> &OUTPUT_I, const int samples=1000);

void lfilter2(hls::stream<LFILTER_TYPE, STREAM_DEPTH> &INPUT, hls::stream<LFILTER_TYPE, STREAM_DEPTH> &OUTPUT, const int samples=1000);

void downsample10(hls::stream<DOWNSAMPLE_TYPE, STREAM_DEPTH> &INPUT_R, hls::stream<DOWNSAMPLE_TYPE, STREAM_DEPTH> &INPUT_I, hls::stream<DOWNSAMPLE_TYPE, STREAM_DEPTH> &OUTPUT_R, hls::stream<DOWNSAMPLE_TYPE, STREAM_DEPTH> &OUTPUT_I, const int samples=1000);

void downsample5(hls::stream<DOWNSAMPLE_TYPE, STREAM_DEPTH> &INPUT, float* OUTPUT, const int samples=1000);


#endif //FM_DEMODULATOR_H
