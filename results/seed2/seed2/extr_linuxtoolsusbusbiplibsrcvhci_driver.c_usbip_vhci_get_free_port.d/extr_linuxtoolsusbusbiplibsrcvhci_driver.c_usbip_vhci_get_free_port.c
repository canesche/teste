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
typedef  int uint32_t ;
struct TYPE_4__ {int nports; TYPE_1__* idev; } ;
struct TYPE_3__ {scalar_t__ status; int port; int /*<<< orphan*/  hub; } ;

/* Variables and functions */
 int /*<<< orphan*/  HUB_SPEED_HIGH ; 
 int /*<<< orphan*/  HUB_SPEED_SUPER ; 
#define  USB_SPEED_SUPER 128 
 scalar_t__ VDEV_ST_NULL ; 
 TYPE_2__* vhci_driver ; 

int usbip_vhci_get_free_port(uint32_t speed)
{
	for (int i = 0; i < vhci_driver->nports; i++) {

		switch (speed) {
		case	USB_SPEED_SUPER:
			if (vhci_driver->idev[i].hub != HUB_SPEED_SUPER)
				continue;
		break;
		default:
			if (vhci_driver->idev[i].hub != HUB_SPEED_HIGH)
				continue;
		break;
		}

		if (vhci_driver->idev[i].status == VDEV_ST_NULL)
			return vhci_driver->idev[i].port;
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
          int speed = 100;
          int benchRet = usbip_vhci_get_free_port(speed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int speed = 255;
          int benchRet = usbip_vhci_get_free_port(speed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int speed = 10;
          int benchRet = usbip_vhci_get_free_port(speed);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
