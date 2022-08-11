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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ut64 ;
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_8__ {scalar_t__ vaddr; TYPE_1__ text_range; } ;
struct TYPE_7__ {int length; TYPE_3__** entries; } ;
typedef  TYPE_2__ RKextIndex ;
typedef  TYPE_3__ RKext ;

/* Variables and functions */

__attribute__((used)) static RKext *r_kext_index_vget(RKextIndex *index, ut64 vaddr) {
	int imid;
	int imin = 0;
	int imax = index->length - 1;

	while (imin < imax) {
		imid = (imin + imax) / 2;
		RKext *entry = index->entries[imid];
		if ((entry->vaddr + entry->text_range.size) <= vaddr || (entry->vaddr == vaddr && entry->text_range.size == 0)) {
			imin = imid + 1;
		} else {
			imax = imid;
		}
	}

	RKext *minEntry = index->entries[imin];
	if ((imax == imin) && (minEntry->vaddr <= vaddr) && ((minEntry->vaddr + minEntry->text_range.size) > vaddr)) {
		return minEntry;
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
          long vaddr = 100;
          int _len_index0 = 1;
          struct TYPE_7__ * index = (struct TYPE_7__ *) malloc(_len_index0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
            index[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_index__i0__entries0 = 1;
          index[_i0].entries = (struct TYPE_8__ **) malloc(_len_index__i0__entries0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_index__i0__entries0; _j0++) {
            int _len_index__i0__entries1 = 1;
            index[_i0].entries[_j0] = (struct TYPE_8__ *) malloc(_len_index__i0__entries1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_index__i0__entries1; _j1++) {
              index[_i0].entries[_j0]->vaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        index[_i0].entries[_j0]->text_range.size = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct TYPE_8__ * benchRet = r_kext_index_vget(index,vaddr);
          printf("%ld\n", (*benchRet).vaddr);
          for(int _aux = 0; _aux < _len_index0; _aux++) {
          free(*(index[_aux].entries));
        free(index[_aux].entries);
          }
          free(index);
        
        break;
    }
    // big-arr
    case 1:
    {
          long vaddr = 255;
          int _len_index0 = 65025;
          struct TYPE_7__ * index = (struct TYPE_7__ *) malloc(_len_index0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
            index[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_index__i0__entries0 = 1;
          index[_i0].entries = (struct TYPE_8__ **) malloc(_len_index__i0__entries0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_index__i0__entries0; _j0++) {
            int _len_index__i0__entries1 = 1;
            index[_i0].entries[_j0] = (struct TYPE_8__ *) malloc(_len_index__i0__entries1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_index__i0__entries1; _j1++) {
              index[_i0].entries[_j0]->vaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        index[_i0].entries[_j0]->text_range.size = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct TYPE_8__ * benchRet = r_kext_index_vget(index,vaddr);
          printf("%ld\n", (*benchRet).vaddr);
          for(int _aux = 0; _aux < _len_index0; _aux++) {
          free(*(index[_aux].entries));
        free(index[_aux].entries);
          }
          free(index);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long vaddr = 10;
          int _len_index0 = 100;
          struct TYPE_7__ * index = (struct TYPE_7__ *) malloc(_len_index0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
            index[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_index__i0__entries0 = 1;
          index[_i0].entries = (struct TYPE_8__ **) malloc(_len_index__i0__entries0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_index__i0__entries0; _j0++) {
            int _len_index__i0__entries1 = 1;
            index[_i0].entries[_j0] = (struct TYPE_8__ *) malloc(_len_index__i0__entries1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_index__i0__entries1; _j1++) {
              index[_i0].entries[_j0]->vaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        index[_i0].entries[_j0]->text_range.size = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct TYPE_8__ * benchRet = r_kext_index_vget(index,vaddr);
          printf("%ld\n", (*benchRet).vaddr);
          for(int _aux = 0; _aux < _len_index0; _aux++) {
          free(*(index[_aux].entries));
        free(index[_aux].entries);
          }
          free(index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
