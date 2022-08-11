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
struct ocrdma_eq {size_t vector; } ;
struct TYPE_5__ {int* vector_list; } ;
struct TYPE_6__ {scalar_t__ intr_mode; TYPE_2__ msix; TYPE_1__* pdev; } ;
struct ocrdma_dev {TYPE_3__ nic_info; } ;
struct TYPE_4__ {int irq; } ;

/* Variables and functions */
 scalar_t__ BE_INTERRUPT_MODE_INTX ; 

int ocrdma_get_irq(struct ocrdma_dev *dev, struct ocrdma_eq *eq)
{
	int irq;

	if (dev->nic_info.intr_mode == BE_INTERRUPT_MODE_INTX)
		irq = dev->nic_info.pdev->irq;
	else
		irq = dev->nic_info.msix.vector_list[eq->vector];
	return irq;
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
          struct ocrdma_dev * dev = (struct ocrdma_dev *) malloc(_len_dev0*sizeof(struct ocrdma_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].nic_info.intr_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__nic_info_msix_vector_list0 = 1;
          dev[_i0].nic_info.msix.vector_list = (int *) malloc(_len_dev__i0__nic_info_msix_vector_list0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__nic_info_msix_vector_list0; _j0++) {
            dev[_i0].nic_info.msix.vector_list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__nic_info_pdev0 = 1;
          dev[_i0].nic_info.pdev = (struct TYPE_4__ *) malloc(_len_dev__i0__nic_info_pdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__nic_info_pdev0; _j0++) {
            dev[_i0].nic_info.pdev->irq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_eq0 = 1;
          struct ocrdma_eq * eq = (struct ocrdma_eq *) malloc(_len_eq0*sizeof(struct ocrdma_eq));
          for(int _i0 = 0; _i0 < _len_eq0; _i0++) {
            eq[_i0].vector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ocrdma_get_irq(dev,eq);
          printf("%d\n", benchRet); 
          free(dev);
          free(eq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct ocrdma_dev * dev = (struct ocrdma_dev *) malloc(_len_dev0*sizeof(struct ocrdma_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].nic_info.intr_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__nic_info_msix_vector_list0 = 1;
          dev[_i0].nic_info.msix.vector_list = (int *) malloc(_len_dev__i0__nic_info_msix_vector_list0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__nic_info_msix_vector_list0; _j0++) {
            dev[_i0].nic_info.msix.vector_list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__nic_info_pdev0 = 1;
          dev[_i0].nic_info.pdev = (struct TYPE_4__ *) malloc(_len_dev__i0__nic_info_pdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__nic_info_pdev0; _j0++) {
            dev[_i0].nic_info.pdev->irq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_eq0 = 65025;
          struct ocrdma_eq * eq = (struct ocrdma_eq *) malloc(_len_eq0*sizeof(struct ocrdma_eq));
          for(int _i0 = 0; _i0 < _len_eq0; _i0++) {
            eq[_i0].vector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ocrdma_get_irq(dev,eq);
          printf("%d\n", benchRet); 
          free(dev);
          free(eq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct ocrdma_dev * dev = (struct ocrdma_dev *) malloc(_len_dev0*sizeof(struct ocrdma_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].nic_info.intr_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__nic_info_msix_vector_list0 = 1;
          dev[_i0].nic_info.msix.vector_list = (int *) malloc(_len_dev__i0__nic_info_msix_vector_list0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__nic_info_msix_vector_list0; _j0++) {
            dev[_i0].nic_info.msix.vector_list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__nic_info_pdev0 = 1;
          dev[_i0].nic_info.pdev = (struct TYPE_4__ *) malloc(_len_dev__i0__nic_info_pdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__nic_info_pdev0; _j0++) {
            dev[_i0].nic_info.pdev->irq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_eq0 = 100;
          struct ocrdma_eq * eq = (struct ocrdma_eq *) malloc(_len_eq0*sizeof(struct ocrdma_eq));
          for(int _i0 = 0; _i0 < _len_eq0; _i0++) {
            eq[_i0].vector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ocrdma_get_irq(dev,eq);
          printf("%d\n", benchRet); 
          free(dev);
          free(eq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
