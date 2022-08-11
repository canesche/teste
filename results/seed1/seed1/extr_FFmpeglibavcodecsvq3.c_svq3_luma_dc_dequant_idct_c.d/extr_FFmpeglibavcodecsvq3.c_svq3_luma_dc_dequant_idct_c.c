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
typedef  int uint8_t ;
typedef  int int16_t ;

/* Variables and functions */
 unsigned int* svq3_dequant_coeff ; 

__attribute__((used)) static void svq3_luma_dc_dequant_idct_c(int16_t *output, int16_t *input, int qp)
{
    const unsigned qmul = svq3_dequant_coeff[qp];
#define stride 16
    int i;
    int temp[16];
    static const uint8_t x_offset[4] = { 0, 1 * stride, 4 * stride, 5 * stride };

    for (i = 0; i < 4; i++) {
        const int z0 = 13 * (input[4 * i + 0] +      input[4 * i + 2]);
        const int z1 = 13 * (input[4 * i + 0] -      input[4 * i + 2]);
        const int z2 =  7 *  input[4 * i + 1] - 17 * input[4 * i + 3];
        const int z3 = 17 *  input[4 * i + 1] +  7 * input[4 * i + 3];

        temp[4 * i + 0] = z0 + z3;
        temp[4 * i + 1] = z1 + z2;
        temp[4 * i + 2] = z1 - z2;
        temp[4 * i + 3] = z0 - z3;
    }

    for (i = 0; i < 4; i++) {
        const int offset = x_offset[i];
        const int z0     = 13 * (temp[4 * 0 + i] +      temp[4 * 2 + i]);
        const int z1     = 13 * (temp[4 * 0 + i] -      temp[4 * 2 + i]);
        const int z2     =  7 *  temp[4 * 1 + i] - 17 * temp[4 * 3 + i];
        const int z3     = 17 *  temp[4 * 1 + i] +  7 * temp[4 * 3 + i];

        output[stride *  0 + offset] = (int)((z0 + z3) * qmul + 0x80000) >> 20;
        output[stride *  2 + offset] = (int)((z1 + z2) * qmul + 0x80000) >> 20;
        output[stride *  8 + offset] = (int)((z1 - z2) * qmul + 0x80000) >> 20;
        output[stride * 10 + offset] = (int)((z0 - z3) * qmul + 0x80000) >> 20;
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
          int qp = 100;
          int _len_output0 = 1;
          int * output = (int *) malloc(_len_output0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_input0 = 1;
          int * input = (int *) malloc(_len_input0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          svq3_luma_dc_dequant_idct_c(output,input,qp);
          free(output);
          free(input);
        
        break;
    }
    // big-arr
    case 1:
    {
          int qp = 255;
          int _len_output0 = 65025;
          int * output = (int *) malloc(_len_output0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_input0 = 65025;
          int * input = (int *) malloc(_len_input0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          svq3_luma_dc_dequant_idct_c(output,input,qp);
          free(output);
          free(input);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int qp = 10;
          int _len_output0 = 100;
          int * output = (int *) malloc(_len_output0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_input0 = 100;
          int * input = (int *) malloc(_len_input0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          svq3_luma_dc_dequant_idct_c(output,input,qp);
          free(output);
          free(input);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
