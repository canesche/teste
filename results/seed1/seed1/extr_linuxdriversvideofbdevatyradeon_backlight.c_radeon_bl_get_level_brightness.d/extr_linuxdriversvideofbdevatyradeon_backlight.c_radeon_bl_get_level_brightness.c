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
struct radeon_bl_privdata {scalar_t__ negative; TYPE_2__* rinfo; } ;
struct TYPE_4__ {TYPE_1__* info; } ;
struct TYPE_3__ {int* bl_curve; } ;

/* Variables and functions */
 int FB_BACKLIGHT_MAX ; 
 int MAX_RADEON_LEVEL ; 

__attribute__((used)) static int radeon_bl_get_level_brightness(struct radeon_bl_privdata *pdata,
		int level)
{
	int rlevel;

	/* Get and convert the value */
	/* No locking of bl_curve since we read a single value */
	rlevel = pdata->rinfo->info->bl_curve[level] *
		 FB_BACKLIGHT_MAX / MAX_RADEON_LEVEL;

	if (rlevel < 0)
		rlevel = 0;
	else if (rlevel > MAX_RADEON_LEVEL)
		rlevel = MAX_RADEON_LEVEL;

	if (pdata->negative)
		rlevel = MAX_RADEON_LEVEL - rlevel;

	return rlevel;
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
          int level = 100;
          int _len_pdata0 = 1;
          struct radeon_bl_privdata * pdata = (struct radeon_bl_privdata *) malloc(_len_pdata0*sizeof(struct radeon_bl_privdata));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
            pdata[_i0].negative = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdata__i0__rinfo0 = 1;
          pdata[_i0].rinfo = (struct TYPE_4__ *) malloc(_len_pdata__i0__rinfo0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_pdata__i0__rinfo0; _j0++) {
              int _len_pdata__i0__rinfo_info0 = 1;
          pdata[_i0].rinfo->info = (struct TYPE_3__ *) malloc(_len_pdata__i0__rinfo_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_pdata__i0__rinfo_info0; _j0++) {
              int _len_pdata__i0__rinfo_info_bl_curve0 = 1;
          pdata[_i0].rinfo->info->bl_curve = (int *) malloc(_len_pdata__i0__rinfo_info_bl_curve0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__rinfo_info_bl_curve0; _j0++) {
            pdata[_i0].rinfo->info->bl_curve[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = radeon_bl_get_level_brightness(pdata,level);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].rinfo);
          }
          free(pdata);
        
        break;
    }
    // big-arr
    case 1:
    {
          int level = 255;
          int _len_pdata0 = 65025;
          struct radeon_bl_privdata * pdata = (struct radeon_bl_privdata *) malloc(_len_pdata0*sizeof(struct radeon_bl_privdata));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
            pdata[_i0].negative = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdata__i0__rinfo0 = 1;
          pdata[_i0].rinfo = (struct TYPE_4__ *) malloc(_len_pdata__i0__rinfo0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_pdata__i0__rinfo0; _j0++) {
              int _len_pdata__i0__rinfo_info0 = 1;
          pdata[_i0].rinfo->info = (struct TYPE_3__ *) malloc(_len_pdata__i0__rinfo_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_pdata__i0__rinfo_info0; _j0++) {
              int _len_pdata__i0__rinfo_info_bl_curve0 = 1;
          pdata[_i0].rinfo->info->bl_curve = (int *) malloc(_len_pdata__i0__rinfo_info_bl_curve0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__rinfo_info_bl_curve0; _j0++) {
            pdata[_i0].rinfo->info->bl_curve[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = radeon_bl_get_level_brightness(pdata,level);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].rinfo);
          }
          free(pdata);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int level = 10;
          int _len_pdata0 = 100;
          struct radeon_bl_privdata * pdata = (struct radeon_bl_privdata *) malloc(_len_pdata0*sizeof(struct radeon_bl_privdata));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
            pdata[_i0].negative = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdata__i0__rinfo0 = 1;
          pdata[_i0].rinfo = (struct TYPE_4__ *) malloc(_len_pdata__i0__rinfo0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_pdata__i0__rinfo0; _j0++) {
              int _len_pdata__i0__rinfo_info0 = 1;
          pdata[_i0].rinfo->info = (struct TYPE_3__ *) malloc(_len_pdata__i0__rinfo_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_pdata__i0__rinfo_info0; _j0++) {
              int _len_pdata__i0__rinfo_info_bl_curve0 = 1;
          pdata[_i0].rinfo->info->bl_curve = (int *) malloc(_len_pdata__i0__rinfo_info_bl_curve0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__rinfo_info_bl_curve0; _j0++) {
            pdata[_i0].rinfo->info->bl_curve[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = radeon_bl_get_level_brightness(pdata,level);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].rinfo);
          }
          free(pdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
