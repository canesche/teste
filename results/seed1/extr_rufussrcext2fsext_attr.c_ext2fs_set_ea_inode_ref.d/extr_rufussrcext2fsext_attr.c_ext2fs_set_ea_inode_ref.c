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
struct TYPE_3__ {void* l_i_version; } ;
struct TYPE_4__ {TYPE_1__ linux1; } ;
struct ext2_inode {TYPE_2__ osd1; void* i_ctime; } ;
typedef  int __u64 ;
typedef  void* __u32 ;

/* Variables and functions */

void ext2fs_set_ea_inode_ref(struct ext2_inode *inode, __u64 ref_count)
{
	inode->i_ctime = (__u32)(ref_count >> 32);
	inode->osd1.linux1.l_i_version = (__u32)ref_count;
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
          int ref_count = 100;
          int _len_inode0 = 1;
          struct ext2_inode * inode = (struct ext2_inode *) malloc(_len_inode0*sizeof(struct ext2_inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
              }
          ext2fs_set_ea_inode_ref(inode,ref_count);
          free(inode);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ref_count = 255;
          int _len_inode0 = 65025;
          struct ext2_inode * inode = (struct ext2_inode *) malloc(_len_inode0*sizeof(struct ext2_inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
              }
          ext2fs_set_ea_inode_ref(inode,ref_count);
          free(inode);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ref_count = 10;
          int _len_inode0 = 100;
          struct ext2_inode * inode = (struct ext2_inode *) malloc(_len_inode0*sizeof(struct ext2_inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
              }
          ext2fs_set_ea_inode_ref(inode,ref_count);
          free(inode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
