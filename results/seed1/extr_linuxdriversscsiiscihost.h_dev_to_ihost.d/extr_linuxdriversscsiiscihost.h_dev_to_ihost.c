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
struct isci_host {int dummy; } ;
struct domain_device {TYPE_2__* port; } ;
struct TYPE_4__ {TYPE_1__* ha; } ;
struct TYPE_3__ {struct isci_host* lldd_ha; } ;

/* Variables and functions */

__attribute__((used)) static inline struct isci_host *dev_to_ihost(struct domain_device *dev)
{
	return dev->port->ha->lldd_ha;
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
          int _len_dev0 = 1;
          struct domain_device * dev = (struct domain_device *) malloc(_len_dev0*sizeof(struct domain_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__port0 = 1;
          dev[_i0].port = (struct TYPE_4__ *) malloc(_len_dev__i0__port0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__port0; _j0++) {
              int _len_dev__i0__port_ha0 = 1;
          dev[_i0].port->ha = (struct TYPE_3__ *) malloc(_len_dev__i0__port_ha0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__port_ha0; _j0++) {
              int _len_dev__i0__port_ha_lldd_ha0 = 1;
          dev[_i0].port->ha->lldd_ha = (struct isci_host *) malloc(_len_dev__i0__port_ha_lldd_ha0*sizeof(struct isci_host));
          for(int _j0 = 0; _j0 < _len_dev__i0__port_ha_lldd_ha0; _j0++) {
            dev[_i0].port->ha->lldd_ha->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct isci_host * benchRet = dev_to_ihost(dev);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].port);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct domain_device * dev = (struct domain_device *) malloc(_len_dev0*sizeof(struct domain_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__port0 = 1;
          dev[_i0].port = (struct TYPE_4__ *) malloc(_len_dev__i0__port0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__port0; _j0++) {
              int _len_dev__i0__port_ha0 = 1;
          dev[_i0].port->ha = (struct TYPE_3__ *) malloc(_len_dev__i0__port_ha0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__port_ha0; _j0++) {
              int _len_dev__i0__port_ha_lldd_ha0 = 1;
          dev[_i0].port->ha->lldd_ha = (struct isci_host *) malloc(_len_dev__i0__port_ha_lldd_ha0*sizeof(struct isci_host));
          for(int _j0 = 0; _j0 < _len_dev__i0__port_ha_lldd_ha0; _j0++) {
            dev[_i0].port->ha->lldd_ha->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct isci_host * benchRet = dev_to_ihost(dev);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].port);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct domain_device * dev = (struct domain_device *) malloc(_len_dev0*sizeof(struct domain_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__port0 = 1;
          dev[_i0].port = (struct TYPE_4__ *) malloc(_len_dev__i0__port0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__port0; _j0++) {
              int _len_dev__i0__port_ha0 = 1;
          dev[_i0].port->ha = (struct TYPE_3__ *) malloc(_len_dev__i0__port_ha0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__port_ha0; _j0++) {
              int _len_dev__i0__port_ha_lldd_ha0 = 1;
          dev[_i0].port->ha->lldd_ha = (struct isci_host *) malloc(_len_dev__i0__port_ha_lldd_ha0*sizeof(struct isci_host));
          for(int _j0 = 0; _j0 < _len_dev__i0__port_ha_lldd_ha0; _j0++) {
            dev[_i0].port->ha->lldd_ha->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct isci_host * benchRet = dev_to_ihost(dev);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].port);
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
