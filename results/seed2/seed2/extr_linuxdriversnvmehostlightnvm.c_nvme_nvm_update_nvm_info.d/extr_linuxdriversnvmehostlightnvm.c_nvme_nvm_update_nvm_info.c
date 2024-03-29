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

/* Type definitions */
struct nvme_ns {int lba_shift; int /*<<< orphan*/  ms; struct nvm_dev* ndev; } ;
struct nvm_geo {int csecs; int /*<<< orphan*/  sos; } ;
struct nvm_dev {struct nvm_geo geo; } ;

/* Variables and functions */

void nvme_nvm_update_nvm_info(struct nvme_ns *ns)
{
	struct nvm_dev *ndev = ns->ndev;
	struct nvm_geo *geo = &ndev->geo;

	geo->csecs = 1 << ns->lba_shift;
	geo->sos = ns->ms;
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
          int _len_ns0 = 1;
          struct nvme_ns * ns = (struct nvme_ns *) malloc(_len_ns0*sizeof(struct nvme_ns));
          for(int _i0 = 0; _i0 < _len_ns0; _i0++) {
            ns[_i0].lba_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        ns[_i0].ms = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ns__i0__ndev0 = 1;
          ns[_i0].ndev = (struct nvm_dev *) malloc(_len_ns__i0__ndev0*sizeof(struct nvm_dev));
          for(int _j0 = 0; _j0 < _len_ns__i0__ndev0; _j0++) {
            ns[_i0].ndev->geo.csecs = ((-2 * (next_i()%2)) + 1) * next_i();
        ns[_i0].ndev->geo.sos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          nvme_nvm_update_nvm_info(ns);
          for(int _aux = 0; _aux < _len_ns0; _aux++) {
          free(ns[_aux].ndev);
          }
          free(ns);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ns0 = 65025;
          struct nvme_ns * ns = (struct nvme_ns *) malloc(_len_ns0*sizeof(struct nvme_ns));
          for(int _i0 = 0; _i0 < _len_ns0; _i0++) {
            ns[_i0].lba_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        ns[_i0].ms = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ns__i0__ndev0 = 1;
          ns[_i0].ndev = (struct nvm_dev *) malloc(_len_ns__i0__ndev0*sizeof(struct nvm_dev));
          for(int _j0 = 0; _j0 < _len_ns__i0__ndev0; _j0++) {
            ns[_i0].ndev->geo.csecs = ((-2 * (next_i()%2)) + 1) * next_i();
        ns[_i0].ndev->geo.sos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          nvme_nvm_update_nvm_info(ns);
          for(int _aux = 0; _aux < _len_ns0; _aux++) {
          free(ns[_aux].ndev);
          }
          free(ns);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ns0 = 100;
          struct nvme_ns * ns = (struct nvme_ns *) malloc(_len_ns0*sizeof(struct nvme_ns));
          for(int _i0 = 0; _i0 < _len_ns0; _i0++) {
            ns[_i0].lba_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        ns[_i0].ms = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ns__i0__ndev0 = 1;
          ns[_i0].ndev = (struct nvm_dev *) malloc(_len_ns__i0__ndev0*sizeof(struct nvm_dev));
          for(int _j0 = 0; _j0 < _len_ns__i0__ndev0; _j0++) {
            ns[_i0].ndev->geo.csecs = ((-2 * (next_i()%2)) + 1) * next_i();
        ns[_i0].ndev->geo.sos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          nvme_nvm_update_nvm_info(ns);
          for(int _aux = 0; _aux < _len_ns0; _aux++) {
          free(ns[_aux].ndev);
          }
          free(ns);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
