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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct wa_xfer {TYPE_4__* urb; TYPE_1__* wa; } ;
struct wa_seg {TYPE_2__* dto_urb; int /*<<< orphan*/  isoc_size; } ;
struct TYPE_8__ {TYPE_3__* iso_frame_desc; scalar_t__ transfer_dma; } ;
struct TYPE_7__ {int /*<<< orphan*/  length; scalar_t__ offset; } ;
struct TYPE_6__ {int /*<<< orphan*/  transfer_buffer_length; scalar_t__ transfer_dma; scalar_t__ num_sgs; int /*<<< orphan*/ * sg; int /*<<< orphan*/  transfer_flags; } ;
struct TYPE_5__ {int quirks; } ;

/* Variables and functions */
 int /*<<< orphan*/  URB_NO_TRANSFER_DMA_MAP ; 
 int WUSB_QUIRK_ALEREON_HWA_CONCAT_ISOC ; 

__attribute__((used)) static void __wa_populate_dto_urb_isoc(struct wa_xfer *xfer,
	struct wa_seg *seg, int curr_iso_frame)
{
	seg->dto_urb->transfer_flags |= URB_NO_TRANSFER_DMA_MAP;
	seg->dto_urb->sg = NULL;
	seg->dto_urb->num_sgs = 0;
	/* dto urb buffer address pulled from iso_frame_desc. */
	seg->dto_urb->transfer_dma = xfer->urb->transfer_dma +
		xfer->urb->iso_frame_desc[curr_iso_frame].offset;
	/* The Alereon HWA sends a single URB with all isoc segs. */
	if (xfer->wa->quirks & WUSB_QUIRK_ALEREON_HWA_CONCAT_ISOC)
		seg->dto_urb->transfer_buffer_length = seg->isoc_size;
	else
		seg->dto_urb->transfer_buffer_length =
			xfer->urb->iso_frame_desc[curr_iso_frame].length;
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
          int curr_iso_frame = 100;
          int _len_xfer0 = 1;
          struct wa_xfer * xfer = (struct wa_xfer *) malloc(_len_xfer0*sizeof(struct wa_xfer));
          for(int _i0 = 0; _i0 < _len_xfer0; _i0++) {
              int _len_xfer__i0__urb0 = 1;
          xfer[_i0].urb = (struct TYPE_8__ *) malloc(_len_xfer__i0__urb0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_xfer__i0__urb0; _j0++) {
              int _len_xfer__i0__urb_iso_frame_desc0 = 1;
          xfer[_i0].urb->iso_frame_desc = (struct TYPE_7__ *) malloc(_len_xfer__i0__urb_iso_frame_desc0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_xfer__i0__urb_iso_frame_desc0; _j0++) {
            xfer[_i0].urb->iso_frame_desc->length = ((-2 * (next_i()%2)) + 1) * next_i();
        xfer[_i0].urb->iso_frame_desc->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        xfer[_i0].urb->transfer_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xfer__i0__wa0 = 1;
          xfer[_i0].wa = (struct TYPE_5__ *) malloc(_len_xfer__i0__wa0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_xfer__i0__wa0; _j0++) {
            xfer[_i0].wa->quirks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_seg0 = 1;
          struct wa_seg * seg = (struct wa_seg *) malloc(_len_seg0*sizeof(struct wa_seg));
          for(int _i0 = 0; _i0 < _len_seg0; _i0++) {
              int _len_seg__i0__dto_urb0 = 1;
          seg[_i0].dto_urb = (struct TYPE_6__ *) malloc(_len_seg__i0__dto_urb0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_seg__i0__dto_urb0; _j0++) {
            seg[_i0].dto_urb->transfer_buffer_length = ((-2 * (next_i()%2)) + 1) * next_i();
        seg[_i0].dto_urb->transfer_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        seg[_i0].dto_urb->num_sgs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_seg__i0__dto_urb_sg0 = 1;
          seg[_i0].dto_urb->sg = (int *) malloc(_len_seg__i0__dto_urb_sg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_seg__i0__dto_urb_sg0; _j0++) {
            seg[_i0].dto_urb->sg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        seg[_i0].dto_urb->transfer_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        seg[_i0].isoc_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __wa_populate_dto_urb_isoc(xfer,seg,curr_iso_frame);
          for(int _aux = 0; _aux < _len_xfer0; _aux++) {
          free(xfer[_aux].urb);
          }
          for(int _aux = 0; _aux < _len_xfer0; _aux++) {
          free(xfer[_aux].wa);
          }
          free(xfer);
          for(int _aux = 0; _aux < _len_seg0; _aux++) {
          free(seg[_aux].dto_urb);
          }
          free(seg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int curr_iso_frame = 255;
          int _len_xfer0 = 65025;
          struct wa_xfer * xfer = (struct wa_xfer *) malloc(_len_xfer0*sizeof(struct wa_xfer));
          for(int _i0 = 0; _i0 < _len_xfer0; _i0++) {
              int _len_xfer__i0__urb0 = 1;
          xfer[_i0].urb = (struct TYPE_8__ *) malloc(_len_xfer__i0__urb0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_xfer__i0__urb0; _j0++) {
              int _len_xfer__i0__urb_iso_frame_desc0 = 1;
          xfer[_i0].urb->iso_frame_desc = (struct TYPE_7__ *) malloc(_len_xfer__i0__urb_iso_frame_desc0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_xfer__i0__urb_iso_frame_desc0; _j0++) {
            xfer[_i0].urb->iso_frame_desc->length = ((-2 * (next_i()%2)) + 1) * next_i();
        xfer[_i0].urb->iso_frame_desc->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        xfer[_i0].urb->transfer_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xfer__i0__wa0 = 1;
          xfer[_i0].wa = (struct TYPE_5__ *) malloc(_len_xfer__i0__wa0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_xfer__i0__wa0; _j0++) {
            xfer[_i0].wa->quirks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_seg0 = 65025;
          struct wa_seg * seg = (struct wa_seg *) malloc(_len_seg0*sizeof(struct wa_seg));
          for(int _i0 = 0; _i0 < _len_seg0; _i0++) {
              int _len_seg__i0__dto_urb0 = 1;
          seg[_i0].dto_urb = (struct TYPE_6__ *) malloc(_len_seg__i0__dto_urb0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_seg__i0__dto_urb0; _j0++) {
            seg[_i0].dto_urb->transfer_buffer_length = ((-2 * (next_i()%2)) + 1) * next_i();
        seg[_i0].dto_urb->transfer_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        seg[_i0].dto_urb->num_sgs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_seg__i0__dto_urb_sg0 = 1;
          seg[_i0].dto_urb->sg = (int *) malloc(_len_seg__i0__dto_urb_sg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_seg__i0__dto_urb_sg0; _j0++) {
            seg[_i0].dto_urb->sg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        seg[_i0].dto_urb->transfer_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        seg[_i0].isoc_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __wa_populate_dto_urb_isoc(xfer,seg,curr_iso_frame);
          for(int _aux = 0; _aux < _len_xfer0; _aux++) {
          free(xfer[_aux].urb);
          }
          for(int _aux = 0; _aux < _len_xfer0; _aux++) {
          free(xfer[_aux].wa);
          }
          free(xfer);
          for(int _aux = 0; _aux < _len_seg0; _aux++) {
          free(seg[_aux].dto_urb);
          }
          free(seg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int curr_iso_frame = 10;
          int _len_xfer0 = 100;
          struct wa_xfer * xfer = (struct wa_xfer *) malloc(_len_xfer0*sizeof(struct wa_xfer));
          for(int _i0 = 0; _i0 < _len_xfer0; _i0++) {
              int _len_xfer__i0__urb0 = 1;
          xfer[_i0].urb = (struct TYPE_8__ *) malloc(_len_xfer__i0__urb0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_xfer__i0__urb0; _j0++) {
              int _len_xfer__i0__urb_iso_frame_desc0 = 1;
          xfer[_i0].urb->iso_frame_desc = (struct TYPE_7__ *) malloc(_len_xfer__i0__urb_iso_frame_desc0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_xfer__i0__urb_iso_frame_desc0; _j0++) {
            xfer[_i0].urb->iso_frame_desc->length = ((-2 * (next_i()%2)) + 1) * next_i();
        xfer[_i0].urb->iso_frame_desc->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        xfer[_i0].urb->transfer_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xfer__i0__wa0 = 1;
          xfer[_i0].wa = (struct TYPE_5__ *) malloc(_len_xfer__i0__wa0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_xfer__i0__wa0; _j0++) {
            xfer[_i0].wa->quirks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_seg0 = 100;
          struct wa_seg * seg = (struct wa_seg *) malloc(_len_seg0*sizeof(struct wa_seg));
          for(int _i0 = 0; _i0 < _len_seg0; _i0++) {
              int _len_seg__i0__dto_urb0 = 1;
          seg[_i0].dto_urb = (struct TYPE_6__ *) malloc(_len_seg__i0__dto_urb0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_seg__i0__dto_urb0; _j0++) {
            seg[_i0].dto_urb->transfer_buffer_length = ((-2 * (next_i()%2)) + 1) * next_i();
        seg[_i0].dto_urb->transfer_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        seg[_i0].dto_urb->num_sgs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_seg__i0__dto_urb_sg0 = 1;
          seg[_i0].dto_urb->sg = (int *) malloc(_len_seg__i0__dto_urb_sg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_seg__i0__dto_urb_sg0; _j0++) {
            seg[_i0].dto_urb->sg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        seg[_i0].dto_urb->transfer_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        seg[_i0].isoc_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __wa_populate_dto_urb_isoc(xfer,seg,curr_iso_frame);
          for(int _aux = 0; _aux < _len_xfer0; _aux++) {
          free(xfer[_aux].urb);
          }
          for(int _aux = 0; _aux < _len_xfer0; _aux++) {
          free(xfer[_aux].wa);
          }
          free(xfer);
          for(int _aux = 0; _aux < _len_seg0; _aux++) {
          free(seg[_aux].dto_urb);
          }
          free(seg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
