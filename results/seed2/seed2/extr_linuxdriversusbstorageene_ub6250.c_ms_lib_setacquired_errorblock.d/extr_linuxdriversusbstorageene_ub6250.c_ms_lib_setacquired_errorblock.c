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
typedef  int u32 ;
typedef  size_t u16 ;
struct us_data {scalar_t__ extra; } ;
struct TYPE_2__ {size_t NumberOfPhyBlock; size_t* Phy2LogMap; size_t NumberOfLogBlock; int /*<<< orphan*/ * Log2PhyMap; } ;
struct ene_ub6250_info {TYPE_1__ MS_Lib; } ;

/* Variables and functions */
 scalar_t__ MS_LB_ACQUIRED_ERROR ; 
 scalar_t__ MS_LB_INITIAL_ERROR ; 
 int /*<<< orphan*/  MS_LB_NOT_USED ; 

__attribute__((used)) static int ms_lib_setacquired_errorblock(struct us_data *us, u16 phyblk)
{
	u16 log;
	struct ene_ub6250_info *info = (struct ene_ub6250_info *) us->extra;

	if (phyblk >= info->MS_Lib.NumberOfPhyBlock)
		return (u32)-1;

	log = info->MS_Lib.Phy2LogMap[phyblk];

	if (log < info->MS_Lib.NumberOfLogBlock)
		info->MS_Lib.Log2PhyMap[log] = MS_LB_NOT_USED;

	if (info->MS_Lib.Phy2LogMap[phyblk] != MS_LB_INITIAL_ERROR)
		info->MS_Lib.Phy2LogMap[phyblk] = MS_LB_ACQUIRED_ERROR;

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
          unsigned long phyblk = 100;
          int _len_us0 = 1;
          struct us_data * us = (struct us_data *) malloc(_len_us0*sizeof(struct us_data));
          for(int _i0 = 0; _i0 < _len_us0; _i0++) {
            us[_i0].extra = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ms_lib_setacquired_errorblock(us,phyblk);
          printf("%d\n", benchRet); 
          free(us);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long phyblk = 255;
          int _len_us0 = 65025;
          struct us_data * us = (struct us_data *) malloc(_len_us0*sizeof(struct us_data));
          for(int _i0 = 0; _i0 < _len_us0; _i0++) {
            us[_i0].extra = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ms_lib_setacquired_errorblock(us,phyblk);
          printf("%d\n", benchRet); 
          free(us);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long phyblk = 10;
          int _len_us0 = 100;
          struct us_data * us = (struct us_data *) malloc(_len_us0*sizeof(struct us_data));
          for(int _i0 = 0; _i0 < _len_us0; _i0++) {
            us[_i0].extra = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ms_lib_setacquired_errorblock(us,phyblk);
          printf("%d\n", benchRet); 
          free(us);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
