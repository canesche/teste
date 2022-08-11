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
struct radeon_encoder_tv_dac {int ps2_tvdac_adj; int pal_tvdac_adj; int ntsc_tvdac_adj; } ;
struct radeon_device {size_t family; int flags; } ;

/* Variables and functions */
 size_t CHIP_RV250 ; 
 int RADEON_IS_MOBILITY ; 
 int* default_tvdac_adj ; 

__attribute__((used)) static void radeon_legacy_get_tv_dac_info_from_table(struct radeon_device *rdev,
						     struct radeon_encoder_tv_dac *tv_dac)
{
	tv_dac->ps2_tvdac_adj = default_tvdac_adj[rdev->family];
	if ((rdev->flags & RADEON_IS_MOBILITY) && (rdev->family == CHIP_RV250))
		tv_dac->ps2_tvdac_adj = 0x00880000;
	tv_dac->pal_tvdac_adj = tv_dac->ps2_tvdac_adj;
	tv_dac->ntsc_tvdac_adj = tv_dac->ps2_tvdac_adj;
	return;
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
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].family = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tv_dac0 = 1;
          struct radeon_encoder_tv_dac * tv_dac = (struct radeon_encoder_tv_dac *) malloc(_len_tv_dac0*sizeof(struct radeon_encoder_tv_dac));
          for(int _i0 = 0; _i0 < _len_tv_dac0; _i0++) {
            tv_dac[_i0].ps2_tvdac_adj = ((-2 * (next_i()%2)) + 1) * next_i();
        tv_dac[_i0].pal_tvdac_adj = ((-2 * (next_i()%2)) + 1) * next_i();
        tv_dac[_i0].ntsc_tvdac_adj = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          radeon_legacy_get_tv_dac_info_from_table(rdev,tv_dac);
          free(rdev);
          free(tv_dac);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rdev0 = 65025;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].family = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tv_dac0 = 65025;
          struct radeon_encoder_tv_dac * tv_dac = (struct radeon_encoder_tv_dac *) malloc(_len_tv_dac0*sizeof(struct radeon_encoder_tv_dac));
          for(int _i0 = 0; _i0 < _len_tv_dac0; _i0++) {
            tv_dac[_i0].ps2_tvdac_adj = ((-2 * (next_i()%2)) + 1) * next_i();
        tv_dac[_i0].pal_tvdac_adj = ((-2 * (next_i()%2)) + 1) * next_i();
        tv_dac[_i0].ntsc_tvdac_adj = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          radeon_legacy_get_tv_dac_info_from_table(rdev,tv_dac);
          free(rdev);
          free(tv_dac);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rdev0 = 100;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].family = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tv_dac0 = 100;
          struct radeon_encoder_tv_dac * tv_dac = (struct radeon_encoder_tv_dac *) malloc(_len_tv_dac0*sizeof(struct radeon_encoder_tv_dac));
          for(int _i0 = 0; _i0 < _len_tv_dac0; _i0++) {
            tv_dac[_i0].ps2_tvdac_adj = ((-2 * (next_i()%2)) + 1) * next_i();
        tv_dac[_i0].pal_tvdac_adj = ((-2 * (next_i()%2)) + 1) * next_i();
        tv_dac[_i0].ntsc_tvdac_adj = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          radeon_legacy_get_tv_dac_info_from_table(rdev,tv_dac);
          free(rdev);
          free(tv_dac);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
