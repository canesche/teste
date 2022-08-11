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
typedef  scalar_t__ u8 ;

/* Variables and functions */
 int IEEE80211_HT_MCS_MASK_LEN ; 

__attribute__((used)) static bool
ath10k_peer_assoc_h_ht_masked(const u8 ht_mcs_mask[IEEE80211_HT_MCS_MASK_LEN])
{
	int nss;

	for (nss = 0; nss < IEEE80211_HT_MCS_MASK_LEN; nss++)
		if (ht_mcs_mask[nss])
			return false;

	return true;
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
          int _len_ht_mcs_mask0 = IEEE80211_HT_MCS_MASK_LEN;
          long const* ht_mcs_mask = (long const*) malloc(_len_ht_mcs_mask0*sizeof(long const));
          for(int _i0 = 0; _i0 < _len_ht_mcs_mask0; _i0++) {
            ht_mcs_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath10k_peer_assoc_h_ht_masked(ht_mcs_mask);
          printf("%d\n", benchRet); 
          free(ht_mcs_mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ht_mcs_mask0 = 65025;
          long const* ht_mcs_mask = (long const*) malloc(_len_ht_mcs_mask0*sizeof(long const));
          for(int _i0 = 0; _i0 < _len_ht_mcs_mask0; _i0++) {
            ht_mcs_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath10k_peer_assoc_h_ht_masked(ht_mcs_mask);
          printf("%d\n", benchRet); 
          free(ht_mcs_mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ht_mcs_mask0 = 100;
          long const* ht_mcs_mask = (long const*) malloc(_len_ht_mcs_mask0*sizeof(long const));
          for(int _i0 = 0; _i0 < _len_ht_mcs_mask0; _i0++) {
            ht_mcs_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath10k_peer_assoc_h_ht_masked(ht_mcs_mask);
          printf("%d\n", benchRet); 
          free(ht_mcs_mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
