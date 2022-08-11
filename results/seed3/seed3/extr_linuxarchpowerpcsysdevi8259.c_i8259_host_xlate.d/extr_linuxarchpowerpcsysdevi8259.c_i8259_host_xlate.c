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
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
typedef  int irq_hw_number_t ;

/* Variables and functions */
#define  IRQ_TYPE_EDGE_FALLING 131 
#define  IRQ_TYPE_EDGE_RISING 130 
#define  IRQ_TYPE_LEVEL_HIGH 129 
#define  IRQ_TYPE_LEVEL_LOW 128 
 unsigned int IRQ_TYPE_NONE ; 

__attribute__((used)) static int i8259_host_xlate(struct irq_domain *h, struct device_node *ct,
			    const u32 *intspec, unsigned int intsize,
			    irq_hw_number_t *out_hwirq, unsigned int *out_flags)
{
	static unsigned char map_isa_senses[4] = {
		IRQ_TYPE_LEVEL_LOW,
		IRQ_TYPE_LEVEL_HIGH,
		IRQ_TYPE_EDGE_FALLING,
		IRQ_TYPE_EDGE_RISING,
	};

	*out_hwirq = intspec[0];
	if (intsize > 1 && intspec[1] < 4)
		*out_flags = map_isa_senses[intspec[1]];
	else
		*out_flags = IRQ_TYPE_NONE;

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
          int _len_h0 = 1;
          struct irq_domain * h = (struct irq_domain *) malloc(_len_h0*sizeof(struct irq_domain));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ct0 = 1;
          struct device_node * ct = (struct device_node *) malloc(_len_ct0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_ct0; _i0++) {
            ct[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intspec0 = 1;
          const int * intspec = (const int *) malloc(_len_intspec0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_intspec0; _i0++) {
            intspec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_hwirq0 = 1;
          int * out_hwirq = (int *) malloc(_len_out_hwirq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_hwirq0; _i0++) {
            out_hwirq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_flags0 = 1;
          unsigned int * out_flags = (unsigned int *) malloc(_len_out_flags0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_out_flags0; _i0++) {
            out_flags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = i8259_host_xlate(h,ct,intspec,intsize,out_hwirq,out_flags);
          printf("%d\n", benchRet); 
          free(h);
          free(ct);
          free(intspec);
          free(out_hwirq);
          free(out_flags);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int intsize = 255;
          int _len_h0 = 65025;
          struct irq_domain * h = (struct irq_domain *) malloc(_len_h0*sizeof(struct irq_domain));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ct0 = 65025;
          struct device_node * ct = (struct device_node *) malloc(_len_ct0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_ct0; _i0++) {
            ct[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intspec0 = 65025;
          const int * intspec = (const int *) malloc(_len_intspec0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_intspec0; _i0++) {
            intspec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_hwirq0 = 65025;
          int * out_hwirq = (int *) malloc(_len_out_hwirq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_hwirq0; _i0++) {
            out_hwirq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_flags0 = 65025;
          unsigned int * out_flags = (unsigned int *) malloc(_len_out_flags0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_out_flags0; _i0++) {
            out_flags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = i8259_host_xlate(h,ct,intspec,intsize,out_hwirq,out_flags);
          printf("%d\n", benchRet); 
          free(h);
          free(ct);
          free(intspec);
          free(out_hwirq);
          free(out_flags);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int intsize = 10;
          int _len_h0 = 100;
          struct irq_domain * h = (struct irq_domain *) malloc(_len_h0*sizeof(struct irq_domain));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ct0 = 100;
          struct device_node * ct = (struct device_node *) malloc(_len_ct0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_ct0; _i0++) {
            ct[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intspec0 = 100;
          const int * intspec = (const int *) malloc(_len_intspec0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_intspec0; _i0++) {
            intspec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_hwirq0 = 100;
          int * out_hwirq = (int *) malloc(_len_out_hwirq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_hwirq0; _i0++) {
            out_hwirq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_flags0 = 100;
          unsigned int * out_flags = (unsigned int *) malloc(_len_out_flags0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_out_flags0; _i0++) {
            out_flags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = i8259_host_xlate(h,ct,intspec,intsize,out_hwirq,out_flags);
          printf("%d\n", benchRet); 
          free(h);
          free(ct);
          free(intspec);
          free(out_hwirq);
          free(out_flags);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
