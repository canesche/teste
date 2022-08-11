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
struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {int extralen; unsigned char* extra; TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_4__ {int extralen; unsigned char* extra; } ;

/* Variables and functions */

__attribute__((used)) static int hso_get_mux_ports(struct usb_interface *intf, unsigned char *ports)
{
	int i;
	struct usb_host_interface *iface = intf->cur_altsetting;

	if (iface->extralen == 3) {
		*ports = iface->extra[2];
		return 0;
	}

	for (i = 0; i < iface->desc.bNumEndpoints; i++) {
		if (iface->endpoint[i].extralen == 3) {
			*ports = iface->endpoint[i].extra[2];
			return 0;
		}
	}

	return -1;
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
              int _len_intf__i0__cur_altsetting0 = 1;
          intf[_i0].cur_altsetting = (struct usb_host_interface *) malloc(_len_intf__i0__cur_altsetting0*sizeof(struct usb_host_interface));
          for(int _j0 = 0; _j0 < _len_intf__i0__cur_altsetting0; _j0++) {
            intf[_i0].cur_altsetting->extralen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_intf__i0__cur_altsetting_extra0 = 1;
          intf[_i0].cur_altsetting->extra = (unsigned char *) malloc(_len_intf__i0__cur_altsetting_extra0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_intf__i0__cur_altsetting_extra0; _j0++) {
            intf[_i0].cur_altsetting->extra[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intf__i0__cur_altsetting_endpoint0 = 1;
          intf[_i0].cur_altsetting->endpoint = (struct TYPE_4__ *) malloc(_len_intf__i0__cur_altsetting_endpoint0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_intf__i0__cur_altsetting_endpoint0; _j0++) {
            intf[_i0].cur_altsetting->endpoint->extralen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_intf__i0__cur_altsetting_endpoint_extra0 = 1;
          intf[_i0].cur_altsetting->endpoint->extra = (unsigned char *) malloc(_len_intf__i0__cur_altsetting_endpoint_extra0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_intf__i0__cur_altsetting_endpoint_extra0; _j0++) {
            intf[_i0].cur_altsetting->endpoint->extra[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        intf[_i0].cur_altsetting->desc.bNumEndpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ports0 = 1;
          unsigned char * ports = (unsigned char *) malloc(_len_ports0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_ports0; _i0++) {
            ports[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hso_get_mux_ports(intf,ports);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_intf0; _aux++) {
          free(intf[_aux].cur_altsetting);
          }
          free(intf);
          free(ports);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_intf0 = 65025;
          struct usb_interface * intf = (struct usb_interface *) malloc(_len_intf0*sizeof(struct usb_interface));
          for(int _i0 = 0; _i0 < _len_intf0; _i0++) {
              int _len_intf__i0__cur_altsetting0 = 1;
          intf[_i0].cur_altsetting = (struct usb_host_interface *) malloc(_len_intf__i0__cur_altsetting0*sizeof(struct usb_host_interface));
          for(int _j0 = 0; _j0 < _len_intf__i0__cur_altsetting0; _j0++) {
            intf[_i0].cur_altsetting->extralen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_intf__i0__cur_altsetting_extra0 = 1;
          intf[_i0].cur_altsetting->extra = (unsigned char *) malloc(_len_intf__i0__cur_altsetting_extra0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_intf__i0__cur_altsetting_extra0; _j0++) {
            intf[_i0].cur_altsetting->extra[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intf__i0__cur_altsetting_endpoint0 = 1;
          intf[_i0].cur_altsetting->endpoint = (struct TYPE_4__ *) malloc(_len_intf__i0__cur_altsetting_endpoint0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_intf__i0__cur_altsetting_endpoint0; _j0++) {
            intf[_i0].cur_altsetting->endpoint->extralen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_intf__i0__cur_altsetting_endpoint_extra0 = 1;
          intf[_i0].cur_altsetting->endpoint->extra = (unsigned char *) malloc(_len_intf__i0__cur_altsetting_endpoint_extra0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_intf__i0__cur_altsetting_endpoint_extra0; _j0++) {
            intf[_i0].cur_altsetting->endpoint->extra[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        intf[_i0].cur_altsetting->desc.bNumEndpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ports0 = 65025;
          unsigned char * ports = (unsigned char *) malloc(_len_ports0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_ports0; _i0++) {
            ports[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hso_get_mux_ports(intf,ports);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_intf0; _aux++) {
          free(intf[_aux].cur_altsetting);
          }
          free(intf);
          free(ports);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_intf0 = 100;
          struct usb_interface * intf = (struct usb_interface *) malloc(_len_intf0*sizeof(struct usb_interface));
          for(int _i0 = 0; _i0 < _len_intf0; _i0++) {
              int _len_intf__i0__cur_altsetting0 = 1;
          intf[_i0].cur_altsetting = (struct usb_host_interface *) malloc(_len_intf__i0__cur_altsetting0*sizeof(struct usb_host_interface));
          for(int _j0 = 0; _j0 < _len_intf__i0__cur_altsetting0; _j0++) {
            intf[_i0].cur_altsetting->extralen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_intf__i0__cur_altsetting_extra0 = 1;
          intf[_i0].cur_altsetting->extra = (unsigned char *) malloc(_len_intf__i0__cur_altsetting_extra0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_intf__i0__cur_altsetting_extra0; _j0++) {
            intf[_i0].cur_altsetting->extra[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intf__i0__cur_altsetting_endpoint0 = 1;
          intf[_i0].cur_altsetting->endpoint = (struct TYPE_4__ *) malloc(_len_intf__i0__cur_altsetting_endpoint0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_intf__i0__cur_altsetting_endpoint0; _j0++) {
            intf[_i0].cur_altsetting->endpoint->extralen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_intf__i0__cur_altsetting_endpoint_extra0 = 1;
          intf[_i0].cur_altsetting->endpoint->extra = (unsigned char *) malloc(_len_intf__i0__cur_altsetting_endpoint_extra0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_intf__i0__cur_altsetting_endpoint_extra0; _j0++) {
            intf[_i0].cur_altsetting->endpoint->extra[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        intf[_i0].cur_altsetting->desc.bNumEndpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ports0 = 100;
          unsigned char * ports = (unsigned char *) malloc(_len_ports0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_ports0; _i0++) {
            ports[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hso_get_mux_ports(intf,ports);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_intf0; _aux++) {
          free(intf[_aux].cur_altsetting);
          }
          free(intf);
          free(ports);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
