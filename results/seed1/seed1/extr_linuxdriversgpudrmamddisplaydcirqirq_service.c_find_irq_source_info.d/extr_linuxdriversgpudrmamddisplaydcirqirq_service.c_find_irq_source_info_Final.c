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
struct irq_source_info {int dummy; } ;
struct irq_service {struct irq_source_info const* info; } ;
typedef  enum dc_irq_source { ____Placeholder_dc_irq_source } dc_irq_source ;

/* Variables and functions */
 int DAL_IRQ_SOURCES_NUMBER ; 
 int DC_IRQ_SOURCE_INVALID ; 

const struct irq_source_info *find_irq_source_info(
	struct irq_service *irq_service,
	enum dc_irq_source source)
{
	if (source >= DAL_IRQ_SOURCES_NUMBER || source < DC_IRQ_SOURCE_INVALID)
		return NULL;

	return &irq_service->info[source];
}


// ------------------------------------------------------------------------- //




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
          enum dc_irq_source source = 0;
          int _len_irq_service0 = 1;
          struct irq_service * irq_service = (struct irq_service *) malloc(_len_irq_service0*sizeof(struct irq_service));
          for(int _i0 = 0; _i0 < _len_irq_service0; _i0++) {
              int _len_irq_service__i0__info0 = 1;
          irq_service[_i0].info = (const struct irq_source_info *) malloc(_len_irq_service__i0__info0*sizeof(const struct irq_source_info));
          for(int _j0 = 0; _j0 < _len_irq_service__i0__info0; _j0++) {
              }
          }
          const struct irq_source_info * benchRet = find_irq_source_info(irq_service,source);
          for(int _aux = 0; _aux < _len_irq_service0; _aux++) {
          free(irq_service[_aux].info);
          }
          free(irq_service);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum dc_irq_source source = 0;
          int _len_irq_service0 = 65025;
          struct irq_service * irq_service = (struct irq_service *) malloc(_len_irq_service0*sizeof(struct irq_service));
          for(int _i0 = 0; _i0 < _len_irq_service0; _i0++) {
              int _len_irq_service__i0__info0 = 1;
          irq_service[_i0].info = (const struct irq_source_info *) malloc(_len_irq_service__i0__info0*sizeof(const struct irq_source_info));
          for(int _j0 = 0; _j0 < _len_irq_service__i0__info0; _j0++) {
              }
          }
          const struct irq_source_info * benchRet = find_irq_source_info(irq_service,source);
          for(int _aux = 0; _aux < _len_irq_service0; _aux++) {
          free(irq_service[_aux].info);
          }
          free(irq_service);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum dc_irq_source source = 0;
          int _len_irq_service0 = 100;
          struct irq_service * irq_service = (struct irq_service *) malloc(_len_irq_service0*sizeof(struct irq_service));
          for(int _i0 = 0; _i0 < _len_irq_service0; _i0++) {
              int _len_irq_service__i0__info0 = 1;
          irq_service[_i0].info = (const struct irq_source_info *) malloc(_len_irq_service__i0__info0*sizeof(const struct irq_source_info));
          for(int _j0 = 0; _j0 < _len_irq_service__i0__info0; _j0++) {
              }
          }
          const struct irq_source_info * benchRet = find_irq_source_info(irq_service,source);
          for(int _aux = 0; _aux < _len_irq_service0; _aux++) {
          free(irq_service[_aux].info);
          }
          free(irq_service);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
