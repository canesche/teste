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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u8 ;
typedef  scalar_t__ u32 ;
struct ieee80211_channel {scalar_t__ center_freq; int hw_value; } ;
struct ath5k_eeprom_info {size_t* ee_n_piers; struct ath5k_chan_pcal_info* ee_pwr_cal_g; struct ath5k_chan_pcal_info* ee_pwr_cal_b; struct ath5k_chan_pcal_info* ee_pwr_cal_a; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_1__ ah_capabilities; } ;
struct ath5k_chan_pcal_info {scalar_t__ freq; } ;

/* Variables and functions */
#define  AR5K_EEPROM_MODE_11A 130 
#define  AR5K_EEPROM_MODE_11B 129 
#define  AR5K_EEPROM_MODE_11G 128 

__attribute__((used)) static void
ath5k_get_chan_pcal_surrounding_piers(struct ath5k_hw *ah,
			struct ieee80211_channel *channel,
			struct ath5k_chan_pcal_info **pcinfo_l,
			struct ath5k_chan_pcal_info **pcinfo_r)
{
	struct ath5k_eeprom_info *ee = &ah->ah_capabilities.cap_eeprom;
	struct ath5k_chan_pcal_info *pcinfo;
	u8 idx_l, idx_r;
	u8 mode, max, i;
	u32 target = channel->center_freq;

	idx_l = 0;
	idx_r = 0;

	switch (channel->hw_value) {
	case AR5K_EEPROM_MODE_11A:
		pcinfo = ee->ee_pwr_cal_a;
		mode = AR5K_EEPROM_MODE_11A;
		break;
	case AR5K_EEPROM_MODE_11B:
		pcinfo = ee->ee_pwr_cal_b;
		mode = AR5K_EEPROM_MODE_11B;
		break;
	case AR5K_EEPROM_MODE_11G:
	default:
		pcinfo = ee->ee_pwr_cal_g;
		mode = AR5K_EEPROM_MODE_11G;
		break;
	}
	max = ee->ee_n_piers[mode] - 1;

	/* Frequency is below our calibrated
	 * range. Use the lowest power curve
	 * we have */
	if (target < pcinfo[0].freq) {
		idx_l = idx_r = 0;
		goto done;
	}

	/* Frequency is above our calibrated
	 * range. Use the highest power curve
	 * we have */
	if (target > pcinfo[max].freq) {
		idx_l = idx_r = max;
		goto done;
	}

