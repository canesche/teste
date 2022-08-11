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
struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct TYPE_4__ {TYPE_1__* endpoint; } ;
struct TYPE_3__ {struct usb_endpoint_descriptor desc; } ;

/* Variables and functions */

__attribute__((used)) static inline
struct usb_endpoint_descriptor *usb_get_epd(struct usb_interface *iface, int ep)
{
	return &iface->cur_altsetting->endpoint[ep].desc;
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
          int ep = 100;
          int _len_iface0 = 1;
          struct usb_interface * iface = (struct usb_interface *) malloc(_len_iface0*sizeof(struct usb_interface));
          for(int _i0 = 0; _i0 < _len_iface0; _i0++) {
              int _len_iface__i0__cur_altsetting0 = 1;
          iface[_i0].cur_altsetting = (struct TYPE_4__ *) malloc(_len_iface__i0__cur_altsetting0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iface__i0__cur_altsetting0; _j0++) {
              int _len_iface__i0__cur_altsetting_endpoint0 = 1;
          iface[_i0].cur_altsetting->endpoint = (struct TYPE_3__ *) malloc(_len_iface__i0__cur_altsetting_endpoint0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iface__i0__cur_altsetting_endpoint0; _j0++) {
            iface[_i0].cur_altsetting->endpoint->desc.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct usb_endpoint_descriptor * benchRet = usb_get_epd(iface,ep);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_iface0; _aux++) {
          free(iface[_aux].cur_altsetting);
          }
          free(iface);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ep = 255;
          int _len_iface0 = 65025;
          struct usb_interface * iface = (struct usb_interface *) malloc(_len_iface0*sizeof(struct usb_interface));
          for(int _i0 = 0; _i0 < _len_iface0; _i0++) {
              int _len_iface__i0__cur_altsetting0 = 1;
          iface[_i0].cur_altsetting = (struct TYPE_4__ *) malloc(_len_iface__i0__cur_altsetting0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iface__i0__cur_altsetting0; _j0++) {
              int _len_iface__i0__cur_altsetting_endpoint0 = 1;
          iface[_i0].cur_altsetting->endpoint = (struct TYPE_3__ *) malloc(_len_iface__i0__cur_altsetting_endpoint0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iface__i0__cur_altsetting_endpoint0; _j0++) {
            iface[_i0].cur_altsetting->endpoint->desc.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct usb_endpoint_descriptor * benchRet = usb_get_epd(iface,ep);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_iface0; _aux++) {
          free(iface[_aux].cur_altsetting);
          }
          free(iface);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ep = 10;
          int _len_iface0 = 100;
          struct usb_interface * iface = (struct usb_interface *) malloc(_len_iface0*sizeof(struct usb_interface));
          for(int _i0 = 0; _i0 < _len_iface0; _i0++) {
              int _len_iface__i0__cur_altsetting0 = 1;
          iface[_i0].cur_altsetting = (struct TYPE_4__ *) malloc(_len_iface__i0__cur_altsetting0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iface__i0__cur_altsetting0; _j0++) {
              int _len_iface__i0__cur_altsetting_endpoint0 = 1;
          iface[_i0].cur_altsetting->endpoint = (struct TYPE_3__ *) malloc(_len_iface__i0__cur_altsetting_endpoint0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iface__i0__cur_altsetting_endpoint0; _j0++) {
            iface[_i0].cur_altsetting->endpoint->desc.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct usb_endpoint_descriptor * benchRet = usb_get_epd(iface,ep);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_iface0; _aux++) {
          free(iface[_aux].cur_altsetting);
          }
          free(iface);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
