// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int uint32_t ;

/* Variables and functions */

void decompress_420(
		const uint8_t *const input[], const uint32_t in_linesize[],
		uint32_t start_y, uint32_t end_y,
		uint8_t *output, uint32_t out_linesize)
{
	uint32_t start_y_d2 = start_y/2;
	uint32_t width_d2   = in_linesize[0]/2;
	uint32_t height_d2  = end_y/2;
	uint32_t y;

	for (y = start_y_d2; y < height_d2; y++) {
		const uint8_t *chroma0 = input[1] + y * in_linesize[1];
		const uint8_t *chroma1 = input[2] + y * in_linesize[2];
		register const uint8_t *lum0, *lum1;
		register uint32_t *output0, *output1;
		uint32_t x;

		lum0 = input[0] + y * 2 * in_linesize[0];
		lum1 = lum0 + in_linesize[0];
		output0 = (uint32_t*)(output + y * 2 * out_linesize);
		output1 = (uint32_t*)((uint8_t*)output0 + out_linesize);

		for (x = 0; x < width_d2; x++) {
			uint32_t out;
			out = (*(chroma0++) << 8) | *(chroma1++);

			*(output0++) = (*(lum0++) << 16) | out;
			*(output0++) = (*(lum0++) << 16) | out;

			*(output1++) = (*(lum1++) << 16) | out;
			*(output1++) = (*(lum1++) << 16) | out;
		}
	}
}


// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int start_y = 100;
          int end_y = 100;
          int out_linesize = 100;
          int _len_input0 = 1;
          const int *const* input = (const int *const*) malloc(_len_input0*sizeof(const int const*));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            int _len_input1 = 1;
            input[_i0] = (const int const*) malloc(_len_input1*sizeof(const int const));
            for(int _i1 = 0; _i1 < _len_input1; _i1++) {
              input[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_in_linesize0 = 1;
          int const* in_linesize = (int const*) malloc(_len_in_linesize0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_in_linesize0; _i0++) {
            in_linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_output0 = 1;
          int * output = (int *) malloc(_len_output0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          decompress_420(input,in_linesize,start_y,end_y,output,out_linesize);
          for(int i1 = 0; i1 < _len_input0; i1++) {
            int _len_input1 = 1;
              free(input[i1]);
          }
          free(input);
          free(in_linesize);
          free(output);
        
        break;
    }
    // big-arr
    case 1:
    {
          int start_y = 255;
          int end_y = 255;
          int out_linesize = 255;
          int _len_input0 = 65025;
          const int *const* input = (const int *const*) malloc(_len_input0*sizeof(const int const*));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            int _len_input1 = 1;
            input[_i0] = (const int const*) malloc(_len_input1*sizeof(const int const));
            for(int _i1 = 0; _i1 < _len_input1; _i1++) {
              input[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_in_linesize0 = 65025;
          int const* in_linesize = (int const*) malloc(_len_in_linesize0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_in_linesize0; _i0++) {
            in_linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_output0 = 65025;
          int * output = (int *) malloc(_len_output0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          decompress_420(input,in_linesize,start_y,end_y,output,out_linesize);
          for(int i1 = 0; i1 < _len_input0; i1++) {
            int _len_input1 = 1;
              free(input[i1]);
          }
          free(input);
          free(in_linesize);
          free(output);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int start_y = 10;
          int end_y = 10;
          int out_linesize = 10;
          int _len_input0 = 100;
          const int *const* input = (const int *const*) malloc(_len_input0*sizeof(const int const*));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            int _len_input1 = 1;
            input[_i0] = (const int const*) malloc(_len_input1*sizeof(const int const));
            for(int _i1 = 0; _i1 < _len_input1; _i1++) {
              input[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_in_linesize0 = 100;
          int const* in_linesize = (int const*) malloc(_len_in_linesize0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_in_linesize0; _i0++) {
            in_linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_output0 = 100;
          int * output = (int *) malloc(_len_output0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          decompress_420(input,in_linesize,start_y,end_y,output,out_linesize);
          for(int i1 = 0; i1 < _len_input0; i1++) {
            int _len_input1 = 1;
              free(input[i1]);
          }
          free(input);
          free(in_linesize);
          free(output);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