	/* Frequency is inside our calibrated
	 * channel range. Pick the surrounding
	 * calibration piers so that we can
	 * interpolate */
	for (i = 0; i <= max; i++) {

		/* Frequency matches one of our calibration
		 * piers, no need to interpolate, just use
		 * that calibration pier */
		if (pcinfo[i].freq == target) {
			idx_l = idx_r = i;
			goto done;
		}

		/* We found a calibration pier that's above
		 * frequency, use this pier and the previous
		 * one to interpolate */
		if (target < pcinfo[i].freq) {
			idx_r = i;
			idx_l = idx_r - 1;
			goto done;
		}
	}

done:
	*pcinfo_l = &pcinfo[idx_l];
	*pcinfo_r = &pcinfo[idx_r];
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
          int _len_ah0 = 1;
          struct ath5k_hw * ah = (struct ath5k_hw *) malloc(_len_ah0*sizeof(struct ath5k_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__ah_capabilities_cap_eeprom_ee_n_piers0 = 1;
          ah[_i0].ah_capabilities.cap_eeprom.ee_n_piers = (unsigned long *) malloc(_len_ah__i0__ah_capabilities_cap_eeprom_ee_n_piers0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_capabilities_cap_eeprom_ee_n_piers0; _j0++) {
            ah[_i0].ah_capabilities.cap_eeprom.ee_n_piers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_g0 = 1;
          ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_g = (struct ath5k_chan_pcal_info *) malloc(_len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_g0*sizeof(struct ath5k_chan_pcal_info));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_g0; _j0++) {
            ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_g->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_b0 = 1;
          ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_b = (struct ath5k_chan_pcal_info *) malloc(_len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_b0*sizeof(struct ath5k_chan_pcal_info));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_b0; _j0++) {
            ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_b->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_a0 = 1;
          ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_a = (struct ath5k_chan_pcal_info *) malloc(_len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_a0*sizeof(struct ath5k_chan_pcal_info));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_a0; _j0++) {
            ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_a->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_channel0 = 1;
          struct ieee80211_channel * channel = (struct ieee80211_channel *) malloc(_len_channel0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel[_i0].center_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].hw_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcinfo_l0 = 1;
          struct ath5k_chan_pcal_info ** pcinfo_l = (struct ath5k_chan_pcal_info **) malloc(_len_pcinfo_l0*sizeof(struct ath5k_chan_pcal_info *));
          for(int _i0 = 0; _i0 < _len_pcinfo_l0; _i0++) {
            int _len_pcinfo_l1 = 1;
            pcinfo_l[_i0] = (struct ath5k_chan_pcal_info *) malloc(_len_pcinfo_l1*sizeof(struct ath5k_chan_pcal_info));
            for(int _i1 = 0; _i1 < _len_pcinfo_l1; _i1++) {
              pcinfo_l[_i0][_i1].freq = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pcinfo_r0 = 1;
          struct ath5k_chan_pcal_info ** pcinfo_r = (struct ath5k_chan_pcal_info **) malloc(_len_pcinfo_r0*sizeof(struct ath5k_chan_pcal_info *));
          for(int _i0 = 0; _i0 < _len_pcinfo_r0; _i0++) {
            int _len_pcinfo_r1 = 1;
            pcinfo_r[_i0] = (struct ath5k_chan_pcal_info *) malloc(_len_pcinfo_r1*sizeof(struct ath5k_chan_pcal_info));
            for(int _i1 = 0; _i1 < _len_pcinfo_r1; _i1++) {
              pcinfo_r[_i0][_i1].freq = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ath5k_get_chan_pcal_surrounding_piers(ah,channel,pcinfo_l,pcinfo_r);
          free(ah);
          free(channel);
          for(int i1 = 0; i1 < _len_pcinfo_l0; i1++) {
            int _len_pcinfo_l1 = 1;
              free(pcinfo_l[i1]);
          }
          free(pcinfo_l);
          for(int i1 = 0; i1 < _len_pcinfo_r0; i1++) {
            int _len_pcinfo_r1 = 1;
              free(pcinfo_r[i1]);
          }
          free(pcinfo_r);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ah0 = 65025;
          struct ath5k_hw * ah = (struct ath5k_hw *) malloc(_len_ah0*sizeof(struct ath5k_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__ah_capabilities_cap_eeprom_ee_n_piers0 = 1;
          ah[_i0].ah_capabilities.cap_eeprom.ee_n_piers = (unsigned long *) malloc(_len_ah__i0__ah_capabilities_cap_eeprom_ee_n_piers0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_capabilities_cap_eeprom_ee_n_piers0; _j0++) {
            ah[_i0].ah_capabilities.cap_eeprom.ee_n_piers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_g0 = 1;
          ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_g = (struct ath5k_chan_pcal_info *) malloc(_len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_g0*sizeof(struct ath5k_chan_pcal_info));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_g0; _j0++) {
            ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_g->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_b0 = 1;
          ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_b = (struct ath5k_chan_pcal_info *) malloc(_len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_b0*sizeof(struct ath5k_chan_pcal_info));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_b0; _j0++) {
            ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_b->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_a0 = 1;
          ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_a = (struct ath5k_chan_pcal_info *) malloc(_len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_a0*sizeof(struct ath5k_chan_pcal_info));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_a0; _j0++) {
            ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_a->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_channel0 = 65025;
          struct ieee80211_channel * channel = (struct ieee80211_channel *) malloc(_len_channel0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel[_i0].center_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].hw_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcinfo_l0 = 65025;
          struct ath5k_chan_pcal_info ** pcinfo_l = (struct ath5k_chan_pcal_info **) malloc(_len_pcinfo_l0*sizeof(struct ath5k_chan_pcal_info *));
          for(int _i0 = 0; _i0 < _len_pcinfo_l0; _i0++) {
            int _len_pcinfo_l1 = 1;
            pcinfo_l[_i0] = (struct ath5k_chan_pcal_info *) malloc(_len_pcinfo_l1*sizeof(struct ath5k_chan_pcal_info));
            for(int _i1 = 0; _i1 < _len_pcinfo_l1; _i1++) {
              pcinfo_l[_i0][_i1].freq = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pcinfo_r0 = 65025;
          struct ath5k_chan_pcal_info ** pcinfo_r = (struct ath5k_chan_pcal_info **) malloc(_len_pcinfo_r0*sizeof(struct ath5k_chan_pcal_info *));
          for(int _i0 = 0; _i0 < _len_pcinfo_r0; _i0++) {
            int _len_pcinfo_r1 = 1;
            pcinfo_r[_i0] = (struct ath5k_chan_pcal_info *) malloc(_len_pcinfo_r1*sizeof(struct ath5k_chan_pcal_info));
            for(int _i1 = 0; _i1 < _len_pcinfo_r1; _i1++) {
              pcinfo_r[_i0][_i1].freq = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ath5k_get_chan_pcal_surrounding_piers(ah,channel,pcinfo_l,pcinfo_r);
          free(ah);
          free(channel);
          for(int i1 = 0; i1 < _len_pcinfo_l0; i1++) {
            int _len_pcinfo_l1 = 1;
              free(pcinfo_l[i1]);
          }
          free(pcinfo_l);
          for(int i1 = 0; i1 < _len_pcinfo_r0; i1++) {
            int _len_pcinfo_r1 = 1;
              free(pcinfo_r[i1]);
          }
          free(pcinfo_r);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ah0 = 100;
          struct ath5k_hw * ah = (struct ath5k_hw *) malloc(_len_ah0*sizeof(struct ath5k_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__ah_capabilities_cap_eeprom_ee_n_piers0 = 1;
          ah[_i0].ah_capabilities.cap_eeprom.ee_n_piers = (unsigned long *) malloc(_len_ah__i0__ah_capabilities_cap_eeprom_ee_n_piers0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_capabilities_cap_eeprom_ee_n_piers0; _j0++) {
            ah[_i0].ah_capabilities.cap_eeprom.ee_n_piers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_g0 = 1;
          ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_g = (struct ath5k_chan_pcal_info *) malloc(_len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_g0*sizeof(struct ath5k_chan_pcal_info));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_g0; _j0++) {
            ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_g->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_b0 = 1;
          ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_b = (struct ath5k_chan_pcal_info *) malloc(_len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_b0*sizeof(struct ath5k_chan_pcal_info));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_b0; _j0++) {
            ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_b->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_a0 = 1;
          ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_a = (struct ath5k_chan_pcal_info *) malloc(_len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_a0*sizeof(struct ath5k_chan_pcal_info));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_capabilities_cap_eeprom_ee_pwr_cal_a0; _j0++) {
            ah[_i0].ah_capabilities.cap_eeprom.ee_pwr_cal_a->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_channel0 = 100;
          struct ieee80211_channel * channel = (struct ieee80211_channel *) malloc(_len_channel0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel[_i0].center_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].hw_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcinfo_l0 = 100;
          struct ath5k_chan_pcal_info ** pcinfo_l = (struct ath5k_chan_pcal_info **) malloc(_len_pcinfo_l0*sizeof(struct ath5k_chan_pcal_info *));
          for(int _i0 = 0; _i0 < _len_pcinfo_l0; _i0++) {
            int _len_pcinfo_l1 = 1;
            pcinfo_l[_i0] = (struct ath5k_chan_pcal_info *) malloc(_len_pcinfo_l1*sizeof(struct ath5k_chan_pcal_info));
            for(int _i1 = 0; _i1 < _len_pcinfo_l1; _i1++) {
              pcinfo_l[_i0][_i1].freq = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pcinfo_r0 = 100;
          struct ath5k_chan_pcal_info ** pcinfo_r = (struct ath5k_chan_pcal_info **) malloc(_len_pcinfo_r0*sizeof(struct ath5k_chan_pcal_info *));
          for(int _i0 = 0; _i0 < _len_pcinfo_r0; _i0++) {
            int _len_pcinfo_r1 = 1;
            pcinfo_r[_i0] = (struct ath5k_chan_pcal_info *) malloc(_len_pcinfo_r1*sizeof(struct ath5k_chan_pcal_info));
            for(int _i1 = 0; _i1 < _len_pcinfo_r1; _i1++) {
              pcinfo_r[_i0][_i1].freq = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ath5k_get_chan_pcal_surrounding_piers(ah,channel,pcinfo_l,pcinfo_r);
          free(ah);
          free(channel);
          for(int i1 = 0; i1 < _len_pcinfo_l0; i1++) {
            int _len_pcinfo_l1 = 1;
              free(pcinfo_l[i1]);
          }
          free(pcinfo_l);
          for(int i1 = 0; i1 < _len_pcinfo_r0; i1++) {
            int _len_pcinfo_r1 = 1;
              free(pcinfo_r[i1]);
          }
          free(pcinfo_r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
