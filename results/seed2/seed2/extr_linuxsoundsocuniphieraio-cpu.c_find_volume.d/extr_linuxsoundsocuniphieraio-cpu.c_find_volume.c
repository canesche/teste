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
struct uniphier_aio_sub {TYPE_3__* swm; } ;
struct uniphier_aio_chip {int num_aios; TYPE_1__* aios; } ;
struct TYPE_5__ {int hw; } ;
struct TYPE_6__ {TYPE_2__ oport; } ;
struct TYPE_4__ {struct uniphier_aio_sub* sub; } ;

/* Variables and functions */

__attribute__((used)) static struct uniphier_aio_sub *find_volume(struct uniphier_aio_chip *chip,
					    int oport_hw)
{
	int i;

	for (i = 0; i < chip->num_aios; i++) {
		struct uniphier_aio_sub *sub = &chip->aios[i].sub[0];

		if (!sub->swm)
			continue;

		if (sub->swm->oport.hw == oport_hw)
			return sub;
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
          int oport_hw = 100;
          int _len_chip0 = 1;
          struct uniphier_aio_chip * chip = (struct uniphier_aio_chip *) malloc(_len_chip0*sizeof(struct uniphier_aio_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].num_aios = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__aios0 = 1;
          chip[_i0].aios = (struct TYPE_4__ *) malloc(_len_chip__i0__aios0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_chip__i0__aios0; _j0++) {
              int _len_chip__i0__aios_sub0 = 1;
          chip[_i0].aios->sub = (struct uniphier_aio_sub *) malloc(_len_chip__i0__aios_sub0*sizeof(struct uniphier_aio_sub));
          for(int _j0 = 0; _j0 < _len_chip__i0__aios_sub0; _j0++) {
              int _len_chip__i0__aios_sub_swm0 = 1;
          chip[_i0].aios->sub->swm = (struct TYPE_6__ *) malloc(_len_chip__i0__aios_sub_swm0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_chip__i0__aios_sub_swm0; _j0++) {
            chip[_i0].aios->sub->swm->oport.hw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct uniphier_aio_sub * benchRet = find_volume(chip,oport_hw);
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].aios);
          }
          free(chip);
        
        break;
    }
    // big-arr
    case 1:
    {
          int oport_hw = 255;
          int _len_chip0 = 65025;
          struct uniphier_aio_chip * chip = (struct uniphier_aio_chip *) malloc(_len_chip0*sizeof(struct uniphier_aio_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].num_aios = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__aios0 = 1;
          chip[_i0].aios = (struct TYPE_4__ *) malloc(_len_chip__i0__aios0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_chip__i0__aios0; _j0++) {
              int _len_chip__i0__aios_sub0 = 1;
          chip[_i0].aios->sub = (struct uniphier_aio_sub *) malloc(_len_chip__i0__aios_sub0*sizeof(struct uniphier_aio_sub));
          for(int _j0 = 0; _j0 < _len_chip__i0__aios_sub0; _j0++) {
              int _len_chip__i0__aios_sub_swm0 = 1;
          chip[_i0].aios->sub->swm = (struct TYPE_6__ *) malloc(_len_chip__i0__aios_sub_swm0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_chip__i0__aios_sub_swm0; _j0++) {
            chip[_i0].aios->sub->swm->oport.hw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct uniphier_aio_sub * benchRet = find_volume(chip,oport_hw);
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].aios);
          }
          free(chip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int oport_hw = 10;
          int _len_chip0 = 100;
          struct uniphier_aio_chip * chip = (struct uniphier_aio_chip *) malloc(_len_chip0*sizeof(struct uniphier_aio_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].num_aios = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__aios0 = 1;
          chip[_i0].aios = (struct TYPE_4__ *) malloc(_len_chip__i0__aios0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_chip__i0__aios0; _j0++) {
              int _len_chip__i0__aios_sub0 = 1;
          chip[_i0].aios->sub = (struct uniphier_aio_sub *) malloc(_len_chip__i0__aios_sub0*sizeof(struct uniphier_aio_sub));
          for(int _j0 = 0; _j0 < _len_chip__i0__aios_sub0; _j0++) {
              int _len_chip__i0__aios_sub_swm0 = 1;
          chip[_i0].aios->sub->swm = (struct TYPE_6__ *) malloc(_len_chip__i0__aios_sub_swm0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_chip__i0__aios_sub_swm0; _j0++) {
            chip[_i0].aios->sub->swm->oport.hw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct uniphier_aio_sub * benchRet = find_volume(chip,oport_hw);
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].aios);
          }
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
