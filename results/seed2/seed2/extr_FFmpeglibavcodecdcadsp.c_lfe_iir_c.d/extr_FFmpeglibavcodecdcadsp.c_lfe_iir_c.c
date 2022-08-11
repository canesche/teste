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

__attribute__((used)) static void lfe_iir_c(float *output, const float *input,
                      const float iir[5][4], float hist[5][2],
                      ptrdiff_t factor)
{
    float res, tmp;
    int i, j, k;

    for (i = 0; i < 64; i++) {
        res = *input++;

        for (j = 0; j < factor; j++) {
            for (k = 0; k < 5; k++) {
                tmp = hist[k][0] * iir[k][0] + hist[k][1] * iir[k][1] + res;
                res = hist[k][0] * iir[k][2] + hist[k][1] * iir[k][3] + tmp;

                hist[k][0] = hist[k][1];
                hist[k][1] = tmp;
            }

            *output++ = res;
            res = 0;
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
          int factor = 100;
          int _len_output0 = 1;
          float * output = (float *) malloc(_len_output0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_input0 = 1;
          const float * input = (const float *) malloc(_len_input0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_iir0 = 5;
          float const** iir = (float const**) malloc(_len_iir0*sizeof(float const*));
          for(int _i0 = 0; _i0 < _len_iir0; _i0++) {
            int _len_iir1 = 4;
            iir[_i0] = (float const*) malloc(_len_iir1*sizeof(float const));
            for(int _i1 = 0; _i1 < _len_iir1; _i1++) {
              iir[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_hist0 = 5;
          float ** hist = (float **) malloc(_len_hist0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_hist0; _i0++) {
            int _len_hist1 = 2;
            hist[_i0] = (float *) malloc(_len_hist1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_hist1; _i1++) {
              hist[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          lfe_iir_c(output,input,iir,hist,factor);
          free(output);
          free(input);
          for(int i1 = 0; i1 < _len_iir0; i1++) {
            int _len_iir1 = 4;
              free(iir[i1]);
          }
          free(iir);
          for(int i1 = 0; i1 < _len_hist0; i1++) {
            int _len_hist1 = 2;
              free(hist[i1]);
          }
          free(hist);
        
        break;
    }
    // big-arr
    case 1:
    {
          int factor = 255;
          int _len_output0 = 65025;
          float * output = (float *) malloc(_len_output0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_input0 = 65025;
          const float * input = (const float *) malloc(_len_input0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_iir0 = 65025;
          float const** iir = (float const**) malloc(_len_iir0*sizeof(float const*));
          for(int _i0 = 0; _i0 < _len_iir0; _i0++) {
            int _len_iir1 = 4;
            iir[_i0] = (float const*) malloc(_len_iir1*sizeof(float const));
            for(int _i1 = 0; _i1 < _len_iir1; _i1++) {
              iir[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_hist0 = 65025;
          float ** hist = (float **) malloc(_len_hist0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_hist0; _i0++) {
            int _len_hist1 = 2;
            hist[_i0] = (float *) malloc(_len_hist1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_hist1; _i1++) {
              hist[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          lfe_iir_c(output,input,iir,hist,factor);
          free(output);
          free(input);
          for(int i1 = 0; i1 < _len_iir0; i1++) {
            int _len_iir1 = 4;
              free(iir[i1]);
          }
          free(iir);
          for(int i1 = 0; i1 < _len_hist0; i1++) {
            int _len_hist1 = 2;
              free(hist[i1]);
          }
          free(hist);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int factor = 10;
          int _len_output0 = 100;
          float * output = (float *) malloc(_len_output0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_input0 = 100;
          const float * input = (const float *) malloc(_len_input0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_iir0 = 100;
          float const** iir = (float const**) malloc(_len_iir0*sizeof(float const*));
          for(int _i0 = 0; _i0 < _len_iir0; _i0++) {
            int _len_iir1 = 4;
            iir[_i0] = (float const*) malloc(_len_iir1*sizeof(float const));
            for(int _i1 = 0; _i1 < _len_iir1; _i1++) {
              iir[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_hist0 = 100;
          float ** hist = (float **) malloc(_len_hist0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_hist0; _i0++) {
            int _len_hist1 = 2;
            hist[_i0] = (float *) malloc(_len_hist1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_hist1; _i1++) {
              hist[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          lfe_iir_c(output,input,iir,hist,factor);
          free(output);
          free(input);
          for(int i1 = 0; i1 < _len_iir0; i1++) {
            int _len_iir1 = 4;
              free(iir[i1]);
          }
          free(iir);
          for(int i1 = 0; i1 < _len_hist0; i1++) {
            int _len_hist1 = 2;
              free(hist[i1]);
          }
          free(hist);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
