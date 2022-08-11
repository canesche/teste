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
struct irq_sim {TYPE_1__* irqs; } ;
struct TYPE_2__ {int irqnum; } ;

/* Variables and functions */

int irq_sim_irqnum(struct irq_sim *sim, unsigned int offset)
{
	return sim->irqs[offset].irqnum;
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
          unsigned int offset = 100;
          int _len_sim0 = 1;
          struct irq_sim * sim = (struct irq_sim *) malloc(_len_sim0*sizeof(struct irq_sim));
          for(int _i0 = 0; _i0 < _len_sim0; _i0++) {
              int _len_sim__i0__irqs0 = 1;
          sim[_i0].irqs = (struct TYPE_2__ *) malloc(_len_sim__i0__irqs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sim__i0__irqs0; _j0++) {
            sim[_i0].irqs->irqnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = irq_sim_irqnum(sim,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sim0; _aux++) {
          free(sim[_aux].irqs);
          }
          free(sim);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int offset = 255;
          int _len_sim0 = 65025;
          struct irq_sim * sim = (struct irq_sim *) malloc(_len_sim0*sizeof(struct irq_sim));
          for(int _i0 = 0; _i0 < _len_sim0; _i0++) {
              int _len_sim__i0__irqs0 = 1;
          sim[_i0].irqs = (struct TYPE_2__ *) malloc(_len_sim__i0__irqs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sim__i0__irqs0; _j0++) {
            sim[_i0].irqs->irqnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = irq_sim_irqnum(sim,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sim0; _aux++) {
          free(sim[_aux].irqs);
          }
          free(sim);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int offset = 10;
          int _len_sim0 = 100;
          struct irq_sim * sim = (struct irq_sim *) malloc(_len_sim0*sizeof(struct irq_sim));
          for(int _i0 = 0; _i0 < _len_sim0; _i0++) {
              int _len_sim__i0__irqs0 = 1;
          sim[_i0].irqs = (struct TYPE_2__ *) malloc(_len_sim__i0__irqs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sim__i0__irqs0; _j0++) {
            sim[_i0].irqs->irqnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = irq_sim_irqnum(sim,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sim0; _aux++) {
          free(sim[_aux].irqs);
          }
          free(sim);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
