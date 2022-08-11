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
struct il_priv {scalar_t__ eeprom; } ;
struct il3945_eeprom_txpower_sample {size_t power; size_t gain_idx; } ;
struct il3945_eeprom_txpower_group {struct il3945_eeprom_txpower_sample* samples; } ;
struct il3945_eeprom {struct il3945_eeprom_txpower_group* groups; } ;
typedef  int s8 ;
typedef  size_t s32 ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int
il3945_hw_reg_get_matched_power_idx(struct il_priv *il, s8 requested_power,
				    s32 setting_idx, s32 *new_idx)
{
	const struct il3945_eeprom_txpower_group *chnl_grp = NULL;
	struct il3945_eeprom *eeprom = (struct il3945_eeprom *)il->eeprom;
	s32 idx0, idx1;
	s32 power = 2 * requested_power;
	s32 i;
	const struct il3945_eeprom_txpower_sample *samples;
	s32 gains0, gains1;
	s32 res;
	s32 denominator;

	chnl_grp = &eeprom->groups[setting_idx];
	samples = chnl_grp->samples;
	for (i = 0; i < 5; i++) {
		if (power == samples[i].power) {
			*new_idx = samples[i].gain_idx;
			return 0;
		}
	}

	if (power > samples[1].power) {
		idx0 = 0;
		idx1 = 1;
	} else if (power > samples[2].power) {
		idx0 = 1;
		idx1 = 2;
	} else if (power > samples[3].power) {
		idx0 = 2;
		idx1 = 3;
	} else {
		idx0 = 3;
		idx1 = 4;
	}

	denominator = (s32) samples[idx1].power - (s32) samples[idx0].power;
	if (denominator == 0)
		return -EINVAL;
	gains0 = (s32) samples[idx0].gain_idx * (1 << 19);
	gains1 = (s32) samples[idx1].gain_idx * (1 << 19);
	res =
	    gains0 + (gains1 - gains0) * ((s32) power -
					  (s32) samples[idx0].power) /
	    denominator + (1 << 18);
	*new_idx = res >> 19;
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
          int requested_power = 100;
          unsigned long setting_idx = 100;
          int _len_il0 = 1;
          struct il_priv * il = (struct il_priv *) malloc(_len_il0*sizeof(struct il_priv));
          for(int _i0 = 0; _i0 < _len_il0; _i0++) {
            il[_i0].eeprom = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_new_idx0 = 1;
          unsigned long * new_idx = (unsigned long *) malloc(_len_new_idx0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_new_idx0; _i0++) {
            new_idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = il3945_hw_reg_get_matched_power_idx(il,requested_power,setting_idx,new_idx);
          printf("%d\n", benchRet); 
          free(il);
          free(new_idx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int requested_power = 255;
          unsigned long setting_idx = 255;
          int _len_il0 = 65025;
          struct il_priv * il = (struct il_priv *) malloc(_len_il0*sizeof(struct il_priv));
          for(int _i0 = 0; _i0 < _len_il0; _i0++) {
            il[_i0].eeprom = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_new_idx0 = 65025;
          unsigned long * new_idx = (unsigned long *) malloc(_len_new_idx0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_new_idx0; _i0++) {
            new_idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = il3945_hw_reg_get_matched_power_idx(il,requested_power,setting_idx,new_idx);
          printf("%d\n", benchRet); 
          free(il);
          free(new_idx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int requested_power = 10;
          unsigned long setting_idx = 10;
          int _len_il0 = 100;
          struct il_priv * il = (struct il_priv *) malloc(_len_il0*sizeof(struct il_priv));
          for(int _i0 = 0; _i0 < _len_il0; _i0++) {
            il[_i0].eeprom = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_new_idx0 = 100;
          unsigned long * new_idx = (unsigned long *) malloc(_len_new_idx0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_new_idx0; _i0++) {
            new_idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = il3945_hw_reg_get_matched_power_idx(il,requested_power,setting_idx,new_idx);
          printf("%d\n", benchRet); 
          free(il);
          free(new_idx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
