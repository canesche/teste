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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {TYPE_1__* f; } ;
struct TYPE_7__ {int flags; int mbx; int mb_width; int mby; int l_stride; int c_stride; int mb_height; TYPE_2__ cur; scalar_t__ cv; scalar_t__ cu; scalar_t__ cy; int /*<<< orphan*/ * mv; int /*<<< orphan*/ * pred_mode_Y; int /*<<< orphan*/  mbidx; int /*<<< orphan*/ ** top_mv; } ;
struct TYPE_5__ {scalar_t__* data; } ;
typedef  TYPE_3__ AVSContext ;

/* Variables and functions */
 int A_AVAIL ; 
 int B_AVAIL ; 
 int C_AVAIL ; 
 size_t MV_BWD_X2 ; 
 size_t MV_BWD_X3 ; 
 size_t MV_FWD_X2 ; 
 size_t MV_FWD_X3 ; 
 int /*<<< orphan*/  NOT_AVAIL ; 
 int /*<<< orphan*/  un_mv ; 

int ff_cavs_next_mb(AVSContext *h)
{
    int i;

    h->flags |= A_AVAIL;
    h->cy    += 16;
    h->cu    += 8;
    h->cv    += 8;
    /* copy mvs as predictors to the left */
    for (i = 0; i <= 20; i += 4)
        h->mv[i] = h->mv[i + 2];
    /* copy bottom mvs from cache to top line */
    h->top_mv[0][h->mbx * 2 + 0] = h->mv[MV_FWD_X2];
    h->top_mv[0][h->mbx * 2 + 1] = h->mv[MV_FWD_X3];
    h->top_mv[1][h->mbx * 2 + 0] = h->mv[MV_BWD_X2];
    h->top_mv[1][h->mbx * 2 + 1] = h->mv[MV_BWD_X3];
    /* next MB address */
    h->mbidx++;
    h->mbx++;
    if (h->mbx == h->mb_width) { // New mb line
        h->flags = B_AVAIL | C_AVAIL;
        /* clear left pred_modes */
        h->pred_mode_Y[3] = h->pred_mode_Y[6] = NOT_AVAIL;
        /* clear left mv predictors */
        for (i = 0; i <= 20; i += 4)
            h->mv[i] = un_mv;
        h->mbx = 0;
        h->mby++;
        /* re-calculate sample pointers */
        h->cy = h->cur.f->data[0] + h->mby * 16 * h->l_stride;
        h->cu = h->cur.f->data[1] + h->mby * 8 * h->c_stride;
        h->cv = h->cur.f->data[2] + h->mby * 8 * h->c_stride;
        if (h->mby == h->mb_height) { // Frame end
            return 0;
        }
    }
    return 1;
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
          int _len_h0 = 1;
          struct TYPE_7__ * h = (struct TYPE_7__ *) malloc(_len_h0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mbx = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mb_width = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mby = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].l_stride = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].c_stride = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mb_height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__cur_f0 = 1;
          h[_i0].cur.f = (struct TYPE_5__ *) malloc(_len_h__i0__cur_f0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_h__i0__cur_f0; _j0++) {
              int _len_h__i0__cur_f_data0 = 1;
          h[_i0].cur.f->data = (long *) malloc(_len_h__i0__cur_f_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_h__i0__cur_f_data0; _j0++) {
            h[_i0].cur.f->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        h[_i0].cv = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].cu = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].cy = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__mv0 = 1;
          h[_i0].mv = (int *) malloc(_len_h__i0__mv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__mv0; _j0++) {
            h[_i0].mv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h__i0__pred_mode_Y0 = 1;
          h[_i0].pred_mode_Y = (int *) malloc(_len_h__i0__pred_mode_Y0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__pred_mode_Y0; _j0++) {
            h[_i0].pred_mode_Y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        h[_i0].mbidx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__top_mv0 = 1;
          h[_i0].top_mv = (int **) malloc(_len_h__i0__top_mv0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_h__i0__top_mv0; _j0++) {
            int _len_h__i0__top_mv1 = 1;
            h[_i0].top_mv[_j0] = (int *) malloc(_len_h__i0__top_mv1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_h__i0__top_mv1; _j1++) {
              h[_i0].top_mv[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = ff_cavs_next_mb(h);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].mv);
          }
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].pred_mode_Y);
          }
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(*(h[_aux].top_mv));
        free(h[_aux].top_mv);
          }
          free(h);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_h0 = 65025;
          struct TYPE_7__ * h = (struct TYPE_7__ *) malloc(_len_h0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mbx = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mb_width = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mby = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].l_stride = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].c_stride = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mb_height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__cur_f0 = 1;
          h[_i0].cur.f = (struct TYPE_5__ *) malloc(_len_h__i0__cur_f0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_h__i0__cur_f0; _j0++) {
              int _len_h__i0__cur_f_data0 = 1;
          h[_i0].cur.f->data = (long *) malloc(_len_h__i0__cur_f_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_h__i0__cur_f_data0; _j0++) {
            h[_i0].cur.f->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        h[_i0].cv = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].cu = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].cy = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__mv0 = 1;
          h[_i0].mv = (int *) malloc(_len_h__i0__mv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__mv0; _j0++) {
            h[_i0].mv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h__i0__pred_mode_Y0 = 1;
          h[_i0].pred_mode_Y = (int *) malloc(_len_h__i0__pred_mode_Y0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__pred_mode_Y0; _j0++) {
            h[_i0].pred_mode_Y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        h[_i0].mbidx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__top_mv0 = 1;
          h[_i0].top_mv = (int **) malloc(_len_h__i0__top_mv0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_h__i0__top_mv0; _j0++) {
            int _len_h__i0__top_mv1 = 1;
            h[_i0].top_mv[_j0] = (int *) malloc(_len_h__i0__top_mv1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_h__i0__top_mv1; _j1++) {
              h[_i0].top_mv[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = ff_cavs_next_mb(h);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].mv);
          }
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].pred_mode_Y);
          }
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(*(h[_aux].top_mv));
        free(h[_aux].top_mv);
          }
          free(h);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_h0 = 100;
          struct TYPE_7__ * h = (struct TYPE_7__ *) malloc(_len_h0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mbx = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mb_width = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mby = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].l_stride = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].c_stride = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mb_height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__cur_f0 = 1;
          h[_i0].cur.f = (struct TYPE_5__ *) malloc(_len_h__i0__cur_f0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_h__i0__cur_f0; _j0++) {
              int _len_h__i0__cur_f_data0 = 1;
          h[_i0].cur.f->data = (long *) malloc(_len_h__i0__cur_f_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_h__i0__cur_f_data0; _j0++) {
            h[_i0].cur.f->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        h[_i0].cv = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].cu = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].cy = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__mv0 = 1;
          h[_i0].mv = (int *) malloc(_len_h__i0__mv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__mv0; _j0++) {
            h[_i0].mv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h__i0__pred_mode_Y0 = 1;
          h[_i0].pred_mode_Y = (int *) malloc(_len_h__i0__pred_mode_Y0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__pred_mode_Y0; _j0++) {
            h[_i0].pred_mode_Y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        h[_i0].mbidx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__top_mv0 = 1;
          h[_i0].top_mv = (int **) malloc(_len_h__i0__top_mv0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_h__i0__top_mv0; _j0++) {
            int _len_h__i0__top_mv1 = 1;
            h[_i0].top_mv[_j0] = (int *) malloc(_len_h__i0__top_mv1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_h__i0__top_mv1; _j1++) {
              h[_i0].top_mv[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = ff_cavs_next_mb(h);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].mv);
          }
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].pred_mode_Y);
          }
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(*(h[_aux].top_mv));
        free(h[_aux].top_mv);
          }
          free(h);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
