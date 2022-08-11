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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {void* buf; } ;
struct TYPE_6__ {TYPE_2__* page_list; TYPE_1__ direct; } ;
struct mthca_srq {int wqe_shift; TYPE_3__ queue; scalar_t__ is_direct; } ;
struct TYPE_5__ {void* buf; } ;

/* Variables and functions */
 int PAGE_SHIFT ; 
 int PAGE_SIZE ; 

__attribute__((used)) static void *get_wqe(struct mthca_srq *srq, int n)
{
	if (srq->is_direct)
		return srq->queue.direct.buf + (n << srq->wqe_shift);
	else
		return srq->queue.page_list[(n << srq->wqe_shift) >> PAGE_SHIFT].buf +
			((n << srq->wqe_shift) & (PAGE_SIZE - 1));
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
          int n = 100;
          int _len_srq0 = 1;
          struct mthca_srq * srq = (struct mthca_srq *) malloc(_len_srq0*sizeof(struct mthca_srq));
          for(int _i0 = 0; _i0 < _len_srq0; _i0++) {
            srq[_i0].wqe_shift = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_srq__i0__queue_page_list0 = 1;
          srq[_i0].queue.page_list = (struct TYPE_5__ *) malloc(_len_srq__i0__queue_page_list0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_srq__i0__queue_page_list0; _j0++) {
              }
        srq[_i0].is_direct = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = get_wqe(srq,n);
          free(srq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int _len_srq0 = 65025;
          struct mthca_srq * srq = (struct mthca_srq *) malloc(_len_srq0*sizeof(struct mthca_srq));
          for(int _i0 = 0; _i0 < _len_srq0; _i0++) {
            srq[_i0].wqe_shift = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_srq__i0__queue_page_list0 = 1;
          srq[_i0].queue.page_list = (struct TYPE_5__ *) malloc(_len_srq__i0__queue_page_list0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_srq__i0__queue_page_list0; _j0++) {
              }
        srq[_i0].is_direct = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = get_wqe(srq,n);
          free(srq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int _len_srq0 = 100;
          struct mthca_srq * srq = (struct mthca_srq *) malloc(_len_srq0*sizeof(struct mthca_srq));
          for(int _i0 = 0; _i0 < _len_srq0; _i0++) {
            srq[_i0].wqe_shift = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_srq__i0__queue_page_list0 = 1;
          srq[_i0].queue.page_list = (struct TYPE_5__ *) malloc(_len_srq__i0__queue_page_list0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_srq__i0__queue_page_list0; _j0++) {
              }
        srq[_i0].is_direct = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = get_wqe(srq,n);
          free(srq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
