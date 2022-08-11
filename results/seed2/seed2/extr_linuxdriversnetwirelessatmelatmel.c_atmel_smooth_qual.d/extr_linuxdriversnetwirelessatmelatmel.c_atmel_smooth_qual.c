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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int qual; int level; int /*<<< orphan*/  updated; } ;
struct TYPE_4__ {TYPE_1__ qual; } ;
struct atmel_private {unsigned long last_qual; int beacons_this_sec; int beacon_period; TYPE_2__ wstats; } ;

/* Variables and functions */
 unsigned long HZ ; 
 int /*<<< orphan*/  IW_QUAL_QUAL_INVALID ; 
 int /*<<< orphan*/  IW_QUAL_QUAL_UPDATED ; 
 unsigned long jiffies ; 

__attribute__((used)) static void atmel_smooth_qual(struct atmel_private *priv)
{
	unsigned long time_diff = (jiffies - priv->last_qual) / HZ;
	while (time_diff--) {
		priv->last_qual += HZ;
		priv->wstats.qual.qual = priv->wstats.qual.qual / 2;
		priv->wstats.qual.qual +=
			priv->beacons_this_sec * priv->beacon_period * (priv->wstats.qual.level + 100) / 4000;
		priv->beacons_this_sec = 0;
	}
	priv->wstats.qual.updated |= IW_QUAL_QUAL_UPDATED;
	priv->wstats.qual.updated &= ~IW_QUAL_QUAL_INVALID;
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
          struct atmel_private * priv = (struct atmel_private *) malloc(_len_priv0*sizeof(struct atmel_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].last_qual = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].beacons_this_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].beacon_period = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].wstats.qual.qual = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].wstats.qual.level = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].wstats.qual.updated = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          atmel_smooth_qual(priv);
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct atmel_private * priv = (struct atmel_private *) malloc(_len_priv0*sizeof(struct atmel_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].last_qual = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].beacons_this_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].beacon_period = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].wstats.qual.qual = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].wstats.qual.level = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].wstats.qual.updated = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          atmel_smooth_qual(priv);
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct atmel_private * priv = (struct atmel_private *) malloc(_len_priv0*sizeof(struct atmel_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].last_qual = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].beacons_this_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].beacon_period = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].wstats.qual.qual = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].wstats.qual.level = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].wstats.qual.updated = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          atmel_smooth_qual(priv);
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
