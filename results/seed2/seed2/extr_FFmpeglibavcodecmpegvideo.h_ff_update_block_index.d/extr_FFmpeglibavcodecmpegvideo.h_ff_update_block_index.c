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
struct TYPE_5__ {int* dest; int chroma_x_shift; scalar_t__* block_index; TYPE_1__* avctx; } ;
struct TYPE_4__ {int bits_per_raw_sample; int lowres; } ;
typedef  TYPE_2__ MpegEncContext ;

/* Variables and functions */

__attribute__((used)) static inline void ff_update_block_index(MpegEncContext *s){
    const int bytes_per_pixel = 1 + (s->avctx->bits_per_raw_sample > 8);
    const int block_size= (8*bytes_per_pixel) >> s->avctx->lowres;

    s->block_index[0]+=2;
    s->block_index[1]+=2;
    s->block_index[2]+=2;
    s->block_index[3]+=2;
    s->block_index[4]++;
    s->block_index[5]++;
    s->dest[0]+= 2*block_size;
    s->dest[1]+= (2 >> s->chroma_x_shift) * block_size;
    s->dest[2]+= (2 >> s->chroma_x_shift) * block_size;
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
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__dest0 = 1;
          s[_i0].dest = (int *) malloc(_len_s__i0__dest0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__dest0; _j0++) {
            s[_i0].dest[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].chroma_x_shift = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__block_index0 = 1;
          s[_i0].block_index = (long *) malloc(_len_s__i0__block_index0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__block_index0; _j0++) {
            s[_i0].block_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__avctx0 = 1;
          s[_i0].avctx = (struct TYPE_4__ *) malloc(_len_s__i0__avctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__avctx0; _j0++) {
            s[_i0].avctx->bits_per_raw_sample = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].avctx->lowres = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ff_update_block_index(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].dest);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].block_index);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].avctx);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__dest0 = 1;
          s[_i0].dest = (int *) malloc(_len_s__i0__dest0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__dest0; _j0++) {
            s[_i0].dest[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].chroma_x_shift = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__block_index0 = 1;
          s[_i0].block_index = (long *) malloc(_len_s__i0__block_index0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__block_index0; _j0++) {
            s[_i0].block_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__avctx0 = 1;
          s[_i0].avctx = (struct TYPE_4__ *) malloc(_len_s__i0__avctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__avctx0; _j0++) {
            s[_i0].avctx->bits_per_raw_sample = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].avctx->lowres = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ff_update_block_index(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].dest);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].block_index);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].avctx);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__dest0 = 1;
          s[_i0].dest = (int *) malloc(_len_s__i0__dest0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__dest0; _j0++) {
            s[_i0].dest[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].chroma_x_shift = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__block_index0 = 1;
          s[_i0].block_index = (long *) malloc(_len_s__i0__block_index0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__block_index0; _j0++) {
            s[_i0].block_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__avctx0 = 1;
          s[_i0].avctx = (struct TYPE_4__ *) malloc(_len_s__i0__avctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__avctx0; _j0++) {
            s[_i0].avctx->bits_per_raw_sample = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].avctx->lowres = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ff_update_block_index(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].dest);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].block_index);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].avctx);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
