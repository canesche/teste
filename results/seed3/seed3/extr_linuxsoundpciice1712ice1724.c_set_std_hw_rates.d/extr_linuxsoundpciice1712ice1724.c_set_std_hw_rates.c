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
struct TYPE_2__ {int* data; } ;
struct snd_ice1712 {int /*<<< orphan*/ * hw_rates; int /*<<< orphan*/  vt1720; TYPE_1__ eeprom; } ;

/* Variables and functions */
 size_t ICE_EEP2_ACLINK ; 
 size_t ICE_EEP2_I2S ; 
 int VT1724_CFG_PRO_I2S ; 
 int /*<<< orphan*/  hw_constraints_rates_192 ; 
 int /*<<< orphan*/  hw_constraints_rates_48 ; 
 int /*<<< orphan*/  hw_constraints_rates_96 ; 

__attribute__((used)) static void set_std_hw_rates(struct snd_ice1712 *ice)
{
	if (ice->eeprom.data[ICE_EEP2_ACLINK] & VT1724_CFG_PRO_I2S) {
		/* I2S */
		/* VT1720 doesn't support more than 96kHz */
		if ((ice->eeprom.data[ICE_EEP2_I2S] & 0x08) && !ice->vt1720)
			ice->hw_rates = &hw_constraints_rates_192;
		else
			ice->hw_rates = &hw_constraints_rates_96;
	} else {
		/* ACLINK */
		ice->hw_rates = &hw_constraints_rates_48;
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
          int _len_ice0 = 1;
          struct snd_ice1712 * ice = (struct snd_ice1712 *) malloc(_len_ice0*sizeof(struct snd_ice1712));
          for(int _i0 = 0; _i0 < _len_ice0; _i0++) {
              int _len_ice__i0__hw_rates0 = 1;
          ice[_i0].hw_rates = (int *) malloc(_len_ice__i0__hw_rates0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ice__i0__hw_rates0; _j0++) {
            ice[_i0].hw_rates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ice[_i0].vt1720 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ice__i0__eeprom_data0 = 1;
          ice[_i0].eeprom.data = (int *) malloc(_len_ice__i0__eeprom_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ice__i0__eeprom_data0; _j0++) {
            ice[_i0].eeprom.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_std_hw_rates(ice);
          for(int _aux = 0; _aux < _len_ice0; _aux++) {
          free(ice[_aux].hw_rates);
          }
          free(ice);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ice0 = 65025;
          struct snd_ice1712 * ice = (struct snd_ice1712 *) malloc(_len_ice0*sizeof(struct snd_ice1712));
          for(int _i0 = 0; _i0 < _len_ice0; _i0++) {
              int _len_ice__i0__hw_rates0 = 1;
          ice[_i0].hw_rates = (int *) malloc(_len_ice__i0__hw_rates0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ice__i0__hw_rates0; _j0++) {
            ice[_i0].hw_rates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ice[_i0].vt1720 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ice__i0__eeprom_data0 = 1;
          ice[_i0].eeprom.data = (int *) malloc(_len_ice__i0__eeprom_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ice__i0__eeprom_data0; _j0++) {
            ice[_i0].eeprom.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_std_hw_rates(ice);
          for(int _aux = 0; _aux < _len_ice0; _aux++) {
          free(ice[_aux].hw_rates);
          }
          free(ice);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ice0 = 100;
          struct snd_ice1712 * ice = (struct snd_ice1712 *) malloc(_len_ice0*sizeof(struct snd_ice1712));
          for(int _i0 = 0; _i0 < _len_ice0; _i0++) {
              int _len_ice__i0__hw_rates0 = 1;
          ice[_i0].hw_rates = (int *) malloc(_len_ice__i0__hw_rates0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ice__i0__hw_rates0; _j0++) {
            ice[_i0].hw_rates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ice[_i0].vt1720 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ice__i0__eeprom_data0 = 1;
          ice[_i0].eeprom.data = (int *) malloc(_len_ice__i0__eeprom_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ice__i0__eeprom_data0; _j0++) {
            ice[_i0].eeprom.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_std_hw_rates(ice);
          for(int _aux = 0; _aux < _len_ice0; _aux++) {
          free(ice[_aux].hw_rates);
          }
          free(ice);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
