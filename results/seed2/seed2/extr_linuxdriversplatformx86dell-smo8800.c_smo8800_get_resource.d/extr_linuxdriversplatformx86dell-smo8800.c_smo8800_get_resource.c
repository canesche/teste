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
typedef  int /*<<< orphan*/  u32 ;
struct acpi_resource_extended_irq {int /*<<< orphan*/ * interrupts; int /*<<< orphan*/  interrupt_count; } ;
struct TYPE_2__ {struct acpi_resource_extended_irq extended_irq; } ;
struct acpi_resource {scalar_t__ type; TYPE_1__ data; } ;
typedef  int /*<<< orphan*/  acpi_status ;

/* Variables and functions */
 scalar_t__ ACPI_RESOURCE_TYPE_EXTENDED_IRQ ; 
 int /*<<< orphan*/  AE_CTRL_TERMINATE ; 
 int /*<<< orphan*/  AE_OK ; 

__attribute__((used)) static acpi_status smo8800_get_resource(struct acpi_resource *resource,
					void *context)
{
	struct acpi_resource_extended_irq *irq;

	if (resource->type != ACPI_RESOURCE_TYPE_EXTENDED_IRQ)
		return AE_OK;

	irq = &resource->data.extended_irq;
	if (!irq || !irq->interrupt_count)
		return AE_OK;

	*((u32 *)context) = irq->interrupts[0];
	return AE_CTRL_TERMINATE;
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
          int _len_resource0 = 1;
          struct acpi_resource * resource = (struct acpi_resource *) malloc(_len_resource0*sizeof(struct acpi_resource));
          for(int _i0 = 0; _i0 < _len_resource0; _i0++) {
            resource[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resource__i0__data_extended_irq_interrupts0 = 1;
          resource[_i0].data.extended_irq.interrupts = (int *) malloc(_len_resource__i0__data_extended_irq_interrupts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_resource__i0__data_extended_irq_interrupts0; _j0++) {
            resource[_i0].data.extended_irq.interrupts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        resource[_i0].data.extended_irq.interrupt_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * context;
          int benchRet = smo8800_get_resource(resource,context);
          printf("%d\n", benchRet); 
          free(resource);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_resource0 = 65025;
          struct acpi_resource * resource = (struct acpi_resource *) malloc(_len_resource0*sizeof(struct acpi_resource));
          for(int _i0 = 0; _i0 < _len_resource0; _i0++) {
            resource[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resource__i0__data_extended_irq_interrupts0 = 1;
          resource[_i0].data.extended_irq.interrupts = (int *) malloc(_len_resource__i0__data_extended_irq_interrupts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_resource__i0__data_extended_irq_interrupts0; _j0++) {
            resource[_i0].data.extended_irq.interrupts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        resource[_i0].data.extended_irq.interrupt_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * context;
          int benchRet = smo8800_get_resource(resource,context);
          printf("%d\n", benchRet); 
          free(resource);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_resource0 = 100;
          struct acpi_resource * resource = (struct acpi_resource *) malloc(_len_resource0*sizeof(struct acpi_resource));
          for(int _i0 = 0; _i0 < _len_resource0; _i0++) {
            resource[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resource__i0__data_extended_irq_interrupts0 = 1;
          resource[_i0].data.extended_irq.interrupts = (int *) malloc(_len_resource__i0__data_extended_irq_interrupts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_resource__i0__data_extended_irq_interrupts0; _j0++) {
            resource[_i0].data.extended_irq.interrupts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        resource[_i0].data.extended_irq.interrupt_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * context;
          int benchRet = smo8800_get_resource(resource,context);
          printf("%d\n", benchRet); 
          free(resource);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
