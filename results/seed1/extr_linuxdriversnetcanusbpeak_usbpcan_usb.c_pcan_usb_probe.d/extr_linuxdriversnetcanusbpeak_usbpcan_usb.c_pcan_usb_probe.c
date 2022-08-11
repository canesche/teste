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
struct usb_interface {struct usb_host_interface* altsetting; } ;
struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;

/* Variables and functions */
 int ENODEV ; 
#define  PCAN_USB_EP_CMDIN 131 
#define  PCAN_USB_EP_CMDOUT 130 
#define  PCAN_USB_EP_MSGIN 129 
#define  PCAN_USB_EP_MSGOUT 128 

__attribute__((used)) static int pcan_usb_probe(struct usb_interface *intf)
{
	struct usb_host_interface *if_desc;
	int i;

	if_desc = intf->altsetting;

	/* check interface endpoint addresses */
	for (i = 0; i < if_desc->desc.bNumEndpoints; i++) {
		struct usb_endpoint_descriptor *ep = &if_desc->endpoint[i].desc;

		switch (ep->bEndpointAddress) {
		case PCAN_USB_EP_CMDOUT:
		case PCAN_USB_EP_CMDIN:
		case PCAN_USB_EP_MSGOUT:
		case PCAN_USB_EP_MSGIN:
			break;
		default:
			return -ENODEV;
		}
	}

	return 0;
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
          int _len_intf0 = 1;
          struct usb_interface * intf = (struct usb_interface *) malloc(_len_intf0*sizeof(struct usb_interface));
          for(int _i0 = 0; _i0 < _len_intf0; _i0++) {
              int _len_intf__i0__altsetting0 = 1;
          intf[_i0].altsetting = (struct usb_host_interface *) malloc(_len_intf__i0__altsetting0*sizeof(struct usb_host_interface));
          for(int _j0 = 0; _j0 < _len_intf__i0__altsetting0; _j0++) {
              int _len_intf__i0__altsetting_endpoint0 = 1;
          intf[_i0].altsetting->endpoint = (struct TYPE_4__ *) malloc(_len_intf__i0__altsetting_endpoint0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_intf__i0__altsetting_endpoint0; _j0++) {
            intf[_i0].altsetting->endpoint->desc.bEndpointAddress = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        intf[_i0].altsetting->desc.bNumEndpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pcan_usb_probe(intf);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_intf0; _aux++) {
          free(intf[_aux].altsetting);
          }
          free(intf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_intf0 = 65025;
          struct usb_interface * intf = (struct usb_interface *) malloc(_len_intf0*sizeof(struct usb_interface));
          for(int _i0 = 0; _i0 < _len_intf0; _i0++) {
              int _len_intf__i0__altsetting0 = 1;
          intf[_i0].altsetting = (struct usb_host_interface *) malloc(_len_intf__i0__altsetting0*sizeof(struct usb_host_interface));
          for(int _j0 = 0; _j0 < _len_intf__i0__altsetting0; _j0++) {
              int _len_intf__i0__altsetting_endpoint0 = 1;
          intf[_i0].altsetting->endpoint = (struct TYPE_4__ *) malloc(_len_intf__i0__altsetting_endpoint0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_intf__i0__altsetting_endpoint0; _j0++) {
            intf[_i0].altsetting->endpoint->desc.bEndpointAddress = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        intf[_i0].altsetting->desc.bNumEndpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pcan_usb_probe(intf);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_intf0; _aux++) {
          free(intf[_aux].altsetting);
          }
          free(intf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_intf0 = 100;
          struct usb_interface * intf = (struct usb_interface *) malloc(_len_intf0*sizeof(struct usb_interface));
          for(int _i0 = 0; _i0 < _len_intf0; _i0++) {
              int _len_intf__i0__altsetting0 = 1;
          intf[_i0].altsetting = (struct usb_host_interface *) malloc(_len_intf__i0__altsetting0*sizeof(struct usb_host_interface));
          for(int _j0 = 0; _j0 < _len_intf__i0__altsetting0; _j0++) {
              int _len_intf__i0__altsetting_endpoint0 = 1;
          intf[_i0].altsetting->endpoint = (struct TYPE_4__ *) malloc(_len_intf__i0__altsetting_endpoint0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_intf__i0__altsetting_endpoint0; _j0++) {
            intf[_i0].altsetting->endpoint->desc.bEndpointAddress = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        intf[_i0].altsetting->desc.bNumEndpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pcan_usb_probe(intf);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_intf0; _aux++) {
          free(intf[_aux].altsetting);
          }
          free(intf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
