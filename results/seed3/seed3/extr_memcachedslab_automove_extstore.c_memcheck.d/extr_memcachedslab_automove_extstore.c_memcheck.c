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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {unsigned int total_pages; unsigned int chunks_per_page; } ;
typedef  TYPE_2__ slab_stats_automove ;
struct TYPE_7__ {scalar_t__ last_memcheck_run; unsigned int free_ratio; unsigned int* free_mem; TYPE_2__* sam_after; TYPE_1__* settings; scalar_t__ pool_filled_once; } ;
typedef  TYPE_3__ slab_automove ;
struct TYPE_5__ {unsigned int* ext_free_memchunks; } ;

/* Variables and functions */
 int MAX_NUMBER_OF_SLAB_CLASSES ; 
 scalar_t__ MEMCHECK_PERIOD ; 
 unsigned int MIN_PAGES_FREE ; 
 scalar_t__ current_time ; 

__attribute__((used)) static void memcheck(slab_automove *a) {
    unsigned int total_pages = 0;
    if (current_time < a->last_memcheck_run + MEMCHECK_PERIOD)
        return;
    a->last_memcheck_run = current_time;
    for (int n = 1; n < MAX_NUMBER_OF_SLAB_CLASSES; n++) {
        slab_stats_automove *sam = &a->sam_after[n];
        total_pages += sam->total_pages;
        unsigned int hold_free = (sam->total_pages * sam->chunks_per_page)
            * a->free_ratio;
        if (sam->chunks_per_page * MIN_PAGES_FREE > hold_free)
            hold_free = sam->chunks_per_page * MIN_PAGES_FREE;
        a->free_mem[n] = hold_free;
        if (a->settings->ext_free_memchunks[n] != hold_free && a->pool_filled_once) {
            a->settings->ext_free_memchunks[n] = hold_free;
        }
    }
    // remember to add what remains in global pool.
    total_pages += a->sam_after[0].total_pages;
    a->free_mem[0] = total_pages * a->free_ratio;
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
          int _len_a0 = 1;
          struct TYPE_7__ * a = (struct TYPE_7__ *) malloc(_len_a0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].last_memcheck_run = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].free_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_a__i0__free_mem0 = 1;
          a[_i0].free_mem = (unsigned int *) malloc(_len_a__i0__free_mem0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_a__i0__free_mem0; _j0++) {
            a[_i0].free_mem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a__i0__sam_after0 = 1;
          a[_i0].sam_after = (struct TYPE_6__ *) malloc(_len_a__i0__sam_after0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_a__i0__sam_after0; _j0++) {
            a[_i0].sam_after->total_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].sam_after->chunks_per_page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a__i0__settings0 = 1;
          a[_i0].settings = (struct TYPE_5__ *) malloc(_len_a__i0__settings0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_a__i0__settings0; _j0++) {
              int _len_a__i0__settings_ext_free_memchunks0 = 1;
          a[_i0].settings->ext_free_memchunks = (unsigned int *) malloc(_len_a__i0__settings_ext_free_memchunks0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_a__i0__settings_ext_free_memchunks0; _j0++) {
            a[_i0].settings->ext_free_memchunks[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        a[_i0].pool_filled_once = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          memcheck(a);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].free_mem);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].sam_after);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].settings);
          }
          free(a);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_a0 = 65025;
          struct TYPE_7__ * a = (struct TYPE_7__ *) malloc(_len_a0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].last_memcheck_run = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].free_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_a__i0__free_mem0 = 1;
          a[_i0].free_mem = (unsigned int *) malloc(_len_a__i0__free_mem0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_a__i0__free_mem0; _j0++) {
            a[_i0].free_mem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a__i0__sam_after0 = 1;
          a[_i0].sam_after = (struct TYPE_6__ *) malloc(_len_a__i0__sam_after0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_a__i0__sam_after0; _j0++) {
            a[_i0].sam_after->total_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].sam_after->chunks_per_page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a__i0__settings0 = 1;
          a[_i0].settings = (struct TYPE_5__ *) malloc(_len_a__i0__settings0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_a__i0__settings0; _j0++) {
              int _len_a__i0__settings_ext_free_memchunks0 = 1;
          a[_i0].settings->ext_free_memchunks = (unsigned int *) malloc(_len_a__i0__settings_ext_free_memchunks0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_a__i0__settings_ext_free_memchunks0; _j0++) {
            a[_i0].settings->ext_free_memchunks[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        a[_i0].pool_filled_once = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          memcheck(a);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].free_mem);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].sam_after);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].settings);
          }
          free(a);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_a0 = 100;
          struct TYPE_7__ * a = (struct TYPE_7__ *) malloc(_len_a0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].last_memcheck_run = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].free_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_a__i0__free_mem0 = 1;
          a[_i0].free_mem = (unsigned int *) malloc(_len_a__i0__free_mem0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_a__i0__free_mem0; _j0++) {
            a[_i0].free_mem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a__i0__sam_after0 = 1;
          a[_i0].sam_after = (struct TYPE_6__ *) malloc(_len_a__i0__sam_after0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_a__i0__sam_after0; _j0++) {
            a[_i0].sam_after->total_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].sam_after->chunks_per_page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a__i0__settings0 = 1;
          a[_i0].settings = (struct TYPE_5__ *) malloc(_len_a__i0__settings0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_a__i0__settings0; _j0++) {
              int _len_a__i0__settings_ext_free_memchunks0 = 1;
          a[_i0].settings->ext_free_memchunks = (unsigned int *) malloc(_len_a__i0__settings_ext_free_memchunks0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_a__i0__settings_ext_free_memchunks0; _j0++) {
            a[_i0].settings->ext_free_memchunks[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        a[_i0].pool_filled_once = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          memcheck(a);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].free_mem);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].sam_after);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].settings);
          }
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
