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
struct TYPE_2__ {int res_id; } ;
struct res_mtt {int order; TYPE_1__ com; } ;
struct mlx4_dev {int dummy; } ;

/* Variables and functions */
 int EPERM ; 

__attribute__((used)) static int check_mtt_range(struct mlx4_dev *dev, int slave, int start,
			   int size, struct res_mtt *mtt)
{
	int res_start = mtt->com.res_id;
	int res_size = (1 << mtt->order);

	if (start < res_start || start + size > res_start + res_size)
		return -EPERM;
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
          int slave = 100;
          int start = 100;
          int size = 100;
          int _len_dev0 = 1;
          struct mlx4_dev * dev = (struct mlx4_dev *) malloc(_len_dev0*sizeof(struct mlx4_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mtt0 = 1;
          struct res_mtt * mtt = (struct res_mtt *) malloc(_len_mtt0*sizeof(struct res_mtt));
          for(int _i0 = 0; _i0 < _len_mtt0; _i0++) {
            mtt[_i0].order = ((-2 * (next_i()%2)) + 1) * next_i();
        mtt[_i0].com.res_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_mtt_range(dev,slave,start,size,mtt);
          printf("%d\n", benchRet); 
          free(dev);
          free(mtt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int slave = 255;
          int start = 255;
          int size = 255;
          int _len_dev0 = 65025;
          struct mlx4_dev * dev = (struct mlx4_dev *) malloc(_len_dev0*sizeof(struct mlx4_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mtt0 = 65025;
          struct res_mtt * mtt = (struct res_mtt *) malloc(_len_mtt0*sizeof(struct res_mtt));
          for(int _i0 = 0; _i0 < _len_mtt0; _i0++) {
            mtt[_i0].order = ((-2 * (next_i()%2)) + 1) * next_i();
        mtt[_i0].com.res_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_mtt_range(dev,slave,start,size,mtt);
          printf("%d\n", benchRet); 
          free(dev);
          free(mtt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int slave = 10;
          int start = 10;
          int size = 10;
          int _len_dev0 = 100;
          struct mlx4_dev * dev = (struct mlx4_dev *) malloc(_len_dev0*sizeof(struct mlx4_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mtt0 = 100;
          struct res_mtt * mtt = (struct res_mtt *) malloc(_len_mtt0*sizeof(struct res_mtt));
          for(int _i0 = 0; _i0 < _len_mtt0; _i0++) {
            mtt[_i0].order = ((-2 * (next_i()%2)) + 1) * next_i();
        mtt[_i0].com.res_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_mtt_range(dev,slave,start,size,mtt);
          printf("%d\n", benchRet); 
          free(dev);
          free(mtt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
