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
struct rev_info {int rev_input_given; } ;
struct all_refs_cb {unsigned int all_flags; int /*<<< orphan*/ * wt; struct rev_info* all_revs; } ;

/* Variables and functions */

__attribute__((used)) static void init_all_refs_cb(struct all_refs_cb *cb, struct rev_info *revs,
	unsigned flags)
{
	cb->all_revs = revs;
	cb->all_flags = flags;
	revs->rev_input_given = 1;
	cb->wt = NULL;
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
          unsigned int flags = 100;
          int _len_cb0 = 1;
          struct all_refs_cb * cb = (struct all_refs_cb *) malloc(_len_cb0*sizeof(struct all_refs_cb));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0].all_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cb__i0__wt0 = 1;
          cb[_i0].wt = (int *) malloc(_len_cb__i0__wt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__wt0; _j0++) {
            cb[_i0].wt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb__i0__all_revs0 = 1;
          cb[_i0].all_revs = (struct rev_info *) malloc(_len_cb__i0__all_revs0*sizeof(struct rev_info));
          for(int _j0 = 0; _j0 < _len_cb__i0__all_revs0; _j0++) {
            cb[_i0].all_revs->rev_input_given = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_revs0 = 1;
          struct rev_info * revs = (struct rev_info *) malloc(_len_revs0*sizeof(struct rev_info));
          for(int _i0 = 0; _i0 < _len_revs0; _i0++) {
            revs[_i0].rev_input_given = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_all_refs_cb(cb,revs,flags);
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].wt);
          }
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].all_revs);
          }
          free(cb);
          free(revs);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int flags = 255;
          int _len_cb0 = 65025;
          struct all_refs_cb * cb = (struct all_refs_cb *) malloc(_len_cb0*sizeof(struct all_refs_cb));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0].all_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cb__i0__wt0 = 1;
          cb[_i0].wt = (int *) malloc(_len_cb__i0__wt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__wt0; _j0++) {
            cb[_i0].wt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb__i0__all_revs0 = 1;
          cb[_i0].all_revs = (struct rev_info *) malloc(_len_cb__i0__all_revs0*sizeof(struct rev_info));
          for(int _j0 = 0; _j0 < _len_cb__i0__all_revs0; _j0++) {
            cb[_i0].all_revs->rev_input_given = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_revs0 = 65025;
          struct rev_info * revs = (struct rev_info *) malloc(_len_revs0*sizeof(struct rev_info));
          for(int _i0 = 0; _i0 < _len_revs0; _i0++) {
            revs[_i0].rev_input_given = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_all_refs_cb(cb,revs,flags);
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].wt);
          }
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].all_revs);
          }
          free(cb);
          free(revs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int flags = 10;
          int _len_cb0 = 100;
          struct all_refs_cb * cb = (struct all_refs_cb *) malloc(_len_cb0*sizeof(struct all_refs_cb));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0].all_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cb__i0__wt0 = 1;
          cb[_i0].wt = (int *) malloc(_len_cb__i0__wt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__wt0; _j0++) {
            cb[_i0].wt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb__i0__all_revs0 = 1;
          cb[_i0].all_revs = (struct rev_info *) malloc(_len_cb__i0__all_revs0*sizeof(struct rev_info));
          for(int _j0 = 0; _j0 < _len_cb__i0__all_revs0; _j0++) {
            cb[_i0].all_revs->rev_input_given = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_revs0 = 100;
          struct rev_info * revs = (struct rev_info *) malloc(_len_revs0*sizeof(struct rev_info));
          for(int _i0 = 0; _i0 < _len_revs0; _i0++) {
            revs[_i0].rev_input_given = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_all_refs_cb(cb,revs,flags);
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].wt);
          }
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].all_revs);
          }
          free(cb);
          free(revs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
