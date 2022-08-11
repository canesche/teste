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
typedef  scalar_t__ u8 ;
struct pm8xxx_xoadc {int nchans; struct pm8xxx_chan_info* chans; } ;
struct pm8xxx_chan_info {TYPE_1__* hwchan; } ;
struct TYPE_2__ {scalar_t__ amux_channel; } ;

/* Variables and functions */

__attribute__((used)) static struct pm8xxx_chan_info *
pm8xxx_get_channel(struct pm8xxx_xoadc *adc, u8 chan)
{
	int i;

	for (i = 0; i < adc->nchans; i++) {
		struct pm8xxx_chan_info *ch = &adc->chans[i];
		if (ch->hwchan->amux_channel == chan)
			return ch;
	}
	return NULL;
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
          long chan = 100;
          int _len_adc0 = 1;
          struct pm8xxx_xoadc * adc = (struct pm8xxx_xoadc *) malloc(_len_adc0*sizeof(struct pm8xxx_xoadc));
          for(int _i0 = 0; _i0 < _len_adc0; _i0++) {
            adc[_i0].nchans = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adc__i0__chans0 = 1;
          adc[_i0].chans = (struct pm8xxx_chan_info *) malloc(_len_adc__i0__chans0*sizeof(struct pm8xxx_chan_info));
          for(int _j0 = 0; _j0 < _len_adc__i0__chans0; _j0++) {
              int _len_adc__i0__chans_hwchan0 = 1;
          adc[_i0].chans->hwchan = (struct TYPE_2__ *) malloc(_len_adc__i0__chans_hwchan0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adc__i0__chans_hwchan0; _j0++) {
            adc[_i0].chans->hwchan->amux_channel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct pm8xxx_chan_info * benchRet = pm8xxx_get_channel(adc,chan);
          for(int _aux = 0; _aux < _len_adc0; _aux++) {
          free(adc[_aux].chans);
          }
          free(adc);
        
        break;
    }
    // big-arr
    case 1:
    {
          long chan = 255;
          int _len_adc0 = 65025;
          struct pm8xxx_xoadc * adc = (struct pm8xxx_xoadc *) malloc(_len_adc0*sizeof(struct pm8xxx_xoadc));
          for(int _i0 = 0; _i0 < _len_adc0; _i0++) {
            adc[_i0].nchans = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adc__i0__chans0 = 1;
          adc[_i0].chans = (struct pm8xxx_chan_info *) malloc(_len_adc__i0__chans0*sizeof(struct pm8xxx_chan_info));
          for(int _j0 = 0; _j0 < _len_adc__i0__chans0; _j0++) {
              int _len_adc__i0__chans_hwchan0 = 1;
          adc[_i0].chans->hwchan = (struct TYPE_2__ *) malloc(_len_adc__i0__chans_hwchan0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adc__i0__chans_hwchan0; _j0++) {
            adc[_i0].chans->hwchan->amux_channel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct pm8xxx_chan_info * benchRet = pm8xxx_get_channel(adc,chan);
          for(int _aux = 0; _aux < _len_adc0; _aux++) {
          free(adc[_aux].chans);
          }
          free(adc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long chan = 10;
          int _len_adc0 = 100;
          struct pm8xxx_xoadc * adc = (struct pm8xxx_xoadc *) malloc(_len_adc0*sizeof(struct pm8xxx_xoadc));
          for(int _i0 = 0; _i0 < _len_adc0; _i0++) {
            adc[_i0].nchans = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adc__i0__chans0 = 1;
          adc[_i0].chans = (struct pm8xxx_chan_info *) malloc(_len_adc__i0__chans0*sizeof(struct pm8xxx_chan_info));
          for(int _j0 = 0; _j0 < _len_adc__i0__chans0; _j0++) {
              int _len_adc__i0__chans_hwchan0 = 1;
          adc[_i0].chans->hwchan = (struct TYPE_2__ *) malloc(_len_adc__i0__chans_hwchan0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adc__i0__chans_hwchan0; _j0++) {
            adc[_i0].chans->hwchan->amux_channel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct pm8xxx_chan_info * benchRet = pm8xxx_get_channel(adc,chan);
          for(int _aux = 0; _aux < _len_adc0; _aux++) {
          free(adc[_aux].chans);
          }
          free(adc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
