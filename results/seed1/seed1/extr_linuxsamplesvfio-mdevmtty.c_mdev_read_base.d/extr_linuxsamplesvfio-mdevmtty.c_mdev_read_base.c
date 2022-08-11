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
typedef  int u64 ;
typedef  int u32 ;
struct mdev_state {TYPE_1__* region_info; scalar_t__ vconfig; } ;
struct TYPE_2__ {int start; int /*<<< orphan*/  size; } ;

/* Variables and functions */
 int PCI_BASE_ADDRESS_0 ; 
 int PCI_BASE_ADDRESS_MEM_MASK ; 
#define  PCI_BASE_ADDRESS_MEM_TYPE_1M 130 
#define  PCI_BASE_ADDRESS_MEM_TYPE_32 129 
#define  PCI_BASE_ADDRESS_MEM_TYPE_64 128 
 int PCI_BASE_ADDRESS_MEM_TYPE_MASK ; 
 int VFIO_PCI_BAR5_REGION_INDEX ; 

__attribute__((used)) static void mdev_read_base(struct mdev_state *mdev_state)
{
	int index, pos;
	u32 start_lo, start_hi;
	u32 mem_type;

	pos = PCI_BASE_ADDRESS_0;

	for (index = 0; index <= VFIO_PCI_BAR5_REGION_INDEX; index++) {

		if (!mdev_state->region_info[index].size)
			continue;

		start_lo = (*(u32 *)(mdev_state->vconfig + pos)) &
			PCI_BASE_ADDRESS_MEM_MASK;
		mem_type = (*(u32 *)(mdev_state->vconfig + pos)) &
			PCI_BASE_ADDRESS_MEM_TYPE_MASK;

		switch (mem_type) {
		case PCI_BASE_ADDRESS_MEM_TYPE_64:
			start_hi = (*(u32 *)(mdev_state->vconfig + pos + 4));
			pos += 4;
			break;
		case PCI_BASE_ADDRESS_MEM_TYPE_32:
		case PCI_BASE_ADDRESS_MEM_TYPE_1M:
			/* 1M mem BAR treated as 32-bit BAR */
		default:
			/* mem unknown type treated as 32-bit BAR */
			start_hi = 0;
			break;
		}
		pos += 4;
		mdev_state->region_info[index].start = ((u64)start_hi << 32) |
							start_lo;
	}
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
          int _len_mdev_state0 = 1;
          struct mdev_state * mdev_state = (struct mdev_state *) malloc(_len_mdev_state0*sizeof(struct mdev_state));
          for(int _i0 = 0; _i0 < _len_mdev_state0; _i0++) {
              int _len_mdev_state__i0__region_info0 = 1;
          mdev_state[_i0].region_info = (struct TYPE_2__ *) malloc(_len_mdev_state__i0__region_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mdev_state__i0__region_info0; _j0++) {
            mdev_state[_i0].region_info->start = ((-2 * (next_i()%2)) + 1) * next_i();
        mdev_state[_i0].region_info->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mdev_state[_i0].vconfig = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mdev_read_base(mdev_state);
          for(int _aux = 0; _aux < _len_mdev_state0; _aux++) {
          free(mdev_state[_aux].region_info);
          }
          free(mdev_state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mdev_state0 = 65025;
          struct mdev_state * mdev_state = (struct mdev_state *) malloc(_len_mdev_state0*sizeof(struct mdev_state));
          for(int _i0 = 0; _i0 < _len_mdev_state0; _i0++) {
              int _len_mdev_state__i0__region_info0 = 1;
          mdev_state[_i0].region_info = (struct TYPE_2__ *) malloc(_len_mdev_state__i0__region_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mdev_state__i0__region_info0; _j0++) {
            mdev_state[_i0].region_info->start = ((-2 * (next_i()%2)) + 1) * next_i();
        mdev_state[_i0].region_info->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mdev_state[_i0].vconfig = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mdev_read_base(mdev_state);
          for(int _aux = 0; _aux < _len_mdev_state0; _aux++) {
          free(mdev_state[_aux].region_info);
          }
          free(mdev_state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mdev_state0 = 100;
          struct mdev_state * mdev_state = (struct mdev_state *) malloc(_len_mdev_state0*sizeof(struct mdev_state));
          for(int _i0 = 0; _i0 < _len_mdev_state0; _i0++) {
              int _len_mdev_state__i0__region_info0 = 1;
          mdev_state[_i0].region_info = (struct TYPE_2__ *) malloc(_len_mdev_state__i0__region_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mdev_state__i0__region_info0; _j0++) {
            mdev_state[_i0].region_info->start = ((-2 * (next_i()%2)) + 1) * next_i();
        mdev_state[_i0].region_info->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mdev_state[_i0].vconfig = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mdev_read_base(mdev_state);
          for(int _aux = 0; _aux < _len_mdev_state0; _aux++) {
          free(mdev_state[_aux].region_info);
          }
          free(mdev_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
