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
struct stm_pll {unsigned long idf; unsigned long ndiv; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int clk_pll4600c28_get_params(unsigned long input, unsigned long output,
			  struct stm_pll *pll)
{

	unsigned long i, infin, n;
	unsigned long deviation = ~0;
	unsigned long new_freq, new_deviation;

	/* Output clock range: 19Mhz to 3000Mhz */
	if (output < 19000000 || output > 3000000000u)
		return -EINVAL;

	/* For better jitter, IDF should be smallest and NDIV must be maximum */
	for (i = 1; i <= 7 && deviation; i++) {
		/* INFIN checks */
		infin = input / i;
		if (infin < 4000000 || infin > 50000000)
			continue;	/* Invalid case */

		n = output / (infin * 2);
		if (n < 8 || n > 246)
			continue;	/* Invalid case */
		if (n < 246)
			n++;	/* To work around 'y' when n=x.y */

		for (; n >= 8 && deviation; n--) {
			new_freq = infin * 2 * n;
			if (new_freq < output)
				break;	/* Optimization: shorting loop */

			new_deviation = new_freq - output;
			if (!new_deviation || new_deviation < deviation) {
				pll->idf  = i;
				pll->ndiv = n;
				deviation = new_deviation;
			}
		}
	}

	if (deviation == ~0) /* No solution found */
		return -EINVAL;

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
          unsigned long input = 100;
          unsigned long output = 100;
          int _len_pll0 = 1;
          struct stm_pll * pll = (struct stm_pll *) malloc(_len_pll0*sizeof(struct stm_pll));
          for(int _i0 = 0; _i0 < _len_pll0; _i0++) {
            pll[_i0].idf = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].ndiv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = clk_pll4600c28_get_params(input,output,pll);
          printf("%d\n", benchRet); 
          free(pll);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long input = 255;
          unsigned long output = 255;
          int _len_pll0 = 65025;
          struct stm_pll * pll = (struct stm_pll *) malloc(_len_pll0*sizeof(struct stm_pll));
          for(int _i0 = 0; _i0 < _len_pll0; _i0++) {
            pll[_i0].idf = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].ndiv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = clk_pll4600c28_get_params(input,output,pll);
          printf("%d\n", benchRet); 
          free(pll);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long input = 10;
          unsigned long output = 10;
          int _len_pll0 = 100;
          struct stm_pll * pll = (struct stm_pll *) malloc(_len_pll0*sizeof(struct stm_pll));
          for(int _i0 = 0; _i0 < _len_pll0; _i0++) {
            pll[_i0].idf = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].ndiv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = clk_pll4600c28_get_params(input,output,pll);
          printf("%d\n", benchRet); 
          free(pll);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
