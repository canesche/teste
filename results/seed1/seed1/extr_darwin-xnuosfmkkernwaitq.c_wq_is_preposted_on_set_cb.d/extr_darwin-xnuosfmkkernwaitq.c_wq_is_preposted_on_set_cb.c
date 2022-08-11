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
struct wq_prepost {int dummy; } ;
struct waitq_set {int dummy; } ;
struct waitq {int dummy; } ;
struct _is_posted_ctx {int did_prepost; struct waitq* posting_wq; } ;

/* Variables and functions */
 int WQ_ITERATE_CONTINUE ; 

__attribute__((used)) static int wq_is_preposted_on_set_cb(struct waitq_set *wqset, void *ctx,
				     struct wq_prepost *wqp, struct waitq *waitq)
{
	struct _is_posted_ctx *pctx = (struct _is_posted_ctx *)ctx;

	(void)wqset;
	(void)wqp;

	/*
	 * Don't early-out, run through the _entire_ list:
	 * This ensures that we retain a minimum number of invalid elements.
	 */
	if (pctx->posting_wq == waitq)
		pctx->did_prepost = 1;

	return WQ_ITERATE_CONTINUE;
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
          int _len_wqset0 = 1;
          struct waitq_set * wqset = (struct waitq_set *) malloc(_len_wqset0*sizeof(struct waitq_set));
          for(int _i0 = 0; _i0 < _len_wqset0; _i0++) {
            wqset[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ctx;
          int _len_wqp0 = 1;
          struct wq_prepost * wqp = (struct wq_prepost *) malloc(_len_wqp0*sizeof(struct wq_prepost));
          for(int _i0 = 0; _i0 < _len_wqp0; _i0++) {
            wqp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_waitq0 = 1;
          struct waitq * waitq = (struct waitq *) malloc(_len_waitq0*sizeof(struct waitq));
          for(int _i0 = 0; _i0 < _len_waitq0; _i0++) {
            waitq[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wq_is_preposted_on_set_cb(wqset,ctx,wqp,waitq);
          printf("%d\n", benchRet); 
          free(wqset);
          free(wqp);
          free(waitq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_wqset0 = 65025;
          struct waitq_set * wqset = (struct waitq_set *) malloc(_len_wqset0*sizeof(struct waitq_set));
          for(int _i0 = 0; _i0 < _len_wqset0; _i0++) {
            wqset[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ctx;
          int _len_wqp0 = 65025;
          struct wq_prepost * wqp = (struct wq_prepost *) malloc(_len_wqp0*sizeof(struct wq_prepost));
          for(int _i0 = 0; _i0 < _len_wqp0; _i0++) {
            wqp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_waitq0 = 65025;
          struct waitq * waitq = (struct waitq *) malloc(_len_waitq0*sizeof(struct waitq));
          for(int _i0 = 0; _i0 < _len_waitq0; _i0++) {
            waitq[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wq_is_preposted_on_set_cb(wqset,ctx,wqp,waitq);
          printf("%d\n", benchRet); 
          free(wqset);
          free(wqp);
          free(waitq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_wqset0 = 100;
          struct waitq_set * wqset = (struct waitq_set *) malloc(_len_wqset0*sizeof(struct waitq_set));
          for(int _i0 = 0; _i0 < _len_wqset0; _i0++) {
            wqset[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ctx;
          int _len_wqp0 = 100;
          struct wq_prepost * wqp = (struct wq_prepost *) malloc(_len_wqp0*sizeof(struct wq_prepost));
          for(int _i0 = 0; _i0 < _len_wqp0; _i0++) {
            wqp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_waitq0 = 100;
          struct waitq * waitq = (struct waitq *) malloc(_len_waitq0*sizeof(struct waitq));
          for(int _i0 = 0; _i0 < _len_waitq0; _i0++) {
            waitq[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wq_is_preposted_on_set_cb(wqset,ctx,wqp,waitq);
          printf("%d\n", benchRet); 
          free(wqset);
          free(wqp);
          free(waitq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
