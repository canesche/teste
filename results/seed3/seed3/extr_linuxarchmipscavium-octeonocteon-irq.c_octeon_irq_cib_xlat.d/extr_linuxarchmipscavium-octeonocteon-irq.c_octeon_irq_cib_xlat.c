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
typedef  unsigned int u32 ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 unsigned int IRQ_TYPE_EDGE_RISING ; 
 unsigned int IRQ_TYPE_LEVEL_HIGH ; 

__attribute__((used)) static int octeon_irq_cib_xlat(struct irq_domain *d,
				   struct device_node *node,
				   const u32 *intspec,
				   unsigned int intsize,
				   unsigned long *out_hwirq,
				   unsigned int *out_type)
{
	unsigned int type = 0;

	if (intsize == 2)
		type = intspec[1];

	switch (type) {
	case 0: /* unofficial value, but we might as well let it work. */
	case 4: /* official value for level triggering. */
		*out_type = IRQ_TYPE_LEVEL_HIGH;
		break;
	case 1: /* official value for edge triggering. */
		*out_type = IRQ_TYPE_EDGE_RISING;
		break;
	default: /* Nothing else is acceptable. */
		return -EINVAL;
	}

	*out_hwirq = intspec[0];

	return 0;
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
          unsigned int intsize = 100;
          int _len_d0 = 1;
          struct irq_domain * d = (struct irq_domain *) malloc(_len_d0*sizeof(struct irq_domain));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node0 = 1;
          struct device_node * node = (struct device_node *) malloc(_len_node0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intspec0 = 1;
          const unsigned int * intspec = (const unsigned int *) malloc(_len_intspec0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_intspec0; _i0++) {
            intspec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_hwirq0 = 1;
          unsigned long * out_hwirq = (unsigned long *) malloc(_len_out_hwirq0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_out_hwirq0; _i0++) {
            out_hwirq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_type0 = 1;
          unsigned int * out_type = (unsigned int *) malloc(_len_out_type0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_out_type0; _i0++) {
            out_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = octeon_irq_cib_xlat(d,node,intspec,intsize,out_hwirq,out_type);
          printf("%d\n", benchRet); 
          free(d);
          free(node);
          free(intspec);
          free(out_hwirq);
          free(out_type);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int intsize = 255;
          int _len_d0 = 65025;
          struct irq_domain * d = (struct irq_domain *) malloc(_len_d0*sizeof(struct irq_domain));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node0 = 65025;
          struct device_node * node = (struct device_node *) malloc(_len_node0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intspec0 = 65025;
          const unsigned int * intspec = (const unsigned int *) malloc(_len_intspec0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_intspec0; _i0++) {
            intspec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_hwirq0 = 65025;
          unsigned long * out_hwirq = (unsigned long *) malloc(_len_out_hwirq0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_out_hwirq0; _i0++) {
            out_hwirq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_type0 = 65025;
          unsigned int * out_type = (unsigned int *) malloc(_len_out_type0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_out_type0; _i0++) {
            out_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = octeon_irq_cib_xlat(d,node,intspec,intsize,out_hwirq,out_type);
          printf("%d\n", benchRet); 
          free(d);
          free(node);
          free(intspec);
          free(out_hwirq);
          free(out_type);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int intsize = 10;
          int _len_d0 = 100;
          struct irq_domain * d = (struct irq_domain *) malloc(_len_d0*sizeof(struct irq_domain));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node0 = 100;
          struct device_node * node = (struct device_node *) malloc(_len_node0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intspec0 = 100;
          const unsigned int * intspec = (const unsigned int *) malloc(_len_intspec0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_intspec0; _i0++) {
            intspec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_hwirq0 = 100;
          unsigned long * out_hwirq = (unsigned long *) malloc(_len_out_hwirq0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_out_hwirq0; _i0++) {
            out_hwirq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_type0 = 100;
          unsigned int * out_type = (unsigned int *) malloc(_len_out_type0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_out_type0; _i0++) {
            out_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = octeon_irq_cib_xlat(d,node,intspec,intsize,out_hwirq,out_type);
          printf("%d\n", benchRet); 
          free(d);
          free(node);
          free(intspec);
          free(out_hwirq);
          free(out_type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
