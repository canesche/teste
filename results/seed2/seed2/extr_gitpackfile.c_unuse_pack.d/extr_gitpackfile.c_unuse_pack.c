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
struct pack_window {int /*<<< orphan*/  inuse_cnt; } ;

/* Variables and functions */

void unuse_pack(struct pack_window **w_cursor)
{
	struct pack_window *w = *w_cursor;
	if (w) {
		w->inuse_cnt--;
		*w_cursor = NULL;
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
          int _len_w_cursor0 = 1;
          struct pack_window ** w_cursor = (struct pack_window **) malloc(_len_w_cursor0*sizeof(struct pack_window *));
          for(int _i0 = 0; _i0 < _len_w_cursor0; _i0++) {
            int _len_w_cursor1 = 1;
            w_cursor[_i0] = (struct pack_window *) malloc(_len_w_cursor1*sizeof(struct pack_window));
            for(int _i1 = 0; _i1 < _len_w_cursor1; _i1++) {
              w_cursor[_i0][_i1].inuse_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          unuse_pack(w_cursor);
          for(int i1 = 0; i1 < _len_w_cursor0; i1++) {
            int _len_w_cursor1 = 1;
              free(w_cursor[i1]);
          }
          free(w_cursor);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_w_cursor0 = 65025;
          struct pack_window ** w_cursor = (struct pack_window **) malloc(_len_w_cursor0*sizeof(struct pack_window *));
          for(int _i0 = 0; _i0 < _len_w_cursor0; _i0++) {
            int _len_w_cursor1 = 1;
            w_cursor[_i0] = (struct pack_window *) malloc(_len_w_cursor1*sizeof(struct pack_window));
            for(int _i1 = 0; _i1 < _len_w_cursor1; _i1++) {
              w_cursor[_i0][_i1].inuse_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          unuse_pack(w_cursor);
          for(int i1 = 0; i1 < _len_w_cursor0; i1++) {
            int _len_w_cursor1 = 1;
              free(w_cursor[i1]);
          }
          free(w_cursor);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_w_cursor0 = 100;
          struct pack_window ** w_cursor = (struct pack_window **) malloc(_len_w_cursor0*sizeof(struct pack_window *));
          for(int _i0 = 0; _i0 < _len_w_cursor0; _i0++) {
            int _len_w_cursor1 = 1;
            w_cursor[_i0] = (struct pack_window *) malloc(_len_w_cursor1*sizeof(struct pack_window));
            for(int _i1 = 0; _i1 < _len_w_cursor1; _i1++) {
              w_cursor[_i0][_i1].inuse_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          unuse_pack(w_cursor);
          for(int i1 = 0; i1 < _len_w_cursor0; i1++) {
            int _len_w_cursor1 = 1;
              free(w_cursor[i1]);
          }
          free(w_cursor);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
