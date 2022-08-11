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
typedef  int /*<<< orphan*/  u16 ;
struct wiphy {size_t n_iface_combinations; int /*<<< orphan*/  interface_modes; struct ieee80211_iface_combination* iface_combinations; } ;
struct qtnf_mac_info {size_t n_if_comb; int /*<<< orphan*/  radar_detect_widths; struct ieee80211_iface_combination* if_comb; } ;
struct ieee80211_iface_combination {size_t n_limits; TYPE_1__* limits; int /*<<< orphan*/  radar_detect_widths; } ;
struct TYPE_2__ {int /*<<< orphan*/  types; } ;

/* Variables and functions */
 int ENOENT ; 

__attribute__((used)) static int
qtnf_wiphy_setup_if_comb(struct wiphy *wiphy, struct qtnf_mac_info *mac_info)
{
	struct ieee80211_iface_combination *if_comb;
	size_t n_if_comb;
	u16 interface_modes = 0;
	size_t i, j;

	if_comb = mac_info->if_comb;
	n_if_comb = mac_info->n_if_comb;

	if (!if_comb || !n_if_comb)
		return -ENOENT;

	for (i = 0; i < n_if_comb; i++) {
		if_comb[i].radar_detect_widths = mac_info->radar_detect_widths;

		for (j = 0; j < if_comb[i].n_limits; j++)
			interface_modes |= if_comb[i].limits[j].types;
	}

	wiphy->iface_combinations = if_comb;
	wiphy->n_iface_combinations = n_if_comb;
	wiphy->interface_modes = interface_modes;

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
          int _len_wiphy0 = 1;
          struct wiphy * wiphy = (struct wiphy *) malloc(_len_wiphy0*sizeof(struct wiphy));
          for(int _i0 = 0; _i0 < _len_wiphy0; _i0++) {
            wiphy[_i0].n_iface_combinations = ((-2 * (next_i()%2)) + 1) * next_i();
        wiphy[_i0].interface_modes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wiphy__i0__iface_combinations0 = 1;
          wiphy[_i0].iface_combinations = (struct ieee80211_iface_combination *) malloc(_len_wiphy__i0__iface_combinations0*sizeof(struct ieee80211_iface_combination));
          for(int _j0 = 0; _j0 < _len_wiphy__i0__iface_combinations0; _j0++) {
            wiphy[_i0].iface_combinations->n_limits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wiphy__i0__iface_combinations_limits0 = 1;
          wiphy[_i0].iface_combinations->limits = (struct TYPE_2__ *) malloc(_len_wiphy__i0__iface_combinations_limits0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_wiphy__i0__iface_combinations_limits0; _j0++) {
            wiphy[_i0].iface_combinations->limits->types = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wiphy[_i0].iface_combinations->radar_detect_widths = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mac_info0 = 1;
          struct qtnf_mac_info * mac_info = (struct qtnf_mac_info *) malloc(_len_mac_info0*sizeof(struct qtnf_mac_info));
          for(int _i0 = 0; _i0 < _len_mac_info0; _i0++) {
            mac_info[_i0].n_if_comb = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_info[_i0].radar_detect_widths = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mac_info__i0__if_comb0 = 1;
          mac_info[_i0].if_comb = (struct ieee80211_iface_combination *) malloc(_len_mac_info__i0__if_comb0*sizeof(struct ieee80211_iface_combination));
          for(int _j0 = 0; _j0 < _len_mac_info__i0__if_comb0; _j0++) {
            mac_info[_i0].if_comb->n_limits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mac_info__i0__if_comb_limits0 = 1;
          mac_info[_i0].if_comb->limits = (struct TYPE_2__ *) malloc(_len_mac_info__i0__if_comb_limits0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mac_info__i0__if_comb_limits0; _j0++) {
            mac_info[_i0].if_comb->limits->types = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mac_info[_i0].if_comb->radar_detect_widths = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qtnf_wiphy_setup_if_comb(wiphy,mac_info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_wiphy0; _aux++) {
          free(wiphy[_aux].iface_combinations);
          }
          free(wiphy);
          for(int _aux = 0; _aux < _len_mac_info0; _aux++) {
          free(mac_info[_aux].if_comb);
          }
          free(mac_info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_wiphy0 = 65025;
          struct wiphy * wiphy = (struct wiphy *) malloc(_len_wiphy0*sizeof(struct wiphy));
          for(int _i0 = 0; _i0 < _len_wiphy0; _i0++) {
            wiphy[_i0].n_iface_combinations = ((-2 * (next_i()%2)) + 1) * next_i();
        wiphy[_i0].interface_modes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wiphy__i0__iface_combinations0 = 1;
          wiphy[_i0].iface_combinations = (struct ieee80211_iface_combination *) malloc(_len_wiphy__i0__iface_combinations0*sizeof(struct ieee80211_iface_combination));
          for(int _j0 = 0; _j0 < _len_wiphy__i0__iface_combinations0; _j0++) {
            wiphy[_i0].iface_combinations->n_limits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wiphy__i0__iface_combinations_limits0 = 1;
          wiphy[_i0].iface_combinations->limits = (struct TYPE_2__ *) malloc(_len_wiphy__i0__iface_combinations_limits0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_wiphy__i0__iface_combinations_limits0; _j0++) {
            wiphy[_i0].iface_combinations->limits->types = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wiphy[_i0].iface_combinations->radar_detect_widths = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mac_info0 = 65025;
          struct qtnf_mac_info * mac_info = (struct qtnf_mac_info *) malloc(_len_mac_info0*sizeof(struct qtnf_mac_info));
          for(int _i0 = 0; _i0 < _len_mac_info0; _i0++) {
            mac_info[_i0].n_if_comb = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_info[_i0].radar_detect_widths = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mac_info__i0__if_comb0 = 1;
          mac_info[_i0].if_comb = (struct ieee80211_iface_combination *) malloc(_len_mac_info__i0__if_comb0*sizeof(struct ieee80211_iface_combination));
          for(int _j0 = 0; _j0 < _len_mac_info__i0__if_comb0; _j0++) {
            mac_info[_i0].if_comb->n_limits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mac_info__i0__if_comb_limits0 = 1;
          mac_info[_i0].if_comb->limits = (struct TYPE_2__ *) malloc(_len_mac_info__i0__if_comb_limits0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mac_info__i0__if_comb_limits0; _j0++) {
            mac_info[_i0].if_comb->limits->types = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mac_info[_i0].if_comb->radar_detect_widths = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qtnf_wiphy_setup_if_comb(wiphy,mac_info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_wiphy0; _aux++) {
          free(wiphy[_aux].iface_combinations);
          }
          free(wiphy);
          for(int _aux = 0; _aux < _len_mac_info0; _aux++) {
          free(mac_info[_aux].if_comb);
          }
          free(mac_info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_wiphy0 = 100;
          struct wiphy * wiphy = (struct wiphy *) malloc(_len_wiphy0*sizeof(struct wiphy));
          for(int _i0 = 0; _i0 < _len_wiphy0; _i0++) {
            wiphy[_i0].n_iface_combinations = ((-2 * (next_i()%2)) + 1) * next_i();
        wiphy[_i0].interface_modes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wiphy__i0__iface_combinations0 = 1;
          wiphy[_i0].iface_combinations = (struct ieee80211_iface_combination *) malloc(_len_wiphy__i0__iface_combinations0*sizeof(struct ieee80211_iface_combination));
          for(int _j0 = 0; _j0 < _len_wiphy__i0__iface_combinations0; _j0++) {
            wiphy[_i0].iface_combinations->n_limits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wiphy__i0__iface_combinations_limits0 = 1;
          wiphy[_i0].iface_combinations->limits = (struct TYPE_2__ *) malloc(_len_wiphy__i0__iface_combinations_limits0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_wiphy__i0__iface_combinations_limits0; _j0++) {
            wiphy[_i0].iface_combinations->limits->types = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wiphy[_i0].iface_combinations->radar_detect_widths = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mac_info0 = 100;
          struct qtnf_mac_info * mac_info = (struct qtnf_mac_info *) malloc(_len_mac_info0*sizeof(struct qtnf_mac_info));
          for(int _i0 = 0; _i0 < _len_mac_info0; _i0++) {
            mac_info[_i0].n_if_comb = ((-2 * (next_i()%2)) + 1) * next_i();
        mac_info[_i0].radar_detect_widths = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mac_info__i0__if_comb0 = 1;
          mac_info[_i0].if_comb = (struct ieee80211_iface_combination *) malloc(_len_mac_info__i0__if_comb0*sizeof(struct ieee80211_iface_combination));
          for(int _j0 = 0; _j0 < _len_mac_info__i0__if_comb0; _j0++) {
            mac_info[_i0].if_comb->n_limits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mac_info__i0__if_comb_limits0 = 1;
          mac_info[_i0].if_comb->limits = (struct TYPE_2__ *) malloc(_len_mac_info__i0__if_comb_limits0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mac_info__i0__if_comb_limits0; _j0++) {
            mac_info[_i0].if_comb->limits->types = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mac_info[_i0].if_comb->radar_detect_widths = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qtnf_wiphy_setup_if_comb(wiphy,mac_info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_wiphy0; _aux++) {
          free(wiphy[_aux].iface_combinations);
          }
          free(wiphy);
          for(int _aux = 0; _aux < _len_mac_info0; _aux++) {
          free(mac_info[_aux].if_comb);
          }
          free(mac_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
