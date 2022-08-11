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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int /*<<< orphan*/  address_length; int /*<<< orphan*/  minimum; } ;
struct TYPE_5__ {int /*<<< orphan*/ * interrupts; } ;
struct TYPE_6__ {TYPE_3__ io; TYPE_1__ irq; } ;
struct acpi_resource {int type; TYPE_2__ data; } ;
typedef  int /*<<< orphan*/  acpi_status ;
struct TYPE_8__ {int /*<<< orphan*/  io_base; int /*<<< orphan*/  irq; int /*<<< orphan*/  io_length; } ;

/* Variables and functions */
#define  ACPI_RESOURCE_TYPE_END_TAG 130 
#define  ACPI_RESOURCE_TYPE_IO 129 
#define  ACPI_RESOURCE_TYPE_IRQ 128 
 int /*<<< orphan*/  AE_ERROR ; 
 int /*<<< orphan*/  AE_NOT_FOUND ; 
 int /*<<< orphan*/  AE_OK ; 
 TYPE_4__ fujitsu ; 

__attribute__((used)) static acpi_status fujitsu_walk_resources(struct acpi_resource *res, void *data)
{
	switch (res->type) {
	case ACPI_RESOURCE_TYPE_IRQ:
		fujitsu.irq = res->data.irq.interrupts[0];
		return AE_OK;

	case ACPI_RESOURCE_TYPE_IO:
		fujitsu.io_base = res->data.io.minimum;
		fujitsu.io_length = res->data.io.address_length;
		return AE_OK;

	case ACPI_RESOURCE_TYPE_END_TAG:
		if (fujitsu.irq && fujitsu.io_base)
			return AE_OK;
		else
			return AE_NOT_FOUND;

	default:
		return AE_ERROR;
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
          int _len_res0 = 1;
          struct acpi_resource * res = (struct acpi_resource *) malloc(_len_res0*sizeof(struct acpi_resource));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        res[_i0].data.io.address_length = ((-2 * (next_i()%2)) + 1) * next_i();
        res[_i0].data.io.minimum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_res__i0__data_irq_interrupts0 = 1;
          res[_i0].data.irq.interrupts = (int *) malloc(_len_res__i0__data_irq_interrupts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_res__i0__data_irq_interrupts0; _j0++) {
            res[_i0].data.irq.interrupts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data;
          int benchRet = fujitsu_walk_resources(res,data);
          printf("%d\n", benchRet); 
          free(res);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_res0 = 65025;
          struct acpi_resource * res = (struct acpi_resource *) malloc(_len_res0*sizeof(struct acpi_resource));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        res[_i0].data.io.address_length = ((-2 * (next_i()%2)) + 1) * next_i();
        res[_i0].data.io.minimum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_res__i0__data_irq_interrupts0 = 1;
          res[_i0].data.irq.interrupts = (int *) malloc(_len_res__i0__data_irq_interrupts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_res__i0__data_irq_interrupts0; _j0++) {
            res[_i0].data.irq.interrupts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data;
          int benchRet = fujitsu_walk_resources(res,data);
          printf("%d\n", benchRet); 
          free(res);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_res0 = 100;
          struct acpi_resource * res = (struct acpi_resource *) malloc(_len_res0*sizeof(struct acpi_resource));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        res[_i0].data.io.address_length = ((-2 * (next_i()%2)) + 1) * next_i();
        res[_i0].data.io.minimum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_res__i0__data_irq_interrupts0 = 1;
          res[_i0].data.irq.interrupts = (int *) malloc(_len_res__i0__data_irq_interrupts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_res__i0__data_irq_interrupts0; _j0++) {
            res[_i0].data.irq.interrupts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data;
          int benchRet = fujitsu_walk_resources(res,data);
          printf("%d\n", benchRet); 
          free(res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
