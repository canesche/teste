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
typedef  int /*<<< orphan*/  git_config_iterator ;
typedef  int /*<<< orphan*/  git_config_entry ;
struct TYPE_4__ {TYPE_1__* head; } ;
typedef  TYPE_2__ config_entries_iterator ;
struct TYPE_3__ {struct TYPE_3__* next; int /*<<< orphan*/ * entry; } ;

/* Variables and functions */
 int GIT_ITEROVER ; 

int config_iterator_next(
	git_config_entry **entry,
	git_config_iterator *iter)
{
	config_entries_iterator *it = (config_entries_iterator *) iter;

	if (!it->head)
		return GIT_ITEROVER;

	*entry = it->head->entry;
	it->head = it->head->next;

	return 0;
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
          int _len_entry0 = 1;
          int ** entry = (int **) malloc(_len_entry0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            int _len_entry1 = 1;
            entry[_i0] = (int *) malloc(_len_entry1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_entry1; _i1++) {
              entry[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_iter0 = 1;
          int * iter = (int *) malloc(_len_iter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = config_iterator_next(entry,iter);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_entry0; i1++) {
            int _len_entry1 = 1;
              free(entry[i1]);
          }
          free(entry);
          free(iter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_entry0 = 65025;
          int ** entry = (int **) malloc(_len_entry0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            int _len_entry1 = 1;
            entry[_i0] = (int *) malloc(_len_entry1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_entry1; _i1++) {
              entry[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_iter0 = 65025;
          int * iter = (int *) malloc(_len_iter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = config_iterator_next(entry,iter);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_entry0; i1++) {
            int _len_entry1 = 1;
              free(entry[i1]);
          }
          free(entry);
          free(iter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_entry0 = 100;
          int ** entry = (int **) malloc(_len_entry0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            int _len_entry1 = 1;
            entry[_i0] = (int *) malloc(_len_entry1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_entry1; _i1++) {
              entry[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_iter0 = 100;
          int * iter = (int *) malloc(_len_iter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = config_iterator_next(entry,iter);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_entry0; i1++) {
            int _len_entry1 = 1;
              free(entry[i1]);
          }
          free(entry);
          free(iter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
