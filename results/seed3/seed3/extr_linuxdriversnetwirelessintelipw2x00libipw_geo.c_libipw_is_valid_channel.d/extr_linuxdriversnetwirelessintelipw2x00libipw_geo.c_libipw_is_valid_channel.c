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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u8 ;
struct TYPE_6__ {int bg_channels; int a_channels; TYPE_2__* a; TYPE_1__* bg; } ;
struct libipw_device {int freq_band; int mode; TYPE_3__ geo; } ;
struct TYPE_5__ {scalar_t__ channel; int flags; } ;
struct TYPE_4__ {scalar_t__ channel; int flags; } ;

/* Variables and functions */
 int IEEE_G ; 
 int LIBIPW_24GHZ_BAND ; 
 int LIBIPW_52GHZ_BAND ; 
 int LIBIPW_CH_B_ONLY ; 
 int LIBIPW_CH_INVALID ; 

int libipw_is_valid_channel(struct libipw_device *ieee, u8 channel)
{
	int i;

	/* Driver needs to initialize the geography map before using
	 * these helper functions */
	if (ieee->geo.bg_channels == 0 && ieee->geo.a_channels == 0)
		return 0;

	if (ieee->freq_band & LIBIPW_24GHZ_BAND)
		for (i = 0; i < ieee->geo.bg_channels; i++)
			/* NOTE: If G mode is currently supported but
			 * this is a B only channel, we don't see it
			 * as valid. */
			if ((ieee->geo.bg[i].channel == channel) &&
			    !(ieee->geo.bg[i].flags & LIBIPW_CH_INVALID) &&
			    (!(ieee->mode & IEEE_G) ||
			     !(ieee->geo.bg[i].flags & LIBIPW_CH_B_ONLY)))
				return LIBIPW_24GHZ_BAND;

	if (ieee->freq_band & LIBIPW_52GHZ_BAND)
		for (i = 0; i < ieee->geo.a_channels; i++)
			if ((ieee->geo.a[i].channel == channel) &&
			    !(ieee->geo.a[i].flags & LIBIPW_CH_INVALID))
				return LIBIPW_52GHZ_BAND;

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
          long channel = 100;
          int _len_ieee0 = 1;
          struct libipw_device * ieee = (struct libipw_device *) malloc(_len_ieee0*sizeof(struct libipw_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
            ieee[_i0].freq_band = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].geo.bg_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].geo.a_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ieee__i0__geo_a0 = 1;
          ieee[_i0].geo.a = (struct TYPE_5__ *) malloc(_len_ieee__i0__geo_a0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ieee__i0__geo_a0; _j0++) {
            ieee[_i0].geo.a->channel = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].geo.a->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ieee__i0__geo_bg0 = 1;
          ieee[_i0].geo.bg = (struct TYPE_4__ *) malloc(_len_ieee__i0__geo_bg0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ieee__i0__geo_bg0; _j0++) {
            ieee[_i0].geo.bg->channel = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].geo.bg->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = libipw_is_valid_channel(ieee,channel);
          printf("%d\n", benchRet); 
          free(ieee);
        
        break;
    }
    // big-arr
    case 1:
    {
          long channel = 255;
          int _len_ieee0 = 65025;
          struct libipw_device * ieee = (struct libipw_device *) malloc(_len_ieee0*sizeof(struct libipw_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
            ieee[_i0].freq_band = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].geo.bg_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].geo.a_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ieee__i0__geo_a0 = 1;
          ieee[_i0].geo.a = (struct TYPE_5__ *) malloc(_len_ieee__i0__geo_a0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ieee__i0__geo_a0; _j0++) {
            ieee[_i0].geo.a->channel = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].geo.a->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ieee__i0__geo_bg0 = 1;
          ieee[_i0].geo.bg = (struct TYPE_4__ *) malloc(_len_ieee__i0__geo_bg0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ieee__i0__geo_bg0; _j0++) {
            ieee[_i0].geo.bg->channel = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].geo.bg->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = libipw_is_valid_channel(ieee,channel);
          printf("%d\n", benchRet); 
          free(ieee);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long channel = 10;
          int _len_ieee0 = 100;
          struct libipw_device * ieee = (struct libipw_device *) malloc(_len_ieee0*sizeof(struct libipw_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
            ieee[_i0].freq_band = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].geo.bg_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].geo.a_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ieee__i0__geo_a0 = 1;
          ieee[_i0].geo.a = (struct TYPE_5__ *) malloc(_len_ieee__i0__geo_a0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ieee__i0__geo_a0; _j0++) {
            ieee[_i0].geo.a->channel = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].geo.a->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ieee__i0__geo_bg0 = 1;
          ieee[_i0].geo.bg = (struct TYPE_4__ *) malloc(_len_ieee__i0__geo_bg0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ieee__i0__geo_bg0; _j0++) {
            ieee[_i0].geo.bg->channel = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].geo.bg->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = libipw_is_valid_channel(ieee,channel);
          printf("%d\n", benchRet); 
          free(ieee);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
