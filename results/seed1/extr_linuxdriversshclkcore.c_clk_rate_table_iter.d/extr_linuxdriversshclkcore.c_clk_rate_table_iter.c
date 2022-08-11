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
struct cpufreq_frequency_table {unsigned long frequency; } ;
struct clk_rate_round_data {struct cpufreq_frequency_table* arg; } ;

/* Variables and functions */
 unsigned long CPUFREQ_ENTRY_INVALID ; 

__attribute__((used)) static long clk_rate_table_iter(unsigned int pos,
				struct clk_rate_round_data *rounder)
{
	struct cpufreq_frequency_table *freq_table = rounder->arg;
	unsigned long freq = freq_table[pos].frequency;

	if (freq == CPUFREQ_ENTRY_INVALID)
		freq = 0;

	return freq;
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
          unsigned int pos = 100;
          int _len_rounder0 = 1;
          struct clk_rate_round_data * rounder = (struct clk_rate_round_data *) malloc(_len_rounder0*sizeof(struct clk_rate_round_data));
          for(int _i0 = 0; _i0 < _len_rounder0; _i0++) {
              int _len_rounder__i0__arg0 = 1;
          rounder[_i0].arg = (struct cpufreq_frequency_table *) malloc(_len_rounder__i0__arg0*sizeof(struct cpufreq_frequency_table));
          for(int _j0 = 0; _j0 < _len_rounder__i0__arg0; _j0++) {
            rounder[_i0].arg->frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = clk_rate_table_iter(pos,rounder);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_rounder0; _aux++) {
          free(rounder[_aux].arg);
          }
          free(rounder);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int pos = 255;
          int _len_rounder0 = 65025;
          struct clk_rate_round_data * rounder = (struct clk_rate_round_data *) malloc(_len_rounder0*sizeof(struct clk_rate_round_data));
          for(int _i0 = 0; _i0 < _len_rounder0; _i0++) {
              int _len_rounder__i0__arg0 = 1;
          rounder[_i0].arg = (struct cpufreq_frequency_table *) malloc(_len_rounder__i0__arg0*sizeof(struct cpufreq_frequency_table));
          for(int _j0 = 0; _j0 < _len_rounder__i0__arg0; _j0++) {
            rounder[_i0].arg->frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = clk_rate_table_iter(pos,rounder);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_rounder0; _aux++) {
          free(rounder[_aux].arg);
          }
          free(rounder);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int pos = 10;
          int _len_rounder0 = 100;
          struct clk_rate_round_data * rounder = (struct clk_rate_round_data *) malloc(_len_rounder0*sizeof(struct clk_rate_round_data));
          for(int _i0 = 0; _i0 < _len_rounder0; _i0++) {
              int _len_rounder__i0__arg0 = 1;
          rounder[_i0].arg = (struct cpufreq_frequency_table *) malloc(_len_rounder__i0__arg0*sizeof(struct cpufreq_frequency_table));
          for(int _j0 = 0; _j0 < _len_rounder__i0__arg0; _j0++) {
            rounder[_i0].arg->frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = clk_rate_table_iter(pos,rounder);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_rounder0; _aux++) {
          free(rounder[_aux].arg);
          }
          free(rounder);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
