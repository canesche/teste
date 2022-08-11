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
       3            linked\n\
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
struct irq_data {struct apic_chip_data* chip_data; struct irq_data* parent_data; } ;
struct apic_chip_data {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct apic_chip_data *apic_chip_data(struct irq_data *irqd)
{
	if (!irqd)
		return NULL;

	while (irqd->parent_data)
		irqd = irqd->parent_data;

	return irqd->chip_data;
}


// ------------------------------------------------------------------------- //

struct irq_data *_allocate_irqd(int length, struct irq_data *aux_irqd[]) {
  struct irq_data *walker = (struct irq_data *)malloc(sizeof(struct irq_data));

  aux_irqd[0] = walker;
  int _len_walker_chip_data0 = 1;
  walker->chip_data = (struct apic_chip_data *) malloc(_len_walker_chip_data0*sizeof(struct apic_chip_data));
  for(int _i0 = 0; _i0 < _len_walker_chip_data0; _i0++) {
    walker->chip_data.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->parent_data = NULL;

  struct irq_data *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent_data = (struct irq_data *)malloc(sizeof(struct irq_data));
    walker = walker->parent_data;
    aux_irqd[i] = walker;
  int _len_walker_chip_data0 = 1;
  walker->chip_data = (struct apic_chip_data *) malloc(_len_walker_chip_data0*sizeof(struct apic_chip_data));
  for(int _i0 = 0; _i0 < _len_walker_chip_data0; _i0++) {
    walker->chip_data.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }
    walker->parent_data = NULL;
  }

  return head;
}

void _delete_irqd(struct irq_data *aux_irqd[], int aux_irqd_size) {
  for(int i = 0; i < aux_irqd_size; i++) 
    if(aux_irqd[i])
      free(aux_irqd[i]);
}

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
          struct irq_data * aux_irqd[1];
          struct irq_data * irqd = _allocate_irqd(1, aux_irqd);
          struct apic_chip_data * benchRet = apic_chip_data(irqd);
          printf("%d\n", (*benchRet).dummy);
          _delete_irqd(aux_irqd, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct irq_data * aux_irqd[10000];
          struct irq_data * irqd = _allocate_irqd(10000, aux_irqd);
          struct apic_chip_data * benchRet = apic_chip_data(irqd);
          printf("%d\n", (*benchRet).dummy);
          _delete_irqd(aux_irqd, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
