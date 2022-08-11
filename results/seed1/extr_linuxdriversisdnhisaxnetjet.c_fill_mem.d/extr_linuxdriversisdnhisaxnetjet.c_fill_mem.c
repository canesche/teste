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
typedef  int u_int ;
typedef  int u_char ;
struct TYPE_3__ {int* s_end; int* send; } ;
struct TYPE_4__ {TYPE_1__ tiger; } ;
struct BCState {TYPE_2__ hw; } ;

/* Variables and functions */

__attribute__((used)) static void fill_mem(struct BCState *bcs, u_int *pos, u_int cnt, int chan, u_char fill)
{
	u_int mask = 0x000000ff, val = 0, *p = pos;
	u_int i;

	val |= fill;
	if (chan) {
		val  <<= 8;
		mask <<= 8;
	}
	mask ^= 0xffffffff;
	for (i = 0; i < cnt; i++) {
		*p &= mask;
		*p++ |= val;
		if (p > bcs->hw.tiger.s_end)
			p = bcs->hw.tiger.send;
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
          int cnt = 100;
          int chan = 100;
          int fill = 100;
          int _len_bcs0 = 1;
          struct BCState * bcs = (struct BCState *) malloc(_len_bcs0*sizeof(struct BCState));
          for(int _i0 = 0; _i0 < _len_bcs0; _i0++) {
              int _len_bcs__i0__hw_tiger_s_end0 = 1;
          bcs[_i0].hw.tiger.s_end = (int *) malloc(_len_bcs__i0__hw_tiger_s_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bcs__i0__hw_tiger_s_end0; _j0++) {
            bcs[_i0].hw.tiger.s_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bcs__i0__hw_tiger_send0 = 1;
          bcs[_i0].hw.tiger.send = (int *) malloc(_len_bcs__i0__hw_tiger_send0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bcs__i0__hw_tiger_send0; _j0++) {
            bcs[_i0].hw.tiger.send[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pos0 = 1;
          int * pos = (int *) malloc(_len_pos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_mem(bcs,pos,cnt,chan,fill);
          free(bcs);
          free(pos);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cnt = 255;
          int chan = 255;
          int fill = 255;
          int _len_bcs0 = 65025;
          struct BCState * bcs = (struct BCState *) malloc(_len_bcs0*sizeof(struct BCState));
          for(int _i0 = 0; _i0 < _len_bcs0; _i0++) {
              int _len_bcs__i0__hw_tiger_s_end0 = 1;
          bcs[_i0].hw.tiger.s_end = (int *) malloc(_len_bcs__i0__hw_tiger_s_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bcs__i0__hw_tiger_s_end0; _j0++) {
            bcs[_i0].hw.tiger.s_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bcs__i0__hw_tiger_send0 = 1;
          bcs[_i0].hw.tiger.send = (int *) malloc(_len_bcs__i0__hw_tiger_send0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bcs__i0__hw_tiger_send0; _j0++) {
            bcs[_i0].hw.tiger.send[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pos0 = 65025;
          int * pos = (int *) malloc(_len_pos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_mem(bcs,pos,cnt,chan,fill);
          free(bcs);
          free(pos);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cnt = 10;
          int chan = 10;
          int fill = 10;
          int _len_bcs0 = 100;
          struct BCState * bcs = (struct BCState *) malloc(_len_bcs0*sizeof(struct BCState));
          for(int _i0 = 0; _i0 < _len_bcs0; _i0++) {
              int _len_bcs__i0__hw_tiger_s_end0 = 1;
          bcs[_i0].hw.tiger.s_end = (int *) malloc(_len_bcs__i0__hw_tiger_s_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bcs__i0__hw_tiger_s_end0; _j0++) {
            bcs[_i0].hw.tiger.s_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bcs__i0__hw_tiger_send0 = 1;
          bcs[_i0].hw.tiger.send = (int *) malloc(_len_bcs__i0__hw_tiger_send0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bcs__i0__hw_tiger_send0; _j0++) {
            bcs[_i0].hw.tiger.send[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pos0 = 100;
          int * pos = (int *) malloc(_len_pos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_mem(bcs,pos,cnt,chan,fill);
          free(bcs);
          free(pos);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
