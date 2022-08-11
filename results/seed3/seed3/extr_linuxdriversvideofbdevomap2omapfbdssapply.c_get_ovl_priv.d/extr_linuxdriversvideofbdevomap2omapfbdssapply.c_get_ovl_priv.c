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
struct ovl_priv_data {int dummy; } ;
struct omap_overlay {size_t id; } ;
struct TYPE_2__ {struct ovl_priv_data* ovl_priv_data_array; } ;

/* Variables and functions */
 TYPE_1__ dss_data ; 

__attribute__((used)) static struct ovl_priv_data *get_ovl_priv(struct omap_overlay *ovl)
{
	return &dss_data.ovl_priv_data_array[ovl->id];
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
          int _len_ovl0 = 1;
          struct omap_overlay * ovl = (struct omap_overlay *) malloc(_len_ovl0*sizeof(struct omap_overlay));
          for(int _i0 = 0; _i0 < _len_ovl0; _i0++) {
            ovl[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct ovl_priv_data * benchRet = get_ovl_priv(ovl);
          printf("%d\n", (*benchRet).dummy);
          free(ovl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ovl0 = 65025;
          struct omap_overlay * ovl = (struct omap_overlay *) malloc(_len_ovl0*sizeof(struct omap_overlay));
          for(int _i0 = 0; _i0 < _len_ovl0; _i0++) {
            ovl[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct ovl_priv_data * benchRet = get_ovl_priv(ovl);
          printf("%d\n", (*benchRet).dummy);
          free(ovl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ovl0 = 100;
          struct omap_overlay * ovl = (struct omap_overlay *) malloc(_len_ovl0*sizeof(struct omap_overlay));
          for(int _i0 = 0; _i0 < _len_ovl0; _i0++) {
            ovl[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct ovl_priv_data * benchRet = get_ovl_priv(ovl);
          printf("%d\n", (*benchRet).dummy);
          free(ovl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
