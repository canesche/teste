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
struct ltdc_device {int dummy; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ dev_private; } ;

/* Variables and functions */

__attribute__((used)) static inline struct ltdc_device *encoder_to_ltdc(struct drm_encoder *enc)
{
	return (struct ltdc_device *)enc->dev->dev_private;
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
          int _len_enc0 = 1;
          struct drm_encoder * enc = (struct drm_encoder *) malloc(_len_enc0*sizeof(struct drm_encoder));
          for(int _i0 = 0; _i0 < _len_enc0; _i0++) {
              int _len_enc__i0__dev0 = 1;
          enc[_i0].dev = (struct TYPE_2__ *) malloc(_len_enc__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_enc__i0__dev0; _j0++) {
            enc[_i0].dev->dev_private = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ltdc_device * benchRet = encoder_to_ltdc(enc);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_enc0; _aux++) {
          free(enc[_aux].dev);
          }
          free(enc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_enc0 = 65025;
          struct drm_encoder * enc = (struct drm_encoder *) malloc(_len_enc0*sizeof(struct drm_encoder));
          for(int _i0 = 0; _i0 < _len_enc0; _i0++) {
              int _len_enc__i0__dev0 = 1;
          enc[_i0].dev = (struct TYPE_2__ *) malloc(_len_enc__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_enc__i0__dev0; _j0++) {
            enc[_i0].dev->dev_private = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ltdc_device * benchRet = encoder_to_ltdc(enc);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_enc0; _aux++) {
          free(enc[_aux].dev);
          }
          free(enc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_enc0 = 100;
          struct drm_encoder * enc = (struct drm_encoder *) malloc(_len_enc0*sizeof(struct drm_encoder));
          for(int _i0 = 0; _i0 < _len_enc0; _i0++) {
              int _len_enc__i0__dev0 = 1;
          enc[_i0].dev = (struct TYPE_2__ *) malloc(_len_enc__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_enc__i0__dev0; _j0++) {
            enc[_i0].dev->dev_private = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ltdc_device * benchRet = encoder_to_ltdc(enc);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_enc0; _aux++) {
          free(enc[_aux].dev);
          }
          free(enc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
