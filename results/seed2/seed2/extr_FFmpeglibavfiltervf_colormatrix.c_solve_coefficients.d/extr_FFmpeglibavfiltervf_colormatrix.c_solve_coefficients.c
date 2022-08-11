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

__attribute__((used)) static void solve_coefficients(double cm[3][3], double rgb[3][3], double yuv[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            cm[i][j] = yuv[i][0] * rgb[0][j] + yuv[i][1] * rgb[1][j] + yuv[i][2] * rgb[2][j];
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
          int _len_cm0 = 3;
          double ** cm = (double **) malloc(_len_cm0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_cm0; _i0++) {
            int _len_cm1 = 3;
            cm[_i0] = (double *) malloc(_len_cm1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_cm1; _i1++) {
              cm[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_rgb0 = 3;
          double ** rgb = (double **) malloc(_len_rgb0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_rgb0; _i0++) {
            int _len_rgb1 = 3;
            rgb[_i0] = (double *) malloc(_len_rgb1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_rgb1; _i1++) {
              rgb[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_yuv0 = 3;
          double ** yuv = (double **) malloc(_len_yuv0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_yuv0; _i0++) {
            int _len_yuv1 = 3;
            yuv[_i0] = (double *) malloc(_len_yuv1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_yuv1; _i1++) {
              yuv[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          solve_coefficients(cm,rgb,yuv);
          for(int i1 = 0; i1 < _len_cm0; i1++) {
            int _len_cm1 = 3;
              free(cm[i1]);
          }
          free(cm);
          for(int i1 = 0; i1 < _len_rgb0; i1++) {
            int _len_rgb1 = 3;
              free(rgb[i1]);
          }
          free(rgb);
          for(int i1 = 0; i1 < _len_yuv0; i1++) {
            int _len_yuv1 = 3;
              free(yuv[i1]);
          }
          free(yuv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cm0 = 65025;
          double ** cm = (double **) malloc(_len_cm0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_cm0; _i0++) {
            int _len_cm1 = 3;
            cm[_i0] = (double *) malloc(_len_cm1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_cm1; _i1++) {
              cm[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_rgb0 = 65025;
          double ** rgb = (double **) malloc(_len_rgb0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_rgb0; _i0++) {
            int _len_rgb1 = 3;
            rgb[_i0] = (double *) malloc(_len_rgb1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_rgb1; _i1++) {
              rgb[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_yuv0 = 65025;
          double ** yuv = (double **) malloc(_len_yuv0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_yuv0; _i0++) {
            int _len_yuv1 = 3;
            yuv[_i0] = (double *) malloc(_len_yuv1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_yuv1; _i1++) {
              yuv[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          solve_coefficients(cm,rgb,yuv);
          for(int i1 = 0; i1 < _len_cm0; i1++) {
            int _len_cm1 = 3;
              free(cm[i1]);
          }
          free(cm);
          for(int i1 = 0; i1 < _len_rgb0; i1++) {
            int _len_rgb1 = 3;
              free(rgb[i1]);
          }
          free(rgb);
          for(int i1 = 0; i1 < _len_yuv0; i1++) {
            int _len_yuv1 = 3;
              free(yuv[i1]);
          }
          free(yuv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cm0 = 100;
          double ** cm = (double **) malloc(_len_cm0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_cm0; _i0++) {
            int _len_cm1 = 3;
            cm[_i0] = (double *) malloc(_len_cm1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_cm1; _i1++) {
              cm[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_rgb0 = 100;
          double ** rgb = (double **) malloc(_len_rgb0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_rgb0; _i0++) {
            int _len_rgb1 = 3;
            rgb[_i0] = (double *) malloc(_len_rgb1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_rgb1; _i1++) {
              rgb[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_yuv0 = 100;
          double ** yuv = (double **) malloc(_len_yuv0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_yuv0; _i0++) {
            int _len_yuv1 = 3;
            yuv[_i0] = (double *) malloc(_len_yuv1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_yuv1; _i1++) {
              yuv[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          solve_coefficients(cm,rgb,yuv);
          for(int i1 = 0; i1 < _len_cm0; i1++) {
            int _len_cm1 = 3;
              free(cm[i1]);
          }
          free(cm);
          for(int i1 = 0; i1 < _len_rgb0; i1++) {
            int _len_rgb1 = 3;
              free(rgb[i1]);
          }
          free(rgb);
          for(int i1 = 0; i1 < _len_yuv0; i1++) {
            int _len_yuv1 = 3;
              free(yuv[i1]);
          }
          free(yuv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
