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
struct usb_serial_endpoints {int /*<<< orphan*/ * bulk_out; } ;
struct usb_serial {TYPE_1__* type; } ;
struct TYPE_2__ {int num_ports; } ;

/* Variables and functions */

__attribute__((used)) static int clie_5_calc_num_ports(struct usb_serial *serial,
					struct usb_serial_endpoints *epds)
{
	/*
	 * TH55 registers 2 ports.
	 * Communication in from the UX50/TH55 uses the first bulk-in
	 * endpoint, while communication out to the UX50/TH55 uses the second
	 * bulk-out endpoint.
	 */

	/*
	 * FIXME: Should we swap the descriptors instead of using the same
	 *        bulk-out endpoint for both ports?
	 */
	epds->bulk_out[0] = epds->bulk_out[1];

	return serial->type->num_ports;
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
          int _len_serial0 = 1;
          struct usb_serial * serial = (struct usb_serial *) malloc(_len_serial0*sizeof(struct usb_serial));
          for(int _i0 = 0; _i0 < _len_serial0; _i0++) {
              int _len_serial__i0__type0 = 1;
          serial[_i0].type = (struct TYPE_2__ *) malloc(_len_serial__i0__type0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_serial__i0__type0; _j0++) {
            serial[_i0].type->num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_epds0 = 1;
          struct usb_serial_endpoints * epds = (struct usb_serial_endpoints *) malloc(_len_epds0*sizeof(struct usb_serial_endpoints));
          for(int _i0 = 0; _i0 < _len_epds0; _i0++) {
              int _len_epds__i0__bulk_out0 = 1;
          epds[_i0].bulk_out = (int *) malloc(_len_epds__i0__bulk_out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_epds__i0__bulk_out0; _j0++) {
            epds[_i0].bulk_out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = clie_5_calc_num_ports(serial,epds);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_serial0; _aux++) {
          free(serial[_aux].type);
          }
          free(serial);
          for(int _aux = 0; _aux < _len_epds0; _aux++) {
          free(epds[_aux].bulk_out);
          }
          free(epds);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_serial0 = 65025;
          struct usb_serial * serial = (struct usb_serial *) malloc(_len_serial0*sizeof(struct usb_serial));
          for(int _i0 = 0; _i0 < _len_serial0; _i0++) {
              int _len_serial__i0__type0 = 1;
          serial[_i0].type = (struct TYPE_2__ *) malloc(_len_serial__i0__type0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_serial__i0__type0; _j0++) {
            serial[_i0].type->num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_epds0 = 65025;
          struct usb_serial_endpoints * epds = (struct usb_serial_endpoints *) malloc(_len_epds0*sizeof(struct usb_serial_endpoints));
          for(int _i0 = 0; _i0 < _len_epds0; _i0++) {
              int _len_epds__i0__bulk_out0 = 1;
          epds[_i0].bulk_out = (int *) malloc(_len_epds__i0__bulk_out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_epds__i0__bulk_out0; _j0++) {
            epds[_i0].bulk_out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = clie_5_calc_num_ports(serial,epds);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_serial0; _aux++) {
          free(serial[_aux].type);
          }
          free(serial);
          for(int _aux = 0; _aux < _len_epds0; _aux++) {
          free(epds[_aux].bulk_out);
          }
          free(epds);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_serial0 = 100;
          struct usb_serial * serial = (struct usb_serial *) malloc(_len_serial0*sizeof(struct usb_serial));
          for(int _i0 = 0; _i0 < _len_serial0; _i0++) {
              int _len_serial__i0__type0 = 1;
          serial[_i0].type = (struct TYPE_2__ *) malloc(_len_serial__i0__type0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_serial__i0__type0; _j0++) {
            serial[_i0].type->num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_epds0 = 100;
          struct usb_serial_endpoints * epds = (struct usb_serial_endpoints *) malloc(_len_epds0*sizeof(struct usb_serial_endpoints));
          for(int _i0 = 0; _i0 < _len_epds0; _i0++) {
              int _len_epds__i0__bulk_out0 = 1;
          epds[_i0].bulk_out = (int *) malloc(_len_epds__i0__bulk_out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_epds__i0__bulk_out0; _j0++) {
            epds[_i0].bulk_out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = clie_5_calc_num_ports(serial,epds);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_serial0; _aux++) {
          free(serial[_aux].type);
          }
          free(serial);
          for(int _aux = 0; _aux < _len_epds0; _aux++) {
          free(epds[_aux].bulk_out);
          }
          free(epds);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
