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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct wa_xfer {scalar_t__ seg_size; scalar_t__ is_inbound; TYPE_2__* wa; TYPE_1__* urb; } ;
struct usb_iso_packet_descriptor {scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_4__ {int quirks; } ;
struct TYPE_3__ {int number_of_packets; struct usb_iso_packet_descriptor* iso_frame_desc; } ;

/* Variables and functions */
 int WUSB_QUIRK_ALEREON_HWA_CONCAT_ISOC ; 

__attribute__((used)) static int __wa_seg_calculate_isoc_frame_count(struct wa_xfer *xfer,
	int isoc_frame_offset, int *total_size)
{
	int segment_size = 0, frame_count = 0;
	int index = isoc_frame_offset;
	struct usb_iso_packet_descriptor *iso_frame_desc =
		xfer->urb->iso_frame_desc;

	while ((index < xfer->urb->number_of_packets)
		&& ((segment_size + iso_frame_desc[index].length)
				<= xfer->seg_size)) {
		/*
		 * For Alereon HWA devices, only include an isoc frame in an
		 * out segment if it is physically contiguous with the previous
		 * frame.  This is required because those devices expect
		 * the isoc frames to be sent as a single USB transaction as
		 * opposed to one transaction per frame with standard HWA.
		 */
		if ((xfer->wa->quirks & WUSB_QUIRK_ALEREON_HWA_CONCAT_ISOC)
			&& (xfer->is_inbound == 0)
			&& (index > isoc_frame_offset)
			&& ((iso_frame_desc[index - 1].offset +
				iso_frame_desc[index - 1].length) !=
				iso_frame_desc[index].offset))
			break;

		/* this frame fits. count it. */
		++frame_count;
		segment_size += iso_frame_desc[index].length;

		/* move to the next isoc frame. */
		++index;
	}

	*total_size = segment_size;
	return frame_count;
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
          int isoc_frame_offset = 100;
          int _len_xfer0 = 1;
          struct wa_xfer * xfer = (struct wa_xfer *) malloc(_len_xfer0*sizeof(struct wa_xfer));
          for(int _i0 = 0; _i0 < _len_xfer0; _i0++) {
            xfer[_i0].seg_size = ((-2 * (next_i()%2)) + 1) * next_i();
        xfer[_i0].is_inbound = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xfer__i0__wa0 = 1;
          xfer[_i0].wa = (struct TYPE_4__ *) malloc(_len_xfer__i0__wa0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_xfer__i0__wa0; _j0++) {
            xfer[_i0].wa->quirks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xfer__i0__urb0 = 1;
          xfer[_i0].urb = (struct TYPE_3__ *) malloc(_len_xfer__i0__urb0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_xfer__i0__urb0; _j0++) {
            xfer[_i0].urb->number_of_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xfer__i0__urb_iso_frame_desc0 = 1;
          xfer[_i0].urb->iso_frame_desc = (struct usb_iso_packet_descriptor *) malloc(_len_xfer__i0__urb_iso_frame_desc0*sizeof(struct usb_iso_packet_descriptor));
          for(int _j0 = 0; _j0 < _len_xfer__i0__urb_iso_frame_desc0; _j0++) {
            xfer[_i0].urb->iso_frame_desc->length = ((-2 * (next_i()%2)) + 1) * next_i();
        xfer[_i0].urb->iso_frame_desc->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_total_size0 = 1;
          int * total_size = (int *) malloc(_len_total_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_total_size0; _i0++) {
            total_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __wa_seg_calculate_isoc_frame_count(xfer,isoc_frame_offset,total_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_xfer0; _aux++) {
          free(xfer[_aux].wa);
          }
          for(int _aux = 0; _aux < _len_xfer0; _aux++) {
          free(xfer[_aux].urb);
          }
          free(xfer);
          free(total_size);
        
        break;
    }
    // big-arr
    case 1:
    {
          int isoc_frame_offset = 255;
          int _len_xfer0 = 65025;
          struct wa_xfer * xfer = (struct wa_xfer *) malloc(_len_xfer0*sizeof(struct wa_xfer));
          for(int _i0 = 0; _i0 < _len_xfer0; _i0++) {
            xfer[_i0].seg_size = ((-2 * (next_i()%2)) + 1) * next_i();
        xfer[_i0].is_inbound = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xfer__i0__wa0 = 1;
          xfer[_i0].wa = (struct TYPE_4__ *) malloc(_len_xfer__i0__wa0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_xfer__i0__wa0; _j0++) {
            xfer[_i0].wa->quirks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xfer__i0__urb0 = 1;
          xfer[_i0].urb = (struct TYPE_3__ *) malloc(_len_xfer__i0__urb0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_xfer__i0__urb0; _j0++) {
            xfer[_i0].urb->number_of_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xfer__i0__urb_iso_frame_desc0 = 1;
          xfer[_i0].urb->iso_frame_desc = (struct usb_iso_packet_descriptor *) malloc(_len_xfer__i0__urb_iso_frame_desc0*sizeof(struct usb_iso_packet_descriptor));
          for(int _j0 = 0; _j0 < _len_xfer__i0__urb_iso_frame_desc0; _j0++) {
            xfer[_i0].urb->iso_frame_desc->length = ((-2 * (next_i()%2)) + 1) * next_i();
        xfer[_i0].urb->iso_frame_desc->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_total_size0 = 65025;
          int * total_size = (int *) malloc(_len_total_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_total_size0; _i0++) {
            total_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __wa_seg_calculate_isoc_frame_count(xfer,isoc_frame_offset,total_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_xfer0; _aux++) {
          free(xfer[_aux].wa);
          }
          for(int _aux = 0; _aux < _len_xfer0; _aux++) {
          free(xfer[_aux].urb);
          }
          free(xfer);
          free(total_size);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int isoc_frame_offset = 10;
          int _len_xfer0 = 100;
          struct wa_xfer * xfer = (struct wa_xfer *) malloc(_len_xfer0*sizeof(struct wa_xfer));
          for(int _i0 = 0; _i0 < _len_xfer0; _i0++) {
            xfer[_i0].seg_size = ((-2 * (next_i()%2)) + 1) * next_i();
        xfer[_i0].is_inbound = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xfer__i0__wa0 = 1;
          xfer[_i0].wa = (struct TYPE_4__ *) malloc(_len_xfer__i0__wa0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_xfer__i0__wa0; _j0++) {
            xfer[_i0].wa->quirks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xfer__i0__urb0 = 1;
          xfer[_i0].urb = (struct TYPE_3__ *) malloc(_len_xfer__i0__urb0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_xfer__i0__urb0; _j0++) {
            xfer[_i0].urb->number_of_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xfer__i0__urb_iso_frame_desc0 = 1;
          xfer[_i0].urb->iso_frame_desc = (struct usb_iso_packet_descriptor *) malloc(_len_xfer__i0__urb_iso_frame_desc0*sizeof(struct usb_iso_packet_descriptor));
          for(int _j0 = 0; _j0 < _len_xfer__i0__urb_iso_frame_desc0; _j0++) {
            xfer[_i0].urb->iso_frame_desc->length = ((-2 * (next_i()%2)) + 1) * next_i();
        xfer[_i0].urb->iso_frame_desc->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_total_size0 = 100;
          int * total_size = (int *) malloc(_len_total_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_total_size0; _i0++) {
            total_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __wa_seg_calculate_isoc_frame_count(xfer,isoc_frame_offset,total_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_xfer0; _aux++) {
          free(xfer[_aux].wa);
          }
          for(int _aux = 0; _aux < _len_xfer0; _aux++) {
          free(xfer[_aux].urb);
          }
          free(xfer);
          free(total_size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
