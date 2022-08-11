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
struct scpi_opp {unsigned long freq; } ;
struct scpi_clk {TYPE_1__* info; } ;
struct TYPE_2__ {int count; struct scpi_opp* opps; } ;

/* Variables and functions */

__attribute__((used)) static long __scpi_dvfs_round_rate(struct scpi_clk *clk, unsigned long rate)
{
	int idx;
	unsigned long fmin = 0, fmax = ~0, ftmp;
	const struct scpi_opp *opp = clk->info->opps;

	for (idx = 0; idx < clk->info->count; idx++, opp++) {
		ftmp = opp->freq;
		if (ftmp >= rate) {
			if (ftmp <= fmax)
				fmax = ftmp;
			break;
		} else if (ftmp >= fmin) {
			fmin = ftmp;
		}
	}
	return fmax != ~0 ? fmax : fmin;
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
          unsigned long rate = 100;
          int _len_clk0 = 1;
          struct scpi_clk * clk = (struct scpi_clk *) malloc(_len_clk0*sizeof(struct scpi_clk));
          for(int _i0 = 0; _i0 < _len_clk0; _i0++) {
              int _len_clk__i0__info0 = 1;
          clk[_i0].info = (struct TYPE_2__ *) malloc(_len_clk__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_clk__i0__info0; _j0++) {
            clk[_i0].info->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clk__i0__info_opps0 = 1;
          clk[_i0].info->opps = (struct scpi_opp *) malloc(_len_clk__i0__info_opps0*sizeof(struct scpi_opp));
          for(int _j0 = 0; _j0 < _len_clk__i0__info_opps0; _j0++) {
            clk[_i0].info->opps->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          long benchRet = __scpi_dvfs_round_rate(clk,rate);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_clk0; _aux++) {
          free(clk[_aux].info);
          }
          free(clk);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long rate = 255;
          int _len_clk0 = 65025;
          struct scpi_clk * clk = (struct scpi_clk *) malloc(_len_clk0*sizeof(struct scpi_clk));
          for(int _i0 = 0; _i0 < _len_clk0; _i0++) {
              int _len_clk__i0__info0 = 1;
          clk[_i0].info = (struct TYPE_2__ *) malloc(_len_clk__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_clk__i0__info0; _j0++) {
            clk[_i0].info->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clk__i0__info_opps0 = 1;
          clk[_i0].info->opps = (struct scpi_opp *) malloc(_len_clk__i0__info_opps0*sizeof(struct scpi_opp));
          for(int _j0 = 0; _j0 < _len_clk__i0__info_opps0; _j0++) {
            clk[_i0].info->opps->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          long benchRet = __scpi_dvfs_round_rate(clk,rate);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_clk0; _aux++) {
          free(clk[_aux].info);
          }
          free(clk);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long rate = 10;
          int _len_clk0 = 100;
          struct scpi_clk * clk = (struct scpi_clk *) malloc(_len_clk0*sizeof(struct scpi_clk));
          for(int _i0 = 0; _i0 < _len_clk0; _i0++) {
              int _len_clk__i0__info0 = 1;
          clk[_i0].info = (struct TYPE_2__ *) malloc(_len_clk__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_clk__i0__info0; _j0++) {
            clk[_i0].info->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clk__i0__info_opps0 = 1;
          clk[_i0].info->opps = (struct scpi_opp *) malloc(_len_clk__i0__info_opps0*sizeof(struct scpi_opp));
          for(int _j0 = 0; _j0 < _len_clk__i0__info_opps0; _j0++) {
            clk[_i0].info->opps->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          long benchRet = __scpi_dvfs_round_rate(clk,rate);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_clk0; _aux++) {
          free(clk[_aux].info);
          }
          free(clk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
