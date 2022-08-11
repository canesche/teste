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
struct TYPE_2__ {int value; } ;
union iwreq_data {TYPE_1__ bitrate; } ;
typedef  int u32 ;
struct iw_request_info {int dummy; } ;
struct ieee80211_device {int rate; } ;

/* Variables and functions */

int ieee80211_wx_set_rate(struct ieee80211_device *ieee,
			     struct iw_request_info *info,
			     union iwreq_data *wrqu, char *extra)
{

	u32 target_rate = wrqu->bitrate.value;

	ieee->rate = target_rate/100000;
	/* FIXME: we might want to limit rate also in management protocols. */
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
          int _len_ieee0 = 1;
          struct ieee80211_device * ieee = (struct ieee80211_device *) malloc(_len_ieee0*sizeof(struct ieee80211_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
            ieee[_i0].rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct iw_request_info * info = (struct iw_request_info *) malloc(_len_info0*sizeof(struct iw_request_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wrqu0 = 1;
          union iwreq_data * wrqu = (union iwreq_data *) malloc(_len_wrqu0*sizeof(union iwreq_data));
          for(int _i0 = 0; _i0 < _len_wrqu0; _i0++) {
            wrqu[_i0] = 0;
          }
          int _len_extra0 = 1;
          char * extra = (char *) malloc(_len_extra0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_extra0; _i0++) {
            extra[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ieee80211_wx_set_rate(ieee,info,wrqu,extra);
          printf("%d\n", benchRet); 
          free(ieee);
          free(info);
          free(wrqu);
          free(extra);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ieee0 = 65025;
          struct ieee80211_device * ieee = (struct ieee80211_device *) malloc(_len_ieee0*sizeof(struct ieee80211_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
            ieee[_i0].rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 65025;
          struct iw_request_info * info = (struct iw_request_info *) malloc(_len_info0*sizeof(struct iw_request_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wrqu0 = 65025;
          union iwreq_data * wrqu = (union iwreq_data *) malloc(_len_wrqu0*sizeof(union iwreq_data));
          for(int _i0 = 0; _i0 < _len_wrqu0; _i0++) {
            wrqu[_i0] = 0;
          }
          int _len_extra0 = 65025;
          char * extra = (char *) malloc(_len_extra0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_extra0; _i0++) {
            extra[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ieee80211_wx_set_rate(ieee,info,wrqu,extra);
          printf("%d\n", benchRet); 
          free(ieee);
          free(info);
          free(wrqu);
          free(extra);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ieee0 = 100;
          struct ieee80211_device * ieee = (struct ieee80211_device *) malloc(_len_ieee0*sizeof(struct ieee80211_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
            ieee[_i0].rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 100;
          struct iw_request_info * info = (struct iw_request_info *) malloc(_len_info0*sizeof(struct iw_request_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wrqu0 = 100;
          union iwreq_data * wrqu = (union iwreq_data *) malloc(_len_wrqu0*sizeof(union iwreq_data));
          for(int _i0 = 0; _i0 < _len_wrqu0; _i0++) {
            wrqu[_i0] = 0;
          }
          int _len_extra0 = 100;
          char * extra = (char *) malloc(_len_extra0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_extra0; _i0++) {
            extra[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ieee80211_wx_set_rate(ieee,info,wrqu,extra);
          printf("%d\n", benchRet); 
          free(ieee);
          free(info);
          free(wrqu);
          free(extra);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
