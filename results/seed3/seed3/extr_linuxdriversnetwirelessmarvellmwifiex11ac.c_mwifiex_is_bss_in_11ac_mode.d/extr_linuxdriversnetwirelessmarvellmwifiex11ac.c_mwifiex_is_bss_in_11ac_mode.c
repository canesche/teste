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
struct mwifiex_bssdescriptor {int /*<<< orphan*/  bcn_vht_cap; struct ieee80211_vht_operation* bcn_vht_oper; } ;
struct TYPE_2__ {struct mwifiex_bssdescriptor bss_descriptor; } ;
struct mwifiex_private {TYPE_1__ curr_bss_params; } ;
struct ieee80211_vht_operation {scalar_t__ chan_width; } ;

/* Variables and functions */
 scalar_t__ IEEE80211_VHT_CHANWIDTH_USE_HT ; 

bool mwifiex_is_bss_in_11ac_mode(struct mwifiex_private *priv)
{
	struct mwifiex_bssdescriptor *bss_desc;
	struct ieee80211_vht_operation *vht_oper;

	bss_desc = &priv->curr_bss_params.bss_descriptor;
	vht_oper = bss_desc->bcn_vht_oper;

	if (!bss_desc->bcn_vht_cap || !vht_oper)
		return false;

	if (vht_oper->chan_width == IEEE80211_VHT_CHANWIDTH_USE_HT)
		return false;

	return true;
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
          int _len_priv0 = 1;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].curr_bss_params.bss_descriptor.bcn_vht_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__curr_bss_params_bss_descriptor_bcn_vht_oper0 = 1;
          priv[_i0].curr_bss_params.bss_descriptor.bcn_vht_oper = (struct ieee80211_vht_operation *) malloc(_len_priv__i0__curr_bss_params_bss_descriptor_bcn_vht_oper0*sizeof(struct ieee80211_vht_operation));
          for(int _j0 = 0; _j0 < _len_priv__i0__curr_bss_params_bss_descriptor_bcn_vht_oper0; _j0++) {
            priv[_i0].curr_bss_params.bss_descriptor.bcn_vht_oper->chan_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mwifiex_is_bss_in_11ac_mode(priv);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].curr_bss_params.bss_descriptor.bcn_vht_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__curr_bss_params_bss_descriptor_bcn_vht_oper0 = 1;
          priv[_i0].curr_bss_params.bss_descriptor.bcn_vht_oper = (struct ieee80211_vht_operation *) malloc(_len_priv__i0__curr_bss_params_bss_descriptor_bcn_vht_oper0*sizeof(struct ieee80211_vht_operation));
          for(int _j0 = 0; _j0 < _len_priv__i0__curr_bss_params_bss_descriptor_bcn_vht_oper0; _j0++) {
            priv[_i0].curr_bss_params.bss_descriptor.bcn_vht_oper->chan_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mwifiex_is_bss_in_11ac_mode(priv);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].curr_bss_params.bss_descriptor.bcn_vht_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__curr_bss_params_bss_descriptor_bcn_vht_oper0 = 1;
          priv[_i0].curr_bss_params.bss_descriptor.bcn_vht_oper = (struct ieee80211_vht_operation *) malloc(_len_priv__i0__curr_bss_params_bss_descriptor_bcn_vht_oper0*sizeof(struct ieee80211_vht_operation));
          for(int _j0 = 0; _j0 < _len_priv__i0__curr_bss_params_bss_descriptor_bcn_vht_oper0; _j0++) {
            priv[_i0].curr_bss_params.bss_descriptor.bcn_vht_oper->chan_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mwifiex_is_bss_in_11ac_mode(priv);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
