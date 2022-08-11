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
struct super_block {int s_blocksize_bits; } ;
struct fsmap {int fmr_physical; int fmr_length; int /*<<< orphan*/  fmr_owner; int /*<<< orphan*/  fmr_flags; int /*<<< orphan*/  fmr_device; } ;
struct ext4_fsmap {int fmr_physical; int fmr_length; int /*<<< orphan*/  fmr_owner; int /*<<< orphan*/  fmr_flags; int /*<<< orphan*/  fmr_device; } ;

/* Variables and functions */

void ext4_fsmap_to_internal(struct super_block *sb, struct ext4_fsmap *dest,
			    struct fsmap *src)
{
	dest->fmr_device = src->fmr_device;
	dest->fmr_flags = src->fmr_flags;
	dest->fmr_physical = src->fmr_physical >> sb->s_blocksize_bits;
	dest->fmr_owner = src->fmr_owner;
	dest->fmr_length = src->fmr_length >> sb->s_blocksize_bits;
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
          struct super_block * sb = (struct super_block *) malloc(_len_sb0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].s_blocksize_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 1;
          struct ext4_fsmap * dest = (struct ext4_fsmap *) malloc(_len_dest0*sizeof(struct ext4_fsmap));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0].fmr_physical = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].fmr_length = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].fmr_owner = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].fmr_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].fmr_device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          struct fsmap * src = (struct fsmap *) malloc(_len_src0*sizeof(struct fsmap));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].fmr_physical = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].fmr_length = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].fmr_owner = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].fmr_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].fmr_device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ext4_fsmap_to_internal(sb,dest,src);
          free(sb);
          free(dest);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sb0 = 65025;
          struct super_block * sb = (struct super_block *) malloc(_len_sb0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].s_blocksize_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 65025;
          struct ext4_fsmap * dest = (struct ext4_fsmap *) malloc(_len_dest0*sizeof(struct ext4_fsmap));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0].fmr_physical = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].fmr_length = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].fmr_owner = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].fmr_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].fmr_device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          struct fsmap * src = (struct fsmap *) malloc(_len_src0*sizeof(struct fsmap));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].fmr_physical = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].fmr_length = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].fmr_owner = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].fmr_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].fmr_device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ext4_fsmap_to_internal(sb,dest,src);
          free(sb);
          free(dest);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sb0 = 100;
          struct super_block * sb = (struct super_block *) malloc(_len_sb0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].s_blocksize_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 100;
          struct ext4_fsmap * dest = (struct ext4_fsmap *) malloc(_len_dest0*sizeof(struct ext4_fsmap));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0].fmr_physical = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].fmr_length = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].fmr_owner = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].fmr_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].fmr_device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          struct fsmap * src = (struct fsmap *) malloc(_len_src0*sizeof(struct fsmap));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].fmr_physical = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].fmr_length = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].fmr_owner = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].fmr_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].fmr_device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ext4_fsmap_to_internal(sb,dest,src);
          free(sb);
          free(dest);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
