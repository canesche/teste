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
typedef  scalar_t__ u8 ;
typedef  size_t u32 ;
struct mvs_info {struct mvs_device* devices; } ;
struct mvs_device {scalar_t__ taskfileset; } ;

/* Variables and functions */
 scalar_t__ MVS_ID_NOT_MAPPED ; 
 size_t MVS_MAX_DEVICES ; 

struct mvs_device *mvs_find_dev_by_reg_set(struct mvs_info *mvi,
						u8 reg_set)
{
	u32 dev_no;
	for (dev_no = 0; dev_no < MVS_MAX_DEVICES; dev_no++) {
		if (mvi->devices[dev_no].taskfileset == MVS_ID_NOT_MAPPED)
			continue;

		if (mvi->devices[dev_no].taskfileset == reg_set)
			return &mvi->devices[dev_no];
	}
	return NULL;
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
          long reg_set = 100;
          int _len_mvi0 = 1;
          struct mvs_info * mvi = (struct mvs_info *) malloc(_len_mvi0*sizeof(struct mvs_info));
          for(int _i0 = 0; _i0 < _len_mvi0; _i0++) {
              int _len_mvi__i0__devices0 = 1;
          mvi[_i0].devices = (struct mvs_device *) malloc(_len_mvi__i0__devices0*sizeof(struct mvs_device));
          for(int _j0 = 0; _j0 < _len_mvi__i0__devices0; _j0++) {
            mvi[_i0].devices->taskfileset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mvs_device * benchRet = mvs_find_dev_by_reg_set(mvi,reg_set);
          printf("%ld\n", (*benchRet).taskfileset);
          for(int _aux = 0; _aux < _len_mvi0; _aux++) {
          free(mvi[_aux].devices);
          }
          free(mvi);
        
        break;
    }
    // big-arr
    case 1:
    {
          long reg_set = 255;
          int _len_mvi0 = 65025;
          struct mvs_info * mvi = (struct mvs_info *) malloc(_len_mvi0*sizeof(struct mvs_info));
          for(int _i0 = 0; _i0 < _len_mvi0; _i0++) {
              int _len_mvi__i0__devices0 = 1;
          mvi[_i0].devices = (struct mvs_device *) malloc(_len_mvi__i0__devices0*sizeof(struct mvs_device));
          for(int _j0 = 0; _j0 < _len_mvi__i0__devices0; _j0++) {
            mvi[_i0].devices->taskfileset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mvs_device * benchRet = mvs_find_dev_by_reg_set(mvi,reg_set);
          printf("%ld\n", (*benchRet).taskfileset);
          for(int _aux = 0; _aux < _len_mvi0; _aux++) {
          free(mvi[_aux].devices);
          }
          free(mvi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long reg_set = 10;
          int _len_mvi0 = 100;
          struct mvs_info * mvi = (struct mvs_info *) malloc(_len_mvi0*sizeof(struct mvs_info));
          for(int _i0 = 0; _i0 < _len_mvi0; _i0++) {
              int _len_mvi__i0__devices0 = 1;
          mvi[_i0].devices = (struct mvs_device *) malloc(_len_mvi__i0__devices0*sizeof(struct mvs_device));
          for(int _j0 = 0; _j0 < _len_mvi__i0__devices0; _j0++) {
            mvi[_i0].devices->taskfileset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mvs_device * benchRet = mvs_find_dev_by_reg_set(mvi,reg_set);
          printf("%ld\n", (*benchRet).taskfileset);
          for(int _aux = 0; _aux < _len_mvi0; _aux++) {
          free(mvi[_aux].devices);
          }
          free(mvi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
