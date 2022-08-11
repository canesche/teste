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
struct page {int dummy; } ;
struct ore_striping_info {size_t cur_pg; size_t cur_comp; } ;
struct __stripe_pages_2d {int needed; int pages_in_unit; struct __1_page_stripe* _1p_stripes; } ;
struct __1_page_stripe {int /*<<< orphan*/  write_count; struct page** pages; } ;

/* Variables and functions */

void _ore_add_stripe_page(struct __stripe_pages_2d *sp2d,
		       struct ore_striping_info *si, struct page *page)
{
	struct __1_page_stripe *_1ps;

	sp2d->needed = true;

	_1ps = &sp2d->_1p_stripes[si->cur_pg];
	_1ps->pages[si->cur_comp] = page;
	++_1ps->write_count;

	si->cur_pg = (si->cur_pg + 1) % sp2d->pages_in_unit;
	/* si->cur_comp is advanced outside at main loop */
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
          int _len_sp2d0 = 1;
          struct __stripe_pages_2d * sp2d = (struct __stripe_pages_2d *) malloc(_len_sp2d0*sizeof(struct __stripe_pages_2d));
          for(int _i0 = 0; _i0 < _len_sp2d0; _i0++) {
            sp2d[_i0].needed = ((-2 * (next_i()%2)) + 1) * next_i();
        sp2d[_i0].pages_in_unit = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp2d__i0___1p_stripes0 = 1;
          sp2d[_i0]._1p_stripes = (struct __1_page_stripe *) malloc(_len_sp2d__i0___1p_stripes0*sizeof(struct __1_page_stripe));
          for(int _j0 = 0; _j0 < _len_sp2d__i0___1p_stripes0; _j0++) {
            sp2d[_i0]._1p_stripes->write_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp2d__i0___1p_stripes_pages0 = 1;
          sp2d[_i0]._1p_stripes->pages = (struct page **) malloc(_len_sp2d__i0___1p_stripes_pages0*sizeof(struct page *));
          for(int _j0 = 0; _j0 < _len_sp2d__i0___1p_stripes_pages0; _j0++) {
            int _len_sp2d__i0___1p_stripes_pages1 = 1;
            sp2d[_i0]._1p_stripes->pages[_j0] = (struct page *) malloc(_len_sp2d__i0___1p_stripes_pages1*sizeof(struct page));
            for(int _j1 = 0; _j1 < _len_sp2d__i0___1p_stripes_pages1; _j1++) {
              sp2d[_i0]._1p_stripes->pages[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_si0 = 1;
          struct ore_striping_info * si = (struct ore_striping_info *) malloc(_len_si0*sizeof(struct ore_striping_info));
          for(int _i0 = 0; _i0 < _len_si0; _i0++) {
            si[_i0].cur_pg = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].cur_comp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_page0 = 1;
          struct page * page = (struct page *) malloc(_len_page0*sizeof(struct page));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _ore_add_stripe_page(sp2d,si,page);
          for(int _aux = 0; _aux < _len_sp2d0; _aux++) {
          free(sp2d[_aux]._1p_stripes);
          }
          free(sp2d);
          free(si);
          free(page);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sp2d0 = 65025;
          struct __stripe_pages_2d * sp2d = (struct __stripe_pages_2d *) malloc(_len_sp2d0*sizeof(struct __stripe_pages_2d));
          for(int _i0 = 0; _i0 < _len_sp2d0; _i0++) {
            sp2d[_i0].needed = ((-2 * (next_i()%2)) + 1) * next_i();
        sp2d[_i0].pages_in_unit = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp2d__i0___1p_stripes0 = 1;
          sp2d[_i0]._1p_stripes = (struct __1_page_stripe *) malloc(_len_sp2d__i0___1p_stripes0*sizeof(struct __1_page_stripe));
          for(int _j0 = 0; _j0 < _len_sp2d__i0___1p_stripes0; _j0++) {
            sp2d[_i0]._1p_stripes->write_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp2d__i0___1p_stripes_pages0 = 1;
          sp2d[_i0]._1p_stripes->pages = (struct page **) malloc(_len_sp2d__i0___1p_stripes_pages0*sizeof(struct page *));
          for(int _j0 = 0; _j0 < _len_sp2d__i0___1p_stripes_pages0; _j0++) {
            int _len_sp2d__i0___1p_stripes_pages1 = 1;
            sp2d[_i0]._1p_stripes->pages[_j0] = (struct page *) malloc(_len_sp2d__i0___1p_stripes_pages1*sizeof(struct page));
            for(int _j1 = 0; _j1 < _len_sp2d__i0___1p_stripes_pages1; _j1++) {
              sp2d[_i0]._1p_stripes->pages[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_si0 = 65025;
          struct ore_striping_info * si = (struct ore_striping_info *) malloc(_len_si0*sizeof(struct ore_striping_info));
          for(int _i0 = 0; _i0 < _len_si0; _i0++) {
            si[_i0].cur_pg = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].cur_comp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_page0 = 65025;
          struct page * page = (struct page *) malloc(_len_page0*sizeof(struct page));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _ore_add_stripe_page(sp2d,si,page);
          for(int _aux = 0; _aux < _len_sp2d0; _aux++) {
          free(sp2d[_aux]._1p_stripes);
          }
          free(sp2d);
          free(si);
          free(page);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sp2d0 = 100;
          struct __stripe_pages_2d * sp2d = (struct __stripe_pages_2d *) malloc(_len_sp2d0*sizeof(struct __stripe_pages_2d));
          for(int _i0 = 0; _i0 < _len_sp2d0; _i0++) {
            sp2d[_i0].needed = ((-2 * (next_i()%2)) + 1) * next_i();
        sp2d[_i0].pages_in_unit = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp2d__i0___1p_stripes0 = 1;
          sp2d[_i0]._1p_stripes = (struct __1_page_stripe *) malloc(_len_sp2d__i0___1p_stripes0*sizeof(struct __1_page_stripe));
          for(int _j0 = 0; _j0 < _len_sp2d__i0___1p_stripes0; _j0++) {
            sp2d[_i0]._1p_stripes->write_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp2d__i0___1p_stripes_pages0 = 1;
          sp2d[_i0]._1p_stripes->pages = (struct page **) malloc(_len_sp2d__i0___1p_stripes_pages0*sizeof(struct page *));
          for(int _j0 = 0; _j0 < _len_sp2d__i0___1p_stripes_pages0; _j0++) {
            int _len_sp2d__i0___1p_stripes_pages1 = 1;
            sp2d[_i0]._1p_stripes->pages[_j0] = (struct page *) malloc(_len_sp2d__i0___1p_stripes_pages1*sizeof(struct page));
            for(int _j1 = 0; _j1 < _len_sp2d__i0___1p_stripes_pages1; _j1++) {
              sp2d[_i0]._1p_stripes->pages[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_si0 = 100;
          struct ore_striping_info * si = (struct ore_striping_info *) malloc(_len_si0*sizeof(struct ore_striping_info));
          for(int _i0 = 0; _i0 < _len_si0; _i0++) {
            si[_i0].cur_pg = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].cur_comp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_page0 = 100;
          struct page * page = (struct page *) malloc(_len_page0*sizeof(struct page));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _ore_add_stripe_page(sp2d,si,page);
          for(int _aux = 0; _aux < _len_sp2d0; _aux++) {
          free(sp2d[_aux]._1p_stripes);
          }
          free(sp2d);
          free(si);
          free(page);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
