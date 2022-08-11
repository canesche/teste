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
struct TYPE_3__ {scalar_t__ stream_revision; int mbx; void** top_pred_Y; void** pred_mode_Y; } ;
typedef  TYPE_1__ AVSContext ;

/* Variables and functions */
 void* INTRA_L_LP ; 
 void* NOT_AVAIL ; 

__attribute__((used)) static inline void set_intra_mode_default(AVSContext *h)
{
    if (h->stream_revision > 0) {
        h->pred_mode_Y[3] =  h->pred_mode_Y[6] = NOT_AVAIL;
        h->top_pred_Y[h->mbx * 2 + 0] = h->top_pred_Y[h->mbx * 2 + 1] = NOT_AVAIL;
    } else {
        h->pred_mode_Y[3] =  h->pred_mode_Y[6] = INTRA_L_LP;
        h->top_pred_Y[h->mbx * 2 + 0] = h->top_pred_Y[h->mbx * 2 + 1] = INTRA_L_LP;
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
            h[_i0].stream_revision = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mbx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__top_pred_Y0 = 1;
          h[_i0].top_pred_Y = (void **) malloc(_len_h__i0__top_pred_Y0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_h__i0__top_pred_Y0; _j0++) {
          }
          int _len_h__i0__pred_mode_Y0 = 1;
          h[_i0].pred_mode_Y = (void **) malloc(_len_h__i0__pred_mode_Y0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_h__i0__pred_mode_Y0; _j0++) {
          }
          }
          set_intra_mode_default(h);
          free(h);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_h0 = 65025;
          struct TYPE_3__ * h = (struct TYPE_3__ *) malloc(_len_h0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].stream_revision = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mbx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__top_pred_Y0 = 1;
          h[_i0].top_pred_Y = (void **) malloc(_len_h__i0__top_pred_Y0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_h__i0__top_pred_Y0; _j0++) {
          }
          int _len_h__i0__pred_mode_Y0 = 1;
          h[_i0].pred_mode_Y = (void **) malloc(_len_h__i0__pred_mode_Y0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_h__i0__pred_mode_Y0; _j0++) {
          }
          }
          set_intra_mode_default(h);
          free(h);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_h0 = 100;
          struct TYPE_3__ * h = (struct TYPE_3__ *) malloc(_len_h0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].stream_revision = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].mbx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__top_pred_Y0 = 1;
          h[_i0].top_pred_Y = (void **) malloc(_len_h__i0__top_pred_Y0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_h__i0__top_pred_Y0; _j0++) {
          }
          int _len_h__i0__pred_mode_Y0 = 1;
          h[_i0].pred_mode_Y = (void **) malloc(_len_h__i0__pred_mode_Y0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_h__i0__pred_mode_Y0; _j0++) {
          }
          }
          set_intra_mode_default(h);
          free(h);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
