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
typedef  size_t u32 ;
struct TYPE_4__ {size_t size; size_t pidx; TYPE_1__* oldest_read; TYPE_1__* sw_sq; } ;
struct t4_wq {TYPE_2__ sq; } ;
struct TYPE_3__ {scalar_t__ opcode; } ;

/* Variables and functions */
 scalar_t__ FW_RI_READ_REQ ; 

__attribute__((used)) static void advance_oldest_read(struct t4_wq *wq)
{

	u32 rptr = wq->sq.oldest_read - wq->sq.sw_sq + 1;

	if (rptr == wq->sq.size)
		rptr = 0;
	while (rptr != wq->sq.pidx) {
		wq->sq.oldest_read = &wq->sq.sw_sq[rptr];

		if (wq->sq.oldest_read->opcode == FW_RI_READ_REQ)
			return;
		if (++rptr == wq->sq.size)
			rptr = 0;
	}
	wq->sq.oldest_read = NULL;
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
          int _len_wq0 = 1;
          struct t4_wq * wq = (struct t4_wq *) malloc(_len_wq0*sizeof(struct t4_wq));
          for(int _i0 = 0; _i0 < _len_wq0; _i0++) {
            wq[_i0].sq.size = ((-2 * (next_i()%2)) + 1) * next_i();
        wq[_i0].sq.pidx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wq__i0__sq_oldest_read0 = 1;
          wq[_i0].sq.oldest_read = (struct TYPE_3__ *) malloc(_len_wq__i0__sq_oldest_read0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_wq__i0__sq_oldest_read0; _j0++) {
            wq[_i0].sq.oldest_read->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wq__i0__sq_sw_sq0 = 1;
          wq[_i0].sq.sw_sq = (struct TYPE_3__ *) malloc(_len_wq__i0__sq_sw_sq0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_wq__i0__sq_sw_sq0; _j0++) {
            wq[_i0].sq.sw_sq->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          advance_oldest_read(wq);
          free(wq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_wq0 = 65025;
          struct t4_wq * wq = (struct t4_wq *) malloc(_len_wq0*sizeof(struct t4_wq));
          for(int _i0 = 0; _i0 < _len_wq0; _i0++) {
            wq[_i0].sq.size = ((-2 * (next_i()%2)) + 1) * next_i();
        wq[_i0].sq.pidx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wq__i0__sq_oldest_read0 = 1;
          wq[_i0].sq.oldest_read = (struct TYPE_3__ *) malloc(_len_wq__i0__sq_oldest_read0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_wq__i0__sq_oldest_read0; _j0++) {
            wq[_i0].sq.oldest_read->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wq__i0__sq_sw_sq0 = 1;
          wq[_i0].sq.sw_sq = (struct TYPE_3__ *) malloc(_len_wq__i0__sq_sw_sq0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_wq__i0__sq_sw_sq0; _j0++) {
            wq[_i0].sq.sw_sq->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          advance_oldest_read(wq);
          free(wq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_wq0 = 100;
          struct t4_wq * wq = (struct t4_wq *) malloc(_len_wq0*sizeof(struct t4_wq));
          for(int _i0 = 0; _i0 < _len_wq0; _i0++) {
            wq[_i0].sq.size = ((-2 * (next_i()%2)) + 1) * next_i();
        wq[_i0].sq.pidx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wq__i0__sq_oldest_read0 = 1;
          wq[_i0].sq.oldest_read = (struct TYPE_3__ *) malloc(_len_wq__i0__sq_oldest_read0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_wq__i0__sq_oldest_read0; _j0++) {
            wq[_i0].sq.oldest_read->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wq__i0__sq_sw_sq0 = 1;
          wq[_i0].sq.sw_sq = (struct TYPE_3__ *) malloc(_len_wq__i0__sq_sw_sq0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_wq__i0__sq_sw_sq0; _j0++) {
            wq[_i0].sq.sw_sq->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          advance_oldest_read(wq);
          free(wq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
