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
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
typedef  int __s8 ;

/* Variables and functions */

__attribute__((used)) static void ieee80211_find_cisco_dtpc(struct ieee80211_sub_if_data *sdata,
				      struct ieee80211_channel *channel,
				      const u8 *cisco_dtpc_ie,
				      int *pwr_level)
{
	/* From practical testing, the first data byte of the DTPC element
	 * seems to contain the requested dBm level, and the CLI on Cisco
	 * APs clearly state the range is -127 to 127 dBm, which indicates
	 * a signed byte, although it seemingly never actually goes negative.
	 * The other byte seems to always be zero.
	 */
	*pwr_level = (__s8)cisco_dtpc_ie[4];
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
          int _len_sdata0 = 1;
          struct ieee80211_sub_if_data * sdata = (struct ieee80211_sub_if_data *) malloc(_len_sdata0*sizeof(struct ieee80211_sub_if_data));
          for(int _i0 = 0; _i0 < _len_sdata0; _i0++) {
            sdata[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel0 = 1;
          struct ieee80211_channel * channel = (struct ieee80211_channel *) malloc(_len_channel0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cisco_dtpc_ie0 = 1;
          const long * cisco_dtpc_ie = (const long *) malloc(_len_cisco_dtpc_ie0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_cisco_dtpc_ie0; _i0++) {
            cisco_dtpc_ie[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwr_level0 = 1;
          int * pwr_level = (int *) malloc(_len_pwr_level0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwr_level0; _i0++) {
            pwr_level[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ieee80211_find_cisco_dtpc(sdata,channel,cisco_dtpc_ie,pwr_level);
          free(sdata);
          free(channel);
          free(cisco_dtpc_ie);
          free(pwr_level);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sdata0 = 65025;
          struct ieee80211_sub_if_data * sdata = (struct ieee80211_sub_if_data *) malloc(_len_sdata0*sizeof(struct ieee80211_sub_if_data));
          for(int _i0 = 0; _i0 < _len_sdata0; _i0++) {
            sdata[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel0 = 65025;
          struct ieee80211_channel * channel = (struct ieee80211_channel *) malloc(_len_channel0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cisco_dtpc_ie0 = 65025;
          const long * cisco_dtpc_ie = (const long *) malloc(_len_cisco_dtpc_ie0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_cisco_dtpc_ie0; _i0++) {
            cisco_dtpc_ie[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwr_level0 = 65025;
          int * pwr_level = (int *) malloc(_len_pwr_level0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwr_level0; _i0++) {
            pwr_level[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ieee80211_find_cisco_dtpc(sdata,channel,cisco_dtpc_ie,pwr_level);
          free(sdata);
          free(channel);
          free(cisco_dtpc_ie);
          free(pwr_level);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sdata0 = 100;
          struct ieee80211_sub_if_data * sdata = (struct ieee80211_sub_if_data *) malloc(_len_sdata0*sizeof(struct ieee80211_sub_if_data));
          for(int _i0 = 0; _i0 < _len_sdata0; _i0++) {
            sdata[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel0 = 100;
          struct ieee80211_channel * channel = (struct ieee80211_channel *) malloc(_len_channel0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cisco_dtpc_ie0 = 100;
          const long * cisco_dtpc_ie = (const long *) malloc(_len_cisco_dtpc_ie0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_cisco_dtpc_ie0; _i0++) {
            cisco_dtpc_ie[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwr_level0 = 100;
          int * pwr_level = (int *) malloc(_len_pwr_level0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwr_level0; _i0++) {
            pwr_level[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ieee80211_find_cisco_dtpc(sdata,channel,cisco_dtpc_ie,pwr_level);
          free(sdata);
          free(channel);
          free(cisco_dtpc_ie);
          free(pwr_level);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
