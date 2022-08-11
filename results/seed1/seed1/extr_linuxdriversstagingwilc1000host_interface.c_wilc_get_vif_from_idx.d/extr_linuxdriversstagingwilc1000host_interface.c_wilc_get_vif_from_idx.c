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
struct wilc_vif {int dummy; } ;
struct wilc {struct wilc_vif** vif; } ;

/* Variables and functions */
 int NUM_CONCURRENT_IFC ; 

__attribute__((used)) static struct wilc_vif *wilc_get_vif_from_idx(struct wilc *wilc, int idx)
{
	int index = idx - 1;

	if (index < 0 || index >= NUM_CONCURRENT_IFC)
		return NULL;

	return wilc->vif[index];
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
          int idx = 100;
          int _len_wilc0 = 1;
          struct wilc * wilc = (struct wilc *) malloc(_len_wilc0*sizeof(struct wilc));
          for(int _i0 = 0; _i0 < _len_wilc0; _i0++) {
              int _len_wilc__i0__vif0 = 1;
          wilc[_i0].vif = (struct wilc_vif **) malloc(_len_wilc__i0__vif0*sizeof(struct wilc_vif *));
          for(int _j0 = 0; _j0 < _len_wilc__i0__vif0; _j0++) {
            int _len_wilc__i0__vif1 = 1;
            wilc[_i0].vif[_j0] = (struct wilc_vif *) malloc(_len_wilc__i0__vif1*sizeof(struct wilc_vif));
            for(int _j1 = 0; _j1 < _len_wilc__i0__vif1; _j1++) {
              wilc[_i0].vif[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct wilc_vif * benchRet = wilc_get_vif_from_idx(wilc,idx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_wilc0; _aux++) {
          free(*(wilc[_aux].vif));
        free(wilc[_aux].vif);
          }
          free(wilc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int _len_wilc0 = 65025;
          struct wilc * wilc = (struct wilc *) malloc(_len_wilc0*sizeof(struct wilc));
          for(int _i0 = 0; _i0 < _len_wilc0; _i0++) {
              int _len_wilc__i0__vif0 = 1;
          wilc[_i0].vif = (struct wilc_vif **) malloc(_len_wilc__i0__vif0*sizeof(struct wilc_vif *));
          for(int _j0 = 0; _j0 < _len_wilc__i0__vif0; _j0++) {
            int _len_wilc__i0__vif1 = 1;
            wilc[_i0].vif[_j0] = (struct wilc_vif *) malloc(_len_wilc__i0__vif1*sizeof(struct wilc_vif));
            for(int _j1 = 0; _j1 < _len_wilc__i0__vif1; _j1++) {
              wilc[_i0].vif[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct wilc_vif * benchRet = wilc_get_vif_from_idx(wilc,idx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_wilc0; _aux++) {
          free(*(wilc[_aux].vif));
        free(wilc[_aux].vif);
          }
          free(wilc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int _len_wilc0 = 100;
          struct wilc * wilc = (struct wilc *) malloc(_len_wilc0*sizeof(struct wilc));
          for(int _i0 = 0; _i0 < _len_wilc0; _i0++) {
              int _len_wilc__i0__vif0 = 1;
          wilc[_i0].vif = (struct wilc_vif **) malloc(_len_wilc__i0__vif0*sizeof(struct wilc_vif *));
          for(int _j0 = 0; _j0 < _len_wilc__i0__vif0; _j0++) {
            int _len_wilc__i0__vif1 = 1;
            wilc[_i0].vif[_j0] = (struct wilc_vif *) malloc(_len_wilc__i0__vif1*sizeof(struct wilc_vif));
            for(int _j1 = 0; _j1 < _len_wilc__i0__vif1; _j1++) {
              wilc[_i0].vif[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct wilc_vif * benchRet = wilc_get_vif_from_idx(wilc,idx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_wilc0; _aux++) {
          free(*(wilc[_aux].vif));
        free(wilc[_aux].vif);
          }
          free(wilc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
