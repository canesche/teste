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

__attribute__((used)) static void mp_mul_matrix3x3(float a[3][3], float b[3][3])
{
    float a00 = a[0][0], a01 = a[0][1], a02 = a[0][2],
          a10 = a[1][0], a11 = a[1][1], a12 = a[1][2],
          a20 = a[2][0], a21 = a[2][1], a22 = a[2][2];

    for (int i = 0; i < 3; i++) {
        a[0][i] = a00 * b[0][i] + a01 * b[1][i] + a02 * b[2][i];
        a[1][i] = a10 * b[0][i] + a11 * b[1][i] + a12 * b[2][i];
        a[2][i] = a20 * b[0][i] + a21 * b[1][i] + a22 * b[2][i];
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
          int _len_a0 = 3;
          float ** a = (float **) malloc(_len_a0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            int _len_a1 = 3;
            a[_i0] = (float *) malloc(_len_a1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_a1; _i1++) {
              a[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_b0 = 3;
          float ** b = (float **) malloc(_len_b0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            int _len_b1 = 3;
            b[_i0] = (float *) malloc(_len_b1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_b1; _i1++) {
              b[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          mp_mul_matrix3x3(a,b);
          for(int i1 = 0; i1 < _len_a0; i1++) {
            int _len_a1 = 3;
              free(a[i1]);
          }
          free(a);
          for(int i1 = 0; i1 < _len_b0; i1++) {
            int _len_b1 = 3;
              free(b[i1]);
          }
          free(b);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_a0 = 65025;
          float ** a = (float **) malloc(_len_a0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            int _len_a1 = 3;
            a[_i0] = (float *) malloc(_len_a1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_a1; _i1++) {
              a[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_b0 = 65025;
          float ** b = (float **) malloc(_len_b0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            int _len_b1 = 3;
            b[_i0] = (float *) malloc(_len_b1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_b1; _i1++) {
              b[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          mp_mul_matrix3x3(a,b);
          for(int i1 = 0; i1 < _len_a0; i1++) {
            int _len_a1 = 3;
              free(a[i1]);
          }
          free(a);
          for(int i1 = 0; i1 < _len_b0; i1++) {
            int _len_b1 = 3;
              free(b[i1]);
          }
          free(b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_a0 = 100;
          float ** a = (float **) malloc(_len_a0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            int _len_a1 = 3;
            a[_i0] = (float *) malloc(_len_a1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_a1; _i1++) {
              a[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_b0 = 100;
          float ** b = (float **) malloc(_len_b0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            int _len_b1 = 3;
            b[_i0] = (float *) malloc(_len_b1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_b1; _i1++) {
              b[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          mp_mul_matrix3x3(a,b);
          for(int i1 = 0; i1 < _len_a0; i1++) {
            int _len_a1 = 3;
              free(a[i1]);
          }
          free(a);
          for(int i1 = 0; i1 < _len_b0; i1++) {
            int _len_b1 = 3;
              free(b[i1]);
          }
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
