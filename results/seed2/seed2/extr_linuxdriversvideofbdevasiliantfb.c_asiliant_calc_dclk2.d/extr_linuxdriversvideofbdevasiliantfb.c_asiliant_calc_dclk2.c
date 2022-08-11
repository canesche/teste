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
typedef  unsigned char u8 ;
typedef  unsigned int u32 ;

/* Variables and functions */
 unsigned int Fref ; 

__attribute__((used)) static void asiliant_calc_dclk2(u32 *ppixclock, u8 *dclk2_m, u8 *dclk2_n, u8 *dclk2_div)
{
	unsigned pixclock = *ppixclock;
	unsigned Ftarget = 1000000 * (1000000 / pixclock);
	unsigned n;
	unsigned best_error = 0xffffffff;
	unsigned best_m = 0xffffffff,
	         best_n = 0xffffffff;
	unsigned ratio;
	unsigned remainder;
	unsigned char divisor = 0;

	/* Calculate the frequency required. This is hard enough. */
	ratio = 1000000 / pixclock;
	remainder = 1000000 % pixclock;
	Ftarget = 1000000 * ratio + (1000000 * remainder) / pixclock;

	while (Ftarget < 100000000) {
		divisor += 0x10;
		Ftarget <<= 1;
	}

	ratio = Ftarget / Fref;
	remainder = Ftarget % Fref;

	/* This expresses the constraint that 150kHz <= Fref/n <= 5Mhz,
	 * together with 3 <= n <= 257. */
	for (n = 3; n <= 257; n++) {
		unsigned m = n * ratio + (n * remainder) / Fref;

		/* 3 <= m <= 257 */
		if (m >= 3 && m <= 257) {
			unsigned new_error = Ftarget * n >= Fref * m ?
					       ((Ftarget * n) - (Fref * m)) : ((Fref * m) - (Ftarget * n));
			if (new_error < best_error) {
				best_n = n;
				best_m = m;
				best_error = new_error;
			}
		}
		/* But if VLD = 4, then 4m <= 1028 */
		else if (m <= 1028) {
			/* remember there are still only 8-bits of precision in m, so
			 * avoid over-optimistic error calculations */
			unsigned new_error = Ftarget * n >= Fref * (m & ~3) ?
					       ((Ftarget * n) - (Fref * (m & ~3))) : ((Fref * (m & ~3)) - (Ftarget * n));
			if (new_error < best_error) {
				best_n = n;
				best_m = m;
				best_error = new_error;
			}
		}
	}
	if (best_m > 257)
		best_m >>= 2;	/* divide m by 4, and leave VCO loop divide at 4 */
	else
		divisor |= 4;	/* or set VCO loop divide to 1 */
	*dclk2_m = best_m - 2;
	*dclk2_n = best_n - 2;
	*dclk2_div = divisor;
	*ppixclock = pixclock;
	return;
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
          int _len_ppixclock0 = 1;
          unsigned int * ppixclock = (unsigned int *) malloc(_len_ppixclock0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_ppixclock0; _i0++) {
            ppixclock[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dclk2_m0 = 1;
          unsigned char * dclk2_m = (unsigned char *) malloc(_len_dclk2_m0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dclk2_m0; _i0++) {
            dclk2_m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dclk2_n0 = 1;
          unsigned char * dclk2_n = (unsigned char *) malloc(_len_dclk2_n0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dclk2_n0; _i0++) {
            dclk2_n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dclk2_div0 = 1;
          unsigned char * dclk2_div = (unsigned char *) malloc(_len_dclk2_div0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dclk2_div0; _i0++) {
            dclk2_div[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          asiliant_calc_dclk2(ppixclock,dclk2_m,dclk2_n,dclk2_div);
          free(ppixclock);
          free(dclk2_m);
          free(dclk2_n);
          free(dclk2_div);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ppixclock0 = 65025;
          unsigned int * ppixclock = (unsigned int *) malloc(_len_ppixclock0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_ppixclock0; _i0++) {
            ppixclock[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dclk2_m0 = 65025;
          unsigned char * dclk2_m = (unsigned char *) malloc(_len_dclk2_m0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dclk2_m0; _i0++) {
            dclk2_m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dclk2_n0 = 65025;
          unsigned char * dclk2_n = (unsigned char *) malloc(_len_dclk2_n0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dclk2_n0; _i0++) {
            dclk2_n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dclk2_div0 = 65025;
          unsigned char * dclk2_div = (unsigned char *) malloc(_len_dclk2_div0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dclk2_div0; _i0++) {
            dclk2_div[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          asiliant_calc_dclk2(ppixclock,dclk2_m,dclk2_n,dclk2_div);
          free(ppixclock);
          free(dclk2_m);
          free(dclk2_n);
          free(dclk2_div);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ppixclock0 = 100;
          unsigned int * ppixclock = (unsigned int *) malloc(_len_ppixclock0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_ppixclock0; _i0++) {
            ppixclock[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dclk2_m0 = 100;
          unsigned char * dclk2_m = (unsigned char *) malloc(_len_dclk2_m0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dclk2_m0; _i0++) {
            dclk2_m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dclk2_n0 = 100;
          unsigned char * dclk2_n = (unsigned char *) malloc(_len_dclk2_n0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dclk2_n0; _i0++) {
            dclk2_n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dclk2_div0 = 100;
          unsigned char * dclk2_div = (unsigned char *) malloc(_len_dclk2_div0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dclk2_div0; _i0++) {
            dclk2_div[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          asiliant_calc_dclk2(ppixclock,dclk2_m,dclk2_n,dclk2_div);
          free(ppixclock);
          free(dclk2_m);
          free(dclk2_n);
          free(dclk2_div);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
