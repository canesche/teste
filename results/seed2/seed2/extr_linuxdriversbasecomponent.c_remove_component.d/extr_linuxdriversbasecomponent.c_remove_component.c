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
struct master {TYPE_2__* match; } ;
struct component {int dummy; } ;
struct TYPE_4__ {size_t num; TYPE_1__* compare; } ;
struct TYPE_3__ {struct component* component; } ;

/* Variables and functions */

__attribute__((used)) static void remove_component(struct master *master, struct component *c)
{
	size_t i;

	/* Detach the component from this master. */
	for (i = 0; i < master->match->num; i++)
		if (master->match->compare[i].component == c)
			master->match->compare[i].component = NULL;
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
          int _len_master0 = 1;
          struct master * master = (struct master *) malloc(_len_master0*sizeof(struct master));
          for(int _i0 = 0; _i0 < _len_master0; _i0++) {
              int _len_master__i0__match0 = 1;
          master[_i0].match = (struct TYPE_4__ *) malloc(_len_master__i0__match0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_master__i0__match0; _j0++) {
            master[_i0].match->num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_master__i0__match_compare0 = 1;
          master[_i0].match->compare = (struct TYPE_3__ *) malloc(_len_master__i0__match_compare0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_master__i0__match_compare0; _j0++) {
              int _len_master__i0__match_compare_component0 = 1;
          master[_i0].match->compare->component = (struct component *) malloc(_len_master__i0__match_compare_component0*sizeof(struct component));
          for(int _j0 = 0; _j0 < _len_master__i0__match_compare_component0; _j0++) {
            master[_i0].match->compare->component->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_c0 = 1;
          struct component * c = (struct component *) malloc(_len_c0*sizeof(struct component));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          remove_component(master,c);
          for(int _aux = 0; _aux < _len_master0; _aux++) {
          free(master[_aux].match);
          }
          free(master);
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_master0 = 65025;
          struct master * master = (struct master *) malloc(_len_master0*sizeof(struct master));
          for(int _i0 = 0; _i0 < _len_master0; _i0++) {
              int _len_master__i0__match0 = 1;
          master[_i0].match = (struct TYPE_4__ *) malloc(_len_master__i0__match0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_master__i0__match0; _j0++) {
            master[_i0].match->num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_master__i0__match_compare0 = 1;
          master[_i0].match->compare = (struct TYPE_3__ *) malloc(_len_master__i0__match_compare0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_master__i0__match_compare0; _j0++) {
              int _len_master__i0__match_compare_component0 = 1;
          master[_i0].match->compare->component = (struct component *) malloc(_len_master__i0__match_compare_component0*sizeof(struct component));
          for(int _j0 = 0; _j0 < _len_master__i0__match_compare_component0; _j0++) {
            master[_i0].match->compare->component->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_c0 = 65025;
          struct component * c = (struct component *) malloc(_len_c0*sizeof(struct component));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          remove_component(master,c);
          for(int _aux = 0; _aux < _len_master0; _aux++) {
          free(master[_aux].match);
          }
          free(master);
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_master0 = 100;
          struct master * master = (struct master *) malloc(_len_master0*sizeof(struct master));
          for(int _i0 = 0; _i0 < _len_master0; _i0++) {
              int _len_master__i0__match0 = 1;
          master[_i0].match = (struct TYPE_4__ *) malloc(_len_master__i0__match0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_master__i0__match0; _j0++) {
            master[_i0].match->num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_master__i0__match_compare0 = 1;
          master[_i0].match->compare = (struct TYPE_3__ *) malloc(_len_master__i0__match_compare0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_master__i0__match_compare0; _j0++) {
              int _len_master__i0__match_compare_component0 = 1;
          master[_i0].match->compare->component = (struct component *) malloc(_len_master__i0__match_compare_component0*sizeof(struct component));
          for(int _j0 = 0; _j0 < _len_master__i0__match_compare_component0; _j0++) {
            master[_i0].match->compare->component->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_c0 = 100;
          struct component * c = (struct component *) malloc(_len_c0*sizeof(struct component));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          remove_component(master,c);
          for(int _aux = 0; _aux < _len_master0; _aux++) {
          free(master[_aux].match);
          }
          free(master);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
