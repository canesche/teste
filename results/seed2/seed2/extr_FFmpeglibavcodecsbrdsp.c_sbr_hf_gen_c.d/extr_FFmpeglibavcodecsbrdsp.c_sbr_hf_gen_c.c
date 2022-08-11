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

__attribute__((used)) static void sbr_hf_gen_c(float (*X_high)[2], const float (*X_low)[2],
                         const float alpha0[2], const float alpha1[2],
                         float bw, int start, int end)
{
    float alpha[4];
    int i;

    alpha[0] = alpha1[0] * bw * bw;
    alpha[1] = alpha1[1] * bw * bw;
    alpha[2] = alpha0[0] * bw;
    alpha[3] = alpha0[1] * bw;

    for (i = start; i < end; i++) {
        X_high[i][0] =
            X_low[i - 2][0] * alpha[0] -
            X_low[i - 2][1] * alpha[1] +
            X_low[i - 1][0] * alpha[2] -
            X_low[i - 1][1] * alpha[3] +
            X_low[i][0];
        X_high[i][1] =
            X_low[i - 2][1] * alpha[0] +
            X_low[i - 2][0] * alpha[1] +
            X_low[i - 1][1] * alpha[2] +
            X_low[i - 1][0] * alpha[3] +
            X_low[i][1];
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
          float bw = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int start = 100;
          int end = 100;
          int _len_X_high0 = 2;
          float (*)* X_high = (float (*)*) malloc(_len_X_high0*sizeof(float ()*));
          for(int _i0 = 0; _i0 < _len_X_high0; _i0++) {
            int _len_X_high1 = 1;
            X_high[_i0] = (float ()*) malloc(_len_X_high1*sizeof(float ()));
            for(int _i1 = 0; _i1 < _len_X_high1; _i1++) {
              X_high[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_X_low0 = 2;
          float const (*)* X_low = (float const (*)*) malloc(_len_X_low0*sizeof(float const ()*));
          for(int _i0 = 0; _i0 < _len_X_low0; _i0++) {
            int _len_X_low1 = 1;
            X_low[_i0] = (float const ()*) malloc(_len_X_low1*sizeof(float const ()));
            for(int _i1 = 0; _i1 < _len_X_low1; _i1++) {
              X_low[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_alpha00 = 2;
          float const* alpha0 = (float const*) malloc(_len_alpha00*sizeof(float const));
          for(int _i0 = 0; _i0 < _len_alpha00; _i0++) {
            alpha0[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_alpha10 = 2;
          float const* alpha1 = (float const*) malloc(_len_alpha10*sizeof(float const));
          for(int _i0 = 0; _i0 < _len_alpha10; _i0++) {
            alpha1[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          sbr_hf_gen_c(X_high,X_low,alpha0,alpha1,bw,start,end);
          for(int i1 = 0; i1 < _len_X_high0; i1++) {
            int _len_X_high1 = 1;
              free(X_high[i1]);
          }
          free(X_high);
          for(int i1 = 0; i1 < _len_X_low0; i1++) {
            int _len_X_low1 = 1;
              free(X_low[i1]);
          }
          free(X_low);
          free(alpha0);
          free(alpha1);
        
        break;
    }
    // big-arr
    case 1:
    {
          float bw = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int start = 255;
          int end = 255;
          int _len_X_high0 = 65025;
          float (*)* X_high = (float (*)*) malloc(_len_X_high0*sizeof(float ()*));
          for(int _i0 = 0; _i0 < _len_X_high0; _i0++) {
            int _len_X_high1 = 1;
            X_high[_i0] = (float ()*) malloc(_len_X_high1*sizeof(float ()));
            for(int _i1 = 0; _i1 < _len_X_high1; _i1++) {
              X_high[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_X_low0 = 65025;
          float const (*)* X_low = (float const (*)*) malloc(_len_X_low0*sizeof(float const ()*));
          for(int _i0 = 0; _i0 < _len_X_low0; _i0++) {
            int _len_X_low1 = 1;
            X_low[_i0] = (float const ()*) malloc(_len_X_low1*sizeof(float const ()));
            for(int _i1 = 0; _i1 < _len_X_low1; _i1++) {
              X_low[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_alpha00 = 65025;
          float const* alpha0 = (float const*) malloc(_len_alpha00*sizeof(float const));
          for(int _i0 = 0; _i0 < _len_alpha00; _i0++) {
            alpha0[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_alpha10 = 65025;
          float const* alpha1 = (float const*) malloc(_len_alpha10*sizeof(float const));
          for(int _i0 = 0; _i0 < _len_alpha10; _i0++) {
            alpha1[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          sbr_hf_gen_c(X_high,X_low,alpha0,alpha1,bw,start,end);
          for(int i1 = 0; i1 < _len_X_high0; i1++) {
            int _len_X_high1 = 1;
              free(X_high[i1]);
          }
          free(X_high);
          for(int i1 = 0; i1 < _len_X_low0; i1++) {
            int _len_X_low1 = 1;
              free(X_low[i1]);
          }
          free(X_low);
          free(alpha0);
          free(alpha1);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          float bw = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int start = 10;
          int end = 10;
          int _len_X_high0 = 100;
          float (*)* X_high = (float (*)*) malloc(_len_X_high0*sizeof(float ()*));
          for(int _i0 = 0; _i0 < _len_X_high0; _i0++) {
            int _len_X_high1 = 1;
            X_high[_i0] = (float ()*) malloc(_len_X_high1*sizeof(float ()));
            for(int _i1 = 0; _i1 < _len_X_high1; _i1++) {
              X_high[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_X_low0 = 100;
          float const (*)* X_low = (float const (*)*) malloc(_len_X_low0*sizeof(float const ()*));
          for(int _i0 = 0; _i0 < _len_X_low0; _i0++) {
            int _len_X_low1 = 1;
            X_low[_i0] = (float const ()*) malloc(_len_X_low1*sizeof(float const ()));
            for(int _i1 = 0; _i1 < _len_X_low1; _i1++) {
              X_low[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_alpha00 = 100;
          float const* alpha0 = (float const*) malloc(_len_alpha00*sizeof(float const));
          for(int _i0 = 0; _i0 < _len_alpha00; _i0++) {
            alpha0[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_alpha10 = 100;
          float const* alpha1 = (float const*) malloc(_len_alpha10*sizeof(float const));
          for(int _i0 = 0; _i0 < _len_alpha10; _i0++) {
            alpha1[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          sbr_hf_gen_c(X_high,X_low,alpha0,alpha1,bw,start,end);
          for(int i1 = 0; i1 < _len_X_high0; i1++) {
            int _len_X_high1 = 1;
              free(X_high[i1]);
          }
          free(X_high);
          for(int i1 = 0; i1 < _len_X_low0; i1++) {
            int _len_X_low1 = 1;
              free(X_low[i1]);
          }
          free(X_low);
          free(alpha0);
          free(alpha1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
