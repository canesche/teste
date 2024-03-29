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
typedef  float* vec3_t ;

/* Variables and functions */

void SwapElements(vec3_t matrix[3], int i, int j) {
	float temp = matrix[i][j];
	matrix[i][j] = matrix[j][i];
	matrix[j][i] = temp;
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
          int i = 100;
          int j = 100;
          int _len_matrix0 = 3;
          float ** matrix = (float **) malloc(_len_matrix0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_matrix0; _i0++) {
            int _len_matrix1 = 1;
            matrix[_i0] = (float *) malloc(_len_matrix1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_matrix1; _i1++) {
              matrix[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          SwapElements(matrix,i,j);
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
          int i = 255;
          int j = 255;
          int _len_matrix0 = 65025;
          float ** matrix = (float **) malloc(_len_matrix0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_matrix0; _i0++) {
            int _len_matrix1 = 1;
            matrix[_i0] = (float *) malloc(_len_matrix1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_matrix1; _i1++) {
              matrix[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          SwapElements(matrix,i,j);
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
          int i = 10;
          int j = 10;
          int _len_matrix0 = 100;
          float ** matrix = (float **) malloc(_len_matrix0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_matrix0; _i0++) {
            int _len_matrix1 = 1;
            matrix[_i0] = (float *) malloc(_len_matrix1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_matrix1; _i1++) {
              matrix[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          SwapElements(matrix,i,j);
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
