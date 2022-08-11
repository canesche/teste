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
struct inode {int dummy; } ;
struct file {int /*<<< orphan*/ * private_data; } ;

/* Variables and functions */

__attribute__((used)) static int
snic_reset_stats_release(struct inode *inode, struct file *filp)
{
	filp->private_data = NULL;

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
          int _len_inode0 = 1;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
            inode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filp0 = 1;
          struct file * filp = (struct file *) malloc(_len_filp0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_filp0; _i0++) {
              int _len_filp__i0__private_data0 = 1;
          filp[_i0].private_data = (int *) malloc(_len_filp__i0__private_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_filp__i0__private_data0; _j0++) {
            filp[_i0].private_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = snic_reset_stats_release(inode,filp);
          printf("%d\n", benchRet); 
          free(inode);
          for(int _aux = 0; _aux < _len_filp0; _aux++) {
          free(filp[_aux].private_data);
          }
          free(filp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_inode0 = 65025;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
            inode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filp0 = 65025;
          struct file * filp = (struct file *) malloc(_len_filp0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_filp0; _i0++) {
              int _len_filp__i0__private_data0 = 1;
          filp[_i0].private_data = (int *) malloc(_len_filp__i0__private_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_filp__i0__private_data0; _j0++) {
            filp[_i0].private_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = snic_reset_stats_release(inode,filp);
          printf("%d\n", benchRet); 
          free(inode);
          for(int _aux = 0; _aux < _len_filp0; _aux++) {
          free(filp[_aux].private_data);
          }
          free(filp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_inode0 = 100;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
            inode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filp0 = 100;
          struct file * filp = (struct file *) malloc(_len_filp0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_filp0; _i0++) {
              int _len_filp__i0__private_data0 = 1;
          filp[_i0].private_data = (int *) malloc(_len_filp__i0__private_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_filp__i0__private_data0; _j0++) {
            filp[_i0].private_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = snic_reset_stats_release(inode,filp);
          printf("%d\n", benchRet); 
          free(inode);
          for(int _aux = 0; _aux < _len_filp0; _aux++) {
          free(filp[_aux].private_data);
          }
          free(filp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
