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
struct page_collect {unsigned int expected_pages; int pg_first; int read_4_write; int /*<<< orphan*/ * that_locked_page; scalar_t__ length; scalar_t__ nr_pages; scalar_t__ alloc_pages; int /*<<< orphan*/ * pages; int /*<<< orphan*/ * ios; struct inode* inode; struct exofs_sb_info* sbi; } ;
struct inode {TYPE_1__* i_sb; } ;
struct exofs_sb_info {int dummy; } ;
struct TYPE_2__ {struct exofs_sb_info* s_fs_info; } ;

/* Variables and functions */

__attribute__((used)) static void _pcol_init(struct page_collect *pcol, unsigned expected_pages,
		       struct inode *inode)
{
	struct exofs_sb_info *sbi = inode->i_sb->s_fs_info;

	pcol->sbi = sbi;
	pcol->inode = inode;
	pcol->expected_pages = expected_pages;

	pcol->ios = NULL;
	pcol->pages = NULL;
	pcol->alloc_pages = 0;
	pcol->nr_pages = 0;
	pcol->length = 0;
	pcol->pg_first = -1;
	pcol->read_4_write = false;
	pcol->that_locked_page = NULL;
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
          unsigned int expected_pages = 100;
          int _len_pcol0 = 1;
          struct page_collect * pcol = (struct page_collect *) malloc(_len_pcol0*sizeof(struct page_collect));
          for(int _i0 = 0; _i0 < _len_pcol0; _i0++) {
            pcol[_i0].expected_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        pcol[_i0].pg_first = ((-2 * (next_i()%2)) + 1) * next_i();
        pcol[_i0].read_4_write = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pcol__i0__that_locked_page0 = 1;
          pcol[_i0].that_locked_page = (int *) malloc(_len_pcol__i0__that_locked_page0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pcol__i0__that_locked_page0; _j0++) {
            pcol[_i0].that_locked_page[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pcol[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        pcol[_i0].nr_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        pcol[_i0].alloc_pages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pcol__i0__pages0 = 1;
          pcol[_i0].pages = (int *) malloc(_len_pcol__i0__pages0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pcol__i0__pages0; _j0++) {
            pcol[_i0].pages[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcol__i0__ios0 = 1;
          pcol[_i0].ios = (int *) malloc(_len_pcol__i0__ios0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pcol__i0__ios0; _j0++) {
            pcol[_i0].ios[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcol__i0__inode0 = 1;
          pcol[_i0].inode = (struct inode *) malloc(_len_pcol__i0__inode0*sizeof(struct inode));
          for(int _j0 = 0; _j0 < _len_pcol__i0__inode0; _j0++) {
              int _len_pcol__i0__inode_i_sb0 = 1;
          pcol[_i0].inode->i_sb = (struct TYPE_2__ *) malloc(_len_pcol__i0__inode_i_sb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pcol__i0__inode_i_sb0; _j0++) {
              int _len_pcol__i0__inode_i_sb_s_fs_info0 = 1;
          pcol[_i0].inode->i_sb->s_fs_info = (struct exofs_sb_info *) malloc(_len_pcol__i0__inode_i_sb_s_fs_info0*sizeof(struct exofs_sb_info));
          for(int _j0 = 0; _j0 < _len_pcol__i0__inode_i_sb_s_fs_info0; _j0++) {
            pcol[_i0].inode->i_sb->s_fs_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_pcol__i0__sbi0 = 1;
          pcol[_i0].sbi = (struct exofs_sb_info *) malloc(_len_pcol__i0__sbi0*sizeof(struct exofs_sb_info));
          for(int _j0 = 0; _j0 < _len_pcol__i0__sbi0; _j0++) {
            pcol[_i0].sbi->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_inode0 = 1;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
              int _len_inode__i0__i_sb0 = 1;
          inode[_i0].i_sb = (struct TYPE_2__ *) malloc(_len_inode__i0__i_sb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_inode__i0__i_sb0; _j0++) {
              int _len_inode__i0__i_sb_s_fs_info0 = 1;
          inode[_i0].i_sb->s_fs_info = (struct exofs_sb_info *) malloc(_len_inode__i0__i_sb_s_fs_info0*sizeof(struct exofs_sb_info));
          for(int _j0 = 0; _j0 < _len_inode__i0__i_sb_s_fs_info0; _j0++) {
            inode[_i0].i_sb->s_fs_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          _pcol_init(pcol,expected_pages,inode);
          for(int _aux = 0; _aux < _len_pcol0; _aux++) {
          free(pcol[_aux].that_locked_page);
          }
          for(int _aux = 0; _aux < _len_pcol0; _aux++) {
          free(pcol[_aux].pages);
          }
          for(int _aux = 0; _aux < _len_pcol0; _aux++) {
          free(pcol[_aux].ios);
          }
          for(int _aux = 0; _aux < _len_pcol0; _aux++) {
          free(pcol[_aux].inode);
          }
          for(int _aux = 0; _aux < _len_pcol0; _aux++) {
          free(pcol[_aux].sbi);
          }
          free(pcol);
          for(int _aux = 0; _aux < _len_inode0; _aux++) {
          free(inode[_aux].i_sb);
          }
          free(inode);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int expected_pages = 255;
          int _len_pcol0 = 65025;
          struct page_collect * pcol = (struct page_collect *) malloc(_len_pcol0*sizeof(struct page_collect));
          for(int _i0 = 0; _i0 < _len_pcol0; _i0++) {
            pcol[_i0].expected_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        pcol[_i0].pg_first = ((-2 * (next_i()%2)) + 1) * next_i();
        pcol[_i0].read_4_write = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pcol__i0__that_locked_page0 = 1;
          pcol[_i0].that_locked_page = (int *) malloc(_len_pcol__i0__that_locked_page0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pcol__i0__that_locked_page0; _j0++) {
            pcol[_i0].that_locked_page[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pcol[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        pcol[_i0].nr_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        pcol[_i0].alloc_pages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pcol__i0__pages0 = 1;
          pcol[_i0].pages = (int *) malloc(_len_pcol__i0__pages0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pcol__i0__pages0; _j0++) {
            pcol[_i0].pages[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcol__i0__ios0 = 1;
          pcol[_i0].ios = (int *) malloc(_len_pcol__i0__ios0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pcol__i0__ios0; _j0++) {
            pcol[_i0].ios[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcol__i0__inode0 = 1;
          pcol[_i0].inode = (struct inode *) malloc(_len_pcol__i0__inode0*sizeof(struct inode));
          for(int _j0 = 0; _j0 < _len_pcol__i0__inode0; _j0++) {
              int _len_pcol__i0__inode_i_sb0 = 1;
          pcol[_i0].inode->i_sb = (struct TYPE_2__ *) malloc(_len_pcol__i0__inode_i_sb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pcol__i0__inode_i_sb0; _j0++) {
              int _len_pcol__i0__inode_i_sb_s_fs_info0 = 1;
          pcol[_i0].inode->i_sb->s_fs_info = (struct exofs_sb_info *) malloc(_len_pcol__i0__inode_i_sb_s_fs_info0*sizeof(struct exofs_sb_info));
          for(int _j0 = 0; _j0 < _len_pcol__i0__inode_i_sb_s_fs_info0; _j0++) {
            pcol[_i0].inode->i_sb->s_fs_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_pcol__i0__sbi0 = 1;
          pcol[_i0].sbi = (struct exofs_sb_info *) malloc(_len_pcol__i0__sbi0*sizeof(struct exofs_sb_info));
          for(int _j0 = 0; _j0 < _len_pcol__i0__sbi0; _j0++) {
            pcol[_i0].sbi->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_inode0 = 65025;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
              int _len_inode__i0__i_sb0 = 1;
          inode[_i0].i_sb = (struct TYPE_2__ *) malloc(_len_inode__i0__i_sb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_inode__i0__i_sb0; _j0++) {
              int _len_inode__i0__i_sb_s_fs_info0 = 1;
          inode[_i0].i_sb->s_fs_info = (struct exofs_sb_info *) malloc(_len_inode__i0__i_sb_s_fs_info0*sizeof(struct exofs_sb_info));
          for(int _j0 = 0; _j0 < _len_inode__i0__i_sb_s_fs_info0; _j0++) {
            inode[_i0].i_sb->s_fs_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          _pcol_init(pcol,expected_pages,inode);
          for(int _aux = 0; _aux < _len_pcol0; _aux++) {
          free(pcol[_aux].that_locked_page);
          }
          for(int _aux = 0; _aux < _len_pcol0; _aux++) {
          free(pcol[_aux].pages);
          }
          for(int _aux = 0; _aux < _len_pcol0; _aux++) {
          free(pcol[_aux].ios);
          }
          for(int _aux = 0; _aux < _len_pcol0; _aux++) {
          free(pcol[_aux].inode);
          }
          for(int _aux = 0; _aux < _len_pcol0; _aux++) {
          free(pcol[_aux].sbi);
          }
          free(pcol);
          for(int _aux = 0; _aux < _len_inode0; _aux++) {
          free(inode[_aux].i_sb);
          }
          free(inode);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int expected_pages = 10;
          int _len_pcol0 = 100;
          struct page_collect * pcol = (struct page_collect *) malloc(_len_pcol0*sizeof(struct page_collect));
          for(int _i0 = 0; _i0 < _len_pcol0; _i0++) {
            pcol[_i0].expected_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        pcol[_i0].pg_first = ((-2 * (next_i()%2)) + 1) * next_i();
        pcol[_i0].read_4_write = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pcol__i0__that_locked_page0 = 1;
          pcol[_i0].that_locked_page = (int *) malloc(_len_pcol__i0__that_locked_page0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pcol__i0__that_locked_page0; _j0++) {
            pcol[_i0].that_locked_page[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pcol[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        pcol[_i0].nr_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        pcol[_i0].alloc_pages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pcol__i0__pages0 = 1;
          pcol[_i0].pages = (int *) malloc(_len_pcol__i0__pages0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pcol__i0__pages0; _j0++) {
            pcol[_i0].pages[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcol__i0__ios0 = 1;
          pcol[_i0].ios = (int *) malloc(_len_pcol__i0__ios0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pcol__i0__ios0; _j0++) {
            pcol[_i0].ios[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcol__i0__inode0 = 1;
          pcol[_i0].inode = (struct inode *) malloc(_len_pcol__i0__inode0*sizeof(struct inode));
          for(int _j0 = 0; _j0 < _len_pcol__i0__inode0; _j0++) {
              int _len_pcol__i0__inode_i_sb0 = 1;
          pcol[_i0].inode->i_sb = (struct TYPE_2__ *) malloc(_len_pcol__i0__inode_i_sb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pcol__i0__inode_i_sb0; _j0++) {
              int _len_pcol__i0__inode_i_sb_s_fs_info0 = 1;
          pcol[_i0].inode->i_sb->s_fs_info = (struct exofs_sb_info *) malloc(_len_pcol__i0__inode_i_sb_s_fs_info0*sizeof(struct exofs_sb_info));
          for(int _j0 = 0; _j0 < _len_pcol__i0__inode_i_sb_s_fs_info0; _j0++) {
            pcol[_i0].inode->i_sb->s_fs_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_pcol__i0__sbi0 = 1;
          pcol[_i0].sbi = (struct exofs_sb_info *) malloc(_len_pcol__i0__sbi0*sizeof(struct exofs_sb_info));
          for(int _j0 = 0; _j0 < _len_pcol__i0__sbi0; _j0++) {
            pcol[_i0].sbi->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_inode0 = 100;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
              int _len_inode__i0__i_sb0 = 1;
          inode[_i0].i_sb = (struct TYPE_2__ *) malloc(_len_inode__i0__i_sb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_inode__i0__i_sb0; _j0++) {
              int _len_inode__i0__i_sb_s_fs_info0 = 1;
          inode[_i0].i_sb->s_fs_info = (struct exofs_sb_info *) malloc(_len_inode__i0__i_sb_s_fs_info0*sizeof(struct exofs_sb_info));
          for(int _j0 = 0; _j0 < _len_inode__i0__i_sb_s_fs_info0; _j0++) {
            inode[_i0].i_sb->s_fs_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          _pcol_init(pcol,expected_pages,inode);
          for(int _aux = 0; _aux < _len_pcol0; _aux++) {
          free(pcol[_aux].that_locked_page);
          }
          for(int _aux = 0; _aux < _len_pcol0; _aux++) {
          free(pcol[_aux].pages);
          }
          for(int _aux = 0; _aux < _len_pcol0; _aux++) {
          free(pcol[_aux].ios);
          }
          for(int _aux = 0; _aux < _len_pcol0; _aux++) {
          free(pcol[_aux].inode);
          }
          for(int _aux = 0; _aux < _len_pcol0; _aux++) {
          free(pcol[_aux].sbi);
          }
          free(pcol);
          for(int _aux = 0; _aux < _len_inode0; _aux++) {
          free(inode[_aux].i_sb);
          }
          free(inode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
