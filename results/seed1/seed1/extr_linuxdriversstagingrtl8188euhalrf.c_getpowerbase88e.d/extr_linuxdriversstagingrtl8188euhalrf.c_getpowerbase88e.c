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
typedef  int u8 ;
typedef  int u32 ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {scalar_t__ CurrentChannelBW; } ;

/* Variables and functions */
 scalar_t__ HT_CHANNEL_WIDTH_20 ; 

__attribute__((used)) static void getpowerbase88e(struct adapter *adapt, u8 *pwr_level_ofdm,
			    u8 *pwr_level_bw20, u8 *pwr_level_bw40,
			    u8 channel, u32 *ofdmbase, u32 *mcs_base)
{
	u32 powerbase0, powerbase1;
	u8 i, powerlevel[2];

	for (i = 0; i < 2; i++) {
		powerbase0 = pwr_level_ofdm[i];

		powerbase0 = (powerbase0<<24) | (powerbase0<<16) |
			     (powerbase0<<8) | powerbase0;
		*(ofdmbase+i) = powerbase0;
	}
	/* Check HT20 to HT40 diff */
	if (adapt->HalData->CurrentChannelBW == HT_CHANNEL_WIDTH_20)
		powerlevel[0] = pwr_level_bw20[0];
	else
		powerlevel[0] = pwr_level_bw40[0];
	powerbase1 = powerlevel[0];
	powerbase1 = (powerbase1<<24) | (powerbase1<<16) |
		     (powerbase1<<8) | powerbase1;
	*mcs_base = powerbase1;
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
          int channel = 100;
          int _len_adapt0 = 1;
          struct adapter * adapt = (struct adapter *) malloc(_len_adapt0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapt0; _i0++) {
              int _len_adapt__i0__HalData0 = 1;
          adapt[_i0].HalData = (struct TYPE_2__ *) malloc(_len_adapt__i0__HalData0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData0; _j0++) {
            adapt[_i0].HalData->CurrentChannelBW = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pwr_level_ofdm0 = 1;
          int * pwr_level_ofdm = (int *) malloc(_len_pwr_level_ofdm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwr_level_ofdm0; _i0++) {
            pwr_level_ofdm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwr_level_bw200 = 1;
          int * pwr_level_bw20 = (int *) malloc(_len_pwr_level_bw200*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwr_level_bw200; _i0++) {
            pwr_level_bw20[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwr_level_bw400 = 1;
          int * pwr_level_bw40 = (int *) malloc(_len_pwr_level_bw400*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwr_level_bw400; _i0++) {
            pwr_level_bw40[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ofdmbase0 = 1;
          int * ofdmbase = (int *) malloc(_len_ofdmbase0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ofdmbase0; _i0++) {
            ofdmbase[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mcs_base0 = 1;
          int * mcs_base = (int *) malloc(_len_mcs_base0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mcs_base0; _i0++) {
            mcs_base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          getpowerbase88e(adapt,pwr_level_ofdm,pwr_level_bw20,pwr_level_bw40,channel,ofdmbase,mcs_base);
          for(int _aux = 0; _aux < _len_adapt0; _aux++) {
          free(adapt[_aux].HalData);
          }
          free(adapt);
          free(pwr_level_ofdm);
          free(pwr_level_bw20);
          free(pwr_level_bw40);
          free(ofdmbase);
          free(mcs_base);
        
        break;
    }
    // big-arr
    case 1:
    {
          int channel = 255;
          int _len_adapt0 = 65025;
          struct adapter * adapt = (struct adapter *) malloc(_len_adapt0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapt0; _i0++) {
              int _len_adapt__i0__HalData0 = 1;
          adapt[_i0].HalData = (struct TYPE_2__ *) malloc(_len_adapt__i0__HalData0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData0; _j0++) {
            adapt[_i0].HalData->CurrentChannelBW = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pwr_level_ofdm0 = 65025;
          int * pwr_level_ofdm = (int *) malloc(_len_pwr_level_ofdm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwr_level_ofdm0; _i0++) {
            pwr_level_ofdm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwr_level_bw200 = 65025;
          int * pwr_level_bw20 = (int *) malloc(_len_pwr_level_bw200*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwr_level_bw200; _i0++) {
            pwr_level_bw20[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwr_level_bw400 = 65025;
          int * pwr_level_bw40 = (int *) malloc(_len_pwr_level_bw400*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwr_level_bw400; _i0++) {
            pwr_level_bw40[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ofdmbase0 = 65025;
          int * ofdmbase = (int *) malloc(_len_ofdmbase0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ofdmbase0; _i0++) {
            ofdmbase[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mcs_base0 = 65025;
          int * mcs_base = (int *) malloc(_len_mcs_base0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mcs_base0; _i0++) {
            mcs_base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          getpowerbase88e(adapt,pwr_level_ofdm,pwr_level_bw20,pwr_level_bw40,channel,ofdmbase,mcs_base);
          for(int _aux = 0; _aux < _len_adapt0; _aux++) {
          free(adapt[_aux].HalData);
          }
          free(adapt);
          free(pwr_level_ofdm);
          free(pwr_level_bw20);
          free(pwr_level_bw40);
          free(ofdmbase);
          free(mcs_base);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int channel = 10;
          int _len_adapt0 = 100;
          struct adapter * adapt = (struct adapter *) malloc(_len_adapt0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapt0; _i0++) {
              int _len_adapt__i0__HalData0 = 1;
          adapt[_i0].HalData = (struct TYPE_2__ *) malloc(_len_adapt__i0__HalData0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData0; _j0++) {
            adapt[_i0].HalData->CurrentChannelBW = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pwr_level_ofdm0 = 100;
          int * pwr_level_ofdm = (int *) malloc(_len_pwr_level_ofdm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwr_level_ofdm0; _i0++) {
            pwr_level_ofdm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwr_level_bw200 = 100;
          int * pwr_level_bw20 = (int *) malloc(_len_pwr_level_bw200*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwr_level_bw200; _i0++) {
            pwr_level_bw20[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwr_level_bw400 = 100;
          int * pwr_level_bw40 = (int *) malloc(_len_pwr_level_bw400*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwr_level_bw400; _i0++) {
            pwr_level_bw40[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ofdmbase0 = 100;
          int * ofdmbase = (int *) malloc(_len_ofdmbase0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ofdmbase0; _i0++) {
            ofdmbase[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mcs_base0 = 100;
          int * mcs_base = (int *) malloc(_len_mcs_base0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mcs_base0; _i0++) {
            mcs_base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          getpowerbase88e(adapt,pwr_level_ofdm,pwr_level_bw20,pwr_level_bw40,channel,ofdmbase,mcs_base);
          for(int _aux = 0; _aux < _len_adapt0; _aux++) {
          free(adapt[_aux].HalData);
          }
          free(adapt);
          free(pwr_level_ofdm);
          free(pwr_level_bw20);
          free(pwr_level_bw40);
          free(ofdmbase);
          free(mcs_base);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
