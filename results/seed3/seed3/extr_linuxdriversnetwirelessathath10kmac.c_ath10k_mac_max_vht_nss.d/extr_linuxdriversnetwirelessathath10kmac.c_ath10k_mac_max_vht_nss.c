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
typedef  int u32 ;
typedef  scalar_t__ u16 ;

/* Variables and functions */
 int NL80211_VHT_NSS_MAX ; 

__attribute__((used)) static u32
ath10k_mac_max_vht_nss(const u16 vht_mcs_mask[NL80211_VHT_NSS_MAX])
{
	int nss;

	for (nss = NL80211_VHT_NSS_MAX - 1; nss >= 0; nss--)
		if (vht_mcs_mask[nss])
			return nss + 1;

	return 1;
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
          int _len_vht_mcs_mask0 = NL80211_VHT_NSS_MAX;
          long const* vht_mcs_mask = (long const*) malloc(_len_vht_mcs_mask0*sizeof(long const));
          for(int _i0 = 0; _i0 < _len_vht_mcs_mask0; _i0++) {
            vht_mcs_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath10k_mac_max_vht_nss(vht_mcs_mask);
          printf("%d\n", benchRet); 
          free(vht_mcs_mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vht_mcs_mask0 = 65025;
          long const* vht_mcs_mask = (long const*) malloc(_len_vht_mcs_mask0*sizeof(long const));
          for(int _i0 = 0; _i0 < _len_vht_mcs_mask0; _i0++) {
            vht_mcs_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath10k_mac_max_vht_nss(vht_mcs_mask);
          printf("%d\n", benchRet); 
          free(vht_mcs_mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vht_mcs_mask0 = 100;
          long const* vht_mcs_mask = (long const*) malloc(_len_vht_mcs_mask0*sizeof(long const));
          for(int _i0 = 0; _i0 < _len_vht_mcs_mask0; _i0++) {
            vht_mcs_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath10k_mac_max_vht_nss(vht_mcs_mask);
          printf("%d\n", benchRet); 
          free(vht_mcs_mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
