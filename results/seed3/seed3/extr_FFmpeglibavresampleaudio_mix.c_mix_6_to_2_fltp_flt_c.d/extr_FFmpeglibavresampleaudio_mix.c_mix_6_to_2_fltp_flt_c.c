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

/* Variables and functions */

__attribute__((used)) static void mix_6_to_2_fltp_flt_c(float **samples, float **matrix, int len,
                                  int out_ch, int in_ch)
{
    float v0, v1;
    float *src0 = samples[0];
    float *src1 = samples[1];
    float *src2 = samples[2];
    float *src3 = samples[3];
    float *src4 = samples[4];
    float *src5 = samples[5];
    float *dst0 = src0;
    float *dst1 = src1;
    float *m0   = matrix[0];
    float *m1   = matrix[1];

    while (len > 0) {
        v0 = *src0++;
        v1 = *src1++;
        *dst0++ = v0      * m0[0] +
                  v1      * m0[1] +
                  *src2   * m0[2] +
                  *src3   * m0[3] +
                  *src4   * m0[4] +
                  *src5   * m0[5];
        *dst1++ = v0      * m1[0] +
                  v1      * m1[1] +
                  *src2++ * m1[2] +
                  *src3++ * m1[3] +
                  *src4++ * m1[4] +
                  *src5++ * m1[5];
        len--;
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
          int len = 100;
          int out_ch = 100;
          int in_ch = 100;
          int _len_samples0 = 1;
          float ** samples = (float **) malloc(_len_samples0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_samples0; _i0++) {
            int _len_samples1 = 1;
            samples[_i0] = (float *) malloc(_len_samples1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_samples1; _i1++) {
              samples[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_matrix0 = 1;
          float ** matrix = (float **) malloc(_len_matrix0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_matrix0; _i0++) {
            int _len_matrix1 = 1;
            matrix[_i0] = (float *) malloc(_len_matrix1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_matrix1; _i1++) {
              matrix[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          mix_6_to_2_fltp_flt_c(samples,matrix,len,out_ch,in_ch);
          for(int i1 = 0; i1 < _len_samples0; i1++) {
            int _len_samples1 = 1;
              free(samples[i1]);
          }
          free(samples);
          for(int i1 = 0; i1 < _len_matrix0; i1++) {
            int _len_matrix1 = 1;
              free(matrix[i1]);
          }
          free(matrix);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int out_ch = 255;
          int in_ch = 255;
          int _len_samples0 = 65025;
          float ** samples = (float **) malloc(_len_samples0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_samples0; _i0++) {
            int _len_samples1 = 1;
            samples[_i0] = (float *) malloc(_len_samples1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_samples1; _i1++) {
              samples[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_matrix0 = 65025;
          float ** matrix = (float **) malloc(_len_matrix0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_matrix0; _i0++) {
            int _len_matrix1 = 1;
            matrix[_i0] = (float *) malloc(_len_matrix1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_matrix1; _i1++) {
              matrix[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          mix_6_to_2_fltp_flt_c(samples,matrix,len,out_ch,in_ch);
          for(int i1 = 0; i1 < _len_samples0; i1++) {
            int _len_samples1 = 1;
              free(samples[i1]);
          }
          free(samples);
          for(int i1 = 0; i1 < _len_matrix0; i1++) {
            int _len_matrix1 = 1;
              free(matrix[i1]);
          }
          free(matrix);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int out_ch = 10;
          int in_ch = 10;
          int _len_samples0 = 100;
          float ** samples = (float **) malloc(_len_samples0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_samples0; _i0++) {
            int _len_samples1 = 1;
            samples[_i0] = (float *) malloc(_len_samples1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_samples1; _i1++) {
              samples[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_matrix0 = 100;
          float ** matrix = (float **) malloc(_len_matrix0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_matrix0; _i0++) {
            int _len_matrix1 = 1;
            matrix[_i0] = (float *) malloc(_len_matrix1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_matrix1; _i1++) {
              matrix[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          mix_6_to_2_fltp_flt_c(samples,matrix,len,out_ch,in_ch);
          for(int i1 = 0; i1 < _len_samples0; i1++) {
            int _len_samples1 = 1;
              free(samples[i1]);
          }
          free(samples);
          for(int i1 = 0; i1 < _len_matrix0; i1++) {
            int _len_matrix1 = 1;
              free(matrix[i1]);
          }
          free(matrix);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
