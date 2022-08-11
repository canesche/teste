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
struct kvm_coalesced_mmio_ring {int first; int last; } ;
struct kvm_coalesced_mmio_dev {TYPE_1__* kvm; } ;
struct TYPE_2__ {struct kvm_coalesced_mmio_ring* coalesced_mmio_ring; } ;

/* Variables and functions */
 int KVM_COALESCED_MMIO_MAX ; 

__attribute__((used)) static int coalesced_mmio_has_room(struct kvm_coalesced_mmio_dev *dev)
{
	struct kvm_coalesced_mmio_ring *ring;
	unsigned avail;

	/* Are we able to batch it ? */

	/* last is the first free entry
	 * check if we don't meet the first used entry
	 * there is always one unused entry in the buffer
	 */
	ring = dev->kvm->coalesced_mmio_ring;
	avail = (ring->first - ring->last - 1) % KVM_COALESCED_MMIO_MAX;
	if (avail == 0) {
		/* full */
		return 0;
	}

	return 1;
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
          struct kvm_coalesced_mmio_dev * dev = (struct kvm_coalesced_mmio_dev *) malloc(_len_dev0*sizeof(struct kvm_coalesced_mmio_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__kvm0 = 1;
          dev[_i0].kvm = (struct TYPE_2__ *) malloc(_len_dev__i0__kvm0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__kvm0; _j0++) {
              int _len_dev__i0__kvm_coalesced_mmio_ring0 = 1;
          dev[_i0].kvm->coalesced_mmio_ring = (struct kvm_coalesced_mmio_ring *) malloc(_len_dev__i0__kvm_coalesced_mmio_ring0*sizeof(struct kvm_coalesced_mmio_ring));
          for(int _j0 = 0; _j0 < _len_dev__i0__kvm_coalesced_mmio_ring0; _j0++) {
            dev[_i0].kvm->coalesced_mmio_ring->first = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].kvm->coalesced_mmio_ring->last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = coalesced_mmio_has_room(dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].kvm);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct kvm_coalesced_mmio_dev * dev = (struct kvm_coalesced_mmio_dev *) malloc(_len_dev0*sizeof(struct kvm_coalesced_mmio_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__kvm0 = 1;
          dev[_i0].kvm = (struct TYPE_2__ *) malloc(_len_dev__i0__kvm0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__kvm0; _j0++) {
              int _len_dev__i0__kvm_coalesced_mmio_ring0 = 1;
          dev[_i0].kvm->coalesced_mmio_ring = (struct kvm_coalesced_mmio_ring *) malloc(_len_dev__i0__kvm_coalesced_mmio_ring0*sizeof(struct kvm_coalesced_mmio_ring));
          for(int _j0 = 0; _j0 < _len_dev__i0__kvm_coalesced_mmio_ring0; _j0++) {
            dev[_i0].kvm->coalesced_mmio_ring->first = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].kvm->coalesced_mmio_ring->last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = coalesced_mmio_has_room(dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].kvm);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct kvm_coalesced_mmio_dev * dev = (struct kvm_coalesced_mmio_dev *) malloc(_len_dev0*sizeof(struct kvm_coalesced_mmio_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__kvm0 = 1;
          dev[_i0].kvm = (struct TYPE_2__ *) malloc(_len_dev__i0__kvm0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__kvm0; _j0++) {
              int _len_dev__i0__kvm_coalesced_mmio_ring0 = 1;
          dev[_i0].kvm->coalesced_mmio_ring = (struct kvm_coalesced_mmio_ring *) malloc(_len_dev__i0__kvm_coalesced_mmio_ring0*sizeof(struct kvm_coalesced_mmio_ring));
          for(int _j0 = 0; _j0 < _len_dev__i0__kvm_coalesced_mmio_ring0; _j0++) {
            dev[_i0].kvm->coalesced_mmio_ring->first = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].kvm->coalesced_mmio_ring->last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = coalesced_mmio_has_room(dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].kvm);
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
