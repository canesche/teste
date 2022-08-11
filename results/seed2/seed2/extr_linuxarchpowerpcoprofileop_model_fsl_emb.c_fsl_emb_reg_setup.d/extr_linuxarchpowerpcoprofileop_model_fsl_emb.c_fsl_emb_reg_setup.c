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
struct op_system_config {int dummy; } ;
struct op_counter_config {scalar_t__ count; } ;

/* Variables and functions */
 int num_counters ; 
 scalar_t__* reset_value ; 

__attribute__((used)) static int fsl_emb_reg_setup(struct op_counter_config *ctr,
			     struct op_system_config *sys,
			     int num_ctrs)
{
	int i;

	num_counters = num_ctrs;

	/* Our counters count up, and "count" refers to
	 * how much before the next interrupt, and we interrupt
	 * on overflow.  So we calculate the starting value
	 * which will give us "count" until overflow.
	 * Then we set the events on the enabled counters */
	for (i = 0; i < num_counters; ++i)
		reset_value[i] = 0x80000000UL - ctr[i].count;

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
          int num_ctrs = 100;
          int _len_ctr0 = 1;
          struct op_counter_config * ctr = (struct op_counter_config *) malloc(_len_ctr0*sizeof(struct op_counter_config));
          for(int _i0 = 0; _i0 < _len_ctr0; _i0++) {
            ctr[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sys0 = 1;
          struct op_system_config * sys = (struct op_system_config *) malloc(_len_sys0*sizeof(struct op_system_config));
          for(int _i0 = 0; _i0 < _len_sys0; _i0++) {
            sys[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fsl_emb_reg_setup(ctr,sys,num_ctrs);
          printf("%d\n", benchRet); 
          free(ctr);
          free(sys);
        
        break;
    }
    // big-arr
    case 1:
    {
          int num_ctrs = 255;
          int _len_ctr0 = 65025;
          struct op_counter_config * ctr = (struct op_counter_config *) malloc(_len_ctr0*sizeof(struct op_counter_config));
          for(int _i0 = 0; _i0 < _len_ctr0; _i0++) {
            ctr[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sys0 = 65025;
          struct op_system_config * sys = (struct op_system_config *) malloc(_len_sys0*sizeof(struct op_system_config));
          for(int _i0 = 0; _i0 < _len_sys0; _i0++) {
            sys[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fsl_emb_reg_setup(ctr,sys,num_ctrs);
          printf("%d\n", benchRet); 
          free(ctr);
          free(sys);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int num_ctrs = 10;
          int _len_ctr0 = 100;
          struct op_counter_config * ctr = (struct op_counter_config *) malloc(_len_ctr0*sizeof(struct op_counter_config));
          for(int _i0 = 0; _i0 < _len_ctr0; _i0++) {
            ctr[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sys0 = 100;
          struct op_system_config * sys = (struct op_system_config *) malloc(_len_sys0*sizeof(struct op_system_config));
          for(int _i0 = 0; _i0 < _len_sys0; _i0++) {
            sys[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fsl_emb_reg_setup(ctr,sys,num_ctrs);
          printf("%d\n", benchRet); 
          free(ctr);
          free(sys);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
