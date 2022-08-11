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
struct clk {int dummy; } ;
struct asoc_simple_dai {struct clk* clk; } ;

/* Variables and functions */

__attribute__((used)) static void asoc_simple_card_clk_register(struct asoc_simple_dai *dai,
					  struct clk *clk)
{
	dai->clk = clk;
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
          int _len_dai0 = 1;
          struct asoc_simple_dai * dai = (struct asoc_simple_dai *) malloc(_len_dai0*sizeof(struct asoc_simple_dai));
          for(int _i0 = 0; _i0 < _len_dai0; _i0++) {
              int _len_dai__i0__clk0 = 1;
          dai[_i0].clk = (struct clk *) malloc(_len_dai__i0__clk0*sizeof(struct clk));
          for(int _j0 = 0; _j0 < _len_dai__i0__clk0; _j0++) {
            dai[_i0].clk->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_clk0 = 1;
          struct clk * clk = (struct clk *) malloc(_len_clk0*sizeof(struct clk));
          for(int _i0 = 0; _i0 < _len_clk0; _i0++) {
            clk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          asoc_simple_card_clk_register(dai,clk);
          for(int _aux = 0; _aux < _len_dai0; _aux++) {
          free(dai[_aux].clk);
          }
          free(dai);
          free(clk);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dai0 = 65025;
          struct asoc_simple_dai * dai = (struct asoc_simple_dai *) malloc(_len_dai0*sizeof(struct asoc_simple_dai));
          for(int _i0 = 0; _i0 < _len_dai0; _i0++) {
              int _len_dai__i0__clk0 = 1;
          dai[_i0].clk = (struct clk *) malloc(_len_dai__i0__clk0*sizeof(struct clk));
          for(int _j0 = 0; _j0 < _len_dai__i0__clk0; _j0++) {
            dai[_i0].clk->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_clk0 = 65025;
          struct clk * clk = (struct clk *) malloc(_len_clk0*sizeof(struct clk));
          for(int _i0 = 0; _i0 < _len_clk0; _i0++) {
            clk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          asoc_simple_card_clk_register(dai,clk);
          for(int _aux = 0; _aux < _len_dai0; _aux++) {
          free(dai[_aux].clk);
          }
          free(dai);
          free(clk);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dai0 = 100;
          struct asoc_simple_dai * dai = (struct asoc_simple_dai *) malloc(_len_dai0*sizeof(struct asoc_simple_dai));
          for(int _i0 = 0; _i0 < _len_dai0; _i0++) {
              int _len_dai__i0__clk0 = 1;
          dai[_i0].clk = (struct clk *) malloc(_len_dai__i0__clk0*sizeof(struct clk));
          for(int _j0 = 0; _j0 < _len_dai__i0__clk0; _j0++) {
            dai[_i0].clk->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_clk0 = 100;
          struct clk * clk = (struct clk *) malloc(_len_clk0*sizeof(struct clk));
          for(int _i0 = 0; _i0 < _len_clk0; _i0++) {
            clk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          asoc_simple_card_clk_register(dai,clk);
          for(int _aux = 0; _aux < _len_dai0; _aux++) {
          free(dai[_aux].clk);
          }
          free(dai);
          free(clk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
