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
typedef  size_t u8 ;
typedef  size_t u32 ;

/* Variables and functions */
 size_t IEEE80211_BASIC_RATE_MASK ; 
#define  IEEE80211_CCK_RATE_11MB 131 
#define  IEEE80211_CCK_RATE_1MB 130 
#define  IEEE80211_CCK_RATE_2MB 129 
#define  IEEE80211_CCK_RATE_5MB 128 

void UpdateBrateTblForSoftAP(u8 *bssrateset, u32 bssratelen)
{
	u8	i;
	u8	rate;

	for(i=0;i<bssratelen;i++)
	{
		rate = bssrateset[i] & 0x7f;
		switch(rate)
		{
			case IEEE80211_CCK_RATE_1MB:
			case IEEE80211_CCK_RATE_2MB:
			case IEEE80211_CCK_RATE_5MB:
			case IEEE80211_CCK_RATE_11MB:
				bssrateset[i] |= IEEE80211_BASIC_RATE_MASK;
				break;
		}
	}

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
          unsigned long bssratelen = 100;
          int _len_bssrateset0 = 1;
          unsigned long * bssrateset = (unsigned long *) malloc(_len_bssrateset0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bssrateset0; _i0++) {
            bssrateset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          UpdateBrateTblForSoftAP(bssrateset,bssratelen);
          free(bssrateset);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long bssratelen = 255;
          int _len_bssrateset0 = 65025;
          unsigned long * bssrateset = (unsigned long *) malloc(_len_bssrateset0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bssrateset0; _i0++) {
            bssrateset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          UpdateBrateTblForSoftAP(bssrateset,bssratelen);
          free(bssrateset);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long bssratelen = 10;
          int _len_bssrateset0 = 100;
          unsigned long * bssrateset = (unsigned long *) malloc(_len_bssrateset0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bssrateset0; _i0++) {
            bssrateset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          UpdateBrateTblForSoftAP(bssrateset,bssratelen);
          free(bssrateset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
