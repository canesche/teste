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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {unsigned long fclk; unsigned long hclk; unsigned long pclk; int hclk_tns; } ;
struct TYPE_6__ {unsigned long h_divisor; unsigned long p_divisor; } ;
struct TYPE_4__ {unsigned long frequency; } ;
struct s3c_cpufreq_config {TYPE_2__ freq; TYPE_3__ divs; TYPE_1__ pll; } ;

/* Variables and functions */

__attribute__((used)) static inline void s3c_cpufreq_calc(struct s3c_cpufreq_config *cfg)
{
	unsigned long pll = cfg->pll.frequency;

	cfg->freq.fclk = pll;
	cfg->freq.hclk = pll / cfg->divs.h_divisor;
	cfg->freq.pclk = pll / cfg->divs.p_divisor;

	/* convert hclk into 10ths of nanoseconds for io calcs */
	cfg->freq.hclk_tns = 1000000000 / (cfg->freq.hclk / 10);
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
          int _len_cfg0 = 1;
          struct s3c_cpufreq_config * cfg = (struct s3c_cpufreq_config *) malloc(_len_cfg0*sizeof(struct s3c_cpufreq_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].freq.fclk = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].freq.hclk = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].freq.pclk = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].freq.hclk_tns = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].divs.h_divisor = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].divs.p_divisor = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].pll.frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          s3c_cpufreq_calc(cfg);
          free(cfg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cfg0 = 65025;
          struct s3c_cpufreq_config * cfg = (struct s3c_cpufreq_config *) malloc(_len_cfg0*sizeof(struct s3c_cpufreq_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].freq.fclk = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].freq.hclk = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].freq.pclk = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].freq.hclk_tns = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].divs.h_divisor = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].divs.p_divisor = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].pll.frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          s3c_cpufreq_calc(cfg);
          free(cfg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cfg0 = 100;
          struct s3c_cpufreq_config * cfg = (struct s3c_cpufreq_config *) malloc(_len_cfg0*sizeof(struct s3c_cpufreq_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].freq.fclk = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].freq.hclk = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].freq.pclk = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].freq.hclk_tns = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].divs.h_divisor = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].divs.p_divisor = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].pll.frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          s3c_cpufreq_calc(cfg);
          free(cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
