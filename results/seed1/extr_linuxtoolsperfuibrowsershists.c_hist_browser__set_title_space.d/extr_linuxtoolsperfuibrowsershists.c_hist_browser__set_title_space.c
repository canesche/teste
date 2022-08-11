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
struct ui_browser {int /*<<< orphan*/  extra_title_lines; } ;
struct perf_hpp_list {int /*<<< orphan*/  nr_header_lines; } ;
struct hists {struct perf_hpp_list* hpp_list; } ;
struct hist_browser {scalar_t__ show_headers; struct hists* hists; struct ui_browser b; } ;

/* Variables and functions */

__attribute__((used)) static void hist_browser__set_title_space(struct hist_browser *hb)
{
	struct ui_browser *browser = &hb->b;
	struct hists *hists = hb->hists;
	struct perf_hpp_list *hpp_list = hists->hpp_list;

	browser->extra_title_lines = hb->show_headers ? hpp_list->nr_header_lines : 0;
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
          int _len_hb0 = 1;
          struct hist_browser * hb = (struct hist_browser *) malloc(_len_hb0*sizeof(struct hist_browser));
          for(int _i0 = 0; _i0 < _len_hb0; _i0++) {
            hb[_i0].show_headers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hb__i0__hists0 = 1;
          hb[_i0].hists = (struct hists *) malloc(_len_hb__i0__hists0*sizeof(struct hists));
          for(int _j0 = 0; _j0 < _len_hb__i0__hists0; _j0++) {
              int _len_hb__i0__hists_hpp_list0 = 1;
          hb[_i0].hists->hpp_list = (struct perf_hpp_list *) malloc(_len_hb__i0__hists_hpp_list0*sizeof(struct perf_hpp_list));
          for(int _j0 = 0; _j0 < _len_hb__i0__hists_hpp_list0; _j0++) {
            hb[_i0].hists->hpp_list->nr_header_lines = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        hb[_i0].b.extra_title_lines = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hist_browser__set_title_space(hb);
          for(int _aux = 0; _aux < _len_hb0; _aux++) {
          free(hb[_aux].hists);
          }
          free(hb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hb0 = 65025;
          struct hist_browser * hb = (struct hist_browser *) malloc(_len_hb0*sizeof(struct hist_browser));
          for(int _i0 = 0; _i0 < _len_hb0; _i0++) {
            hb[_i0].show_headers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hb__i0__hists0 = 1;
          hb[_i0].hists = (struct hists *) malloc(_len_hb__i0__hists0*sizeof(struct hists));
          for(int _j0 = 0; _j0 < _len_hb__i0__hists0; _j0++) {
              int _len_hb__i0__hists_hpp_list0 = 1;
          hb[_i0].hists->hpp_list = (struct perf_hpp_list *) malloc(_len_hb__i0__hists_hpp_list0*sizeof(struct perf_hpp_list));
          for(int _j0 = 0; _j0 < _len_hb__i0__hists_hpp_list0; _j0++) {
            hb[_i0].hists->hpp_list->nr_header_lines = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        hb[_i0].b.extra_title_lines = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hist_browser__set_title_space(hb);
          for(int _aux = 0; _aux < _len_hb0; _aux++) {
          free(hb[_aux].hists);
          }
          free(hb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hb0 = 100;
          struct hist_browser * hb = (struct hist_browser *) malloc(_len_hb0*sizeof(struct hist_browser));
          for(int _i0 = 0; _i0 < _len_hb0; _i0++) {
            hb[_i0].show_headers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hb__i0__hists0 = 1;
          hb[_i0].hists = (struct hists *) malloc(_len_hb__i0__hists0*sizeof(struct hists));
          for(int _j0 = 0; _j0 < _len_hb__i0__hists0; _j0++) {
              int _len_hb__i0__hists_hpp_list0 = 1;
          hb[_i0].hists->hpp_list = (struct perf_hpp_list *) malloc(_len_hb__i0__hists_hpp_list0*sizeof(struct perf_hpp_list));
          for(int _j0 = 0; _j0 < _len_hb__i0__hists_hpp_list0; _j0++) {
            hb[_i0].hists->hpp_list->nr_header_lines = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        hb[_i0].b.extra_title_lines = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hist_browser__set_title_space(hb);
          for(int _aux = 0; _aux < _len_hb0; _aux++) {
          free(hb[_aux].hists);
          }
          free(hb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
