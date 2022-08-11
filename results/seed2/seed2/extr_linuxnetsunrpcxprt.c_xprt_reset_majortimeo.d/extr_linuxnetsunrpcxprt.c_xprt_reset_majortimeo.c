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
struct rpc_timeout {scalar_t__ to_retries; int to_increment; scalar_t__ to_maxval; scalar_t__ to_exponential; } ;
struct rpc_rqst {scalar_t__ rq_majortimeo; scalar_t__ rq_timeout; TYPE_2__* rq_task; } ;
struct TYPE_4__ {TYPE_1__* tk_client; } ;
struct TYPE_3__ {struct rpc_timeout* cl_timeout; } ;

/* Variables and functions */
 scalar_t__ jiffies ; 

__attribute__((used)) static void xprt_reset_majortimeo(struct rpc_rqst *req)
{
	const struct rpc_timeout *to = req->rq_task->tk_client->cl_timeout;

	req->rq_majortimeo = req->rq_timeout;
	if (to->to_exponential)
		req->rq_majortimeo <<= to->to_retries;
	else
		req->rq_majortimeo += to->to_increment * to->to_retries;
	if (req->rq_majortimeo > to->to_maxval || req->rq_majortimeo == 0)
		req->rq_majortimeo = to->to_maxval;
	req->rq_majortimeo += jiffies;
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
          int _len_req0 = 1;
          struct rpc_rqst * req = (struct rpc_rqst *) malloc(_len_req0*sizeof(struct rpc_rqst));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].rq_majortimeo = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].rq_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__rq_task0 = 1;
          req[_i0].rq_task = (struct TYPE_4__ *) malloc(_len_req__i0__rq_task0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_task0; _j0++) {
              int _len_req__i0__rq_task_tk_client0 = 1;
          req[_i0].rq_task->tk_client = (struct TYPE_3__ *) malloc(_len_req__i0__rq_task_tk_client0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_task_tk_client0; _j0++) {
              int _len_req__i0__rq_task_tk_client_cl_timeout0 = 1;
          req[_i0].rq_task->tk_client->cl_timeout = (struct rpc_timeout *) malloc(_len_req__i0__rq_task_tk_client_cl_timeout0*sizeof(struct rpc_timeout));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_task_tk_client_cl_timeout0; _j0++) {
            req[_i0].rq_task->tk_client->cl_timeout->to_retries = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].rq_task->tk_client->cl_timeout->to_increment = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].rq_task->tk_client->cl_timeout->to_maxval = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].rq_task->tk_client->cl_timeout->to_exponential = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          xprt_reset_majortimeo(req);
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].rq_task);
          }
          free(req);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_req0 = 65025;
          struct rpc_rqst * req = (struct rpc_rqst *) malloc(_len_req0*sizeof(struct rpc_rqst));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].rq_majortimeo = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].rq_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__rq_task0 = 1;
          req[_i0].rq_task = (struct TYPE_4__ *) malloc(_len_req__i0__rq_task0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_task0; _j0++) {
              int _len_req__i0__rq_task_tk_client0 = 1;
          req[_i0].rq_task->tk_client = (struct TYPE_3__ *) malloc(_len_req__i0__rq_task_tk_client0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_task_tk_client0; _j0++) {
              int _len_req__i0__rq_task_tk_client_cl_timeout0 = 1;
          req[_i0].rq_task->tk_client->cl_timeout = (struct rpc_timeout *) malloc(_len_req__i0__rq_task_tk_client_cl_timeout0*sizeof(struct rpc_timeout));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_task_tk_client_cl_timeout0; _j0++) {
            req[_i0].rq_task->tk_client->cl_timeout->to_retries = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].rq_task->tk_client->cl_timeout->to_increment = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].rq_task->tk_client->cl_timeout->to_maxval = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].rq_task->tk_client->cl_timeout->to_exponential = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          xprt_reset_majortimeo(req);
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].rq_task);
          }
          free(req);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_req0 = 100;
          struct rpc_rqst * req = (struct rpc_rqst *) malloc(_len_req0*sizeof(struct rpc_rqst));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].rq_majortimeo = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].rq_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__rq_task0 = 1;
          req[_i0].rq_task = (struct TYPE_4__ *) malloc(_len_req__i0__rq_task0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_task0; _j0++) {
              int _len_req__i0__rq_task_tk_client0 = 1;
          req[_i0].rq_task->tk_client = (struct TYPE_3__ *) malloc(_len_req__i0__rq_task_tk_client0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_task_tk_client0; _j0++) {
              int _len_req__i0__rq_task_tk_client_cl_timeout0 = 1;
          req[_i0].rq_task->tk_client->cl_timeout = (struct rpc_timeout *) malloc(_len_req__i0__rq_task_tk_client_cl_timeout0*sizeof(struct rpc_timeout));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_task_tk_client_cl_timeout0; _j0++) {
            req[_i0].rq_task->tk_client->cl_timeout->to_retries = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].rq_task->tk_client->cl_timeout->to_increment = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].rq_task->tk_client->cl_timeout->to_maxval = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].rq_task->tk_client->cl_timeout->to_exponential = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          xprt_reset_majortimeo(req);
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].rq_task);
          }
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
