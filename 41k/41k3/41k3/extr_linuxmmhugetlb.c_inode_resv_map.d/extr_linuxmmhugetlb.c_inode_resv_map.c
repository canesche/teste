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
struct resv_map {int dummy; } ;
struct inode {TYPE_1__* i_mapping; } ;
struct TYPE_2__ {struct resv_map* private_data; } ;

/* Variables and functions */

__attribute__((used)) static inline struct resv_map *inode_resv_map(struct inode *inode)
{
	return inode->i_mapping->private_data;
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
              int _len_inode__i0__i_mapping0 = 1;
          inode[_i0].i_mapping = (struct TYPE_2__ *) malloc(_len_inode__i0__i_mapping0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_inode__i0__i_mapping0; _j0++) {
              int _len_inode__i0__i_mapping_private_data0 = 1;
          inode[_i0].i_mapping->private_data = (struct resv_map *) malloc(_len_inode__i0__i_mapping_private_data0*sizeof(struct resv_map));
          for(int _j0 = 0; _j0 < _len_inode__i0__i_mapping_private_data0; _j0++) {
            inode[_i0].i_mapping->private_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct resv_map * benchRet = inode_resv_map(inode);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_inode0; _aux++) {
          free(inode[_aux].i_mapping);
          }
          free(inode);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_inode0 = 65025;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
              int _len_inode__i0__i_mapping0 = 1;
          inode[_i0].i_mapping = (struct TYPE_2__ *) malloc(_len_inode__i0__i_mapping0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_inode__i0__i_mapping0; _j0++) {
              int _len_inode__i0__i_mapping_private_data0 = 1;
          inode[_i0].i_mapping->private_data = (struct resv_map *) malloc(_len_inode__i0__i_mapping_private_data0*sizeof(struct resv_map));
          for(int _j0 = 0; _j0 < _len_inode__i0__i_mapping_private_data0; _j0++) {
            inode[_i0].i_mapping->private_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct resv_map * benchRet = inode_resv_map(inode);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_inode0; _aux++) {
          free(inode[_aux].i_mapping);
          }
          free(inode);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_inode0 = 100;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
              int _len_inode__i0__i_mapping0 = 1;
          inode[_i0].i_mapping = (struct TYPE_2__ *) malloc(_len_inode__i0__i_mapping0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_inode__i0__i_mapping0; _j0++) {
              int _len_inode__i0__i_mapping_private_data0 = 1;
          inode[_i0].i_mapping->private_data = (struct resv_map *) malloc(_len_inode__i0__i_mapping_private_data0*sizeof(struct resv_map));
          for(int _j0 = 0; _j0 < _len_inode__i0__i_mapping_private_data0; _j0++) {
            inode[_i0].i_mapping->private_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct resv_map * benchRet = inode_resv_map(inode);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_inode0; _aux++) {
          free(inode[_aux].i_mapping);
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
