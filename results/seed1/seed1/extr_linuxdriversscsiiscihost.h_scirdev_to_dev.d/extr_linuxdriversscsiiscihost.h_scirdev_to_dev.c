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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct isci_remote_device {TYPE_3__* isci_port; } ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* isci_host; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {struct device dev; } ;

/* Variables and functions */

__attribute__((used)) static inline struct device *scirdev_to_dev(struct isci_remote_device *idev)
{
	if (!idev || !idev->isci_port || !idev->isci_port->isci_host)
		return NULL;

	return &idev->isci_port->isci_host->pdev->dev;
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
          int _len_idev0 = 1;
          struct isci_remote_device * idev = (struct isci_remote_device *) malloc(_len_idev0*sizeof(struct isci_remote_device));
          for(int _i0 = 0; _i0 < _len_idev0; _i0++) {
              int _len_idev__i0__isci_port0 = 1;
          idev[_i0].isci_port = (struct TYPE_6__ *) malloc(_len_idev__i0__isci_port0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_idev__i0__isci_port0; _j0++) {
              int _len_idev__i0__isci_port_isci_host0 = 1;
          idev[_i0].isci_port->isci_host = (struct TYPE_5__ *) malloc(_len_idev__i0__isci_port_isci_host0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_idev__i0__isci_port_isci_host0; _j0++) {
              int _len_idev__i0__isci_port_isci_host_pdev0 = 1;
          idev[_i0].isci_port->isci_host->pdev = (struct TYPE_4__ *) malloc(_len_idev__i0__isci_port_isci_host_pdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_idev__i0__isci_port_isci_host_pdev0; _j0++) {
            idev[_i0].isci_port->isci_host->pdev->dev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct device * benchRet = scirdev_to_dev(idev);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_idev0; _aux++) {
          free(idev[_aux].isci_port);
          }
          free(idev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_idev0 = 65025;
          struct isci_remote_device * idev = (struct isci_remote_device *) malloc(_len_idev0*sizeof(struct isci_remote_device));
          for(int _i0 = 0; _i0 < _len_idev0; _i0++) {
              int _len_idev__i0__isci_port0 = 1;
          idev[_i0].isci_port = (struct TYPE_6__ *) malloc(_len_idev__i0__isci_port0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_idev__i0__isci_port0; _j0++) {
              int _len_idev__i0__isci_port_isci_host0 = 1;
          idev[_i0].isci_port->isci_host = (struct TYPE_5__ *) malloc(_len_idev__i0__isci_port_isci_host0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_idev__i0__isci_port_isci_host0; _j0++) {
              int _len_idev__i0__isci_port_isci_host_pdev0 = 1;
          idev[_i0].isci_port->isci_host->pdev = (struct TYPE_4__ *) malloc(_len_idev__i0__isci_port_isci_host_pdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_idev__i0__isci_port_isci_host_pdev0; _j0++) {
            idev[_i0].isci_port->isci_host->pdev->dev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct device * benchRet = scirdev_to_dev(idev);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_idev0; _aux++) {
          free(idev[_aux].isci_port);
          }
          free(idev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_idev0 = 100;
          struct isci_remote_device * idev = (struct isci_remote_device *) malloc(_len_idev0*sizeof(struct isci_remote_device));
          for(int _i0 = 0; _i0 < _len_idev0; _i0++) {
              int _len_idev__i0__isci_port0 = 1;
          idev[_i0].isci_port = (struct TYPE_6__ *) malloc(_len_idev__i0__isci_port0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_idev__i0__isci_port0; _j0++) {
              int _len_idev__i0__isci_port_isci_host0 = 1;
          idev[_i0].isci_port->isci_host = (struct TYPE_5__ *) malloc(_len_idev__i0__isci_port_isci_host0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_idev__i0__isci_port_isci_host0; _j0++) {
              int _len_idev__i0__isci_port_isci_host_pdev0 = 1;
          idev[_i0].isci_port->isci_host->pdev = (struct TYPE_4__ *) malloc(_len_idev__i0__isci_port_isci_host_pdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_idev__i0__isci_port_isci_host_pdev0; _j0++) {
            idev[_i0].isci_port->isci_host->pdev->dev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct device * benchRet = scirdev_to_dev(idev);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_idev0; _aux++) {
          free(idev[_aux].isci_port);
          }
          free(idev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
