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
typedef  int uint64_t ;
typedef  int u64 ;
typedef  int u32 ;
struct TYPE_2__ {scalar_t__ virtual_cfg_space; } ;
struct intel_vgpu {TYPE_1__ cfg_space; } ;

/* Variables and functions */
 int PCI_BASE_ADDRESS_MEM_MASK ; 
#define  PCI_BASE_ADDRESS_MEM_TYPE_1M 130 
#define  PCI_BASE_ADDRESS_MEM_TYPE_32 129 
#define  PCI_BASE_ADDRESS_MEM_TYPE_64 128 
 int PCI_BASE_ADDRESS_MEM_TYPE_MASK ; 

__attribute__((used)) static uint64_t intel_vgpu_get_bar_addr(struct intel_vgpu *vgpu, int bar)
{
	u32 start_lo, start_hi;
	u32 mem_type;

	start_lo = (*(u32 *)(vgpu->cfg_space.virtual_cfg_space + bar)) &
			PCI_BASE_ADDRESS_MEM_MASK;
	mem_type = (*(u32 *)(vgpu->cfg_space.virtual_cfg_space + bar)) &
			PCI_BASE_ADDRESS_MEM_TYPE_MASK;

	switch (mem_type) {
	case PCI_BASE_ADDRESS_MEM_TYPE_64:
		start_hi = (*(u32 *)(vgpu->cfg_space.virtual_cfg_space
						+ bar + 4));
		break;
	case PCI_BASE_ADDRESS_MEM_TYPE_32:
	case PCI_BASE_ADDRESS_MEM_TYPE_1M:
		/* 1M mem BAR treated as 32-bit BAR */
	default:
		/* mem unknown type treated as 32-bit BAR */
		start_hi = 0;
		break;
	}

	return ((u64)start_hi << 32) | start_lo;
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
          int bar = 100;
          int _len_vgpu0 = 1;
          struct intel_vgpu * vgpu = (struct intel_vgpu *) malloc(_len_vgpu0*sizeof(struct intel_vgpu));
          for(int _i0 = 0; _i0 < _len_vgpu0; _i0++) {
            vgpu[_i0].cfg_space.virtual_cfg_space = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_vgpu_get_bar_addr(vgpu,bar);
          printf("%d\n", benchRet); 
          free(vgpu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bar = 255;
          int _len_vgpu0 = 65025;
          struct intel_vgpu * vgpu = (struct intel_vgpu *) malloc(_len_vgpu0*sizeof(struct intel_vgpu));
          for(int _i0 = 0; _i0 < _len_vgpu0; _i0++) {
            vgpu[_i0].cfg_space.virtual_cfg_space = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_vgpu_get_bar_addr(vgpu,bar);
          printf("%d\n", benchRet); 
          free(vgpu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bar = 10;
          int _len_vgpu0 = 100;
          struct intel_vgpu * vgpu = (struct intel_vgpu *) malloc(_len_vgpu0*sizeof(struct intel_vgpu));
          for(int _i0 = 0; _i0 < _len_vgpu0; _i0++) {
            vgpu[_i0].cfg_space.virtual_cfg_space = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_vgpu_get_bar_addr(vgpu,bar);
          printf("%d\n", benchRet); 
          free(vgpu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
