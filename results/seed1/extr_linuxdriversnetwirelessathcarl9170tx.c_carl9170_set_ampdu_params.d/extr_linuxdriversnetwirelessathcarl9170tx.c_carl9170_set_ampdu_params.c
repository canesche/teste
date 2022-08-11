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
struct sk_buff {scalar_t__ data; } ;
struct ar9170 {int current_density; int current_factor; } ;
struct TYPE_2__ {int ampdu_settings; } ;
struct _carl9170_tx_superframe {TYPE_1__ s; } ;

/* Variables and functions */
 int CARL9170_TX_SUPER_AMPDU_COMMIT_DENSITY ; 
 int CARL9170_TX_SUPER_AMPDU_COMMIT_FACTOR ; 
 int CARL9170_TX_SUPER_AMPDU_DENSITY ; 
 int CARL9170_TX_SUPER_AMPDU_DENSITY_S ; 
 int CARL9170_TX_SUPER_AMPDU_FACTOR ; 
 int CARL9170_TX_SUPER_AMPDU_FACTOR_S ; 

__attribute__((used)) static void carl9170_set_ampdu_params(struct ar9170 *ar, struct sk_buff *skb)
{
	struct _carl9170_tx_superframe *super;
	int tmp;

	super = (void *) skb->data;

	tmp = (super->s.ampdu_settings & CARL9170_TX_SUPER_AMPDU_DENSITY) <<
		CARL9170_TX_SUPER_AMPDU_DENSITY_S;

	/*
	 * If you haven't noticed carl9170_tx_prepare has already filled
	 * in all ampdu spacing & factor parameters.
	 * Now it's the time to check whenever the settings have to be
	 * updated by the firmware, or if everything is still the same.
	 *
	 * There's no sane way to handle different density values with
	 * this hardware, so we may as well just do the compare in the
	 * driver.
	 */

	if (tmp != ar->current_density) {
		ar->current_density = tmp;
		super->s.ampdu_settings |=
			CARL9170_TX_SUPER_AMPDU_COMMIT_DENSITY;
	}

	tmp = (super->s.ampdu_settings & CARL9170_TX_SUPER_AMPDU_FACTOR) <<
		CARL9170_TX_SUPER_AMPDU_FACTOR_S;

	if (tmp != ar->current_factor) {
		ar->current_factor = tmp;
		super->s.ampdu_settings |=
			CARL9170_TX_SUPER_AMPDU_COMMIT_FACTOR;
	}
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
          int _len_ar0 = 1;
          struct ar9170 * ar = (struct ar9170 *) malloc(_len_ar0*sizeof(struct ar9170));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].current_density = ((-2 * (next_i()%2)) + 1) * next_i();
        ar[_i0].current_factor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          carl9170_set_ampdu_params(ar,skb);
          free(ar);
          free(skb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ar0 = 65025;
          struct ar9170 * ar = (struct ar9170 *) malloc(_len_ar0*sizeof(struct ar9170));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].current_density = ((-2 * (next_i()%2)) + 1) * next_i();
        ar[_i0].current_factor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 65025;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          carl9170_set_ampdu_params(ar,skb);
          free(ar);
          free(skb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ar0 = 100;
          struct ar9170 * ar = (struct ar9170 *) malloc(_len_ar0*sizeof(struct ar9170));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].current_density = ((-2 * (next_i()%2)) + 1) * next_i();
        ar[_i0].current_factor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 100;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          carl9170_set_ampdu_params(ar,skb);
          free(ar);
          free(skb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
