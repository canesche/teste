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
struct TYPE_2__ {unsigned int domain; int /*<<< orphan*/  node; } ;
struct pcifront_sd {struct pcifront_device* pdev; TYPE_1__ sd; } ;
struct pcifront_device {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  first_online_node ; 

__attribute__((used)) static inline void pcifront_init_sd(struct pcifront_sd *sd,
				    unsigned int domain, unsigned int bus,
				    struct pcifront_device *pdev)
{
	/* Because we do not expose that information via XenBus. */
	sd->sd.node = first_online_node;
	sd->sd.domain = domain;
	sd->pdev = pdev;
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
          unsigned int domain = 100;
          unsigned int bus = 100;
          int _len_sd0 = 1;
          struct pcifront_sd * sd = (struct pcifront_sd *) malloc(_len_sd0*sizeof(struct pcifront_sd));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
              int _len_sd__i0__pdev0 = 1;
          sd[_i0].pdev = (struct pcifront_device *) malloc(_len_sd__i0__pdev0*sizeof(struct pcifront_device));
          for(int _j0 = 0; _j0 < _len_sd__i0__pdev0; _j0++) {
            sd[_i0].pdev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sd[_i0].sd.domain = ((-2 * (next_i()%2)) + 1) * next_i();
        sd[_i0].sd.node = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdev0 = 1;
          struct pcifront_device * pdev = (struct pcifront_device *) malloc(_len_pdev0*sizeof(struct pcifront_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pcifront_init_sd(sd,domain,bus,pdev);
          for(int _aux = 0; _aux < _len_sd0; _aux++) {
          free(sd[_aux].pdev);
          }
          free(sd);
          free(pdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int domain = 255;
          unsigned int bus = 255;
          int _len_sd0 = 65025;
          struct pcifront_sd * sd = (struct pcifront_sd *) malloc(_len_sd0*sizeof(struct pcifront_sd));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
              int _len_sd__i0__pdev0 = 1;
          sd[_i0].pdev = (struct pcifront_device *) malloc(_len_sd__i0__pdev0*sizeof(struct pcifront_device));
          for(int _j0 = 0; _j0 < _len_sd__i0__pdev0; _j0++) {
            sd[_i0].pdev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sd[_i0].sd.domain = ((-2 * (next_i()%2)) + 1) * next_i();
        sd[_i0].sd.node = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdev0 = 65025;
          struct pcifront_device * pdev = (struct pcifront_device *) malloc(_len_pdev0*sizeof(struct pcifront_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pcifront_init_sd(sd,domain,bus,pdev);
          for(int _aux = 0; _aux < _len_sd0; _aux++) {
          free(sd[_aux].pdev);
          }
          free(sd);
          free(pdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int domain = 10;
          unsigned int bus = 10;
          int _len_sd0 = 100;
          struct pcifront_sd * sd = (struct pcifront_sd *) malloc(_len_sd0*sizeof(struct pcifront_sd));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
              int _len_sd__i0__pdev0 = 1;
          sd[_i0].pdev = (struct pcifront_device *) malloc(_len_sd__i0__pdev0*sizeof(struct pcifront_device));
          for(int _j0 = 0; _j0 < _len_sd__i0__pdev0; _j0++) {
            sd[_i0].pdev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sd[_i0].sd.domain = ((-2 * (next_i()%2)) + 1) * next_i();
        sd[_i0].sd.node = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdev0 = 100;
          struct pcifront_device * pdev = (struct pcifront_device *) malloc(_len_pdev0*sizeof(struct pcifront_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pcifront_init_sd(sd,domain,bus,pdev);
          for(int _aux = 0; _aux < _len_sd0; _aux++) {
          free(sd[_aux].pdev);
          }
          free(sd);
          free(pdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
