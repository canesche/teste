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
struct TYPE_2__ {int /*<<< orphan*/  aca_max; int /*<<< orphan*/  aca_min; int /*<<< orphan*/  cdp_max; int /*<<< orphan*/  cdp_min; int /*<<< orphan*/  dcp_max; int /*<<< orphan*/  dcp_min; int /*<<< orphan*/  sdp_max; int /*<<< orphan*/  sdp_min; } ;
struct usb_phy {TYPE_1__ chg_cur; } ;

/* Variables and functions */
 int /*<<< orphan*/  DEFAULT_ACA_CUR_MAX ; 
 int /*<<< orphan*/  DEFAULT_ACA_CUR_MIN ; 
 int /*<<< orphan*/  DEFAULT_CDP_CUR_MAX ; 
 int /*<<< orphan*/  DEFAULT_CDP_CUR_MIN ; 
 int /*<<< orphan*/  DEFAULT_DCP_CUR_MAX ; 
 int /*<<< orphan*/  DEFAULT_DCP_CUR_MIN ; 
 int /*<<< orphan*/  DEFAULT_SDP_CUR_MAX ; 
 int /*<<< orphan*/  DEFAULT_SDP_CUR_MIN ; 

__attribute__((used)) static void usb_phy_set_default_current(struct usb_phy *usb_phy)
{
	usb_phy->chg_cur.sdp_min = DEFAULT_SDP_CUR_MIN;
	usb_phy->chg_cur.sdp_max = DEFAULT_SDP_CUR_MAX;
	usb_phy->chg_cur.dcp_min = DEFAULT_DCP_CUR_MIN;
	usb_phy->chg_cur.dcp_max = DEFAULT_DCP_CUR_MAX;
	usb_phy->chg_cur.cdp_min = DEFAULT_CDP_CUR_MIN;
	usb_phy->chg_cur.cdp_max = DEFAULT_CDP_CUR_MAX;
	usb_phy->chg_cur.aca_min = DEFAULT_ACA_CUR_MIN;
	usb_phy->chg_cur.aca_max = DEFAULT_ACA_CUR_MAX;
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
          int _len_usb_phy0 = 1;
          struct usb_phy * usb_phy = (struct usb_phy *) malloc(_len_usb_phy0*sizeof(struct usb_phy));
          for(int _i0 = 0; _i0 < _len_usb_phy0; _i0++) {
            usb_phy[_i0].chg_cur.aca_max = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.aca_min = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.cdp_max = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.cdp_min = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.dcp_max = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.dcp_min = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.sdp_max = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.sdp_min = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usb_phy_set_default_current(usb_phy);
          free(usb_phy);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_usb_phy0 = 65025;
          struct usb_phy * usb_phy = (struct usb_phy *) malloc(_len_usb_phy0*sizeof(struct usb_phy));
          for(int _i0 = 0; _i0 < _len_usb_phy0; _i0++) {
            usb_phy[_i0].chg_cur.aca_max = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.aca_min = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.cdp_max = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.cdp_min = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.dcp_max = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.dcp_min = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.sdp_max = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.sdp_min = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usb_phy_set_default_current(usb_phy);
          free(usb_phy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_usb_phy0 = 100;
          struct usb_phy * usb_phy = (struct usb_phy *) malloc(_len_usb_phy0*sizeof(struct usb_phy));
          for(int _i0 = 0; _i0 < _len_usb_phy0; _i0++) {
            usb_phy[_i0].chg_cur.aca_max = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.aca_min = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.cdp_max = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.cdp_min = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.dcp_max = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.dcp_min = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.sdp_max = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.sdp_min = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usb_phy_set_default_current(usb_phy);
          free(usb_phy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
