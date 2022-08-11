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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {TYPE_1__* private_ref; } ;
struct TYPE_8__ {scalar_t__ hwaccel_priv; } ;
struct TYPE_7__ {int idx; } ;
struct TYPE_6__ {scalar_t__ data; } ;
typedef  TYPE_2__ NVDECFrame ;
typedef  TYPE_3__ FrameDecodeData ;
typedef  TYPE_4__ AVFrame ;

/* Variables and functions */

int ff_nvdec_get_ref_idx(AVFrame *frame)
{
    FrameDecodeData *fdd;
    NVDECFrame *cf;

    if (!frame || !frame->private_ref)
        return -1;

    fdd = (FrameDecodeData*)frame->private_ref->data;
    cf  = (NVDECFrame*)fdd->hwaccel_priv;
    if (!cf)
        return -1;

    return cf->idx;
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
          int _len_frame0 = 1;
          struct TYPE_9__ * frame = (struct TYPE_9__ *) malloc(_len_frame0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
              int _len_frame__i0__private_ref0 = 1;
          frame[_i0].private_ref = (struct TYPE_6__ *) malloc(_len_frame__i0__private_ref0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_frame__i0__private_ref0; _j0++) {
            frame[_i0].private_ref->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ff_nvdec_get_ref_idx(frame);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].private_ref);
          }
          free(frame);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_frame0 = 65025;
          struct TYPE_9__ * frame = (struct TYPE_9__ *) malloc(_len_frame0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
              int _len_frame__i0__private_ref0 = 1;
          frame[_i0].private_ref = (struct TYPE_6__ *) malloc(_len_frame__i0__private_ref0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_frame__i0__private_ref0; _j0++) {
            frame[_i0].private_ref->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ff_nvdec_get_ref_idx(frame);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].private_ref);
          }
          free(frame);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_frame0 = 100;
          struct TYPE_9__ * frame = (struct TYPE_9__ *) malloc(_len_frame0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
              int _len_frame__i0__private_ref0 = 1;
          frame[_i0].private_ref = (struct TYPE_6__ *) malloc(_len_frame__i0__private_ref0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_frame__i0__private_ref0; _j0++) {
            frame[_i0].private_ref->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ff_nvdec_get_ref_idx(frame);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].private_ref);
          }
          free(frame);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
