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
typedef  int /*<<< orphan*/  u8 ;
struct ieee80211_device {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  MAX_SP_Len ; 
 int /*<<< orphan*/  MFIE_TYPE_GENERIC ; 

__attribute__((used)) static void ieee80211_WMM_Info(struct ieee80211_device *ieee, u8 **tag_p)
{
	u8 *tag = *tag_p;

	*tag++ = MFIE_TYPE_GENERIC; /* 0 */
	*tag++ = 7;
	*tag++ = 0x00;
	*tag++ = 0x50;
	*tag++ = 0xf2;
	*tag++ = 0x02;	/* 5 */
	*tag++ = 0x00;
	*tag++ = 0x01;
#ifdef SUPPORT_USPD
	if (ieee->current_network.wmm_info & 0x80)
		*tag++ = 0x0f | MAX_SP_Len;
	else
		*tag++ = MAX_SP_Len;
#else
	*tag++ = MAX_SP_Len;
#endif
	*tag_p = tag;
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
            ieee[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tag_p0 = 1;
          int ** tag_p = (int **) malloc(_len_tag_p0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_tag_p0; _i0++) {
            int _len_tag_p1 = 1;
            tag_p[_i0] = (int *) malloc(_len_tag_p1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_tag_p1; _i1++) {
              tag_p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ieee80211_WMM_Info(ieee,tag_p);
          free(ieee);
          for(int i1 = 0; i1 < _len_tag_p0; i1++) {
            int _len_tag_p1 = 1;
              free(tag_p[i1]);
          }
          free(tag_p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ieee0 = 65025;
          struct ieee80211_device * ieee = (struct ieee80211_device *) malloc(_len_ieee0*sizeof(struct ieee80211_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
            ieee[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tag_p0 = 65025;
          int ** tag_p = (int **) malloc(_len_tag_p0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_tag_p0; _i0++) {
            int _len_tag_p1 = 1;
            tag_p[_i0] = (int *) malloc(_len_tag_p1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_tag_p1; _i1++) {
              tag_p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ieee80211_WMM_Info(ieee,tag_p);
          free(ieee);
          for(int i1 = 0; i1 < _len_tag_p0; i1++) {
            int _len_tag_p1 = 1;
              free(tag_p[i1]);
          }
          free(tag_p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ieee0 = 100;
          struct ieee80211_device * ieee = (struct ieee80211_device *) malloc(_len_ieee0*sizeof(struct ieee80211_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
            ieee[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tag_p0 = 100;
          int ** tag_p = (int **) malloc(_len_tag_p0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_tag_p0; _i0++) {
            int _len_tag_p1 = 1;
            tag_p[_i0] = (int *) malloc(_len_tag_p1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_tag_p1; _i1++) {
              tag_p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ieee80211_WMM_Info(ieee,tag_p);
          free(ieee);
          for(int i1 = 0; i1 < _len_tag_p0; i1++) {
            int _len_tag_p1 = 1;
              free(tag_p[i1]);
          }
          free(tag_p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
