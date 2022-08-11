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
struct TYPE_7__ {TYPE_2__* DPB; } ;
struct TYPE_6__ {TYPE_1__* f; } ;
struct TYPE_5__ {int /*<<< orphan*/ * buf; } ;
typedef  TYPE_3__ H264Context ;

/* Variables and functions */
 int AVERROR_INVALIDDATA ; 
 int H264_MAX_PICTURE_COUNT ; 

__attribute__((used)) static int find_unused_picture(H264Context *h)
{
    int i;

    for (i = 0; i < H264_MAX_PICTURE_COUNT; i++) {
        if (!h->DPB[i].f->buf[0])
            return i;
    }
    return AVERROR_INVALIDDATA;
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
              int _len_h__i0__DPB0 = 1;
          h[_i0].DPB = (struct TYPE_6__ *) malloc(_len_h__i0__DPB0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_h__i0__DPB0; _j0++) {
              int _len_h__i0__DPB_f0 = 1;
          h[_i0].DPB->f = (struct TYPE_5__ *) malloc(_len_h__i0__DPB_f0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_h__i0__DPB_f0; _j0++) {
              int _len_h__i0__DPB_f_buf0 = 1;
          h[_i0].DPB->f->buf = (int *) malloc(_len_h__i0__DPB_f_buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__DPB_f_buf0; _j0++) {
            h[_i0].DPB->f->buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = find_unused_picture(h);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].DPB);
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
              int _len_h__i0__DPB0 = 1;
          h[_i0].DPB = (struct TYPE_6__ *) malloc(_len_h__i0__DPB0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_h__i0__DPB0; _j0++) {
              int _len_h__i0__DPB_f0 = 1;
          h[_i0].DPB->f = (struct TYPE_5__ *) malloc(_len_h__i0__DPB_f0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_h__i0__DPB_f0; _j0++) {
              int _len_h__i0__DPB_f_buf0 = 1;
          h[_i0].DPB->f->buf = (int *) malloc(_len_h__i0__DPB_f_buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__DPB_f_buf0; _j0++) {
            h[_i0].DPB->f->buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = find_unused_picture(h);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].DPB);
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
              int _len_h__i0__DPB0 = 1;
          h[_i0].DPB = (struct TYPE_6__ *) malloc(_len_h__i0__DPB0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_h__i0__DPB0; _j0++) {
              int _len_h__i0__DPB_f0 = 1;
          h[_i0].DPB->f = (struct TYPE_5__ *) malloc(_len_h__i0__DPB_f0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_h__i0__DPB_f0; _j0++) {
              int _len_h__i0__DPB_f_buf0 = 1;
          h[_i0].DPB->f->buf = (int *) malloc(_len_h__i0__DPB_f_buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__DPB_f_buf0; _j0++) {
            h[_i0].DPB->f->buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = find_unused_picture(h);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].DPB);
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
