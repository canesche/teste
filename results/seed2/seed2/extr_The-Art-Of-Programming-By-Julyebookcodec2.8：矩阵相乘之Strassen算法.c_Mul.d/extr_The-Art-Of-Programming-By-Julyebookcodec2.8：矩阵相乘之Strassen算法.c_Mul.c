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

void Mul(int** matrixA, int** matrixB, int** matrixC)    
{    
	for(int i = 0; i < 2; ++i)     
	{    
		for(int j = 0; j < 2; ++j)     
		{    
			matrixC[i][j] = 0;    
			for(int k = 0; k < 2; ++k)     
			{    
				matrixC[i][j] += matrixA[i][k] * matrixB[k][j];    
			}    
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
          int _len_matrixA0 = 1;
          int ** matrixA = (int **) malloc(_len_matrixA0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_matrixA0; _i0++) {
            int _len_matrixA1 = 1;
            matrixA[_i0] = (int *) malloc(_len_matrixA1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_matrixA1; _i1++) {
              matrixA[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_matrixB0 = 1;
          int ** matrixB = (int **) malloc(_len_matrixB0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_matrixB0; _i0++) {
            int _len_matrixB1 = 1;
            matrixB[_i0] = (int *) malloc(_len_matrixB1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_matrixB1; _i1++) {
              matrixB[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_matrixC0 = 1;
          int ** matrixC = (int **) malloc(_len_matrixC0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_matrixC0; _i0++) {
            int _len_matrixC1 = 1;
            matrixC[_i0] = (int *) malloc(_len_matrixC1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_matrixC1; _i1++) {
              matrixC[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          Mul(matrixA,matrixB,matrixC);
          for(int i1 = 0; i1 < _len_matrixA0; i1++) {
            int _len_matrixA1 = 1;
              free(matrixA[i1]);
          }
          free(matrixA);
          for(int i1 = 0; i1 < _len_matrixB0; i1++) {
            int _len_matrixB1 = 1;
              free(matrixB[i1]);
          }
          free(matrixB);
          for(int i1 = 0; i1 < _len_matrixC0; i1++) {
            int _len_matrixC1 = 1;
              free(matrixC[i1]);
          }
          free(matrixC);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_matrixA0 = 65025;
          int ** matrixA = (int **) malloc(_len_matrixA0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_matrixA0; _i0++) {
            int _len_matrixA1 = 1;
            matrixA[_i0] = (int *) malloc(_len_matrixA1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_matrixA1; _i1++) {
              matrixA[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_matrixB0 = 65025;
          int ** matrixB = (int **) malloc(_len_matrixB0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_matrixB0; _i0++) {
            int _len_matrixB1 = 1;
            matrixB[_i0] = (int *) malloc(_len_matrixB1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_matrixB1; _i1++) {
              matrixB[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_matrixC0 = 65025;
          int ** matrixC = (int **) malloc(_len_matrixC0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_matrixC0; _i0++) {
            int _len_matrixC1 = 1;
            matrixC[_i0] = (int *) malloc(_len_matrixC1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_matrixC1; _i1++) {
              matrixC[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          Mul(matrixA,matrixB,matrixC);
          for(int i1 = 0; i1 < _len_matrixA0; i1++) {
            int _len_matrixA1 = 1;
              free(matrixA[i1]);
          }
          free(matrixA);
          for(int i1 = 0; i1 < _len_matrixB0; i1++) {
            int _len_matrixB1 = 1;
              free(matrixB[i1]);
          }
          free(matrixB);
          for(int i1 = 0; i1 < _len_matrixC0; i1++) {
            int _len_matrixC1 = 1;
              free(matrixC[i1]);
          }
          free(matrixC);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_matrixA0 = 100;
          int ** matrixA = (int **) malloc(_len_matrixA0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_matrixA0; _i0++) {
            int _len_matrixA1 = 1;
            matrixA[_i0] = (int *) malloc(_len_matrixA1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_matrixA1; _i1++) {
              matrixA[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_matrixB0 = 100;
          int ** matrixB = (int **) malloc(_len_matrixB0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_matrixB0; _i0++) {
            int _len_matrixB1 = 1;
            matrixB[_i0] = (int *) malloc(_len_matrixB1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_matrixB1; _i1++) {
              matrixB[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_matrixC0 = 100;
          int ** matrixC = (int **) malloc(_len_matrixC0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_matrixC0; _i0++) {
            int _len_matrixC1 = 1;
            matrixC[_i0] = (int *) malloc(_len_matrixC1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_matrixC1; _i1++) {
              matrixC[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          Mul(matrixA,matrixB,matrixC);
          for(int i1 = 0; i1 < _len_matrixA0; i1++) {
            int _len_matrixA1 = 1;
              free(matrixA[i1]);
          }
          free(matrixA);
          for(int i1 = 0; i1 < _len_matrixB0; i1++) {
            int _len_matrixB1 = 1;
              free(matrixB[i1]);
          }
          free(matrixB);
          for(int i1 = 0; i1 < _len_matrixC0; i1++) {
            int _len_matrixC1 = 1;
              free(matrixC[i1]);
          }
          free(matrixC);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
