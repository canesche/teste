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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct urb {unsigned int number_of_packets; TYPE_1__* iso_frame_desc; scalar_t__ actual_length; } ;
struct TYPE_2__ {scalar_t__ actual_length; } ;

/* Variables and functions */

__attribute__((used)) static void compute_isochronous_actual_length(struct urb *urb)
{
	unsigned int i;

	if (urb->number_of_packets > 0) {
		urb->actual_length = 0;
		for (i = 0; i < urb->number_of_packets; i++)
			urb->actual_length +=
					urb->iso_frame_desc[i].actual_length;
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
          int _len_urb0 = 1;
          struct urb * urb = (struct urb *) malloc(_len_urb0*sizeof(struct urb));
          for(int _i0 = 0; _i0 < _len_urb0; _i0++) {
            urb[_i0].number_of_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_urb__i0__iso_frame_desc0 = 1;
          urb[_i0].iso_frame_desc = (struct TYPE_2__ *) malloc(_len_urb__i0__iso_frame_desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_urb__i0__iso_frame_desc0; _j0++) {
            urb[_i0].iso_frame_desc->actual_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        urb[_i0].actual_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          compute_isochronous_actual_length(urb);
          for(int _aux = 0; _aux < _len_urb0; _aux++) {
          free(urb[_aux].iso_frame_desc);
          }
          free(urb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_urb0 = 65025;
          struct urb * urb = (struct urb *) malloc(_len_urb0*sizeof(struct urb));
          for(int _i0 = 0; _i0 < _len_urb0; _i0++) {
            urb[_i0].number_of_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_urb__i0__iso_frame_desc0 = 1;
          urb[_i0].iso_frame_desc = (struct TYPE_2__ *) malloc(_len_urb__i0__iso_frame_desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_urb__i0__iso_frame_desc0; _j0++) {
            urb[_i0].iso_frame_desc->actual_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        urb[_i0].actual_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          compute_isochronous_actual_length(urb);
          for(int _aux = 0; _aux < _len_urb0; _aux++) {
          free(urb[_aux].iso_frame_desc);
          }
          free(urb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_urb0 = 100;
          struct urb * urb = (struct urb *) malloc(_len_urb0*sizeof(struct urb));
          for(int _i0 = 0; _i0 < _len_urb0; _i0++) {
            urb[_i0].number_of_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_urb__i0__iso_frame_desc0 = 1;
          urb[_i0].iso_frame_desc = (struct TYPE_2__ *) malloc(_len_urb__i0__iso_frame_desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_urb__i0__iso_frame_desc0; _j0++) {
            urb[_i0].iso_frame_desc->actual_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        urb[_i0].actual_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          compute_isochronous_actual_length(urb);
          for(int _aux = 0; _aux < _len_urb0; _aux++) {
          free(urb[_aux].iso_frame_desc);
          }
          free(urb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
