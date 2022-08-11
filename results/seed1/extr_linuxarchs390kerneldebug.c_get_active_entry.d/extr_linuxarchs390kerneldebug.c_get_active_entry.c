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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {size_t active_area; size_t* active_pages; int* active_entries; scalar_t__** areas; } ;
typedef  TYPE_1__ debug_info_t ;
typedef  int /*<<< orphan*/  debug_entry_t ;

/* Variables and functions */

__attribute__((used)) static inline debug_entry_t *get_active_entry(debug_info_t *id)
{
	return (debug_entry_t *) (((char *) id->areas[id->active_area]
				   [id->active_pages[id->active_area]]) +
				  id->active_entries[id->active_area]);
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
          int _len_id0 = 1;
          struct TYPE_3__ * id = (struct TYPE_3__ *) malloc(_len_id0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0].active_area = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_id__i0__active_pages0 = 1;
          id[_i0].active_pages = (unsigned long *) malloc(_len_id__i0__active_pages0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_id__i0__active_pages0; _j0++) {
            id[_i0].active_pages[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_id__i0__active_entries0 = 1;
          id[_i0].active_entries = (int *) malloc(_len_id__i0__active_entries0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_id__i0__active_entries0; _j0++) {
            id[_i0].active_entries[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_id__i0__areas0 = 1;
          id[_i0].areas = (long **) malloc(_len_id__i0__areas0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_id__i0__areas0; _j0++) {
            int _len_id__i0__areas1 = 1;
            id[_i0].areas[_j0] = (long *) malloc(_len_id__i0__areas1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_id__i0__areas1; _j1++) {
              id[_i0].areas[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = get_active_entry(id);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_id0; _aux++) {
          free(id[_aux].active_pages);
          }
          for(int _aux = 0; _aux < _len_id0; _aux++) {
          free(id[_aux].active_entries);
          }
          for(int _aux = 0; _aux < _len_id0; _aux++) {
          free(*(id[_aux].areas));
        free(id[_aux].areas);
          }
          free(id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_id0 = 65025;
          struct TYPE_3__ * id = (struct TYPE_3__ *) malloc(_len_id0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0].active_area = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_id__i0__active_pages0 = 1;
          id[_i0].active_pages = (unsigned long *) malloc(_len_id__i0__active_pages0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_id__i0__active_pages0; _j0++) {
            id[_i0].active_pages[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_id__i0__active_entries0 = 1;
          id[_i0].active_entries = (int *) malloc(_len_id__i0__active_entries0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_id__i0__active_entries0; _j0++) {
            id[_i0].active_entries[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_id__i0__areas0 = 1;
          id[_i0].areas = (long **) malloc(_len_id__i0__areas0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_id__i0__areas0; _j0++) {
            int _len_id__i0__areas1 = 1;
            id[_i0].areas[_j0] = (long *) malloc(_len_id__i0__areas1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_id__i0__areas1; _j1++) {
              id[_i0].areas[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = get_active_entry(id);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_id0; _aux++) {
          free(id[_aux].active_pages);
          }
          for(int _aux = 0; _aux < _len_id0; _aux++) {
          free(id[_aux].active_entries);
          }
          for(int _aux = 0; _aux < _len_id0; _aux++) {
          free(*(id[_aux].areas));
        free(id[_aux].areas);
          }
          free(id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_id0 = 100;
          struct TYPE_3__ * id = (struct TYPE_3__ *) malloc(_len_id0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0].active_area = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_id__i0__active_pages0 = 1;
          id[_i0].active_pages = (unsigned long *) malloc(_len_id__i0__active_pages0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_id__i0__active_pages0; _j0++) {
            id[_i0].active_pages[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_id__i0__active_entries0 = 1;
          id[_i0].active_entries = (int *) malloc(_len_id__i0__active_entries0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_id__i0__active_entries0; _j0++) {
            id[_i0].active_entries[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_id__i0__areas0 = 1;
          id[_i0].areas = (long **) malloc(_len_id__i0__areas0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_id__i0__areas0; _j0++) {
            int _len_id__i0__areas1 = 1;
            id[_i0].areas[_j0] = (long *) malloc(_len_id__i0__areas1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_id__i0__areas1; _j1++) {
              id[_i0].areas[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = get_active_entry(id);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_id0; _aux++) {
          free(id[_aux].active_pages);
          }
          for(int _aux = 0; _aux < _len_id0; _aux++) {
          free(id[_aux].active_entries);
          }
          for(int _aux = 0; _aux < _len_id0; _aux++) {
          free(*(id[_aux].areas));
        free(id[_aux].areas);
          }
          free(id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
