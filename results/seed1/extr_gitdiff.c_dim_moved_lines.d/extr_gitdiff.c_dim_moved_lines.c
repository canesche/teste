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
struct emitted_diff_symbol {scalar_t__ s; int flags; } ;
struct diff_options {TYPE_1__* emitted_symbols; } ;
struct TYPE_2__ {int nr; struct emitted_diff_symbol* buf; } ;

/* Variables and functions */
 scalar_t__ DIFF_SYMBOL_MINUS ; 
 int DIFF_SYMBOL_MOVED_LINE ; 
 int DIFF_SYMBOL_MOVED_LINE_ALT ; 
 int DIFF_SYMBOL_MOVED_LINE_UNINTERESTING ; 
 int DIFF_SYMBOL_MOVED_LINE_ZEBRA_MASK ; 
 scalar_t__ DIFF_SYMBOL_PLUS ; 

__attribute__((used)) static void dim_moved_lines(struct diff_options *o)
{
	int n;
	for (n = 0; n < o->emitted_symbols->nr; n++) {
		struct emitted_diff_symbol *prev = (n != 0) ?
				&o->emitted_symbols->buf[n - 1] : NULL;
		struct emitted_diff_symbol *l = &o->emitted_symbols->buf[n];
		struct emitted_diff_symbol *next =
				(n < o->emitted_symbols->nr - 1) ?
				&o->emitted_symbols->buf[n + 1] : NULL;

		/* Not a plus or minus line? */
		if (l->s != DIFF_SYMBOL_PLUS && l->s != DIFF_SYMBOL_MINUS)
			continue;

		/* Not a moved line? */
		if (!(l->flags & DIFF_SYMBOL_MOVED_LINE))
			continue;

		/*
		 * If prev or next are not a plus or minus line,
		 * pretend they don't exist
		 */
		if (prev && prev->s != DIFF_SYMBOL_PLUS &&
			    prev->s != DIFF_SYMBOL_MINUS)
			prev = NULL;
		if (next && next->s != DIFF_SYMBOL_PLUS &&
			    next->s != DIFF_SYMBOL_MINUS)
			next = NULL;

		/* Inside a block? */
		if ((prev &&
		    (prev->flags & DIFF_SYMBOL_MOVED_LINE_ZEBRA_MASK) ==
		    (l->flags & DIFF_SYMBOL_MOVED_LINE_ZEBRA_MASK)) &&
		    (next &&
		    (next->flags & DIFF_SYMBOL_MOVED_LINE_ZEBRA_MASK) ==
		    (l->flags & DIFF_SYMBOL_MOVED_LINE_ZEBRA_MASK))) {
			l->flags |= DIFF_SYMBOL_MOVED_LINE_UNINTERESTING;
			continue;
		}

		/* Check if we are at an interesting bound: */
		if (prev && (prev->flags & DIFF_SYMBOL_MOVED_LINE) &&
		    (prev->flags & DIFF_SYMBOL_MOVED_LINE_ALT) !=
		       (l->flags & DIFF_SYMBOL_MOVED_LINE_ALT))
			continue;
		if (next && (next->flags & DIFF_SYMBOL_MOVED_LINE) &&
		    (next->flags & DIFF_SYMBOL_MOVED_LINE_ALT) !=
		       (l->flags & DIFF_SYMBOL_MOVED_LINE_ALT))
			continue;

		/*
		 * The boundary to prev and next are not interesting,
		 * so this line is not interesting as a whole
		 */
		l->flags |= DIFF_SYMBOL_MOVED_LINE_UNINTERESTING;
	}
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
          int _len_o0 = 1;
          struct diff_options * o = (struct diff_options *) malloc(_len_o0*sizeof(struct diff_options));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
              int _len_o__i0__emitted_symbols0 = 1;
          o[_i0].emitted_symbols = (struct TYPE_2__ *) malloc(_len_o__i0__emitted_symbols0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_o__i0__emitted_symbols0; _j0++) {
            o[_i0].emitted_symbols->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_o__i0__emitted_symbols_buf0 = 1;
          o[_i0].emitted_symbols->buf = (struct emitted_diff_symbol *) malloc(_len_o__i0__emitted_symbols_buf0*sizeof(struct emitted_diff_symbol));
          for(int _j0 = 0; _j0 < _len_o__i0__emitted_symbols_buf0; _j0++) {
            o[_i0].emitted_symbols->buf->s = ((-2 * (next_i()%2)) + 1) * next_i();
        o[_i0].emitted_symbols->buf->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          dim_moved_lines(o);
          for(int _aux = 0; _aux < _len_o0; _aux++) {
          free(o[_aux].emitted_symbols);
          }
          free(o);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_o0 = 65025;
          struct diff_options * o = (struct diff_options *) malloc(_len_o0*sizeof(struct diff_options));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
              int _len_o__i0__emitted_symbols0 = 1;
          o[_i0].emitted_symbols = (struct TYPE_2__ *) malloc(_len_o__i0__emitted_symbols0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_o__i0__emitted_symbols0; _j0++) {
            o[_i0].emitted_symbols->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_o__i0__emitted_symbols_buf0 = 1;
          o[_i0].emitted_symbols->buf = (struct emitted_diff_symbol *) malloc(_len_o__i0__emitted_symbols_buf0*sizeof(struct emitted_diff_symbol));
          for(int _j0 = 0; _j0 < _len_o__i0__emitted_symbols_buf0; _j0++) {
            o[_i0].emitted_symbols->buf->s = ((-2 * (next_i()%2)) + 1) * next_i();
        o[_i0].emitted_symbols->buf->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          dim_moved_lines(o);
          for(int _aux = 0; _aux < _len_o0; _aux++) {
          free(o[_aux].emitted_symbols);
          }
          free(o);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_o0 = 100;
          struct diff_options * o = (struct diff_options *) malloc(_len_o0*sizeof(struct diff_options));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
              int _len_o__i0__emitted_symbols0 = 1;
          o[_i0].emitted_symbols = (struct TYPE_2__ *) malloc(_len_o__i0__emitted_symbols0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_o__i0__emitted_symbols0; _j0++) {
            o[_i0].emitted_symbols->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_o__i0__emitted_symbols_buf0 = 1;
          o[_i0].emitted_symbols->buf = (struct emitted_diff_symbol *) malloc(_len_o__i0__emitted_symbols_buf0*sizeof(struct emitted_diff_symbol));
          for(int _j0 = 0; _j0 < _len_o__i0__emitted_symbols_buf0; _j0++) {
            o[_i0].emitted_symbols->buf->s = ((-2 * (next_i()%2)) + 1) * next_i();
        o[_i0].emitted_symbols->buf->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          dim_moved_lines(o);
          for(int _aux = 0; _aux < _len_o0; _aux++) {
          free(o[_aux].emitted_symbols);
          }
          free(o);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
