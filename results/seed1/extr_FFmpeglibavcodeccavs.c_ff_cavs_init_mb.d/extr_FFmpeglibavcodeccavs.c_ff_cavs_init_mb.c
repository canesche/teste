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
struct TYPE_3__ {int mbx; int flags; int mb_width; void** mv; int /*<<< orphan*/ * pred_mode_Y; int /*<<< orphan*/ * top_pred_Y; void*** top_mv; } ;
typedef  TYPE_1__ AVSContext ;

/* Variables and functions */
 int B_AVAIL ; 
 int C_AVAIL ; 
 int D_AVAIL ; 
 int MV_BWD_B2 ; 
 size_t MV_BWD_B3 ; 
 size_t MV_BWD_C2 ; 
 size_t MV_BWD_D3 ; 
 int MV_FWD_B2 ; 
 size_t MV_FWD_B3 ; 
 size_t MV_FWD_C2 ; 
 size_t MV_FWD_D3 ; 
 int /*<<< orphan*/  NOT_AVAIL ; 
 void* un_mv ; 

void ff_cavs_init_mb(AVSContext *h)
{
    int i;

    /* copy predictors from top line (MB B and C) into cache */
    for (i = 0; i < 3; i++) {
        h->mv[MV_FWD_B2 + i] = h->top_mv[0][h->mbx * 2 + i];
        h->mv[MV_BWD_B2 + i] = h->top_mv[1][h->mbx * 2 + i];
    }
    h->pred_mode_Y[1] = h->top_pred_Y[h->mbx * 2 + 0];
    h->pred_mode_Y[2] = h->top_pred_Y[h->mbx * 2 + 1];
    /* clear top predictors if MB B is not available */
    if (!(h->flags & B_AVAIL)) {
        h->mv[MV_FWD_B2]  = un_mv;
        h->mv[MV_FWD_B3]  = un_mv;
        h->mv[MV_BWD_B2]  = un_mv;
        h->mv[MV_BWD_B3]  = un_mv;
        h->pred_mode_Y[1] = h->pred_mode_Y[2] = NOT_AVAIL;
        h->flags         &= ~(C_AVAIL | D_AVAIL);
    } else if (h->mbx) {
        h->flags |= D_AVAIL;
    }
    if (h->mbx == h->mb_width - 1) // MB C not available
        h->flags &= ~C_AVAIL;
    /* clear top-right predictors if MB C is not available */
    if (!(h->flags & C_AVAIL)) {
        h->mv[MV_FWD_C2] = un_mv;
        h->mv[MV_BWD_C2] = un_mv;
    }
    /* clear top-left predictors if MB D is not available */
    if (!(h->flags & D_AVAIL)) {
        h->mv[MV_FWD_D3] = un_mv;
        h->mv[MV_BWD_D3] = un_mv;
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
          int _len_h0 = 1;
          struct TYPE_3__ * h = (struct TYPE_3__ *) malloc(_len_h0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].mbx = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mb_width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__mv0 = 1;
          h[_i0].mv = (void **) malloc(_len_h__i0__mv0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_h__i0__mv0; _j0++) {
          }
          int _len_h__i0__pred_mode_Y0 = 1;
          h[_i0].pred_mode_Y = (int *) malloc(_len_h__i0__pred_mode_Y0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__pred_mode_Y0; _j0++) {
            h[_i0].pred_mode_Y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h__i0__top_pred_Y0 = 1;
          h[_i0].top_pred_Y = (int *) malloc(_len_h__i0__top_pred_Y0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__top_pred_Y0; _j0++) {
            h[_i0].top_pred_Y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h__i0__top_mv0 = 1;
          h[_i0].top_mv = (void ***) malloc(_len_h__i0__top_mv0*sizeof(void **));
          for(int _j0 = 0; _j0 < _len_h__i0__top_mv0; _j0++) {
            int _len_h__i0__top_mv1 = 1;
            h[_i0].top_mv[_j0] = (void **) malloc(_len_h__i0__top_mv1*sizeof(void *));
            for(int _j1 = 0; _j1 < _len_h__i0__top_mv1; _j1++) {
            }
          }
          }
          ff_cavs_init_mb(h);
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].pred_mode_Y);
          }
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].top_pred_Y);
          }
          free(h);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_h0 = 65025;
          struct TYPE_3__ * h = (struct TYPE_3__ *) malloc(_len_h0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].mbx = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mb_width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__mv0 = 1;
          h[_i0].mv = (void **) malloc(_len_h__i0__mv0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_h__i0__mv0; _j0++) {
          }
          int _len_h__i0__pred_mode_Y0 = 1;
          h[_i0].pred_mode_Y = (int *) malloc(_len_h__i0__pred_mode_Y0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__pred_mode_Y0; _j0++) {
            h[_i0].pred_mode_Y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h__i0__top_pred_Y0 = 1;
          h[_i0].top_pred_Y = (int *) malloc(_len_h__i0__top_pred_Y0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__top_pred_Y0; _j0++) {
            h[_i0].top_pred_Y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h__i0__top_mv0 = 1;
          h[_i0].top_mv = (void ***) malloc(_len_h__i0__top_mv0*sizeof(void **));
          for(int _j0 = 0; _j0 < _len_h__i0__top_mv0; _j0++) {
            int _len_h__i0__top_mv1 = 1;
            h[_i0].top_mv[_j0] = (void **) malloc(_len_h__i0__top_mv1*sizeof(void *));
            for(int _j1 = 0; _j1 < _len_h__i0__top_mv1; _j1++) {
            }
          }
          }
          ff_cavs_init_mb(h);
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].pred_mode_Y);
          }
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].top_pred_Y);
          }
          free(h);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_h0 = 100;
          struct TYPE_3__ * h = (struct TYPE_3__ *) malloc(_len_h0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].mbx = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mb_width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__mv0 = 1;
          h[_i0].mv = (void **) malloc(_len_h__i0__mv0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_h__i0__mv0; _j0++) {
          }
          int _len_h__i0__pred_mode_Y0 = 1;
          h[_i0].pred_mode_Y = (int *) malloc(_len_h__i0__pred_mode_Y0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__pred_mode_Y0; _j0++) {
            h[_i0].pred_mode_Y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h__i0__top_pred_Y0 = 1;
          h[_i0].top_pred_Y = (int *) malloc(_len_h__i0__top_pred_Y0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__top_pred_Y0; _j0++) {
            h[_i0].top_pred_Y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h__i0__top_mv0 = 1;
          h[_i0].top_mv = (void ***) malloc(_len_h__i0__top_mv0*sizeof(void **));
          for(int _j0 = 0; _j0 < _len_h__i0__top_mv0; _j0++) {
            int _len_h__i0__top_mv1 = 1;
            h[_i0].top_mv[_j0] = (void **) malloc(_len_h__i0__top_mv1*sizeof(void *));
            for(int _j1 = 0; _j1 < _len_h__i0__top_mv1; _j1++) {
            }
          }
          }
          ff_cavs_init_mb(h);
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].pred_mode_Y);
          }
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].top_pred_Y);
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
