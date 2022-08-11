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
struct byt_gpio {struct byt_community* communities_copy; TYPE_1__* soc_data; } ;
struct byt_community {unsigned int pin_base; unsigned int npins; } ;
struct TYPE_2__ {int ncommunities; } ;

/* Variables and functions */

__attribute__((used)) static struct byt_community *byt_get_community(struct byt_gpio *vg,
					       unsigned int pin)
{
	struct byt_community *comm;
	int i;

	for (i = 0; i < vg->soc_data->ncommunities; i++) {
		comm = vg->communities_copy + i;
		if (pin < comm->pin_base + comm->npins && pin >= comm->pin_base)
			return comm;
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
          unsigned int pin = 100;
          int _len_vg0 = 1;
          struct byt_gpio * vg = (struct byt_gpio *) malloc(_len_vg0*sizeof(struct byt_gpio));
          for(int _i0 = 0; _i0 < _len_vg0; _i0++) {
              int _len_vg__i0__communities_copy0 = 1;
          vg[_i0].communities_copy = (struct byt_community *) malloc(_len_vg__i0__communities_copy0*sizeof(struct byt_community));
          for(int _j0 = 0; _j0 < _len_vg__i0__communities_copy0; _j0++) {
            vg[_i0].communities_copy->pin_base = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].communities_copy->npins = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vg__i0__soc_data0 = 1;
          vg[_i0].soc_data = (struct TYPE_2__ *) malloc(_len_vg__i0__soc_data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vg__i0__soc_data0; _j0++) {
            vg[_i0].soc_data->ncommunities = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct byt_community * benchRet = byt_get_community(vg,pin);
          printf("%u\n", (*benchRet).pin_base);
          printf("%u\n", (*benchRet).npins);
          for(int _aux = 0; _aux < _len_vg0; _aux++) {
          free(vg[_aux].communities_copy);
          }
          for(int _aux = 0; _aux < _len_vg0; _aux++) {
          free(vg[_aux].soc_data);
          }
          free(vg);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int pin = 255;
          int _len_vg0 = 65025;
          struct byt_gpio * vg = (struct byt_gpio *) malloc(_len_vg0*sizeof(struct byt_gpio));
          for(int _i0 = 0; _i0 < _len_vg0; _i0++) {
              int _len_vg__i0__communities_copy0 = 1;
          vg[_i0].communities_copy = (struct byt_community *) malloc(_len_vg__i0__communities_copy0*sizeof(struct byt_community));
          for(int _j0 = 0; _j0 < _len_vg__i0__communities_copy0; _j0++) {
            vg[_i0].communities_copy->pin_base = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].communities_copy->npins = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vg__i0__soc_data0 = 1;
          vg[_i0].soc_data = (struct TYPE_2__ *) malloc(_len_vg__i0__soc_data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vg__i0__soc_data0; _j0++) {
            vg[_i0].soc_data->ncommunities = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct byt_community * benchRet = byt_get_community(vg,pin);
          printf("%u\n", (*benchRet).pin_base);
          printf("%u\n", (*benchRet).npins);
          for(int _aux = 0; _aux < _len_vg0; _aux++) {
          free(vg[_aux].communities_copy);
          }
          for(int _aux = 0; _aux < _len_vg0; _aux++) {
          free(vg[_aux].soc_data);
          }
          free(vg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int pin = 10;
          int _len_vg0 = 100;
          struct byt_gpio * vg = (struct byt_gpio *) malloc(_len_vg0*sizeof(struct byt_gpio));
          for(int _i0 = 0; _i0 < _len_vg0; _i0++) {
              int _len_vg__i0__communities_copy0 = 1;
          vg[_i0].communities_copy = (struct byt_community *) malloc(_len_vg__i0__communities_copy0*sizeof(struct byt_community));
          for(int _j0 = 0; _j0 < _len_vg__i0__communities_copy0; _j0++) {
            vg[_i0].communities_copy->pin_base = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].communities_copy->npins = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vg__i0__soc_data0 = 1;
          vg[_i0].soc_data = (struct TYPE_2__ *) malloc(_len_vg__i0__soc_data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vg__i0__soc_data0; _j0++) {
            vg[_i0].soc_data->ncommunities = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct byt_community * benchRet = byt_get_community(vg,pin);
          printf("%u\n", (*benchRet).pin_base);
          printf("%u\n", (*benchRet).npins);
          for(int _aux = 0; _aux < _len_vg0; _aux++) {
          free(vg[_aux].communities_copy);
          }
          for(int _aux = 0; _aux < _len_vg0; _aux++) {
          free(vg[_aux].soc_data);
          }
          free(vg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
