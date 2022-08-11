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
struct TYPE_6__ {int lastLeaf; scalar_t__ count; scalar_t__ maxcount; int* list; int /*<<< orphan*/  overflowed; } ;
typedef  TYPE_2__ leafList_t ;
struct TYPE_7__ {TYPE_1__* leafs; } ;
struct TYPE_5__ {int cluster; } ;

/* Variables and functions */
 TYPE_3__ cm ; 
 int /*<<< orphan*/  qtrue ; 

void CM_StoreLeafs( leafList_t *ll, int nodenum ) {
	int		leafNum;

	leafNum = -1 - nodenum;

	// store the lastLeaf even if the list is overflowed
	if ( cm.leafs[ leafNum ].cluster != -1 ) {
		ll->lastLeaf = leafNum;
	}

	if ( ll->count >= ll->maxcount) {
		ll->overflowed = qtrue;
		return;
	}
	ll->list[ ll->count++ ] = leafNum;
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
          int nodenum = 100;
          int _len_ll0 = 1;
          struct TYPE_6__ * ll = (struct TYPE_6__ *) malloc(_len_ll0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_ll0; _i0++) {
            ll[_i0].lastLeaf = ((-2 * (next_i()%2)) + 1) * next_i();
        ll[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        ll[_i0].maxcount = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ll__i0__list0 = 1;
          ll[_i0].list = (int *) malloc(_len_ll__i0__list0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ll__i0__list0; _j0++) {
            ll[_i0].list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ll[_i0].overflowed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CM_StoreLeafs(ll,nodenum);
          for(int _aux = 0; _aux < _len_ll0; _aux++) {
          free(ll[_aux].list);
          }
          free(ll);
        
        break;
    }
    // big-arr
    case 1:
    {
          int nodenum = 255;
          int _len_ll0 = 65025;
          struct TYPE_6__ * ll = (struct TYPE_6__ *) malloc(_len_ll0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_ll0; _i0++) {
            ll[_i0].lastLeaf = ((-2 * (next_i()%2)) + 1) * next_i();
        ll[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        ll[_i0].maxcount = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ll__i0__list0 = 1;
          ll[_i0].list = (int *) malloc(_len_ll__i0__list0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ll__i0__list0; _j0++) {
            ll[_i0].list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ll[_i0].overflowed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CM_StoreLeafs(ll,nodenum);
          for(int _aux = 0; _aux < _len_ll0; _aux++) {
          free(ll[_aux].list);
          }
          free(ll);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nodenum = 10;
          int _len_ll0 = 100;
          struct TYPE_6__ * ll = (struct TYPE_6__ *) malloc(_len_ll0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_ll0; _i0++) {
            ll[_i0].lastLeaf = ((-2 * (next_i()%2)) + 1) * next_i();
        ll[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        ll[_i0].maxcount = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ll__i0__list0 = 1;
          ll[_i0].list = (int *) malloc(_len_ll__i0__list0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ll__i0__list0; _j0++) {
            ll[_i0].list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ll[_i0].overflowed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CM_StoreLeafs(ll,nodenum);
          for(int _aux = 0; _aux < _len_ll0; _aux++) {
          free(ll[_aux].list);
          }
          free(ll);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
