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
struct vgic_irq {void* owner; int config; int line_level; } ;

/* Variables and functions */
#define  VGIC_CONFIG_EDGE 129 
#define  VGIC_CONFIG_LEVEL 128 

__attribute__((used)) static bool vgic_validate_injection(struct vgic_irq *irq, bool level, void *owner)
{
	if (irq->owner != owner)
		return false;

	switch (irq->config) {
	case VGIC_CONFIG_LEVEL:
		return irq->line_level != level;
	case VGIC_CONFIG_EDGE:
		return level;
	}

	return false;
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
          int level = 100;
          int _len_irq0 = 1;
          struct vgic_irq * irq = (struct vgic_irq *) malloc(_len_irq0*sizeof(struct vgic_irq));
          for(int _i0 = 0; _i0 < _len_irq0; _i0++) {
            irq[_i0].config = ((-2 * (next_i()%2)) + 1) * next_i();
        irq[_i0].line_level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * owner;
          int benchRet = vgic_validate_injection(irq,level,owner);
          printf("%d\n", benchRet); 
          free(irq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int level = 255;
          int _len_irq0 = 65025;
          struct vgic_irq * irq = (struct vgic_irq *) malloc(_len_irq0*sizeof(struct vgic_irq));
          for(int _i0 = 0; _i0 < _len_irq0; _i0++) {
            irq[_i0].config = ((-2 * (next_i()%2)) + 1) * next_i();
        irq[_i0].line_level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * owner;
          int benchRet = vgic_validate_injection(irq,level,owner);
          printf("%d\n", benchRet); 
          free(irq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int level = 10;
          int _len_irq0 = 100;
          struct vgic_irq * irq = (struct vgic_irq *) malloc(_len_irq0*sizeof(struct vgic_irq));
          for(int _i0 = 0; _i0 < _len_irq0; _i0++) {
            irq[_i0].config = ((-2 * (next_i()%2)) + 1) * next_i();
        irq[_i0].line_level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * owner;
          int benchRet = vgic_validate_injection(irq,level,owner);
          printf("%d\n", benchRet); 
          free(irq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
