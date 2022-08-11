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
struct swap_info_struct {TYPE_3__* swap_file; struct block_device* bdev; } ;
struct block_device {TYPE_4__* bd_disk; } ;
struct TYPE_8__ {int node_id; } ;
struct TYPE_7__ {TYPE_2__* f_inode; } ;
struct TYPE_6__ {TYPE_1__* i_sb; } ;
struct TYPE_5__ {struct block_device* s_bdev; } ;

/* Variables and functions */
 int NUMA_NO_NODE ; 

__attribute__((used)) static int swap_node(struct swap_info_struct *p)
{
	struct block_device *bdev;

	if (p->bdev)
		bdev = p->bdev;
	else
		bdev = p->swap_file->f_inode->i_sb->s_bdev;

	return bdev ? bdev->bd_disk->node_id : NUMA_NO_NODE;
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
          int _len_p0 = 1;
          struct swap_info_struct * p = (struct swap_info_struct *) malloc(_len_p0*sizeof(struct swap_info_struct));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__swap_file0 = 1;
          p[_i0].swap_file = (struct TYPE_7__ *) malloc(_len_p__i0__swap_file0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_p__i0__swap_file0; _j0++) {
              int _len_p__i0__swap_file_f_inode0 = 1;
          p[_i0].swap_file->f_inode = (struct TYPE_6__ *) malloc(_len_p__i0__swap_file_f_inode0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_p__i0__swap_file_f_inode0; _j0++) {
              int _len_p__i0__swap_file_f_inode_i_sb0 = 1;
          p[_i0].swap_file->f_inode->i_sb = (struct TYPE_5__ *) malloc(_len_p__i0__swap_file_f_inode_i_sb0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_p__i0__swap_file_f_inode_i_sb0; _j0++) {
              int _len_p__i0__swap_file_f_inode_i_sb_s_bdev0 = 1;
          p[_i0].swap_file->f_inode->i_sb->s_bdev = (struct block_device *) malloc(_len_p__i0__swap_file_f_inode_i_sb_s_bdev0*sizeof(struct block_device));
          for(int _j0 = 0; _j0 < _len_p__i0__swap_file_f_inode_i_sb_s_bdev0; _j0++) {
              int _len_p__i0__swap_file_f_inode_i_sb_s_bdev_bd_disk0 = 1;
          p[_i0].swap_file->f_inode->i_sb->s_bdev->bd_disk = (struct TYPE_8__ *) malloc(_len_p__i0__swap_file_f_inode_i_sb_s_bdev_bd_disk0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_p__i0__swap_file_f_inode_i_sb_s_bdev_bd_disk0; _j0++) {
            p[_i0].swap_file->f_inode->i_sb->s_bdev->bd_disk->node_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          int _len_p__i0__bdev0 = 1;
          p[_i0].bdev = (struct block_device *) malloc(_len_p__i0__bdev0*sizeof(struct block_device));
          for(int _j0 = 0; _j0 < _len_p__i0__bdev0; _j0++) {
              int _len_p__i0__bdev_bd_disk0 = 1;
          p[_i0].bdev->bd_disk = (struct TYPE_8__ *) malloc(_len_p__i0__bdev_bd_disk0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_p__i0__bdev_bd_disk0; _j0++) {
            p[_i0].bdev->bd_disk->node_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = swap_node(p);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].swap_file);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].bdev);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p0 = 65025;
          struct swap_info_struct * p = (struct swap_info_struct *) malloc(_len_p0*sizeof(struct swap_info_struct));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__swap_file0 = 1;
          p[_i0].swap_file = (struct TYPE_7__ *) malloc(_len_p__i0__swap_file0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_p__i0__swap_file0; _j0++) {
              int _len_p__i0__swap_file_f_inode0 = 1;
          p[_i0].swap_file->f_inode = (struct TYPE_6__ *) malloc(_len_p__i0__swap_file_f_inode0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_p__i0__swap_file_f_inode0; _j0++) {
              int _len_p__i0__swap_file_f_inode_i_sb0 = 1;
          p[_i0].swap_file->f_inode->i_sb = (struct TYPE_5__ *) malloc(_len_p__i0__swap_file_f_inode_i_sb0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_p__i0__swap_file_f_inode_i_sb0; _j0++) {
              int _len_p__i0__swap_file_f_inode_i_sb_s_bdev0 = 1;
          p[_i0].swap_file->f_inode->i_sb->s_bdev = (struct block_device *) malloc(_len_p__i0__swap_file_f_inode_i_sb_s_bdev0*sizeof(struct block_device));
          for(int _j0 = 0; _j0 < _len_p__i0__swap_file_f_inode_i_sb_s_bdev0; _j0++) {
              int _len_p__i0__swap_file_f_inode_i_sb_s_bdev_bd_disk0 = 1;
          p[_i0].swap_file->f_inode->i_sb->s_bdev->bd_disk = (struct TYPE_8__ *) malloc(_len_p__i0__swap_file_f_inode_i_sb_s_bdev_bd_disk0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_p__i0__swap_file_f_inode_i_sb_s_bdev_bd_disk0; _j0++) {
            p[_i0].swap_file->f_inode->i_sb->s_bdev->bd_disk->node_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          int _len_p__i0__bdev0 = 1;
          p[_i0].bdev = (struct block_device *) malloc(_len_p__i0__bdev0*sizeof(struct block_device));
          for(int _j0 = 0; _j0 < _len_p__i0__bdev0; _j0++) {
              int _len_p__i0__bdev_bd_disk0 = 1;
          p[_i0].bdev->bd_disk = (struct TYPE_8__ *) malloc(_len_p__i0__bdev_bd_disk0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_p__i0__bdev_bd_disk0; _j0++) {
            p[_i0].bdev->bd_disk->node_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = swap_node(p);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].swap_file);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].bdev);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p0 = 100;
          struct swap_info_struct * p = (struct swap_info_struct *) malloc(_len_p0*sizeof(struct swap_info_struct));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__swap_file0 = 1;
          p[_i0].swap_file = (struct TYPE_7__ *) malloc(_len_p__i0__swap_file0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_p__i0__swap_file0; _j0++) {
              int _len_p__i0__swap_file_f_inode0 = 1;
          p[_i0].swap_file->f_inode = (struct TYPE_6__ *) malloc(_len_p__i0__swap_file_f_inode0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_p__i0__swap_file_f_inode0; _j0++) {
              int _len_p__i0__swap_file_f_inode_i_sb0 = 1;
          p[_i0].swap_file->f_inode->i_sb = (struct TYPE_5__ *) malloc(_len_p__i0__swap_file_f_inode_i_sb0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_p__i0__swap_file_f_inode_i_sb0; _j0++) {
              int _len_p__i0__swap_file_f_inode_i_sb_s_bdev0 = 1;
          p[_i0].swap_file->f_inode->i_sb->s_bdev = (struct block_device *) malloc(_len_p__i0__swap_file_f_inode_i_sb_s_bdev0*sizeof(struct block_device));
          for(int _j0 = 0; _j0 < _len_p__i0__swap_file_f_inode_i_sb_s_bdev0; _j0++) {
              int _len_p__i0__swap_file_f_inode_i_sb_s_bdev_bd_disk0 = 1;
          p[_i0].swap_file->f_inode->i_sb->s_bdev->bd_disk = (struct TYPE_8__ *) malloc(_len_p__i0__swap_file_f_inode_i_sb_s_bdev_bd_disk0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_p__i0__swap_file_f_inode_i_sb_s_bdev_bd_disk0; _j0++) {
            p[_i0].swap_file->f_inode->i_sb->s_bdev->bd_disk->node_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          int _len_p__i0__bdev0 = 1;
          p[_i0].bdev = (struct block_device *) malloc(_len_p__i0__bdev0*sizeof(struct block_device));
          for(int _j0 = 0; _j0 < _len_p__i0__bdev0; _j0++) {
              int _len_p__i0__bdev_bd_disk0 = 1;
          p[_i0].bdev->bd_disk = (struct TYPE_8__ *) malloc(_len_p__i0__bdev_bd_disk0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_p__i0__bdev_bd_disk0; _j0++) {
            p[_i0].bdev->bd_disk->node_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = swap_node(p);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].swap_file);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].bdev);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
