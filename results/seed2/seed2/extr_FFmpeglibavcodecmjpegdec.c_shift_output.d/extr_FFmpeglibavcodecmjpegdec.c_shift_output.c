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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
typedef  int uint16_t ;
struct TYPE_5__ {int bits; TYPE_1__* avctx; } ;
struct TYPE_4__ {int lowres; } ;
typedef  TYPE_2__ MJpegDecodeContext ;

/* Variables and functions */

__attribute__((used)) static void shift_output(MJpegDecodeContext *s, uint8_t *ptr, int linesize)
{
    int block_x, block_y;
    int size = 8 >> s->avctx->lowres;
    if (s->bits > 8) {
        for (block_y=0; block_y<size; block_y++)
            for (block_x=0; block_x<size; block_x++)
                *(uint16_t*)(ptr + 2*block_x + block_y*linesize) <<= 16 - s->bits;
    } else {
        for (block_y=0; block_y<size; block_y++)
            for (block_x=0; block_x<size; block_x++)
                *(ptr + block_x + block_y*linesize) <<= 8 - s->bits;
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
          int linesize = 100;
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__avctx0 = 1;
          s[_i0].avctx = (struct TYPE_4__ *) malloc(_len_s__i0__avctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__avctx0; _j0++) {
            s[_i0].avctx->lowres = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ptr0 = 1;
          int * ptr = (int *) malloc(_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          shift_output(s,ptr,linesize);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].avctx);
          }
          free(s);
          free(ptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int linesize = 255;
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__avctx0 = 1;
          s[_i0].avctx = (struct TYPE_4__ *) malloc(_len_s__i0__avctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__avctx0; _j0++) {
            s[_i0].avctx->lowres = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ptr0 = 65025;
          int * ptr = (int *) malloc(_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          shift_output(s,ptr,linesize);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].avctx);
          }
          free(s);
          free(ptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int linesize = 10;
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__avctx0 = 1;
          s[_i0].avctx = (struct TYPE_4__ *) malloc(_len_s__i0__avctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__avctx0; _j0++) {
            s[_i0].avctx->lowres = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ptr0 = 100;
          int * ptr = (int *) malloc(_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          shift_output(s,ptr,linesize);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].avctx);
          }
          free(s);
          free(ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
