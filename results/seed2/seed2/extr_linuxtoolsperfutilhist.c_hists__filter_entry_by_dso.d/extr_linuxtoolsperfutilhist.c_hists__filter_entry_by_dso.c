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
struct hists {int /*<<< orphan*/ * dso_filter; } ;
struct TYPE_4__ {TYPE_1__* map; } ;
struct hist_entry {int filtered; TYPE_2__ ms; } ;
struct TYPE_3__ {int /*<<< orphan*/ * dso; } ;

/* Variables and functions */
 int HIST_FILTER__DSO ; 

__attribute__((used)) static bool hists__filter_entry_by_dso(struct hists *hists,
				       struct hist_entry *he)
{
	if (hists->dso_filter != NULL &&
	    (he->ms.map == NULL || he->ms.map->dso != hists->dso_filter)) {
		he->filtered |= (1 << HIST_FILTER__DSO);
		return true;
	}

	return false;
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
          int _len_hists0 = 1;
          struct hists * hists = (struct hists *) malloc(_len_hists0*sizeof(struct hists));
          for(int _i0 = 0; _i0 < _len_hists0; _i0++) {
              int _len_hists__i0__dso_filter0 = 1;
          hists[_i0].dso_filter = (int *) malloc(_len_hists__i0__dso_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hists__i0__dso_filter0; _j0++) {
            hists[_i0].dso_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_he0 = 1;
          struct hist_entry * he = (struct hist_entry *) malloc(_len_he0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_he0; _i0++) {
            he[_i0].filtered = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_he__i0__ms_map0 = 1;
          he[_i0].ms.map = (struct TYPE_3__ *) malloc(_len_he__i0__ms_map0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_he__i0__ms_map0; _j0++) {
              int _len_he__i0__ms_map_dso0 = 1;
          he[_i0].ms.map->dso = (int *) malloc(_len_he__i0__ms_map_dso0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_he__i0__ms_map_dso0; _j0++) {
            he[_i0].ms.map->dso[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = hists__filter_entry_by_dso(hists,he);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hists0; _aux++) {
          free(hists[_aux].dso_filter);
          }
          free(hists);
          free(he);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hists0 = 65025;
          struct hists * hists = (struct hists *) malloc(_len_hists0*sizeof(struct hists));
          for(int _i0 = 0; _i0 < _len_hists0; _i0++) {
              int _len_hists__i0__dso_filter0 = 1;
          hists[_i0].dso_filter = (int *) malloc(_len_hists__i0__dso_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hists__i0__dso_filter0; _j0++) {
            hists[_i0].dso_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_he0 = 65025;
          struct hist_entry * he = (struct hist_entry *) malloc(_len_he0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_he0; _i0++) {
            he[_i0].filtered = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_he__i0__ms_map0 = 1;
          he[_i0].ms.map = (struct TYPE_3__ *) malloc(_len_he__i0__ms_map0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_he__i0__ms_map0; _j0++) {
              int _len_he__i0__ms_map_dso0 = 1;
          he[_i0].ms.map->dso = (int *) malloc(_len_he__i0__ms_map_dso0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_he__i0__ms_map_dso0; _j0++) {
            he[_i0].ms.map->dso[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = hists__filter_entry_by_dso(hists,he);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hists0; _aux++) {
          free(hists[_aux].dso_filter);
          }
          free(hists);
          free(he);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hists0 = 100;
          struct hists * hists = (struct hists *) malloc(_len_hists0*sizeof(struct hists));
          for(int _i0 = 0; _i0 < _len_hists0; _i0++) {
              int _len_hists__i0__dso_filter0 = 1;
          hists[_i0].dso_filter = (int *) malloc(_len_hists__i0__dso_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hists__i0__dso_filter0; _j0++) {
            hists[_i0].dso_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_he0 = 100;
          struct hist_entry * he = (struct hist_entry *) malloc(_len_he0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_he0; _i0++) {
            he[_i0].filtered = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_he__i0__ms_map0 = 1;
          he[_i0].ms.map = (struct TYPE_3__ *) malloc(_len_he__i0__ms_map0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_he__i0__ms_map0; _j0++) {
              int _len_he__i0__ms_map_dso0 = 1;
          he[_i0].ms.map->dso = (int *) malloc(_len_he__i0__ms_map_dso0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_he__i0__ms_map_dso0; _j0++) {
            he[_i0].ms.map->dso[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = hists__filter_entry_by_dso(hists,he);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hists0; _aux++) {
          free(hists[_aux].dso_filter);
          }
          free(hists);
          free(he);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
