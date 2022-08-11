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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct radeon_encoder_int_tmds {TYPE_1__* tmds_pll; } ;
struct TYPE_5__ {struct drm_device* dev; } ;
struct radeon_encoder {TYPE_2__ base; } ;
struct radeon_device {size_t family; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_6__ {int /*<<< orphan*/  freq; int /*<<< orphan*/  value; } ;
struct TYPE_4__ {int /*<<< orphan*/  freq; int /*<<< orphan*/  value; } ;

/* Variables and functions */
 TYPE_3__** default_tmds_pll ; 

bool radeon_legacy_get_tmds_info_from_table(struct radeon_encoder *encoder,
					    struct radeon_encoder_int_tmds *tmds)
{
	struct drm_device *dev = encoder->base.dev;
	struct radeon_device *rdev = dev->dev_private;
	int i;

	for (i = 0; i < 4; i++) {
		tmds->tmds_pll[i].value =
			default_tmds_pll[rdev->family][i].value;
		tmds->tmds_pll[i].freq = default_tmds_pll[rdev->family][i].freq;
	}

	return true;
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
          int _len_encoder0 = 1;
          struct radeon_encoder * encoder = (struct radeon_encoder *) malloc(_len_encoder0*sizeof(struct radeon_encoder));
          for(int _i0 = 0; _i0 < _len_encoder0; _i0++) {
              int _len_encoder__i0__base_dev0 = 1;
          encoder[_i0].base.dev = (struct drm_device *) malloc(_len_encoder__i0__base_dev0*sizeof(struct drm_device));
          for(int _j0 = 0; _j0 < _len_encoder__i0__base_dev0; _j0++) {
              int _len_encoder__i0__base_dev_dev_private0 = 1;
          encoder[_i0].base.dev->dev_private = (struct radeon_device *) malloc(_len_encoder__i0__base_dev_dev_private0*sizeof(struct radeon_device));
          for(int _j0 = 0; _j0 < _len_encoder__i0__base_dev_dev_private0; _j0++) {
            encoder[_i0].base.dev->dev_private->family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_tmds0 = 1;
          struct radeon_encoder_int_tmds * tmds = (struct radeon_encoder_int_tmds *) malloc(_len_tmds0*sizeof(struct radeon_encoder_int_tmds));
          for(int _i0 = 0; _i0 < _len_tmds0; _i0++) {
              int _len_tmds__i0__tmds_pll0 = 1;
          tmds[_i0].tmds_pll = (struct TYPE_4__ *) malloc(_len_tmds__i0__tmds_pll0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_tmds__i0__tmds_pll0; _j0++) {
            tmds[_i0].tmds_pll->freq = ((-2 * (next_i()%2)) + 1) * next_i();
        tmds[_i0].tmds_pll->value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = radeon_legacy_get_tmds_info_from_table(encoder,tmds);
          printf("%d\n", benchRet); 
          free(encoder);
          for(int _aux = 0; _aux < _len_tmds0; _aux++) {
          free(tmds[_aux].tmds_pll);
          }
          free(tmds);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_encoder0 = 65025;
          struct radeon_encoder * encoder = (struct radeon_encoder *) malloc(_len_encoder0*sizeof(struct radeon_encoder));
          for(int _i0 = 0; _i0 < _len_encoder0; _i0++) {
              int _len_encoder__i0__base_dev0 = 1;
          encoder[_i0].base.dev = (struct drm_device *) malloc(_len_encoder__i0__base_dev0*sizeof(struct drm_device));
          for(int _j0 = 0; _j0 < _len_encoder__i0__base_dev0; _j0++) {
              int _len_encoder__i0__base_dev_dev_private0 = 1;
          encoder[_i0].base.dev->dev_private = (struct radeon_device *) malloc(_len_encoder__i0__base_dev_dev_private0*sizeof(struct radeon_device));
          for(int _j0 = 0; _j0 < _len_encoder__i0__base_dev_dev_private0; _j0++) {
            encoder[_i0].base.dev->dev_private->family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_tmds0 = 65025;
          struct radeon_encoder_int_tmds * tmds = (struct radeon_encoder_int_tmds *) malloc(_len_tmds0*sizeof(struct radeon_encoder_int_tmds));
          for(int _i0 = 0; _i0 < _len_tmds0; _i0++) {
              int _len_tmds__i0__tmds_pll0 = 1;
          tmds[_i0].tmds_pll = (struct TYPE_4__ *) malloc(_len_tmds__i0__tmds_pll0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_tmds__i0__tmds_pll0; _j0++) {
            tmds[_i0].tmds_pll->freq = ((-2 * (next_i()%2)) + 1) * next_i();
        tmds[_i0].tmds_pll->value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = radeon_legacy_get_tmds_info_from_table(encoder,tmds);
          printf("%d\n", benchRet); 
          free(encoder);
          for(int _aux = 0; _aux < _len_tmds0; _aux++) {
          free(tmds[_aux].tmds_pll);
          }
          free(tmds);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_encoder0 = 100;
          struct radeon_encoder * encoder = (struct radeon_encoder *) malloc(_len_encoder0*sizeof(struct radeon_encoder));
          for(int _i0 = 0; _i0 < _len_encoder0; _i0++) {
              int _len_encoder__i0__base_dev0 = 1;
          encoder[_i0].base.dev = (struct drm_device *) malloc(_len_encoder__i0__base_dev0*sizeof(struct drm_device));
          for(int _j0 = 0; _j0 < _len_encoder__i0__base_dev0; _j0++) {
              int _len_encoder__i0__base_dev_dev_private0 = 1;
          encoder[_i0].base.dev->dev_private = (struct radeon_device *) malloc(_len_encoder__i0__base_dev_dev_private0*sizeof(struct radeon_device));
          for(int _j0 = 0; _j0 < _len_encoder__i0__base_dev_dev_private0; _j0++) {
            encoder[_i0].base.dev->dev_private->family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_tmds0 = 100;
          struct radeon_encoder_int_tmds * tmds = (struct radeon_encoder_int_tmds *) malloc(_len_tmds0*sizeof(struct radeon_encoder_int_tmds));
          for(int _i0 = 0; _i0 < _len_tmds0; _i0++) {
              int _len_tmds__i0__tmds_pll0 = 1;
          tmds[_i0].tmds_pll = (struct TYPE_4__ *) malloc(_len_tmds__i0__tmds_pll0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_tmds__i0__tmds_pll0; _j0++) {
            tmds[_i0].tmds_pll->freq = ((-2 * (next_i()%2)) + 1) * next_i();
        tmds[_i0].tmds_pll->value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = radeon_legacy_get_tmds_info_from_table(encoder,tmds);
          printf("%d\n", benchRet); 
          free(encoder);
          for(int _aux = 0; _aux < _len_tmds0; _aux++) {
          free(tmds[_aux].tmds_pll);
          }
          free(tmds);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
