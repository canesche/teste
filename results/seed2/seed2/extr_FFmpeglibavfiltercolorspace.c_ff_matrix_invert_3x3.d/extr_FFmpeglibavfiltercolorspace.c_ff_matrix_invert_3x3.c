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

void ff_matrix_invert_3x3(const double in[3][3], double out[3][3])
{
    double m00 = in[0][0], m01 = in[0][1], m02 = in[0][2],
           m10 = in[1][0], m11 = in[1][1], m12 = in[1][2],
           m20 = in[2][0], m21 = in[2][1], m22 = in[2][2];
    int i, j;
    double det;

    out[0][0] =  (m11 * m22 - m21 * m12);
    out[0][1] = -(m01 * m22 - m21 * m02);
    out[0][2] =  (m01 * m12 - m11 * m02);
    out[1][0] = -(m10 * m22 - m20 * m12);
    out[1][1] =  (m00 * m22 - m20 * m02);
    out[1][2] = -(m00 * m12 - m10 * m02);
    out[2][0] =  (m10 * m21 - m20 * m11);
    out[2][1] = -(m00 * m21 - m20 * m01);
    out[2][2] =  (m00 * m11 - m10 * m01);

    det = m00 * out[0][0] + m10 * out[0][1] + m20 * out[0][2];
    det = 1.0 / det;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            out[i][j] *= det;
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
          int _len_in0 = 3;
          double const** in = (double const**) malloc(_len_in0*sizeof(double const*));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            int _len_in1 = 3;
            in[_i0] = (double const*) malloc(_len_in1*sizeof(double const));
            for(int _i1 = 0; _i1 < _len_in1; _i1++) {
              in[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_out0 = 3;
          double ** out = (double **) malloc(_len_out0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 3;
            out[_i0] = (double *) malloc(_len_out1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          ff_matrix_invert_3x3(in,out);
          for(int i1 = 0; i1 < _len_in0; i1++) {
            int _len_in1 = 3;
              free(in[i1]);
          }
          free(in);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 3;
              free(out[i1]);
          }
          free(out);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_in0 = 65025;
          double const** in = (double const**) malloc(_len_in0*sizeof(double const*));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            int _len_in1 = 3;
            in[_i0] = (double const*) malloc(_len_in1*sizeof(double const));
            for(int _i1 = 0; _i1 < _len_in1; _i1++) {
              in[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_out0 = 65025;
          double ** out = (double **) malloc(_len_out0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 3;
            out[_i0] = (double *) malloc(_len_out1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          ff_matrix_invert_3x3(in,out);
          for(int i1 = 0; i1 < _len_in0; i1++) {
            int _len_in1 = 3;
              free(in[i1]);
          }
          free(in);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 3;
              free(out[i1]);
          }
          free(out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_in0 = 100;
          double const** in = (double const**) malloc(_len_in0*sizeof(double const*));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            int _len_in1 = 3;
            in[_i0] = (double const*) malloc(_len_in1*sizeof(double const));
            for(int _i1 = 0; _i1 < _len_in1; _i1++) {
              in[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_out0 = 100;
          double ** out = (double **) malloc(_len_out0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 3;
            out[_i0] = (double *) malloc(_len_out1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          ff_matrix_invert_3x3(in,out);
          for(int i1 = 0; i1 < _len_in0; i1++) {
            int _len_in1 = 3;
              free(in[i1]);
          }
          free(in);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 3;
              free(out[i1]);
          }
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
