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
struct iwl_tt_restriction {int tx_stream; } ;
struct iwl_tt_mgmt {int state; struct iwl_tt_restriction* restriction; int /*<<< orphan*/  advanced_tt; } ;
struct iwl_priv {struct iwl_tt_mgmt thermal_throttle; } ;
typedef  enum iwl_antenna_ok { ____Placeholder_iwl_antenna_ok } iwl_antenna_ok ;

/* Variables and functions */
 int IWL_ANT_OK_MULTI ; 

enum iwl_antenna_ok iwl_tx_ant_restriction(struct iwl_priv *priv)
{
	struct iwl_tt_mgmt *tt = &priv->thermal_throttle;
	struct iwl_tt_restriction *restriction;

	if (!priv->thermal_throttle.advanced_tt)
		return IWL_ANT_OK_MULTI;
	restriction = tt->restriction + tt->state;
	return restriction->tx_stream;
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
          struct iwl_priv * priv = (struct iwl_priv *) malloc(_len_priv0*sizeof(struct iwl_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].thermal_throttle.state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__thermal_throttle_restriction0 = 1;
          priv[_i0].thermal_throttle.restriction = (struct iwl_tt_restriction *) malloc(_len_priv__i0__thermal_throttle_restriction0*sizeof(struct iwl_tt_restriction));
          for(int _j0 = 0; _j0 < _len_priv__i0__thermal_throttle_restriction0; _j0++) {
            priv[_i0].thermal_throttle.restriction->tx_stream = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].thermal_throttle.advanced_tt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum iwl_antenna_ok benchRet = iwl_tx_ant_restriction(priv);
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct iwl_priv * priv = (struct iwl_priv *) malloc(_len_priv0*sizeof(struct iwl_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].thermal_throttle.state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__thermal_throttle_restriction0 = 1;
          priv[_i0].thermal_throttle.restriction = (struct iwl_tt_restriction *) malloc(_len_priv__i0__thermal_throttle_restriction0*sizeof(struct iwl_tt_restriction));
          for(int _j0 = 0; _j0 < _len_priv__i0__thermal_throttle_restriction0; _j0++) {
            priv[_i0].thermal_throttle.restriction->tx_stream = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].thermal_throttle.advanced_tt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum iwl_antenna_ok benchRet = iwl_tx_ant_restriction(priv);
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct iwl_priv * priv = (struct iwl_priv *) malloc(_len_priv0*sizeof(struct iwl_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].thermal_throttle.state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__thermal_throttle_restriction0 = 1;
          priv[_i0].thermal_throttle.restriction = (struct iwl_tt_restriction *) malloc(_len_priv__i0__thermal_throttle_restriction0*sizeof(struct iwl_tt_restriction));
          for(int _j0 = 0; _j0 < _len_priv__i0__thermal_throttle_restriction0; _j0++) {
            priv[_i0].thermal_throttle.restriction->tx_stream = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].thermal_throttle.advanced_tt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum iwl_antenna_ok benchRet = iwl_tx_ant_restriction(priv);
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
