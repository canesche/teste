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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {unsigned long long sector; unsigned long long size; } ;
struct md_rdev {unsigned long long data_offset; int sb_start; TYPE_4__ badblocks; TYPE_2__* mddev; } ;
struct TYPE_7__ {int file_pages; } ;
struct bitmap {TYPE_3__ storage; } ;
struct TYPE_5__ {int offset; int /*<<< orphan*/  file; } ;
struct TYPE_6__ {scalar_t__ minor_version; TYPE_1__ bitmap_info; struct bitmap* bitmap; } ;

/* Variables and functions */
 int PAGE_SIZE ; 

__attribute__((used)) static int
super_1_allow_new_offset(struct md_rdev *rdev,
			 unsigned long long new_offset)
{
	/* All necessary checks on new >= old have been done */
	struct bitmap *bitmap;
	if (new_offset >= rdev->data_offset)
		return 1;

	/* with 1.0 metadata, there is no metadata to tread on
	 * so we can always move back */
	if (rdev->mddev->minor_version == 0)
		return 1;

	/* otherwise we must be sure not to step on
	 * any metadata, so stay:
	 * 36K beyond start of superblock
	 * beyond end of badblocks
	 * beyond write-intent bitmap
	 */
	if (rdev->sb_start + (32+4)*2 > new_offset)
		return 0;
	bitmap = rdev->mddev->bitmap;
	if (bitmap && !rdev->mddev->bitmap_info.file &&
	    rdev->sb_start + rdev->mddev->bitmap_info.offset +
	    bitmap->storage.file_pages * (PAGE_SIZE>>9) > new_offset)
		return 0;
	if (rdev->badblocks.sector + rdev->badblocks.size > new_offset)
		return 0;

	return 1;
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
          unsigned long long new_offset = 100;
          int _len_rdev0 = 1;
          struct md_rdev * rdev = (struct md_rdev *) malloc(_len_rdev0*sizeof(struct md_rdev));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].data_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].sb_start = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].badblocks.sector = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].badblocks.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__mddev0 = 1;
          rdev[_i0].mddev = (struct TYPE_6__ *) malloc(_len_rdev__i0__mddev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__mddev0; _j0++) {
            rdev[_i0].mddev->minor_version = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].mddev->bitmap_info.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].mddev->bitmap_info.file = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__mddev_bitmap0 = 1;
          rdev[_i0].mddev->bitmap = (struct bitmap *) malloc(_len_rdev__i0__mddev_bitmap0*sizeof(struct bitmap));
          for(int _j0 = 0; _j0 < _len_rdev__i0__mddev_bitmap0; _j0++) {
            rdev[_i0].mddev->bitmap->storage.file_pages = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = super_1_allow_new_offset(rdev,new_offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].mddev);
          }
          free(rdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long long new_offset = 255;
          int _len_rdev0 = 65025;
          struct md_rdev * rdev = (struct md_rdev *) malloc(_len_rdev0*sizeof(struct md_rdev));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].data_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].sb_start = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].badblocks.sector = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].badblocks.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__mddev0 = 1;
          rdev[_i0].mddev = (struct TYPE_6__ *) malloc(_len_rdev__i0__mddev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__mddev0; _j0++) {
            rdev[_i0].mddev->minor_version = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].mddev->bitmap_info.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].mddev->bitmap_info.file = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__mddev_bitmap0 = 1;
          rdev[_i0].mddev->bitmap = (struct bitmap *) malloc(_len_rdev__i0__mddev_bitmap0*sizeof(struct bitmap));
          for(int _j0 = 0; _j0 < _len_rdev__i0__mddev_bitmap0; _j0++) {
            rdev[_i0].mddev->bitmap->storage.file_pages = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = super_1_allow_new_offset(rdev,new_offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].mddev);
          }
          free(rdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long long new_offset = 10;
          int _len_rdev0 = 100;
          struct md_rdev * rdev = (struct md_rdev *) malloc(_len_rdev0*sizeof(struct md_rdev));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].data_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].sb_start = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].badblocks.sector = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].badblocks.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__mddev0 = 1;
          rdev[_i0].mddev = (struct TYPE_6__ *) malloc(_len_rdev__i0__mddev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__mddev0; _j0++) {
            rdev[_i0].mddev->minor_version = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].mddev->bitmap_info.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].mddev->bitmap_info.file = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__mddev_bitmap0 = 1;
          rdev[_i0].mddev->bitmap = (struct bitmap *) malloc(_len_rdev__i0__mddev_bitmap0*sizeof(struct bitmap));
          for(int _j0 = 0; _j0 < _len_rdev__i0__mddev_bitmap0; _j0++) {
            rdev[_i0].mddev->bitmap->storage.file_pages = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = super_1_allow_new_offset(rdev,new_offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].mddev);
          }
          free(rdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
