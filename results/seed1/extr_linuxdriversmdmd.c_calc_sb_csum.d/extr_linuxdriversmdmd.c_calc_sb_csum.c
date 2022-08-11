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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u64 ;
typedef  scalar_t__ u32 ;
struct TYPE_3__ {unsigned int sb_csum; } ;
typedef  TYPE_1__ mdp_super_t ;

/* Variables and functions */
 int MD_SB_BYTES ; 

__attribute__((used)) static unsigned int calc_sb_csum(mdp_super_t *sb)
{
	u64 newcsum = 0;
	u32 *sb32 = (u32*)sb;
	int i;
	unsigned int disk_csum, csum;

	disk_csum = sb->sb_csum;
	sb->sb_csum = 0;

	for (i = 0; i < MD_SB_BYTES/4 ; i++)
		newcsum += sb32[i];
	csum = (newcsum & 0xffffffff) + (newcsum>>32);

#ifdef CONFIG_ALPHA
	/* This used to use csum_partial, which was wrong for several
	 * reasons including that different results are returned on
	 * different architectures.  It isn't critical that we get exactly
	 * the same return value as before (we always csum_fold before
	 * testing, and that removes any differences).  However as we
	 * know that csum_partial always returned a 16bit value on
	 * alphas, do a fold to maximise conformity to previous behaviour.
	 */
	sb->sb_csum = md_csum_fold(disk_csum);
#else
	sb->sb_csum = disk_csum;
#endif
	return csum;
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
          int _len_sb0 = 1;
          struct TYPE_3__ * sb = (struct TYPE_3__ *) malloc(_len_sb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].sb_csum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = calc_sb_csum(sb);
          printf("%u\n", benchRet); 
          free(sb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sb0 = 65025;
          struct TYPE_3__ * sb = (struct TYPE_3__ *) malloc(_len_sb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].sb_csum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = calc_sb_csum(sb);
          printf("%u\n", benchRet); 
          free(sb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sb0 = 100;
          struct TYPE_3__ * sb = (struct TYPE_3__ *) malloc(_len_sb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].sb_csum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = calc_sb_csum(sb);
          printf("%u\n", benchRet); 
          free(sb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
