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
       0            big-arr-10x\n\
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
typedef  int u8 ;

/* Variables and functions */

void
wlc_phy_ofdm_to_mcs_powers_nphy(u8 *power, u8 rate_mcs_start,
				u8 rate_mcs_end, u8 rate_ofdm_start)
{
	u8 rate1, rate2;

	rate2 = rate_ofdm_start;
	for (rate1 = rate_mcs_start; rate1 <= rate_mcs_end - 1; rate1++) {
		power[rate1] = power[rate2];
		rate2 += (rate1 == rate_mcs_start) ? 2 : 1;
	}
	power[rate_mcs_end] = power[rate_mcs_end - 1];
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr-10x
    case 0:
    {
          int rate_mcs_start = 10;
          int rate_mcs_end = 10;
          int rate_ofdm_start = 10;
          int _len_power0 = 100;
          int * power = (int *) malloc(_len_power0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_power0; _i0++) {
            power[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wlc_phy_ofdm_to_mcs_powers_nphy(power,rate_mcs_start,rate_mcs_end,rate_ofdm_start);
          free(power);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
