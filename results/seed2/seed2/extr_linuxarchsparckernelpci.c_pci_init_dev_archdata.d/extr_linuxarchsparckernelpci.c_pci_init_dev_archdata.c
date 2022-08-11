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
struct platform_device {int dummy; } ;
struct dev_archdata {int numa_node; struct platform_device* op; void* host_controller; void* stc; void* iommu; } ;

/* Variables and functions */

__attribute__((used)) static void pci_init_dev_archdata(struct dev_archdata *sd, void *iommu,
				  void *stc, void *host_controller,
				  struct platform_device  *op,
				  int numa_node)
{
	sd->iommu = iommu;
	sd->stc = stc;
	sd->host_controller = host_controller;
	sd->op = op;
	sd->numa_node = numa_node;
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
          int numa_node = 100;
          int _len_sd0 = 1;
          struct dev_archdata * sd = (struct dev_archdata *) malloc(_len_sd0*sizeof(struct dev_archdata));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
            sd[_i0].numa_node = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sd__i0__op0 = 1;
          sd[_i0].op = (struct platform_device *) malloc(_len_sd__i0__op0*sizeof(struct platform_device));
          for(int _j0 = 0; _j0 < _len_sd__i0__op0; _j0++) {
            sd[_i0].op->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * iommu;
          void * stc;
          void * host_controller;
          int _len_op0 = 1;
          struct platform_device * op = (struct platform_device *) malloc(_len_op0*sizeof(struct platform_device));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pci_init_dev_archdata(sd,iommu,stc,host_controller,op,numa_node);
          for(int _aux = 0; _aux < _len_sd0; _aux++) {
          free(sd[_aux].op);
          }
          free(sd);
          free(op);
        
        break;
    }
    // big-arr
    case 1:
    {
          int numa_node = 255;
          int _len_sd0 = 65025;
          struct dev_archdata * sd = (struct dev_archdata *) malloc(_len_sd0*sizeof(struct dev_archdata));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
            sd[_i0].numa_node = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sd__i0__op0 = 1;
          sd[_i0].op = (struct platform_device *) malloc(_len_sd__i0__op0*sizeof(struct platform_device));
          for(int _j0 = 0; _j0 < _len_sd__i0__op0; _j0++) {
            sd[_i0].op->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * iommu;
          void * stc;
          void * host_controller;
          int _len_op0 = 65025;
          struct platform_device * op = (struct platform_device *) malloc(_len_op0*sizeof(struct platform_device));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pci_init_dev_archdata(sd,iommu,stc,host_controller,op,numa_node);
          for(int _aux = 0; _aux < _len_sd0; _aux++) {
          free(sd[_aux].op);
          }
          free(sd);
          free(op);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int numa_node = 10;
          int _len_sd0 = 100;
          struct dev_archdata * sd = (struct dev_archdata *) malloc(_len_sd0*sizeof(struct dev_archdata));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
            sd[_i0].numa_node = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sd__i0__op0 = 1;
          sd[_i0].op = (struct platform_device *) malloc(_len_sd__i0__op0*sizeof(struct platform_device));
          for(int _j0 = 0; _j0 < _len_sd__i0__op0; _j0++) {
            sd[_i0].op->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * iommu;
          void * stc;
          void * host_controller;
          int _len_op0 = 100;
          struct platform_device * op = (struct platform_device *) malloc(_len_op0*sizeof(struct platform_device));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pci_init_dev_archdata(sd,iommu,stc,host_controller,op,numa_node);
          for(int _aux = 0; _aux < _len_sd0; _aux++) {
          free(sd[_aux].op);
          }
          free(sd);
          free(op);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
