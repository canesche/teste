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
struct vfsioattr {int io_segreadcnt; int io_segwritecnt; scalar_t__ io_max_swappin_available; scalar_t__ io_flags; int /*<<< orphan*/  io_devblocksize; void* io_maxsegwritesize; void* io_maxsegreadsize; void* io_maxwritecnt; void* io_maxreadcnt; int /*<<< orphan*/ ** io_reserved; } ;
typedef  TYPE_1__* mount_t ;
struct TYPE_3__ {int mnt_segreadcnt; int mnt_segwritecnt; scalar_t__ mnt_max_swappin_available; scalar_t__ mnt_ioflags; int /*<<< orphan*/  mnt_devblocksize; void* mnt_maxsegwritesize; void* mnt_maxsegreadsize; void* mnt_maxwritecnt; void* mnt_maxreadcnt; } ;

/* Variables and functions */
 int /*<<< orphan*/  DEV_BSIZE ; 
 void* MAXPHYS ; 

void
vfs_ioattr(mount_t mp, struct vfsioattr *ioattrp)
{
	ioattrp->io_reserved[0] = NULL;
	ioattrp->io_reserved[1] = NULL;
	if (mp == NULL) {
		ioattrp->io_maxreadcnt  = MAXPHYS;
		ioattrp->io_maxwritecnt = MAXPHYS;
		ioattrp->io_segreadcnt  = 32;
		ioattrp->io_segwritecnt = 32;
		ioattrp->io_maxsegreadsize  = MAXPHYS;
		ioattrp->io_maxsegwritesize = MAXPHYS;
		ioattrp->io_devblocksize = DEV_BSIZE;
		ioattrp->io_flags = 0;
		ioattrp->io_max_swappin_available = 0;
	} else {
		ioattrp->io_maxreadcnt  = mp->mnt_maxreadcnt;
		ioattrp->io_maxwritecnt = mp->mnt_maxwritecnt;
		ioattrp->io_segreadcnt  = mp->mnt_segreadcnt;
		ioattrp->io_segwritecnt = mp->mnt_segwritecnt;
		ioattrp->io_maxsegreadsize  = mp->mnt_maxsegreadsize;
		ioattrp->io_maxsegwritesize = mp->mnt_maxsegwritesize;
		ioattrp->io_devblocksize = mp->mnt_devblocksize;
		ioattrp->io_flags = mp->mnt_ioflags;
		ioattrp->io_max_swappin_available = mp->mnt_max_swappin_available;
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
          int _len_mp0 = 1;
          struct TYPE_3__ * mp = (struct TYPE_3__ *) malloc(_len_mp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
            mp[_i0].mnt_segreadcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_segwritecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_max_swappin_available = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_ioflags = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_devblocksize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ioattrp0 = 1;
          struct vfsioattr * ioattrp = (struct vfsioattr *) malloc(_len_ioattrp0*sizeof(struct vfsioattr));
          for(int _i0 = 0; _i0 < _len_ioattrp0; _i0++) {
            ioattrp[_i0].io_segreadcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_segwritecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_max_swappin_available = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_devblocksize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ioattrp__i0__io_reserved0 = 1;
          ioattrp[_i0].io_reserved = (int **) malloc(_len_ioattrp__i0__io_reserved0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ioattrp__i0__io_reserved0; _j0++) {
            int _len_ioattrp__i0__io_reserved1 = 1;
            ioattrp[_i0].io_reserved[_j0] = (int *) malloc(_len_ioattrp__i0__io_reserved1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ioattrp__i0__io_reserved1; _j1++) {
              ioattrp[_i0].io_reserved[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          vfs_ioattr(mp,ioattrp);
          free(mp);
          for(int _aux = 0; _aux < _len_ioattrp0; _aux++) {
          free(*(ioattrp[_aux].io_reserved));
        free(ioattrp[_aux].io_reserved);
          }
          free(ioattrp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mp0 = 65025;
          struct TYPE_3__ * mp = (struct TYPE_3__ *) malloc(_len_mp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
            mp[_i0].mnt_segreadcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_segwritecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_max_swappin_available = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_ioflags = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_devblocksize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ioattrp0 = 65025;
          struct vfsioattr * ioattrp = (struct vfsioattr *) malloc(_len_ioattrp0*sizeof(struct vfsioattr));
          for(int _i0 = 0; _i0 < _len_ioattrp0; _i0++) {
            ioattrp[_i0].io_segreadcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_segwritecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_max_swappin_available = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_devblocksize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ioattrp__i0__io_reserved0 = 1;
          ioattrp[_i0].io_reserved = (int **) malloc(_len_ioattrp__i0__io_reserved0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ioattrp__i0__io_reserved0; _j0++) {
            int _len_ioattrp__i0__io_reserved1 = 1;
            ioattrp[_i0].io_reserved[_j0] = (int *) malloc(_len_ioattrp__i0__io_reserved1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ioattrp__i0__io_reserved1; _j1++) {
              ioattrp[_i0].io_reserved[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          vfs_ioattr(mp,ioattrp);
          free(mp);
          for(int _aux = 0; _aux < _len_ioattrp0; _aux++) {
          free(*(ioattrp[_aux].io_reserved));
        free(ioattrp[_aux].io_reserved);
          }
          free(ioattrp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mp0 = 100;
          struct TYPE_3__ * mp = (struct TYPE_3__ *) malloc(_len_mp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
            mp[_i0].mnt_segreadcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_segwritecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_max_swappin_available = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_ioflags = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_devblocksize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ioattrp0 = 100;
          struct vfsioattr * ioattrp = (struct vfsioattr *) malloc(_len_ioattrp0*sizeof(struct vfsioattr));
          for(int _i0 = 0; _i0 < _len_ioattrp0; _i0++) {
            ioattrp[_i0].io_segreadcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_segwritecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_max_swappin_available = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_devblocksize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ioattrp__i0__io_reserved0 = 1;
          ioattrp[_i0].io_reserved = (int **) malloc(_len_ioattrp__i0__io_reserved0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ioattrp__i0__io_reserved0; _j0++) {
            int _len_ioattrp__i0__io_reserved1 = 1;
            ioattrp[_i0].io_reserved[_j0] = (int *) malloc(_len_ioattrp__i0__io_reserved1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ioattrp__i0__io_reserved1; _j1++) {
              ioattrp[_i0].io_reserved[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          vfs_ioattr(mp,ioattrp);
          free(mp);
          for(int _aux = 0; _aux < _len_ioattrp0; _aux++) {
          free(*(ioattrp[_aux].io_reserved));
        free(ioattrp[_aux].io_reserved);
          }
          free(ioattrp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
