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
typedef  int u_int ;
typedef  int u_char ;
struct TYPE_5__ {int nwin; TYPE_1__* win; } ;
typedef  TYPE_2__ cistpl_mem_t ;
struct TYPE_4__ {int len; int card_addr; int host_addr; } ;

/* Variables and functions */

__attribute__((used)) static u_char *parse_mem(u_char *p, u_char *q, cistpl_mem_t *mem)
{
	int i, j, asz, lsz, has_ha;
	u_int len, ca, ha;

	if (p == q)
		return NULL;

	mem->nwin = (*p & 0x07) + 1;
	lsz = (*p & 0x18) >> 3;
	asz = (*p & 0x60) >> 5;
	has_ha = (*p & 0x80);
	if (++p == q)
		return NULL;

	for (i = 0; i < mem->nwin; i++) {
		len = ca = ha = 0;
		for (j = 0; j < lsz; j++, p++) {
			if (p == q)
				return NULL;
			len += *p << (j*8);
		}
		for (j = 0; j < asz; j++, p++) {
			if (p == q)
				return NULL;
			ca += *p << (j*8);
		}
		if (has_ha)
			for (j = 0; j < asz; j++, p++) {
				if (p == q)
					return NULL;
				ha += *p << (j*8);
			}
		mem->win[i].len = len << 8;
		mem->win[i].card_addr = ca << 8;
		mem->win[i].host_addr = ha << 8;
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
          int _len_mem0 = 1;
          struct TYPE_5__ * mem = (struct TYPE_5__ *) malloc(_len_mem0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
            mem[_i0].nwin = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mem__i0__win0 = 1;
          mem[_i0].win = (struct TYPE_4__ *) malloc(_len_mem__i0__win0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mem__i0__win0; _j0++) {
            mem[_i0].win->len = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].win->card_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].win->host_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = parse_mem(p,q,mem);
          printf("%d\n", (*benchRet)); 
          free(p);
          free(q);
          for(int _aux = 0; _aux < _len_mem0; _aux++) {
          free(mem[_aux].win);
          }
          free(mem);
        
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
          int _len_mem0 = 65025;
          struct TYPE_5__ * mem = (struct TYPE_5__ *) malloc(_len_mem0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
            mem[_i0].nwin = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mem__i0__win0 = 1;
          mem[_i0].win = (struct TYPE_4__ *) malloc(_len_mem__i0__win0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mem__i0__win0; _j0++) {
            mem[_i0].win->len = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].win->card_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].win->host_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = parse_mem(p,q,mem);
          printf("%d\n", (*benchRet)); 
          free(p);
          free(q);
          for(int _aux = 0; _aux < _len_mem0; _aux++) {
          free(mem[_aux].win);
          }
          free(mem);
        
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
          int _len_mem0 = 100;
          struct TYPE_5__ * mem = (struct TYPE_5__ *) malloc(_len_mem0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
            mem[_i0].nwin = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mem__i0__win0 = 1;
          mem[_i0].win = (struct TYPE_4__ *) malloc(_len_mem__i0__win0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mem__i0__win0; _j0++) {
            mem[_i0].win->len = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].win->card_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].win->host_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = parse_mem(p,q,mem);
          printf("%d\n", (*benchRet)); 
          free(p);
          free(q);
          for(int _aux = 0; _aux < _len_mem0; _aux++) {
          free(mem[_aux].win);
          }
          free(mem);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
