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
struct pll_rate_tbl {int mode; int m; unsigned int n; int p; } ;

/* Variables and functions */

__attribute__((used)) static unsigned long pll_calc_rate(struct pll_rate_tbl *rtbl,
		unsigned long prate, int index, unsigned long *pll_rate)
{
	unsigned long rate = prate;
	unsigned int mode;

	mode = rtbl[index].mode ? 256 : 1;
	rate = (((2 * rate / 10000) * rtbl[index].m) / (mode * rtbl[index].n));

	if (pll_rate)
		*pll_rate = (rate / (1 << rtbl[index].p)) * 10000;

	return rate * 10000;
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
          unsigned long prate = 100;
          int index = 100;
          int _len_rtbl0 = 1;
          struct pll_rate_tbl * rtbl = (struct pll_rate_tbl *) malloc(_len_rtbl0*sizeof(struct pll_rate_tbl));
          for(int _i0 = 0; _i0 < _len_rtbl0; _i0++) {
            rtbl[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        rtbl[_i0].m = ((-2 * (next_i()%2)) + 1) * next_i();
        rtbl[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
        rtbl[_i0].p = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pll_rate0 = 1;
          unsigned long * pll_rate = (unsigned long *) malloc(_len_pll_rate0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pll_rate0; _i0++) {
            pll_rate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = pll_calc_rate(rtbl,prate,index,pll_rate);
          printf("%lu\n", benchRet); 
          free(rtbl);
          free(pll_rate);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long prate = 255;
          int index = 255;
          int _len_rtbl0 = 65025;
          struct pll_rate_tbl * rtbl = (struct pll_rate_tbl *) malloc(_len_rtbl0*sizeof(struct pll_rate_tbl));
          for(int _i0 = 0; _i0 < _len_rtbl0; _i0++) {
            rtbl[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        rtbl[_i0].m = ((-2 * (next_i()%2)) + 1) * next_i();
        rtbl[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
        rtbl[_i0].p = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pll_rate0 = 65025;
          unsigned long * pll_rate = (unsigned long *) malloc(_len_pll_rate0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pll_rate0; _i0++) {
            pll_rate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = pll_calc_rate(rtbl,prate,index,pll_rate);
          printf("%lu\n", benchRet); 
          free(rtbl);
          free(pll_rate);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long prate = 10;
          int index = 10;
          int _len_rtbl0 = 100;
          struct pll_rate_tbl * rtbl = (struct pll_rate_tbl *) malloc(_len_rtbl0*sizeof(struct pll_rate_tbl));
          for(int _i0 = 0; _i0 < _len_rtbl0; _i0++) {
            rtbl[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        rtbl[_i0].m = ((-2 * (next_i()%2)) + 1) * next_i();
        rtbl[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
        rtbl[_i0].p = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pll_rate0 = 100;
          unsigned long * pll_rate = (unsigned long *) malloc(_len_pll_rate0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pll_rate0; _i0++) {
            pll_rate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = pll_calc_rate(rtbl,prate,index,pll_rate);
          printf("%lu\n", benchRet); 
          free(rtbl);
          free(pll_rate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
