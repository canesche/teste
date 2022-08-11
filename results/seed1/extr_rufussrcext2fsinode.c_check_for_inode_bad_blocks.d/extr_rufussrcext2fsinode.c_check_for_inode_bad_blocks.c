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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_2__* ext2_inode_scan ;
typedef  int /*<<< orphan*/  errcode_t ;
typedef  scalar_t__ blk64_t ;
typedef  TYPE_3__* badblocks_list ;
struct TYPE_7__ {scalar_t__* list; size_t num; } ;
struct TYPE_6__ {scalar_t__ current_block; size_t bad_block_ptr; int /*<<< orphan*/  scan_flags; TYPE_1__* fs; } ;
struct TYPE_5__ {TYPE_3__* badblocks; } ;

/* Variables and functions */
 int /*<<< orphan*/  EXT2_SF_BAD_INODE_BLK ; 
 int /*<<< orphan*/  EXT2_SF_CHK_BADBLOCKS ; 

__attribute__((used)) static errcode_t check_for_inode_bad_blocks(ext2_inode_scan scan,
					    blk64_t *num_blocks)
{
	blk64_t	blk = scan->current_block;
	badblocks_list	bb = scan->fs->badblocks;

	/*
	 * If the inode table is missing, then obviously there are no
	 * bad blocks.  :-)
	 */
	if (blk == 0)
		return 0;

	/*
	 * If the current block is greater than the bad block listed
	 * in the bad block list, then advance the pointer until this
	 * is no longer the case.  If we run out of bad blocks, then
	 * we don't need to do any more checking!
	 */
	while (blk > bb->list[scan->bad_block_ptr]) {
		if (++scan->bad_block_ptr >= bb->num) {
			scan->scan_flags &= ~EXT2_SF_CHK_BADBLOCKS;
			return 0;
		}
	}

	/*
	 * If the current block is equal to the bad block listed in
	 * the bad block list, then handle that one block specially.
	 * (We could try to handle runs of bad blocks, but that
	 * only increases CPU efficiency by a small amount, at the
	 * expense of a huge expense of code complexity, and for an
	 * uncommon case at that.)
	 */
	if (blk == bb->list[scan->bad_block_ptr]) {
		scan->scan_flags |= EXT2_SF_BAD_INODE_BLK;
		*num_blocks = 1;
		if (++scan->bad_block_ptr >= bb->num)
			scan->scan_flags &= ~EXT2_SF_CHK_BADBLOCKS;
		return 0;
	}

	/*
	 * If there is a bad block in the range that we're about to
	 * read in, adjust the number of blocks to read so that we we
	 * don't read in the bad block.  (Then the next block to read
	 * will be the bad block, which is handled in the above case.)
	 */
	if ((blk + *num_blocks) > bb->list[scan->bad_block_ptr])
		*num_blocks = (int) (bb->list[scan->bad_block_ptr] - blk);

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
          int _len_scan0 = 1;
          struct TYPE_6__ * scan = (struct TYPE_6__ *) malloc(_len_scan0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_scan0; _i0++) {
            scan[_i0].current_block = ((-2 * (next_i()%2)) + 1) * next_i();
        scan[_i0].bad_block_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        scan[_i0].scan_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_scan__i0__fs0 = 1;
          scan[_i0].fs = (struct TYPE_5__ *) malloc(_len_scan__i0__fs0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_scan__i0__fs0; _j0++) {
              int _len_scan__i0__fs_badblocks0 = 1;
          scan[_i0].fs->badblocks = (struct TYPE_7__ *) malloc(_len_scan__i0__fs_badblocks0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_scan__i0__fs_badblocks0; _j0++) {
              int _len_scan__i0__fs_badblocks_list0 = 1;
          scan[_i0].fs->badblocks->list = (long *) malloc(_len_scan__i0__fs_badblocks_list0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_scan__i0__fs_badblocks_list0; _j0++) {
            scan[_i0].fs->badblocks->list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        scan[_i0].fs->badblocks->num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_num_blocks0 = 1;
          long * num_blocks = (long *) malloc(_len_num_blocks0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_num_blocks0; _i0++) {
            num_blocks[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_for_inode_bad_blocks(scan,num_blocks);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_scan0; _aux++) {
          free(scan[_aux].fs);
          }
          free(scan);
          free(num_blocks);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_scan0 = 65025;
          struct TYPE_6__ * scan = (struct TYPE_6__ *) malloc(_len_scan0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_scan0; _i0++) {
            scan[_i0].current_block = ((-2 * (next_i()%2)) + 1) * next_i();
        scan[_i0].bad_block_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        scan[_i0].scan_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_scan__i0__fs0 = 1;
          scan[_i0].fs = (struct TYPE_5__ *) malloc(_len_scan__i0__fs0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_scan__i0__fs0; _j0++) {
              int _len_scan__i0__fs_badblocks0 = 1;
          scan[_i0].fs->badblocks = (struct TYPE_7__ *) malloc(_len_scan__i0__fs_badblocks0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_scan__i0__fs_badblocks0; _j0++) {
              int _len_scan__i0__fs_badblocks_list0 = 1;
          scan[_i0].fs->badblocks->list = (long *) malloc(_len_scan__i0__fs_badblocks_list0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_scan__i0__fs_badblocks_list0; _j0++) {
            scan[_i0].fs->badblocks->list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        scan[_i0].fs->badblocks->num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_num_blocks0 = 65025;
          long * num_blocks = (long *) malloc(_len_num_blocks0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_num_blocks0; _i0++) {
            num_blocks[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_for_inode_bad_blocks(scan,num_blocks);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_scan0; _aux++) {
          free(scan[_aux].fs);
          }
          free(scan);
          free(num_blocks);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_scan0 = 100;
          struct TYPE_6__ * scan = (struct TYPE_6__ *) malloc(_len_scan0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_scan0; _i0++) {
            scan[_i0].current_block = ((-2 * (next_i()%2)) + 1) * next_i();
        scan[_i0].bad_block_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        scan[_i0].scan_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_scan__i0__fs0 = 1;
          scan[_i0].fs = (struct TYPE_5__ *) malloc(_len_scan__i0__fs0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_scan__i0__fs0; _j0++) {
              int _len_scan__i0__fs_badblocks0 = 1;
          scan[_i0].fs->badblocks = (struct TYPE_7__ *) malloc(_len_scan__i0__fs_badblocks0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_scan__i0__fs_badblocks0; _j0++) {
              int _len_scan__i0__fs_badblocks_list0 = 1;
          scan[_i0].fs->badblocks->list = (long *) malloc(_len_scan__i0__fs_badblocks_list0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_scan__i0__fs_badblocks_list0; _j0++) {
            scan[_i0].fs->badblocks->list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        scan[_i0].fs->badblocks->num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_num_blocks0 = 100;
          long * num_blocks = (long *) malloc(_len_num_blocks0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_num_blocks0; _i0++) {
            num_blocks[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_for_inode_bad_blocks(scan,num_blocks);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_scan0; _aux++) {
          free(scan[_aux].fs);
          }
          free(scan);
          free(num_blocks);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
