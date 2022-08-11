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
struct ttm_tt {int page_flags; size_t num_pages; TYPE_2__* bdev; TYPE_1__** pages; } ;
typedef  size_t pgoff_t ;
struct TYPE_4__ {int /*<<< orphan*/  dev_mapping; } ;
struct TYPE_3__ {int /*<<< orphan*/  mapping; } ;

/* Variables and functions */
 int TTM_PAGE_FLAG_SG ; 

__attribute__((used)) static void ttm_tt_add_mapping(struct ttm_tt *ttm)
{
	pgoff_t i;

	if (ttm->page_flags & TTM_PAGE_FLAG_SG)
		return;

	for (i = 0; i < ttm->num_pages; ++i)
		ttm->pages[i]->mapping = ttm->bdev->dev_mapping;
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
          int _len_ttm0 = 1;
          struct ttm_tt * ttm = (struct ttm_tt *) malloc(_len_ttm0*sizeof(struct ttm_tt));
          for(int _i0 = 0; _i0 < _len_ttm0; _i0++) {
            ttm[_i0].page_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ttm[_i0].num_pages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ttm__i0__bdev0 = 1;
          ttm[_i0].bdev = (struct TYPE_4__ *) malloc(_len_ttm__i0__bdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ttm__i0__bdev0; _j0++) {
            ttm[_i0].bdev->dev_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ttm__i0__pages0 = 1;
          ttm[_i0].pages = (struct TYPE_3__ **) malloc(_len_ttm__i0__pages0*sizeof(struct TYPE_3__ *));
          for(int _j0 = 0; _j0 < _len_ttm__i0__pages0; _j0++) {
            int _len_ttm__i0__pages1 = 1;
            ttm[_i0].pages[_j0] = (struct TYPE_3__ *) malloc(_len_ttm__i0__pages1*sizeof(struct TYPE_3__));
            for(int _j1 = 0; _j1 < _len_ttm__i0__pages1; _j1++) {
              ttm[_i0].pages[_j0]->mapping = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          ttm_tt_add_mapping(ttm);
          for(int _aux = 0; _aux < _len_ttm0; _aux++) {
          free(ttm[_aux].bdev);
          }
          for(int _aux = 0; _aux < _len_ttm0; _aux++) {
          free(*(ttm[_aux].pages));
        free(ttm[_aux].pages);
          }
          free(ttm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ttm0 = 65025;
          struct ttm_tt * ttm = (struct ttm_tt *) malloc(_len_ttm0*sizeof(struct ttm_tt));
          for(int _i0 = 0; _i0 < _len_ttm0; _i0++) {
            ttm[_i0].page_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ttm[_i0].num_pages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ttm__i0__bdev0 = 1;
          ttm[_i0].bdev = (struct TYPE_4__ *) malloc(_len_ttm__i0__bdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ttm__i0__bdev0; _j0++) {
            ttm[_i0].bdev->dev_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ttm__i0__pages0 = 1;
          ttm[_i0].pages = (struct TYPE_3__ **) malloc(_len_ttm__i0__pages0*sizeof(struct TYPE_3__ *));
          for(int _j0 = 0; _j0 < _len_ttm__i0__pages0; _j0++) {
            int _len_ttm__i0__pages1 = 1;
            ttm[_i0].pages[_j0] = (struct TYPE_3__ *) malloc(_len_ttm__i0__pages1*sizeof(struct TYPE_3__));
            for(int _j1 = 0; _j1 < _len_ttm__i0__pages1; _j1++) {
              ttm[_i0].pages[_j0]->mapping = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          ttm_tt_add_mapping(ttm);
          for(int _aux = 0; _aux < _len_ttm0; _aux++) {
          free(ttm[_aux].bdev);
          }
          for(int _aux = 0; _aux < _len_ttm0; _aux++) {
          free(*(ttm[_aux].pages));
        free(ttm[_aux].pages);
          }
          free(ttm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ttm0 = 100;
          struct ttm_tt * ttm = (struct ttm_tt *) malloc(_len_ttm0*sizeof(struct ttm_tt));
          for(int _i0 = 0; _i0 < _len_ttm0; _i0++) {
            ttm[_i0].page_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ttm[_i0].num_pages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ttm__i0__bdev0 = 1;
          ttm[_i0].bdev = (struct TYPE_4__ *) malloc(_len_ttm__i0__bdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ttm__i0__bdev0; _j0++) {
            ttm[_i0].bdev->dev_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ttm__i0__pages0 = 1;
          ttm[_i0].pages = (struct TYPE_3__ **) malloc(_len_ttm__i0__pages0*sizeof(struct TYPE_3__ *));
          for(int _j0 = 0; _j0 < _len_ttm__i0__pages0; _j0++) {
            int _len_ttm__i0__pages1 = 1;
            ttm[_i0].pages[_j0] = (struct TYPE_3__ *) malloc(_len_ttm__i0__pages1*sizeof(struct TYPE_3__));
            for(int _j1 = 0; _j1 < _len_ttm__i0__pages1; _j1++) {
              ttm[_i0].pages[_j0]->mapping = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          ttm_tt_add_mapping(ttm);
          for(int _aux = 0; _aux < _len_ttm0; _aux++) {
          free(ttm[_aux].bdev);
          }
          for(int _aux = 0; _aux < _len_ttm0; _aux++) {
          free(*(ttm[_aux].pages));
        free(ttm[_aux].pages);
          }
          free(ttm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
