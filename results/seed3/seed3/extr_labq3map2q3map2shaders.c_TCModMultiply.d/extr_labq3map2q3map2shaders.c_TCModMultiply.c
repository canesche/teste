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
typedef  int** tcMod_t ;

/* Variables and functions */

void TCModMultiply( tcMod_t a, tcMod_t b, tcMod_t out ){
	int i;


	for ( i = 0; i < 3; i++ )
	{
		out[ i ][ 0 ] = ( a[ i ][ 0 ] * b[ 0 ][ 0 ] ) + ( a[ i ][ 1 ] * b[ 1 ][ 0 ] ) + ( a[ i ][ 2 ] * b[ 2 ][ 0 ] );
		out[ i ][ 1 ] = ( a[ i ][ 0 ] * b[ 0 ][ 1 ] ) + ( a[ i ][ 1 ] * b[ 1 ][ 1 ] ) + ( a[ i ][ 2 ] * b[ 2 ][ 1 ] );
		out[ i ][ 2 ] = ( a[ i ][ 0 ] * b[ 0 ][ 2 ] ) + ( a[ i ][ 1 ] * b[ 1 ][ 2 ] ) + ( a[ i ][ 2 ] * b[ 2 ][ 2 ] );
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
          int _len_a0 = 1;
          int ** a = (int **) malloc(_len_a0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            int _len_a1 = 1;
            a[_i0] = (int *) malloc(_len_a1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_a1; _i1++) {
              a[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_b0 = 1;
          int ** b = (int **) malloc(_len_b0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            int _len_b1 = 1;
            b[_i0] = (int *) malloc(_len_b1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_b1; _i1++) {
              b[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_out0 = 1;
          int ** out = (int **) malloc(_len_out0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 1;
            out[_i0] = (int *) malloc(_len_out1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          TCModMultiply(a,b,out);
          for(int i1 = 0; i1 < _len_a0; i1++) {
            int _len_a1 = 1;
              free(a[i1]);
          }
          free(a);
          for(int i1 = 0; i1 < _len_b0; i1++) {
            int _len_b1 = 1;
              free(b[i1]);
          }
          free(b);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 1;
              free(out[i1]);
          }
          free(out);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_a0 = 65025;
          int ** a = (int **) malloc(_len_a0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            int _len_a1 = 1;
            a[_i0] = (int *) malloc(_len_a1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_a1; _i1++) {
              a[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_b0 = 65025;
          int ** b = (int **) malloc(_len_b0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            int _len_b1 = 1;
            b[_i0] = (int *) malloc(_len_b1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_b1; _i1++) {
              b[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_out0 = 65025;
          int ** out = (int **) malloc(_len_out0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 1;
            out[_i0] = (int *) malloc(_len_out1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          TCModMultiply(a,b,out);
          for(int i1 = 0; i1 < _len_a0; i1++) {
            int _len_a1 = 1;
              free(a[i1]);
          }
          free(a);
          for(int i1 = 0; i1 < _len_b0; i1++) {
            int _len_b1 = 1;
              free(b[i1]);
          }
          free(b);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 1;
              free(out[i1]);
          }
          free(out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_a0 = 100;
          int ** a = (int **) malloc(_len_a0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            int _len_a1 = 1;
            a[_i0] = (int *) malloc(_len_a1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_a1; _i1++) {
              a[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_b0 = 100;
          int ** b = (int **) malloc(_len_b0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            int _len_b1 = 1;
            b[_i0] = (int *) malloc(_len_b1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_b1; _i1++) {
              b[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_out0 = 100;
          int ** out = (int **) malloc(_len_out0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 1;
            out[_i0] = (int *) malloc(_len_out1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          TCModMultiply(a,b,out);
          for(int i1 = 0; i1 < _len_a0; i1++) {
            int _len_a1 = 1;
              free(a[i1]);
          }
          free(a);
          for(int i1 = 0; i1 < _len_b0; i1++) {
            int _len_b1 = 1;
              free(b[i1]);
          }
          free(b);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 1;
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
