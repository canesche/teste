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
struct ubifs_lpt_heap {struct ubifs_lprops** arr; } ;
struct ubifs_lprops {int hpos; } ;
struct ubifs_info {struct ubifs_lpt_heap* lpt_heap; } ;

/* Variables and functions */

__attribute__((used)) static void lpt_heap_replace(struct ubifs_info *c,
			     struct ubifs_lprops *new_lprops, int cat)
{
	struct ubifs_lpt_heap *heap;
	int hpos = new_lprops->hpos;

	heap = &c->lpt_heap[cat - 1];
	heap->arr[hpos] = new_lprops;
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
          int cat = 100;
          int _len_c0 = 1;
          struct ubifs_info * c = (struct ubifs_info *) malloc(_len_c0*sizeof(struct ubifs_info));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__lpt_heap0 = 1;
          c[_i0].lpt_heap = (struct ubifs_lpt_heap *) malloc(_len_c__i0__lpt_heap0*sizeof(struct ubifs_lpt_heap));
          for(int _j0 = 0; _j0 < _len_c__i0__lpt_heap0; _j0++) {
              int _len_c__i0__lpt_heap_arr0 = 1;
          c[_i0].lpt_heap->arr = (struct ubifs_lprops **) malloc(_len_c__i0__lpt_heap_arr0*sizeof(struct ubifs_lprops *));
          for(int _j0 = 0; _j0 < _len_c__i0__lpt_heap_arr0; _j0++) {
            int _len_c__i0__lpt_heap_arr1 = 1;
            c[_i0].lpt_heap->arr[_j0] = (struct ubifs_lprops *) malloc(_len_c__i0__lpt_heap_arr1*sizeof(struct ubifs_lprops));
            for(int _j1 = 0; _j1 < _len_c__i0__lpt_heap_arr1; _j1++) {
              c[_i0].lpt_heap->arr[_j0]->hpos = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_new_lprops0 = 1;
          struct ubifs_lprops * new_lprops = (struct ubifs_lprops *) malloc(_len_new_lprops0*sizeof(struct ubifs_lprops));
          for(int _i0 = 0; _i0 < _len_new_lprops0; _i0++) {
            new_lprops[_i0].hpos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lpt_heap_replace(c,new_lprops,cat);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].lpt_heap);
          }
          free(c);
          free(new_lprops);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cat = 255;
          int _len_c0 = 65025;
          struct ubifs_info * c = (struct ubifs_info *) malloc(_len_c0*sizeof(struct ubifs_info));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__lpt_heap0 = 1;
          c[_i0].lpt_heap = (struct ubifs_lpt_heap *) malloc(_len_c__i0__lpt_heap0*sizeof(struct ubifs_lpt_heap));
          for(int _j0 = 0; _j0 < _len_c__i0__lpt_heap0; _j0++) {
              int _len_c__i0__lpt_heap_arr0 = 1;
          c[_i0].lpt_heap->arr = (struct ubifs_lprops **) malloc(_len_c__i0__lpt_heap_arr0*sizeof(struct ubifs_lprops *));
          for(int _j0 = 0; _j0 < _len_c__i0__lpt_heap_arr0; _j0++) {
            int _len_c__i0__lpt_heap_arr1 = 1;
            c[_i0].lpt_heap->arr[_j0] = (struct ubifs_lprops *) malloc(_len_c__i0__lpt_heap_arr1*sizeof(struct ubifs_lprops));
            for(int _j1 = 0; _j1 < _len_c__i0__lpt_heap_arr1; _j1++) {
              c[_i0].lpt_heap->arr[_j0]->hpos = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_new_lprops0 = 65025;
          struct ubifs_lprops * new_lprops = (struct ubifs_lprops *) malloc(_len_new_lprops0*sizeof(struct ubifs_lprops));
          for(int _i0 = 0; _i0 < _len_new_lprops0; _i0++) {
            new_lprops[_i0].hpos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lpt_heap_replace(c,new_lprops,cat);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].lpt_heap);
          }
          free(c);
          free(new_lprops);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cat = 10;
          int _len_c0 = 100;
          struct ubifs_info * c = (struct ubifs_info *) malloc(_len_c0*sizeof(struct ubifs_info));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__lpt_heap0 = 1;
          c[_i0].lpt_heap = (struct ubifs_lpt_heap *) malloc(_len_c__i0__lpt_heap0*sizeof(struct ubifs_lpt_heap));
          for(int _j0 = 0; _j0 < _len_c__i0__lpt_heap0; _j0++) {
              int _len_c__i0__lpt_heap_arr0 = 1;
          c[_i0].lpt_heap->arr = (struct ubifs_lprops **) malloc(_len_c__i0__lpt_heap_arr0*sizeof(struct ubifs_lprops *));
          for(int _j0 = 0; _j0 < _len_c__i0__lpt_heap_arr0; _j0++) {
            int _len_c__i0__lpt_heap_arr1 = 1;
            c[_i0].lpt_heap->arr[_j0] = (struct ubifs_lprops *) malloc(_len_c__i0__lpt_heap_arr1*sizeof(struct ubifs_lprops));
            for(int _j1 = 0; _j1 < _len_c__i0__lpt_heap_arr1; _j1++) {
              c[_i0].lpt_heap->arr[_j0]->hpos = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_new_lprops0 = 100;
          struct ubifs_lprops * new_lprops = (struct ubifs_lprops *) malloc(_len_new_lprops0*sizeof(struct ubifs_lprops));
          for(int _i0 = 0; _i0 < _len_new_lprops0; _i0++) {
            new_lprops[_i0].hpos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lpt_heap_replace(c,new_lprops,cat);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].lpt_heap);
          }
          free(c);
          free(new_lprops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
