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
struct inode {scalar_t__ i_ino; scalar_t__ i_generation; } ;
struct TYPE_2__ {scalar_t__ vnode; scalar_t__ unique; } ;
struct afs_iget_data {TYPE_1__ fid; } ;

/* Variables and functions */

int afs_iget5_test(struct inode *inode, void *opaque)
{
	struct afs_iget_data *data = opaque;

	return inode->i_ino == data->fid.vnode &&
		inode->i_generation == data->fid.unique;
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
          int _len_inode0 = 1;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
            inode[_i0].i_ino = ((-2 * (next_i()%2)) + 1) * next_i();
        inode[_i0].i_generation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * opaque;
          int benchRet = afs_iget5_test(inode,opaque);
          printf("%d\n", benchRet); 
          free(inode);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_inode0 = 65025;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
            inode[_i0].i_ino = ((-2 * (next_i()%2)) + 1) * next_i();
        inode[_i0].i_generation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * opaque;
          int benchRet = afs_iget5_test(inode,opaque);
          printf("%d\n", benchRet); 
          free(inode);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_inode0 = 100;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
            inode[_i0].i_ino = ((-2 * (next_i()%2)) + 1) * next_i();
        inode[_i0].i_generation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * opaque;
          int benchRet = afs_iget5_test(inode,opaque);
          printf("%d\n", benchRet); 
          free(inode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
