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
struct usb_interface {unsigned int num_altsetting; struct usb_host_interface* altsetting; } ;
struct TYPE_8__ {unsigned int bNumEndpoints; int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_4__ desc; TYPE_3__* endpoint; } ;
struct usb_endpoint_descriptor {unsigned int bEndpointAddress; } ;
struct usb_device {TYPE_2__* actconfig; } ;
struct TYPE_7__ {struct usb_endpoint_descriptor desc; } ;
struct TYPE_5__ {unsigned int bNumInterfaces; } ;
struct TYPE_6__ {struct usb_interface** interface; TYPE_1__ desc; } ;

/* Variables and functions */
 int EINVAL ; 
 int ENOENT ; 
 int ESRCH ; 
 int USB_DIR_IN ; 

__attribute__((used)) static int findintfep(struct usb_device *dev, unsigned int ep)
{
	unsigned int i, j, e;
	struct usb_interface *intf;
	struct usb_host_interface *alts;
	struct usb_endpoint_descriptor *endpt;

	if (ep & ~(USB_DIR_IN|0xf))
		return -EINVAL;
	if (!dev->actconfig)
		return -ESRCH;
	for (i = 0; i < dev->actconfig->desc.bNumInterfaces; i++) {
		intf = dev->actconfig->interface[i];
		for (j = 0; j < intf->num_altsetting; j++) {
			alts = &intf->altsetting[j];
			for (e = 0; e < alts->desc.bNumEndpoints; e++) {
				endpt = &alts->endpoint[e].desc;
				if (endpt->bEndpointAddress == ep)
					return alts->desc.bInterfaceNumber;
			}
		}
	}
	return -ENOENT;
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
          unsigned int ep = 100;
          int _len_dev0 = 1;
          struct usb_device * dev = (struct usb_device *) malloc(_len_dev0*sizeof(struct usb_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__actconfig0 = 1;
          dev[_i0].actconfig = (struct TYPE_6__ *) malloc(_len_dev__i0__actconfig0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__actconfig0; _j0++) {
              int _len_dev__i0__actconfig_interface0 = 1;
          dev[_i0].actconfig->interface = (struct usb_interface **) malloc(_len_dev__i0__actconfig_interface0*sizeof(struct usb_interface *));
          for(int _j0 = 0; _j0 < _len_dev__i0__actconfig_interface0; _j0++) {
            int _len_dev__i0__actconfig_interface1 = 1;
            dev[_i0].actconfig->interface[_j0] = (struct usb_interface *) malloc(_len_dev__i0__actconfig_interface1*sizeof(struct usb_interface));
            for(int _j1 = 0; _j1 < _len_dev__i0__actconfig_interface1; _j1++) {
              dev[_i0].actconfig->interface[_j0]->num_altsetting = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__actconfig_interface__j0__altsetting0 = 1;
          dev[_i0].actconfig->interface[_j0]->altsetting = (struct usb_host_interface *) malloc(_len_dev__i0__actconfig_interface__j0__altsetting0*sizeof(struct usb_host_interface));
          for(int _j0 = 0; _j0 < _len_dev__i0__actconfig_interface__j0__altsetting0; _j0++) {
            dev[_i0].actconfig->interface[_j0]->altsetting->desc.bNumEndpoints = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].actconfig->interface[_j0]->altsetting->desc.bInterfaceNumber = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__actconfig_interface__j0__altsetting_endpoint0 = 1;
          dev[_i0].actconfig->interface[_j0]->altsetting->endpoint = (struct TYPE_7__ *) malloc(_len_dev__i0__actconfig_interface__j0__altsetting_endpoint0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_dev__i0__actconfig_interface__j0__altsetting_endpoint0; _j0++) {
            dev[_i0].actconfig->interface[_j0]->altsetting->endpoint->desc.bEndpointAddress = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
        dev[_i0].actconfig->desc.bNumInterfaces = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = findintfep(dev,ep);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].actconfig);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int ep = 255;
          int _len_dev0 = 65025;
          struct usb_device * dev = (struct usb_device *) malloc(_len_dev0*sizeof(struct usb_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__actconfig0 = 1;
          dev[_i0].actconfig = (struct TYPE_6__ *) malloc(_len_dev__i0__actconfig0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__actconfig0; _j0++) {
              int _len_dev__i0__actconfig_interface0 = 1;
          dev[_i0].actconfig->interface = (struct usb_interface **) malloc(_len_dev__i0__actconfig_interface0*sizeof(struct usb_interface *));
          for(int _j0 = 0; _j0 < _len_dev__i0__actconfig_interface0; _j0++) {
            int _len_dev__i0__actconfig_interface1 = 1;
            dev[_i0].actconfig->interface[_j0] = (struct usb_interface *) malloc(_len_dev__i0__actconfig_interface1*sizeof(struct usb_interface));
            for(int _j1 = 0; _j1 < _len_dev__i0__actconfig_interface1; _j1++) {
              dev[_i0].actconfig->interface[_j0]->num_altsetting = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__actconfig_interface__j0__altsetting0 = 1;
          dev[_i0].actconfig->interface[_j0]->altsetting = (struct usb_host_interface *) malloc(_len_dev__i0__actconfig_interface__j0__altsetting0*sizeof(struct usb_host_interface));
          for(int _j0 = 0; _j0 < _len_dev__i0__actconfig_interface__j0__altsetting0; _j0++) {
            dev[_i0].actconfig->interface[_j0]->altsetting->desc.bNumEndpoints = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].actconfig->interface[_j0]->altsetting->desc.bInterfaceNumber = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__actconfig_interface__j0__altsetting_endpoint0 = 1;
          dev[_i0].actconfig->interface[_j0]->altsetting->endpoint = (struct TYPE_7__ *) malloc(_len_dev__i0__actconfig_interface__j0__altsetting_endpoint0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_dev__i0__actconfig_interface__j0__altsetting_endpoint0; _j0++) {
            dev[_i0].actconfig->interface[_j0]->altsetting->endpoint->desc.bEndpointAddress = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
        dev[_i0].actconfig->desc.bNumInterfaces = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = findintfep(dev,ep);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].actconfig);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int ep = 10;
          int _len_dev0 = 100;
          struct usb_device * dev = (struct usb_device *) malloc(_len_dev0*sizeof(struct usb_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__actconfig0 = 1;
          dev[_i0].actconfig = (struct TYPE_6__ *) malloc(_len_dev__i0__actconfig0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__actconfig0; _j0++) {
              int _len_dev__i0__actconfig_interface0 = 1;
          dev[_i0].actconfig->interface = (struct usb_interface **) malloc(_len_dev__i0__actconfig_interface0*sizeof(struct usb_interface *));
          for(int _j0 = 0; _j0 < _len_dev__i0__actconfig_interface0; _j0++) {
            int _len_dev__i0__actconfig_interface1 = 1;
            dev[_i0].actconfig->interface[_j0] = (struct usb_interface *) malloc(_len_dev__i0__actconfig_interface1*sizeof(struct usb_interface));
            for(int _j1 = 0; _j1 < _len_dev__i0__actconfig_interface1; _j1++) {
              dev[_i0].actconfig->interface[_j0]->num_altsetting = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__actconfig_interface__j0__altsetting0 = 1;
          dev[_i0].actconfig->interface[_j0]->altsetting = (struct usb_host_interface *) malloc(_len_dev__i0__actconfig_interface__j0__altsetting0*sizeof(struct usb_host_interface));
          for(int _j0 = 0; _j0 < _len_dev__i0__actconfig_interface__j0__altsetting0; _j0++) {
            dev[_i0].actconfig->interface[_j0]->altsetting->desc.bNumEndpoints = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].actconfig->interface[_j0]->altsetting->desc.bInterfaceNumber = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__actconfig_interface__j0__altsetting_endpoint0 = 1;
          dev[_i0].actconfig->interface[_j0]->altsetting->endpoint = (struct TYPE_7__ *) malloc(_len_dev__i0__actconfig_interface__j0__altsetting_endpoint0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_dev__i0__actconfig_interface__j0__altsetting_endpoint0; _j0++) {
            dev[_i0].actconfig->interface[_j0]->altsetting->endpoint->desc.bEndpointAddress = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
        dev[_i0].actconfig->desc.bNumInterfaces = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = findintfep(dev,ep);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].actconfig);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
