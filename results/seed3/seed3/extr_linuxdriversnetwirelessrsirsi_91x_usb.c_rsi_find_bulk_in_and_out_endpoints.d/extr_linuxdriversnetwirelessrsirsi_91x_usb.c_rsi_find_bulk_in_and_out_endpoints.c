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
struct usb_endpoint_descriptor {int bEndpointAddress; int bmAttributes; void* wMaxPacketSize; } ;
struct rsi_hw {scalar_t__ rsi_dev; } ;
struct rsi_91x_usbdev {int* bulkin_endpoint_addr; int* bulkout_endpoint_addr; void** bulkout_size; void** bulkin_size; } ;
typedef  void* __le16 ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;

/* Variables and functions */
 int EINVAL ; 
 int MAX_BULK_EP ; 
 int USB_DIR_IN ; 
 int USB_ENDPOINT_XFERTYPE_MASK ; 
 int USB_ENDPOINT_XFER_BULK ; 

__attribute__((used)) static int rsi_find_bulk_in_and_out_endpoints(struct usb_interface *interface,
					      struct rsi_hw *adapter)
{
	struct rsi_91x_usbdev *dev = (struct rsi_91x_usbdev *)adapter->rsi_dev;
	struct usb_host_interface *iface_desc;
	struct usb_endpoint_descriptor *endpoint;
	__le16 buffer_size;
	int ii, bin_found = 0, bout_found = 0;

	iface_desc = &(interface->altsetting[0]);

	for (ii = 0; ii < iface_desc->desc.bNumEndpoints; ++ii) {
		endpoint = &(iface_desc->endpoint[ii].desc);

		if (!dev->bulkin_endpoint_addr[bin_found] &&
		    (endpoint->bEndpointAddress & USB_DIR_IN) &&
		    ((endpoint->bmAttributes & USB_ENDPOINT_XFERTYPE_MASK) ==
		    USB_ENDPOINT_XFER_BULK)) {
			buffer_size = endpoint->wMaxPacketSize;
			dev->bulkin_size[bin_found] = buffer_size;
			dev->bulkin_endpoint_addr[bin_found] =
				endpoint->bEndpointAddress;
			bin_found++;
		}

		if (!dev->bulkout_endpoint_addr[bout_found] &&
		    !(endpoint->bEndpointAddress & USB_DIR_IN) &&
		    ((endpoint->bmAttributes & USB_ENDPOINT_XFERTYPE_MASK) ==
		    USB_ENDPOINT_XFER_BULK)) {
			buffer_size = endpoint->wMaxPacketSize;
			dev->bulkout_endpoint_addr[bout_found] =
				endpoint->bEndpointAddress;
			dev->bulkout_size[bout_found] = buffer_size;
			bout_found++;
		}

		if (bin_found >= MAX_BULK_EP || bout_found >= MAX_BULK_EP)
			break;
	}

	if (!(dev->bulkin_endpoint_addr[0]) &&
	    dev->bulkout_endpoint_addr[0])
		return -EINVAL;

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
          int _len_interface0 = 1;
          struct usb_interface * interface = (struct usb_interface *) malloc(_len_interface0*sizeof(struct usb_interface));
          for(int _i0 = 0; _i0 < _len_interface0; _i0++) {
              int _len_interface__i0__altsetting0 = 1;
          interface[_i0].altsetting = (struct usb_host_interface *) malloc(_len_interface__i0__altsetting0*sizeof(struct usb_host_interface));
          for(int _j0 = 0; _j0 < _len_interface__i0__altsetting0; _j0++) {
              int _len_interface__i0__altsetting_endpoint0 = 1;
          interface[_i0].altsetting->endpoint = (struct TYPE_4__ *) malloc(_len_interface__i0__altsetting_endpoint0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_interface__i0__altsetting_endpoint0; _j0++) {
            interface[_i0].altsetting->endpoint->desc.bEndpointAddress = ((-2 * (next_i()%2)) + 1) * next_i();
        interface[_i0].altsetting->endpoint->desc.bmAttributes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        interface[_i0].altsetting->desc.bNumEndpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_adapter0 = 1;
          struct rsi_hw * adapter = (struct rsi_hw *) malloc(_len_adapter0*sizeof(struct rsi_hw));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].rsi_dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rsi_find_bulk_in_and_out_endpoints(interface,adapter);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_interface0; _aux++) {
          free(interface[_aux].altsetting);
          }
          free(interface);
          free(adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_interface0 = 65025;
          struct usb_interface * interface = (struct usb_interface *) malloc(_len_interface0*sizeof(struct usb_interface));
          for(int _i0 = 0; _i0 < _len_interface0; _i0++) {
              int _len_interface__i0__altsetting0 = 1;
          interface[_i0].altsetting = (struct usb_host_interface *) malloc(_len_interface__i0__altsetting0*sizeof(struct usb_host_interface));
          for(int _j0 = 0; _j0 < _len_interface__i0__altsetting0; _j0++) {
              int _len_interface__i0__altsetting_endpoint0 = 1;
          interface[_i0].altsetting->endpoint = (struct TYPE_4__ *) malloc(_len_interface__i0__altsetting_endpoint0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_interface__i0__altsetting_endpoint0; _j0++) {
            interface[_i0].altsetting->endpoint->desc.bEndpointAddress = ((-2 * (next_i()%2)) + 1) * next_i();
        interface[_i0].altsetting->endpoint->desc.bmAttributes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        interface[_i0].altsetting->desc.bNumEndpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_adapter0 = 65025;
          struct rsi_hw * adapter = (struct rsi_hw *) malloc(_len_adapter0*sizeof(struct rsi_hw));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].rsi_dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rsi_find_bulk_in_and_out_endpoints(interface,adapter);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_interface0; _aux++) {
          free(interface[_aux].altsetting);
          }
          free(interface);
          free(adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_interface0 = 100;
          struct usb_interface * interface = (struct usb_interface *) malloc(_len_interface0*sizeof(struct usb_interface));
          for(int _i0 = 0; _i0 < _len_interface0; _i0++) {
              int _len_interface__i0__altsetting0 = 1;
          interface[_i0].altsetting = (struct usb_host_interface *) malloc(_len_interface__i0__altsetting0*sizeof(struct usb_host_interface));
          for(int _j0 = 0; _j0 < _len_interface__i0__altsetting0; _j0++) {
              int _len_interface__i0__altsetting_endpoint0 = 1;
          interface[_i0].altsetting->endpoint = (struct TYPE_4__ *) malloc(_len_interface__i0__altsetting_endpoint0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_interface__i0__altsetting_endpoint0; _j0++) {
            interface[_i0].altsetting->endpoint->desc.bEndpointAddress = ((-2 * (next_i()%2)) + 1) * next_i();
        interface[_i0].altsetting->endpoint->desc.bmAttributes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        interface[_i0].altsetting->desc.bNumEndpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_adapter0 = 100;
          struct rsi_hw * adapter = (struct rsi_hw *) malloc(_len_adapter0*sizeof(struct rsi_hw));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].rsi_dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rsi_find_bulk_in_and_out_endpoints(interface,adapter);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_interface0; _aux++) {
          free(interface[_aux].altsetting);
          }
          free(interface);
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
