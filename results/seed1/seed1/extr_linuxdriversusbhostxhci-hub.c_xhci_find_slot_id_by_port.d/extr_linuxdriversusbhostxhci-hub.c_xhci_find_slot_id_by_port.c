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
typedef  scalar_t__ u16 ;
struct xhci_hcd {TYPE_2__** devs; } ;
struct usb_hcd {scalar_t__ speed; } ;
typedef  enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_4__ {scalar_t__ fake_port; TYPE_1__* udev; } ;
struct TYPE_3__ {int speed; } ;

/* Variables and functions */
 scalar_t__ HCD_USB3 ; 
 int MAX_HC_SLOTS ; 
 int USB_SPEED_SUPER ; 

int xhci_find_slot_id_by_port(struct usb_hcd *hcd, struct xhci_hcd *xhci,
		u16 port)
{
	int slot_id;
	int i;
	enum usb_device_speed speed;

	slot_id = 0;
	for (i = 0; i < MAX_HC_SLOTS; i++) {
		if (!xhci->devs[i] || !xhci->devs[i]->udev)
			continue;
		speed = xhci->devs[i]->udev->speed;
		if (((speed >= USB_SPEED_SUPER) == (hcd->speed >= HCD_USB3))
				&& xhci->devs[i]->fake_port == port) {
			slot_id = i;
			break;
		}
	}

	return slot_id;
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
          long port = 100;
          int _len_hcd0 = 1;
          struct usb_hcd * hcd = (struct usb_hcd *) malloc(_len_hcd0*sizeof(struct usb_hcd));
          for(int _i0 = 0; _i0 < _len_hcd0; _i0++) {
            hcd[_i0].speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xhci0 = 1;
          struct xhci_hcd * xhci = (struct xhci_hcd *) malloc(_len_xhci0*sizeof(struct xhci_hcd));
          for(int _i0 = 0; _i0 < _len_xhci0; _i0++) {
              int _len_xhci__i0__devs0 = 1;
          xhci[_i0].devs = (struct TYPE_4__ **) malloc(_len_xhci__i0__devs0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_xhci__i0__devs0; _j0++) {
            int _len_xhci__i0__devs1 = 1;
            xhci[_i0].devs[_j0] = (struct TYPE_4__ *) malloc(_len_xhci__i0__devs1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_xhci__i0__devs1; _j1++) {
              xhci[_i0].devs[_j0]->fake_port = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xhci__i0__devs__j0__udev0 = 1;
          xhci[_i0].devs[_j0]->udev = (struct TYPE_3__ *) malloc(_len_xhci__i0__devs__j0__udev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_xhci__i0__devs__j0__udev0; _j0++) {
            xhci[_i0].devs[_j0]->udev->speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = xhci_find_slot_id_by_port(hcd,xhci,port);
          printf("%d\n", benchRet); 
          free(hcd);
          for(int _aux = 0; _aux < _len_xhci0; _aux++) {
          free(*(xhci[_aux].devs));
        free(xhci[_aux].devs);
          }
          free(xhci);
        
        break;
    }
    // big-arr
    case 1:
    {
          long port = 255;
          int _len_hcd0 = 65025;
          struct usb_hcd * hcd = (struct usb_hcd *) malloc(_len_hcd0*sizeof(struct usb_hcd));
          for(int _i0 = 0; _i0 < _len_hcd0; _i0++) {
            hcd[_i0].speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xhci0 = 65025;
          struct xhci_hcd * xhci = (struct xhci_hcd *) malloc(_len_xhci0*sizeof(struct xhci_hcd));
          for(int _i0 = 0; _i0 < _len_xhci0; _i0++) {
              int _len_xhci__i0__devs0 = 1;
          xhci[_i0].devs = (struct TYPE_4__ **) malloc(_len_xhci__i0__devs0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_xhci__i0__devs0; _j0++) {
            int _len_xhci__i0__devs1 = 1;
            xhci[_i0].devs[_j0] = (struct TYPE_4__ *) malloc(_len_xhci__i0__devs1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_xhci__i0__devs1; _j1++) {
              xhci[_i0].devs[_j0]->fake_port = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xhci__i0__devs__j0__udev0 = 1;
          xhci[_i0].devs[_j0]->udev = (struct TYPE_3__ *) malloc(_len_xhci__i0__devs__j0__udev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_xhci__i0__devs__j0__udev0; _j0++) {
            xhci[_i0].devs[_j0]->udev->speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = xhci_find_slot_id_by_port(hcd,xhci,port);
          printf("%d\n", benchRet); 
          free(hcd);
          for(int _aux = 0; _aux < _len_xhci0; _aux++) {
          free(*(xhci[_aux].devs));
        free(xhci[_aux].devs);
          }
          free(xhci);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long port = 10;
          int _len_hcd0 = 100;
          struct usb_hcd * hcd = (struct usb_hcd *) malloc(_len_hcd0*sizeof(struct usb_hcd));
          for(int _i0 = 0; _i0 < _len_hcd0; _i0++) {
            hcd[_i0].speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xhci0 = 100;
          struct xhci_hcd * xhci = (struct xhci_hcd *) malloc(_len_xhci0*sizeof(struct xhci_hcd));
          for(int _i0 = 0; _i0 < _len_xhci0; _i0++) {
              int _len_xhci__i0__devs0 = 1;
          xhci[_i0].devs = (struct TYPE_4__ **) malloc(_len_xhci__i0__devs0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_xhci__i0__devs0; _j0++) {
            int _len_xhci__i0__devs1 = 1;
            xhci[_i0].devs[_j0] = (struct TYPE_4__ *) malloc(_len_xhci__i0__devs1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_xhci__i0__devs1; _j1++) {
              xhci[_i0].devs[_j0]->fake_port = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xhci__i0__devs__j0__udev0 = 1;
          xhci[_i0].devs[_j0]->udev = (struct TYPE_3__ *) malloc(_len_xhci__i0__devs__j0__udev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_xhci__i0__devs__j0__udev0; _j0++) {
            xhci[_i0].devs[_j0]->udev->speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = xhci_find_slot_id_by_port(hcd,xhci,port);
          printf("%d\n", benchRet); 
          free(hcd);
          for(int _aux = 0; _aux < _len_xhci0; _aux++) {
          free(*(xhci[_aux].devs));
        free(xhci[_aux].devs);
          }
          free(xhci);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
