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
typedef  int ptrdiff_t ;

/* Variables and functions */

__attribute__((used)) static void lbr_bank_c(float output[32][4], float **input,
                       const float *coeff, ptrdiff_t ofs, ptrdiff_t len)
{
    float SW0 = coeff[0];
    float SW1 = coeff[1];
    float SW2 = coeff[2];
    float SW3 = coeff[3];

    float C1  = coeff[4];
    float C2  = coeff[5];
    float C3  = coeff[6];
    float C4  = coeff[7];

    float AL1 = coeff[8];
    float AL2 = coeff[9];

    int i;

    // Short window and 8 point forward MDCT
    for (i = 0; i < len; i++) {
        float *src = input[i] + ofs;

        float a = src[-4] * SW0 - src[-1] * SW3;
        float b = src[-3] * SW1 - src[-2] * SW2;
        float c = src[ 2] * SW1 + src[ 1] * SW2;
        float d = src[ 3] * SW0 + src[ 0] * SW3;

        output[i][0] = C1 * b - C2 * c + C4 * a - C3 * d;
        output[i][1] = C1 * d - C2 * a - C4 * b - C3 * c;
        output[i][2] = C3 * b + C2 * d - C4 * c + C1 * a;
        output[i][3] = C3 * a - C2 * b + C4 * d - C1 * c;
    }

    // Aliasing cancellation for high frequencies
    for (i = 12; i < len - 1; i++) {
        float a = output[i  ][3] * AL1;
        float b = output[i+1][0] * AL1;
        output[i  ][3] += b - a;
        output[i+1][0] -= b + a;
        a = output[i  ][2] * AL2;
        b = output[i+1][1] * AL2;
        output[i  ][2] += b - a;
        output[i+1][1] -= b + a;
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
          int ofs = 100;
          int len = 100;
          int _len_output0 = 32;
          float ** output = (float **) malloc(_len_output0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            int _len_output1 = 4;
            output[_i0] = (float *) malloc(_len_output1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_output1; _i1++) {
              output[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_input0 = 1;
          float ** input = (float **) malloc(_len_input0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            int _len_input1 = 1;
            input[_i0] = (float *) malloc(_len_input1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_input1; _i1++) {
              input[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_coeff0 = 1;
          const float * coeff = (const float *) malloc(_len_coeff0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_coeff0; _i0++) {
            coeff[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          lbr_bank_c(output,input,coeff,ofs,len);
          for(int i1 = 0; i1 < _len_output0; i1++) {
            int _len_output1 = 4;
              free(output[i1]);
          }
          free(output);
          for(int i1 = 0; i1 < _len_input0; i1++) {
            int _len_input1 = 1;
              free(input[i1]);
          }
          free(input);
          free(coeff);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ofs = 255;
          int len = 255;
          int _len_output0 = 65025;
          float ** output = (float **) malloc(_len_output0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            int _len_output1 = 4;
            output[_i0] = (float *) malloc(_len_output1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_output1; _i1++) {
              output[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_input0 = 65025;
          float ** input = (float **) malloc(_len_input0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            int _len_input1 = 1;
            input[_i0] = (float *) malloc(_len_input1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_input1; _i1++) {
              input[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_coeff0 = 65025;
          const float * coeff = (const float *) malloc(_len_coeff0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_coeff0; _i0++) {
            coeff[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          lbr_bank_c(output,input,coeff,ofs,len);
          for(int i1 = 0; i1 < _len_output0; i1++) {
            int _len_output1 = 4;
              free(output[i1]);
          }
          free(output);
          for(int i1 = 0; i1 < _len_input0; i1++) {
            int _len_input1 = 1;
              free(input[i1]);
          }
          free(input);
          free(coeff);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ofs = 10;
          int len = 10;
          int _len_output0 = 100;
          float ** output = (float **) malloc(_len_output0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            int _len_output1 = 4;
            output[_i0] = (float *) malloc(_len_output1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_output1; _i1++) {
              output[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_input0 = 100;
          float ** input = (float **) malloc(_len_input0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            int _len_input1 = 1;
            input[_i0] = (float *) malloc(_len_input1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_input1; _i1++) {
              input[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_coeff0 = 100;
          const float * coeff = (const float *) malloc(_len_coeff0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_coeff0; _i0++) {
            coeff[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          lbr_bank_c(output,input,coeff,ofs,len);
          for(int i1 = 0; i1 < _len_output0; i1++) {
            int _len_output1 = 4;
              free(output[i1]);
          }
          free(output);
          for(int i1 = 0; i1 < _len_input0; i1++) {
            int _len_input1 = 1;
              free(input[i1]);
          }
          free(input);
          free(coeff);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
