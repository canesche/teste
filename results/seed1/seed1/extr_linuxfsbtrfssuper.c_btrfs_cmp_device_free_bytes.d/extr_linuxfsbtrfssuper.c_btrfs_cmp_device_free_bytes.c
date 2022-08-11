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
struct btrfs_device_info {scalar_t__ max_avail; } ;

/* Variables and functions */

__attribute__((used)) static int btrfs_cmp_device_free_bytes(const void *dev_info1,
				       const void *dev_info2)
{
	if (((struct btrfs_device_info *)dev_info1)->max_avail >
	    ((struct btrfs_device_info *)dev_info2)->max_avail)
		return -1;
	else if (((struct btrfs_device_info *)dev_info1)->max_avail <
		 ((struct btrfs_device_info *)dev_info2)->max_avail)
		return 1;
	else
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
          int _len_dev_info10 = 1;
          const void * dev_info1 = (const void *) malloc(_len_dev_info10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_dev_info10; _i0++) {
            dev_info1[_i0] = 0;
          }
          int _len_dev_info20 = 1;
          const void * dev_info2 = (const void *) malloc(_len_dev_info20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_dev_info20; _i0++) {
            dev_info2[_i0] = 0;
          }
          int benchRet = btrfs_cmp_device_free_bytes(dev_info1,dev_info2);
          printf("%d\n", benchRet); 
          free(dev_info1);
          free(dev_info2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev_info10 = 65025;
          const void * dev_info1 = (const void *) malloc(_len_dev_info10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_dev_info10; _i0++) {
            dev_info1[_i0] = 0;
          }
          int _len_dev_info20 = 65025;
          const void * dev_info2 = (const void *) malloc(_len_dev_info20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_dev_info20; _i0++) {
            dev_info2[_i0] = 0;
          }
          int benchRet = btrfs_cmp_device_free_bytes(dev_info1,dev_info2);
          printf("%d\n", benchRet); 
          free(dev_info1);
          free(dev_info2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev_info10 = 100;
          const void * dev_info1 = (const void *) malloc(_len_dev_info10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_dev_info10; _i0++) {
            dev_info1[_i0] = 0;
          }
          int _len_dev_info20 = 100;
          const void * dev_info2 = (const void *) malloc(_len_dev_info20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_dev_info20; _i0++) {
            dev_info2[_i0] = 0;
          }
          int benchRet = btrfs_cmp_device_free_bytes(dev_info1,dev_info2);
          printf("%d\n", benchRet); 
          free(dev_info1);
          free(dev_info2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
