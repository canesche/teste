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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int u_char ;
struct TYPE_5__ {int flags; int nwin; TYPE_1__* win; } ;
typedef  TYPE_2__ cistpl_io_t ;
struct TYPE_4__ {int len; scalar_t__ base; } ;

/* Variables and functions */
 int CISTPL_IO_LINES_MASK ; 

__attribute__((used)) static u_char *parse_io(u_char *p, u_char *q, cistpl_io_t *io)
{
	int i, j, bsz, lsz;

	if (p == q)
		return NULL;
	io->flags = *p;

	if (!(*p & 0x80)) {
		io->nwin = 1;
		io->win[0].base = 0;
		io->win[0].len = (1 << (io->flags & CISTPL_IO_LINES_MASK));
		return p+1;
	}

	if (++p == q)
		return NULL;
	io->nwin = (*p & 0x0f) + 1;
	bsz = (*p & 0x30) >> 4;
	if (bsz == 3)
		bsz++;
	lsz = (*p & 0xc0) >> 6;
	if (lsz == 3)
		lsz++;
	p++;

	for (i = 0; i < io->nwin; i++) {
		io->win[i].base = 0;
		io->win[i].len = 1;
		for (j = 0; j < bsz; j++, p++) {
			if (p == q)
				return NULL;
			io->win[i].base += *p << (j*8);
		}
		for (j = 0; j < lsz; j++, p++) {
			if (p == q)
				return NULL;
			io->win[i].len += *p << (j*8);
		}
	}
	return p;
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
          int _len_p0 = 1;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q0 = 1;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_io0 = 1;
          struct TYPE_5__ * io = (struct TYPE_5__ *) malloc(_len_io0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
            io[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].nwin = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io__i0__win0 = 1;
          io[_i0].win = (struct TYPE_4__ *) malloc(_len_io__i0__win0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_io__i0__win0; _j0++) {
            io[_i0].win->len = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].win->base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = parse_io(p,q,io);
          printf("%d\n", (*benchRet)); 
          free(p);
          free(q);
          for(int _aux = 0; _aux < _len_io0; _aux++) {
          free(io[_aux].win);
          }
          free(io);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p0 = 65025;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q0 = 65025;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_io0 = 65025;
          struct TYPE_5__ * io = (struct TYPE_5__ *) malloc(_len_io0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
            io[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].nwin = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io__i0__win0 = 1;
          io[_i0].win = (struct TYPE_4__ *) malloc(_len_io__i0__win0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_io__i0__win0; _j0++) {
            io[_i0].win->len = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].win->base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = parse_io(p,q,io);
          printf("%d\n", (*benchRet)); 
          free(p);
          free(q);
          for(int _aux = 0; _aux < _len_io0; _aux++) {
          free(io[_aux].win);
          }
          free(io);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p0 = 100;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q0 = 100;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_io0 = 100;
          struct TYPE_5__ * io = (struct TYPE_5__ *) malloc(_len_io0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
            io[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].nwin = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io__i0__win0 = 1;
          io[_i0].win = (struct TYPE_4__ *) malloc(_len_io__i0__win0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_io__i0__win0; _j0++) {
            io[_i0].win->len = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].win->base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = parse_io(p,q,io);
          printf("%d\n", (*benchRet)); 
          free(p);
          free(q);
          for(int _aux = 0; _aux < _len_io0; _aux++) {
          free(io[_aux].win);
          }
          free(io);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
