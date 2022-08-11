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
typedef  int u64 ;
typedef  int u32 ;
struct statistics_block {int dummy; } ;
struct bnx2 {scalar_t__ temp_stats_blk; scalar_t__ stats_blk; } ;

/* Variables and functions */

__attribute__((used)) static void
bnx2_save_stats(struct bnx2 *bp)
{
	u32 *hw_stats = (u32 *) bp->stats_blk;
	u32 *temp_stats = (u32 *) bp->temp_stats_blk;
	int i;

	/* The 1st 10 counters are 64-bit counters */
	for (i = 0; i < 20; i += 2) {
		u32 hi;
		u64 lo;

		hi = temp_stats[i] + hw_stats[i];
		lo = (u64) temp_stats[i + 1] + (u64) hw_stats[i + 1];
		if (lo > 0xffffffff)
			hi++;
		temp_stats[i] = hi;
		temp_stats[i + 1] = lo & 0xffffffff;
	}

	for ( ; i < sizeof(struct statistics_block) / 4; i++)
		temp_stats[i] += hw_stats[i];
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
          int _len_bp0 = 1;
          struct bnx2 * bp = (struct bnx2 *) malloc(_len_bp0*sizeof(struct bnx2));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].temp_stats_blk = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].stats_blk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2_save_stats(bp);
          free(bp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bp0 = 65025;
          struct bnx2 * bp = (struct bnx2 *) malloc(_len_bp0*sizeof(struct bnx2));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].temp_stats_blk = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].stats_blk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2_save_stats(bp);
          free(bp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bp0 = 100;
          struct bnx2 * bp = (struct bnx2 *) malloc(_len_bp0*sizeof(struct bnx2));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].temp_stats_blk = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].stats_blk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2_save_stats(bp);
          free(bp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
