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
struct mwifiex_wmm_ac_status {int /*<<< orphan*/  flow_required; int /*<<< orphan*/  disabled; } ;
struct TYPE_2__ {struct mwifiex_wmm_ac_status* ac_status; } ;
struct mwifiex_private {TYPE_1__ wmm; } ;
typedef  enum mwifiex_wmm_ac_e { ____Placeholder_mwifiex_wmm_ac_e } mwifiex_wmm_ac_e ;

/* Variables and functions */
 int WMM_AC_BK ; 

__attribute__((used)) static enum mwifiex_wmm_ac_e
mwifiex_wmm_eval_downgrade_ac(struct mwifiex_private *priv,
			      enum mwifiex_wmm_ac_e eval_ac)
{
	int down_ac;
	enum mwifiex_wmm_ac_e ret_ac;
	struct mwifiex_wmm_ac_status *ac_status;

	ac_status = &priv->wmm.ac_status[eval_ac];

	if (!ac_status->disabled)
		/* Okay to use this AC, its enabled */
		return eval_ac;

	/* Setup a default return value of the lowest priority */
	ret_ac = WMM_AC_BK;

	/*
	 *  Find the highest AC that is enabled and does not require
	 *  admission control. The spec disallows downgrading to an AC,
	 *  which is enabled due to a completed admission control.
	 *  Unadmitted traffic is not to be sent on an AC with admitted
	 *  traffic.
	 */
	for (down_ac = WMM_AC_BK; down_ac < eval_ac; down_ac++) {
		ac_status = &priv->wmm.ac_status[down_ac];

		if (!ac_status->disabled && !ac_status->flow_required)
			/* AC is enabled and does not require admission
			   control */
			ret_ac = (enum mwifiex_wmm_ac_e) down_ac;
	}

	return ret_ac;
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
          enum mwifiex_wmm_ac_e eval_ac = 0;
          int _len_priv0 = 1;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__wmm_ac_status0 = 1;
          priv[_i0].wmm.ac_status = (struct mwifiex_wmm_ac_status *) malloc(_len_priv__i0__wmm_ac_status0*sizeof(struct mwifiex_wmm_ac_status));
          for(int _j0 = 0; _j0 < _len_priv__i0__wmm_ac_status0; _j0++) {
            priv[_i0].wmm.ac_status->flow_required = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].wmm.ac_status->disabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum mwifiex_wmm_ac_e benchRet = mwifiex_wmm_eval_downgrade_ac(priv,eval_ac);
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum mwifiex_wmm_ac_e eval_ac = 0;
          int _len_priv0 = 65025;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__wmm_ac_status0 = 1;
          priv[_i0].wmm.ac_status = (struct mwifiex_wmm_ac_status *) malloc(_len_priv__i0__wmm_ac_status0*sizeof(struct mwifiex_wmm_ac_status));
          for(int _j0 = 0; _j0 < _len_priv__i0__wmm_ac_status0; _j0++) {
            priv[_i0].wmm.ac_status->flow_required = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].wmm.ac_status->disabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum mwifiex_wmm_ac_e benchRet = mwifiex_wmm_eval_downgrade_ac(priv,eval_ac);
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum mwifiex_wmm_ac_e eval_ac = 0;
          int _len_priv0 = 100;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__wmm_ac_status0 = 1;
          priv[_i0].wmm.ac_status = (struct mwifiex_wmm_ac_status *) malloc(_len_priv__i0__wmm_ac_status0*sizeof(struct mwifiex_wmm_ac_status));
          for(int _j0 = 0; _j0 < _len_priv__i0__wmm_ac_status0; _j0++) {
            priv[_i0].wmm.ac_status->flow_required = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].wmm.ac_status->disabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum mwifiex_wmm_ac_e benchRet = mwifiex_wmm_eval_downgrade_ac(priv,eval_ac);
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
