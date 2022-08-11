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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
struct TYPE_3__ {int* block_index; int b8_stride; int* coded_block; } ;
typedef  TYPE_1__ MpegEncContext ;

/* Variables and functions */

int ff_msmpeg4_coded_block_pred(MpegEncContext * s, int n, uint8_t **coded_block_ptr)
{
    int xy, wrap, pred, a, b, c;

    xy = s->block_index[n];
    wrap = s->b8_stride;

    /* B C
     * A X
     */
    a = s->coded_block[xy - 1       ];
    b = s->coded_block[xy - 1 - wrap];
    c = s->coded_block[xy     - wrap];

    if (b == c) {
        pred = a;
    } else {
        pred = c;
    }

    /* store value */
    *coded_block_ptr = &s->coded_block[xy];

    return pred;
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
          int n = 100;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__block_index0 = 1;
          s[_i0].block_index = (int *) malloc(_len_s__i0__block_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__block_index0; _j0++) {
            s[_i0].block_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].b8_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__coded_block0 = 1;
          s[_i0].coded_block = (int *) malloc(_len_s__i0__coded_block0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__coded_block0; _j0++) {
            s[_i0].coded_block[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_coded_block_ptr0 = 1;
          int ** coded_block_ptr = (int **) malloc(_len_coded_block_ptr0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_coded_block_ptr0; _i0++) {
            int _len_coded_block_ptr1 = 1;
            coded_block_ptr[_i0] = (int *) malloc(_len_coded_block_ptr1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_coded_block_ptr1; _i1++) {
              coded_block_ptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = ff_msmpeg4_coded_block_pred(s,n,coded_block_ptr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].block_index);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].coded_block);
          }
          free(s);
          for(int i1 = 0; i1 < _len_coded_block_ptr0; i1++) {
            int _len_coded_block_ptr1 = 1;
              free(coded_block_ptr[i1]);
          }
          free(coded_block_ptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__block_index0 = 1;
          s[_i0].block_index = (int *) malloc(_len_s__i0__block_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__block_index0; _j0++) {
            s[_i0].block_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].b8_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__coded_block0 = 1;
          s[_i0].coded_block = (int *) malloc(_len_s__i0__coded_block0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__coded_block0; _j0++) {
            s[_i0].coded_block[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_coded_block_ptr0 = 65025;
          int ** coded_block_ptr = (int **) malloc(_len_coded_block_ptr0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_coded_block_ptr0; _i0++) {
            int _len_coded_block_ptr1 = 1;
            coded_block_ptr[_i0] = (int *) malloc(_len_coded_block_ptr1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_coded_block_ptr1; _i1++) {
              coded_block_ptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = ff_msmpeg4_coded_block_pred(s,n,coded_block_ptr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].block_index);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].coded_block);
          }
          free(s);
          for(int i1 = 0; i1 < _len_coded_block_ptr0; i1++) {
            int _len_coded_block_ptr1 = 1;
              free(coded_block_ptr[i1]);
          }
          free(coded_block_ptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__block_index0 = 1;
          s[_i0].block_index = (int *) malloc(_len_s__i0__block_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__block_index0; _j0++) {
            s[_i0].block_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].b8_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__coded_block0 = 1;
          s[_i0].coded_block = (int *) malloc(_len_s__i0__coded_block0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__coded_block0; _j0++) {
            s[_i0].coded_block[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_coded_block_ptr0 = 100;
          int ** coded_block_ptr = (int **) malloc(_len_coded_block_ptr0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_coded_block_ptr0; _i0++) {
            int _len_coded_block_ptr1 = 1;
            coded_block_ptr[_i0] = (int *) malloc(_len_coded_block_ptr1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_coded_block_ptr1; _i1++) {
              coded_block_ptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = ff_msmpeg4_coded_block_pred(s,n,coded_block_ptr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].block_index);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].coded_block);
          }
          free(s);
          for(int i1 = 0; i1 < _len_coded_block_ptr0; i1++) {
            int _len_coded_block_ptr1 = 1;
              free(coded_block_ptr[i1]);
          }
          free(coded_block_ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
