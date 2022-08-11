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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct ceph_pagelist_cursor {int /*<<< orphan*/  room; int /*<<< orphan*/  page_lru; struct ceph_pagelist* pl; } ;
struct TYPE_2__ {int /*<<< orphan*/  prev; } ;
struct ceph_pagelist {int /*<<< orphan*/  room; TYPE_1__ head; } ;

/* Variables and functions */

void ceph_pagelist_set_cursor(struct ceph_pagelist *pl,
			      struct ceph_pagelist_cursor *c)
{
	c->pl = pl;
	c->page_lru = pl->head.prev;
	c->room = pl->room;
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
          int _len_pl0 = 1;
          struct ceph_pagelist * pl = (struct ceph_pagelist *) malloc(_len_pl0*sizeof(struct ceph_pagelist));
          for(int _i0 = 0; _i0 < _len_pl0; _i0++) {
            pl[_i0].room = ((-2 * (next_i()%2)) + 1) * next_i();
        pl[_i0].head.prev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 1;
          struct ceph_pagelist_cursor * c = (struct ceph_pagelist_cursor *) malloc(_len_c0*sizeof(struct ceph_pagelist_cursor));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].room = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].page_lru = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__pl0 = 1;
          c[_i0].pl = (struct ceph_pagelist *) malloc(_len_c__i0__pl0*sizeof(struct ceph_pagelist));
          for(int _j0 = 0; _j0 < _len_c__i0__pl0; _j0++) {
            c[_i0].pl->room = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].pl->head.prev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ceph_pagelist_set_cursor(pl,c);
          free(pl);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].pl);
          }
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pl0 = 65025;
          struct ceph_pagelist * pl = (struct ceph_pagelist *) malloc(_len_pl0*sizeof(struct ceph_pagelist));
          for(int _i0 = 0; _i0 < _len_pl0; _i0++) {
            pl[_i0].room = ((-2 * (next_i()%2)) + 1) * next_i();
        pl[_i0].head.prev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 65025;
          struct ceph_pagelist_cursor * c = (struct ceph_pagelist_cursor *) malloc(_len_c0*sizeof(struct ceph_pagelist_cursor));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].room = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].page_lru = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__pl0 = 1;
          c[_i0].pl = (struct ceph_pagelist *) malloc(_len_c__i0__pl0*sizeof(struct ceph_pagelist));
          for(int _j0 = 0; _j0 < _len_c__i0__pl0; _j0++) {
            c[_i0].pl->room = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].pl->head.prev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ceph_pagelist_set_cursor(pl,c);
          free(pl);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].pl);
          }
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pl0 = 100;
          struct ceph_pagelist * pl = (struct ceph_pagelist *) malloc(_len_pl0*sizeof(struct ceph_pagelist));
          for(int _i0 = 0; _i0 < _len_pl0; _i0++) {
            pl[_i0].room = ((-2 * (next_i()%2)) + 1) * next_i();
        pl[_i0].head.prev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 100;
          struct ceph_pagelist_cursor * c = (struct ceph_pagelist_cursor *) malloc(_len_c0*sizeof(struct ceph_pagelist_cursor));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].room = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].page_lru = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__pl0 = 1;
          c[_i0].pl = (struct ceph_pagelist *) malloc(_len_c__i0__pl0*sizeof(struct ceph_pagelist));
          for(int _j0 = 0; _j0 < _len_c__i0__pl0; _j0++) {
            c[_i0].pl->room = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].pl->head.prev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ceph_pagelist_set_cursor(pl,c);
          free(pl);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].pl);
          }
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
