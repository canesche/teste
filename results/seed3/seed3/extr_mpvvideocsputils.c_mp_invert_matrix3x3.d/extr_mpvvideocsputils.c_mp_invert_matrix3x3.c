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

void mp_invert_matrix3x3(float m[3][3])
{
    float m00 = m[0][0], m01 = m[0][1], m02 = m[0][2],
          m10 = m[1][0], m11 = m[1][1], m12 = m[1][2],
          m20 = m[2][0], m21 = m[2][1], m22 = m[2][2];

    // calculate the adjoint
    m[0][0] =  (m11 * m22 - m21 * m12);
    m[0][1] = -(m01 * m22 - m21 * m02);
    m[0][2] =  (m01 * m12 - m11 * m02);
    m[1][0] = -(m10 * m22 - m20 * m12);
    m[1][1] =  (m00 * m22 - m20 * m02);
    m[1][2] = -(m00 * m12 - m10 * m02);
    m[2][0] =  (m10 * m21 - m20 * m11);
    m[2][1] = -(m00 * m21 - m20 * m01);
    m[2][2] =  (m00 * m11 - m10 * m01);

    // calculate the determinant (as inverse == 1/det * adjoint,
    // adjoint * m == identity * det, so this calculates the det)
    float det = m00 * m[0][0] + m10 * m[0][1] + m20 * m[0][2];
    det = 1.0f / det;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            m[i][j] *= det;
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
          int _len_m0 = 3;
          float ** m = (float **) malloc(_len_m0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            int _len_m1 = 3;
            m[_i0] = (float *) malloc(_len_m1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_m1; _i1++) {
              m[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          mp_invert_matrix3x3(m);
          for(int i1 = 0; i1 < _len_m0; i1++) {
            int _len_m1 = 3;
              free(m[i1]);
          }
          free(m);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_m0 = 65025;
          float ** m = (float **) malloc(_len_m0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            int _len_m1 = 3;
            m[_i0] = (float *) malloc(_len_m1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_m1; _i1++) {
              m[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          mp_invert_matrix3x3(m);
          for(int i1 = 0; i1 < _len_m0; i1++) {
            int _len_m1 = 3;
              free(m[i1]);
          }
          free(m);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_m0 = 100;
          float ** m = (float **) malloc(_len_m0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            int _len_m1 = 3;
            m[_i0] = (float *) malloc(_len_m1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_m1; _i1++) {
              m[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          mp_invert_matrix3x3(m);
          for(int i1 = 0; i1 < _len_m0; i1++) {
            int _len_m1 = 3;
              free(m[i1]);
          }
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
