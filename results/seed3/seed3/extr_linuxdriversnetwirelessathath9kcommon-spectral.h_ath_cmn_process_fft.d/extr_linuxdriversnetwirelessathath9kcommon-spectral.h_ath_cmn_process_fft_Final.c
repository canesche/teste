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
typedef  int /*<<< orphan*/  u64 ;
struct ieee80211_hdr {int dummy; } ;
struct ath_spec_scan_priv {int dummy; } ;
struct ath_rx_status {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int ath_cmn_process_fft(struct ath_spec_scan_priv *spec_priv,
				      struct ieee80211_hdr *hdr,
				      struct ath_rx_status *rs, u64 tsf)
{
	return 0;
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

    // int-bounds
    case 0:
    {
          int tsf = 100;
          int _len_spec_priv0 = 1;
          struct ath_spec_scan_priv * spec_priv = (struct ath_spec_scan_priv *) malloc(_len_spec_priv0*sizeof(struct ath_spec_scan_priv));
          for(int _i0 = 0; _i0 < _len_spec_priv0; _i0++) {
            spec_priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hdr0 = 1;
          struct ieee80211_hdr * hdr = (struct ieee80211_hdr *) malloc(_len_hdr0*sizeof(struct ieee80211_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rs0 = 1;
          struct ath_rx_status * rs = (struct ath_rx_status *) malloc(_len_rs0*sizeof(struct ath_rx_status));
          for(int _i0 = 0; _i0 < _len_rs0; _i0++) {
            rs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath_cmn_process_fft(spec_priv,hdr,rs,tsf);
          printf("%d\n", benchRet); 
          free(spec_priv);
          free(hdr);
          free(rs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tsf = 255;
          int _len_spec_priv0 = 65025;
          struct ath_spec_scan_priv * spec_priv = (struct ath_spec_scan_priv *) malloc(_len_spec_priv0*sizeof(struct ath_spec_scan_priv));
          for(int _i0 = 0; _i0 < _len_spec_priv0; _i0++) {
            spec_priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hdr0 = 65025;
          struct ieee80211_hdr * hdr = (struct ieee80211_hdr *) malloc(_len_hdr0*sizeof(struct ieee80211_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rs0 = 65025;
          struct ath_rx_status * rs = (struct ath_rx_status *) malloc(_len_rs0*sizeof(struct ath_rx_status));
          for(int _i0 = 0; _i0 < _len_rs0; _i0++) {
            rs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath_cmn_process_fft(spec_priv,hdr,rs,tsf);
          printf("%d\n", benchRet); 
          free(spec_priv);
          free(hdr);
          free(rs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tsf = 10;
          int _len_spec_priv0 = 100;
          struct ath_spec_scan_priv * spec_priv = (struct ath_spec_scan_priv *) malloc(_len_spec_priv0*sizeof(struct ath_spec_scan_priv));
          for(int _i0 = 0; _i0 < _len_spec_priv0; _i0++) {
            spec_priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hdr0 = 100;
          struct ieee80211_hdr * hdr = (struct ieee80211_hdr *) malloc(_len_hdr0*sizeof(struct ieee80211_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rs0 = 100;
          struct ath_rx_status * rs = (struct ath_rx_status *) malloc(_len_rs0*sizeof(struct ath_rx_status));
          for(int _i0 = 0; _i0 < _len_rs0; _i0++) {
            rs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath_cmn_process_fft(spec_priv,hdr,rs,tsf);
          printf("%d\n", benchRet); 
          free(spec_priv);
          free(hdr);
          free(rs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
