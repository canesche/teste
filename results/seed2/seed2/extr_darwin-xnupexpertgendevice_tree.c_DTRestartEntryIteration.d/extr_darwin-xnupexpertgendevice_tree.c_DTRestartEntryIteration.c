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
struct TYPE_3__ {scalar_t__ currentIndex; int /*<<< orphan*/ * currentEntry; } ;
typedef  TYPE_1__* DTEntryIterator ;

/* Variables and functions */
 int kSuccess ; 

int
DTRestartEntryIteration(DTEntryIterator iter)
{
#if 0
	// This commented out code allows a second argument (outer)
	// which (if true) causes restarting at the outer scope
	// rather than the current scope.
	DTSavedScopePtr scope;

	if (outer) {
		while ((scope = iter->savedScope) != NULL) {
			iter->savedScope = scope->nextScope;
			kfree((vm_offset_t) scope, sizeof(struct DTSavedScope));
		}
		iter->currentScope = iter->outerScope;
	}
#endif
	iter->currentEntry = NULL;
	iter->currentIndex = 0;
	return kSuccess;
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
          int _len_iter0 = 1;
          struct TYPE_3__ * iter = (struct TYPE_3__ *) malloc(_len_iter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter[_i0].currentIndex = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__currentEntry0 = 1;
          iter[_i0].currentEntry = (int *) malloc(_len_iter__i0__currentEntry0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iter__i0__currentEntry0; _j0++) {
            iter[_i0].currentEntry[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = DTRestartEntryIteration(iter);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].currentEntry);
          }
          free(iter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_iter0 = 65025;
          struct TYPE_3__ * iter = (struct TYPE_3__ *) malloc(_len_iter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter[_i0].currentIndex = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__currentEntry0 = 1;
          iter[_i0].currentEntry = (int *) malloc(_len_iter__i0__currentEntry0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iter__i0__currentEntry0; _j0++) {
            iter[_i0].currentEntry[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = DTRestartEntryIteration(iter);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].currentEntry);
          }
          free(iter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_iter0 = 100;
          struct TYPE_3__ * iter = (struct TYPE_3__ *) malloc(_len_iter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter[_i0].currentIndex = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__currentEntry0 = 1;
          iter[_i0].currentEntry = (int *) malloc(_len_iter__i0__currentEntry0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iter__i0__currentEntry0; _j0++) {
            iter[_i0].currentEntry[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = DTRestartEntryIteration(iter);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].currentEntry);
          }
          free(iter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
