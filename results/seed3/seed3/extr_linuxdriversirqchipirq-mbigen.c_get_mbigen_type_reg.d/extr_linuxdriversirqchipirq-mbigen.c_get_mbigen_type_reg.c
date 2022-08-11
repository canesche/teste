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
typedef  int u32 ;
typedef  int irq_hw_number_t ;

/* Variables and functions */
 int IRQS_PER_MBIGEN_NODE ; 
 unsigned int MBIGEN_NODE_OFFSET ; 
 int REG_MBIGEN_TYPE_OFFSET ; 
 scalar_t__ RESERVED_IRQ_PER_MBIGEN_CHIP ; 

__attribute__((used)) static inline void get_mbigen_type_reg(irq_hw_number_t hwirq,
					u32 *mask, u32 *addr)
{
	unsigned int nid, irq_ofst, ofst;

	hwirq -= RESERVED_IRQ_PER_MBIGEN_CHIP;
	nid = hwirq / IRQS_PER_MBIGEN_NODE + 1;
	irq_ofst = hwirq % IRQS_PER_MBIGEN_NODE;

	*mask = 1 << (irq_ofst % 32);
	ofst = irq_ofst / 32 * 4;

	*addr = ofst + nid * MBIGEN_NODE_OFFSET
		+ REG_MBIGEN_TYPE_OFFSET;
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
          int hwirq = 100;
          int _len_mask0 = 1;
          int * mask = (int *) malloc(_len_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr0 = 1;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_mbigen_type_reg(hwirq,mask,addr);
          free(mask);
          free(addr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int hwirq = 255;
          int _len_mask0 = 65025;
          int * mask = (int *) malloc(_len_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr0 = 65025;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_mbigen_type_reg(hwirq,mask,addr);
          free(mask);
          free(addr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hwirq = 10;
          int _len_mask0 = 100;
          int * mask = (int *) malloc(_len_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr0 = 100;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_mbigen_type_reg(hwirq,mask,addr);
          free(mask);
          free(addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
