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
typedef  scalar_t__ u16 ;
struct ui_browser {scalar_t__ rows; scalar_t__ extra_title_lines; scalar_t__ index; scalar_t__ top_idx; } ;
struct perf_hpp_list {scalar_t__ nr_header_lines; } ;
struct hists {struct perf_hpp_list* hpp_list; } ;
struct hist_browser {int /*<<< orphan*/  show_headers; struct hists* hists; struct ui_browser b; } ;

/* Variables and functions */

__attribute__((used)) static void hist_browser__update_rows(struct hist_browser *hb)
{
	struct ui_browser *browser = &hb->b;
	struct hists *hists = hb->hists;
	struct perf_hpp_list *hpp_list = hists->hpp_list;
	u16 index_row;

	if (!hb->show_headers) {
		browser->rows += browser->extra_title_lines;
		browser->extra_title_lines = 0;
		return;
	}

	browser->extra_title_lines = hpp_list->nr_header_lines;
	browser->rows -= browser->extra_title_lines;
	/*
	 * Verify if we were at the last line and that line isn't
	 * visibe because we now show the header line(s).
	 */
	index_row = browser->index - browser->top_idx;
	if (index_row >= browser->rows)
		browser->index -= index_row - browser->rows + 1;
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
        hb[_i0].b.rows = ((-2 * (next_i()%2)) + 1) * next_i();
        hb[_i0].b.extra_title_lines = ((-2 * (next_i()%2)) + 1) * next_i();
        hb[_i0].b.index = ((-2 * (next_i()%2)) + 1) * next_i();
        hb[_i0].b.top_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hist_browser__update_rows(hb);
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
        hb[_i0].b.rows = ((-2 * (next_i()%2)) + 1) * next_i();
        hb[_i0].b.extra_title_lines = ((-2 * (next_i()%2)) + 1) * next_i();
        hb[_i0].b.index = ((-2 * (next_i()%2)) + 1) * next_i();
        hb[_i0].b.top_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hist_browser__update_rows(hb);
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
        hb[_i0].b.rows = ((-2 * (next_i()%2)) + 1) * next_i();
        hb[_i0].b.extra_title_lines = ((-2 * (next_i()%2)) + 1) * next_i();
        hb[_i0].b.index = ((-2 * (next_i()%2)) + 1) * next_i();
        hb[_i0].b.top_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hist_browser__update_rows(hb);
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
