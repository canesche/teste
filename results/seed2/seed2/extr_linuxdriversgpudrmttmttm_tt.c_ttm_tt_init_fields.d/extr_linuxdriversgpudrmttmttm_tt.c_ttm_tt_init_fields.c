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
typedef  int /*<<< orphan*/  uint32_t ;
struct ttm_tt {int /*<<< orphan*/  sg; int /*<<< orphan*/ * swap_storage; int /*<<< orphan*/  state; int /*<<< orphan*/  page_flags; int /*<<< orphan*/  caching_state; int /*<<< orphan*/  num_pages; int /*<<< orphan*/  bdev; } ;
struct ttm_buffer_object {int /*<<< orphan*/  sg; int /*<<< orphan*/  num_pages; int /*<<< orphan*/  bdev; } ;

/* Variables and functions */
 int /*<<< orphan*/  tt_cached ; 
 int /*<<< orphan*/  tt_unpopulated ; 

void ttm_tt_init_fields(struct ttm_tt *ttm, struct ttm_buffer_object *bo,
			uint32_t page_flags)
{
	ttm->bdev = bo->bdev;
	ttm->num_pages = bo->num_pages;
	ttm->caching_state = tt_cached;
	ttm->page_flags = page_flags;
	ttm->state = tt_unpopulated;
	ttm->swap_storage = NULL;
	ttm->sg = bo->sg;
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
          int page_flags = 100;
          int _len_ttm0 = 1;
          struct ttm_tt * ttm = (struct ttm_tt *) malloc(_len_ttm0*sizeof(struct ttm_tt));
          for(int _i0 = 0; _i0 < _len_ttm0; _i0++) {
            ttm[_i0].sg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ttm__i0__swap_storage0 = 1;
          ttm[_i0].swap_storage = (int *) malloc(_len_ttm__i0__swap_storage0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ttm__i0__swap_storage0; _j0++) {
            ttm[_i0].swap_storage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ttm[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        ttm[_i0].page_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ttm[_i0].caching_state = ((-2 * (next_i()%2)) + 1) * next_i();
        ttm[_i0].num_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        ttm[_i0].bdev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bo0 = 1;
          struct ttm_buffer_object * bo = (struct ttm_buffer_object *) malloc(_len_bo0*sizeof(struct ttm_buffer_object));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
            bo[_i0].sg = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].num_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].bdev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ttm_tt_init_fields(ttm,bo,page_flags);
          for(int _aux = 0; _aux < _len_ttm0; _aux++) {
          free(ttm[_aux].swap_storage);
          }
          free(ttm);
          free(bo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int page_flags = 255;
          int _len_ttm0 = 65025;
          struct ttm_tt * ttm = (struct ttm_tt *) malloc(_len_ttm0*sizeof(struct ttm_tt));
          for(int _i0 = 0; _i0 < _len_ttm0; _i0++) {
            ttm[_i0].sg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ttm__i0__swap_storage0 = 1;
          ttm[_i0].swap_storage = (int *) malloc(_len_ttm__i0__swap_storage0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ttm__i0__swap_storage0; _j0++) {
            ttm[_i0].swap_storage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ttm[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        ttm[_i0].page_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ttm[_i0].caching_state = ((-2 * (next_i()%2)) + 1) * next_i();
        ttm[_i0].num_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        ttm[_i0].bdev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bo0 = 65025;
          struct ttm_buffer_object * bo = (struct ttm_buffer_object *) malloc(_len_bo0*sizeof(struct ttm_buffer_object));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
            bo[_i0].sg = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].num_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].bdev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ttm_tt_init_fields(ttm,bo,page_flags);
          for(int _aux = 0; _aux < _len_ttm0; _aux++) {
          free(ttm[_aux].swap_storage);
          }
          free(ttm);
          free(bo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int page_flags = 10;
          int _len_ttm0 = 100;
          struct ttm_tt * ttm = (struct ttm_tt *) malloc(_len_ttm0*sizeof(struct ttm_tt));
          for(int _i0 = 0; _i0 < _len_ttm0; _i0++) {
            ttm[_i0].sg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ttm__i0__swap_storage0 = 1;
          ttm[_i0].swap_storage = (int *) malloc(_len_ttm__i0__swap_storage0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ttm__i0__swap_storage0; _j0++) {
            ttm[_i0].swap_storage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ttm[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        ttm[_i0].page_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ttm[_i0].caching_state = ((-2 * (next_i()%2)) + 1) * next_i();
        ttm[_i0].num_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        ttm[_i0].bdev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bo0 = 100;
          struct ttm_buffer_object * bo = (struct ttm_buffer_object *) malloc(_len_bo0*sizeof(struct ttm_buffer_object));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
            bo[_i0].sg = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].num_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].bdev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ttm_tt_init_fields(ttm,bo,page_flags);
          for(int _aux = 0; _aux < _len_ttm0; _aux++) {
          free(ttm[_aux].swap_storage);
          }
          free(ttm);
          free(bo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
