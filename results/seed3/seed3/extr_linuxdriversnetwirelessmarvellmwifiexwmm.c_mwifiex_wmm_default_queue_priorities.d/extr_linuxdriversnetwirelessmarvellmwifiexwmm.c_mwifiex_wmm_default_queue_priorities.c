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
struct TYPE_2__ {int /*<<< orphan*/ * queue_priority; } ;
struct mwifiex_private {TYPE_1__ wmm; } ;

/* Variables and functions */
 int /*<<< orphan*/  WMM_AC_BE ; 
 int /*<<< orphan*/  WMM_AC_BK ; 
 int /*<<< orphan*/  WMM_AC_VI ; 
 int /*<<< orphan*/  WMM_AC_VO ; 

__attribute__((used)) static void mwifiex_wmm_default_queue_priorities(struct mwifiex_private *priv)
{
	/* Default queue priorities: VO->VI->BE->BK */
	priv->wmm.queue_priority[0] = WMM_AC_VO;
	priv->wmm.queue_priority[1] = WMM_AC_VI;
	priv->wmm.queue_priority[2] = WMM_AC_BE;
	priv->wmm.queue_priority[3] = WMM_AC_BK;
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
              int _len_priv__i0__wmm_queue_priority0 = 1;
          priv[_i0].wmm.queue_priority = (int *) malloc(_len_priv__i0__wmm_queue_priority0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_priv__i0__wmm_queue_priority0; _j0++) {
            priv[_i0].wmm.queue_priority[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mwifiex_wmm_default_queue_priorities(priv);
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__wmm_queue_priority0 = 1;
          priv[_i0].wmm.queue_priority = (int *) malloc(_len_priv__i0__wmm_queue_priority0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_priv__i0__wmm_queue_priority0; _j0++) {
            priv[_i0].wmm.queue_priority[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mwifiex_wmm_default_queue_priorities(priv);
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__wmm_queue_priority0 = 1;
          priv[_i0].wmm.queue_priority = (int *) malloc(_len_priv__i0__wmm_queue_priority0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_priv__i0__wmm_queue_priority0; _j0++) {
            priv[_i0].wmm.queue_priority[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mwifiex_wmm_default_queue_priorities(priv);
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
