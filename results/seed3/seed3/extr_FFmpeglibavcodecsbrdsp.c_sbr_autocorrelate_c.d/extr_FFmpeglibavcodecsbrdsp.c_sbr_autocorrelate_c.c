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

__attribute__((used)) static void sbr_autocorrelate_c(const float x[40][2], float phi[3][2][2])
{
    float real_sum2 = x[0][0] * x[2][0] + x[0][1] * x[2][1];
    float imag_sum2 = x[0][0] * x[2][1] - x[0][1] * x[2][0];
    float real_sum1 = 0.0f, imag_sum1 = 0.0f, real_sum0 = 0.0f;
    int   i;
    for (i = 1; i < 38; i++) {
        real_sum0 += x[i][0] * x[i    ][0] + x[i][1] * x[i    ][1];
        real_sum1 += x[i][0] * x[i + 1][0] + x[i][1] * x[i + 1][1];
        imag_sum1 += x[i][0] * x[i + 1][1] - x[i][1] * x[i + 1][0];
        real_sum2 += x[i][0] * x[i + 2][0] + x[i][1] * x[i + 2][1];
        imag_sum2 += x[i][0] * x[i + 2][1] - x[i][1] * x[i + 2][0];
    }
    phi[2 - 2][1][0] = real_sum2;
    phi[2 - 2][1][1] = imag_sum2;
    phi[2    ][1][0] = real_sum0 + x[ 0][0] * x[ 0][0] + x[ 0][1] * x[ 0][1];
    phi[1    ][0][0] = real_sum0 + x[38][0] * x[38][0] + x[38][1] * x[38][1];
    phi[2 - 1][1][0] = real_sum1 + x[ 0][0] * x[ 1][0] + x[ 0][1] * x[ 1][1];
    phi[2 - 1][1][1] = imag_sum1 + x[ 0][0] * x[ 1][1] - x[ 0][1] * x[ 1][0];
    phi[0    ][0][0] = real_sum1 + x[38][0] * x[39][0] + x[38][1] * x[39][1];
    phi[0    ][0][1] = imag_sum1 + x[38][0] * x[39][1] - x[38][1] * x[39][0];
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
          int _len_x0 = 40;
          float const** x = (float const**) malloc(_len_x0*sizeof(float const*));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            int _len_x1 = 2;
            x[_i0] = (float const*) malloc(_len_x1*sizeof(float const));
            for(int _i1 = 0; _i1 < _len_x1; _i1++) {
              x[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_phi0 = 3;
          float *** phi = (float ***) malloc(_len_phi0*sizeof(float **));
          for(int _i0 = 0; _i0 < _len_phi0; _i0++) {
            int _len_phi1 = 2;
            phi[_i0] = (float **) malloc(_len_phi1*sizeof(float *));
            for(int _i1 = 0; _i1 < _len_phi1; _i1++) {
              int _len_phi2 = 2;
              phi[_i0][_i1] = (float *) malloc(_len_phi2*sizeof(float));
              for(int _i2 = 0; _i2 < _len_phi2; _i2++) {
                phi[_i0][_i1][_i2] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
              }
            }
          }
          sbr_autocorrelate_c(x,phi);
          for(int i1 = 0; i1 < _len_x0; i1++) {
            int _len_x1 = 2;
              free(x[i1]);
          }
          free(x);
          for(int i1 = 0; i1 < _len_phi0; i1++) {
            int _len_phi1 = 2;
              for(int i2 = 0; i2 < _len_phi1; i2++) {
            int _len_phi2 = 2;
              free(phi[i1][i2]);
          }
          free(phi[i1]);
          }
          free(phi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_x0 = 65025;
          float const** x = (float const**) malloc(_len_x0*sizeof(float const*));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            int _len_x1 = 2;
            x[_i0] = (float const*) malloc(_len_x1*sizeof(float const));
            for(int _i1 = 0; _i1 < _len_x1; _i1++) {
              x[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_phi0 = 65025;
          float *** phi = (float ***) malloc(_len_phi0*sizeof(float **));
          for(int _i0 = 0; _i0 < _len_phi0; _i0++) {
            int _len_phi1 = 2;
            phi[_i0] = (float **) malloc(_len_phi1*sizeof(float *));
            for(int _i1 = 0; _i1 < _len_phi1; _i1++) {
              int _len_phi2 = 2;
              phi[_i0][_i1] = (float *) malloc(_len_phi2*sizeof(float));
              for(int _i2 = 0; _i2 < _len_phi2; _i2++) {
                phi[_i0][_i1][_i2] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
              }
            }
          }
          sbr_autocorrelate_c(x,phi);
          for(int i1 = 0; i1 < _len_x0; i1++) {
            int _len_x1 = 2;
              free(x[i1]);
          }
          free(x);
          for(int i1 = 0; i1 < _len_phi0; i1++) {
            int _len_phi1 = 2;
              for(int i2 = 0; i2 < _len_phi1; i2++) {
            int _len_phi2 = 2;
              free(phi[i1][i2]);
          }
          free(phi[i1]);
          }
          free(phi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_x0 = 100;
          float const** x = (float const**) malloc(_len_x0*sizeof(float const*));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            int _len_x1 = 2;
            x[_i0] = (float const*) malloc(_len_x1*sizeof(float const));
            for(int _i1 = 0; _i1 < _len_x1; _i1++) {
              x[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_phi0 = 100;
          float *** phi = (float ***) malloc(_len_phi0*sizeof(float **));
          for(int _i0 = 0; _i0 < _len_phi0; _i0++) {
            int _len_phi1 = 2;
            phi[_i0] = (float **) malloc(_len_phi1*sizeof(float *));
            for(int _i1 = 0; _i1 < _len_phi1; _i1++) {
              int _len_phi2 = 2;
              phi[_i0][_i1] = (float *) malloc(_len_phi2*sizeof(float));
              for(int _i2 = 0; _i2 < _len_phi2; _i2++) {
                phi[_i0][_i1][_i2] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
              }
            }
          }
          sbr_autocorrelate_c(x,phi);
          for(int i1 = 0; i1 < _len_x0; i1++) {
            int _len_x1 = 2;
              free(x[i1]);
          }
          free(x);
          for(int i1 = 0; i1 < _len_phi0; i1++) {
            int _len_phi1 = 2;
              for(int i2 = 0; i2 < _len_phi1; i2++) {
            int _len_phi2 = 2;
              free(phi[i1][i2]);
          }
          free(phi[i1]);
          }
          free(phi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
