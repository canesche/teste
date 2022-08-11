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
struct svc_req {TYPE_1__* rq_xprt; } ;
struct rpc_msg {int dummy; } ;
typedef  enum auth_stat { ____Placeholder_auth_stat } auth_stat ;
struct TYPE_2__ {int /*<<< orphan*/ * xp_auth; } ;

/* Variables and functions */
 int AUTH_OK ; 
 int /*<<< orphan*/  svc_auth_none ; 

enum auth_stat
_svcauth_none(struct svc_req *rqst, struct rpc_msg *msg)
{
	rqst->rq_xprt->xp_auth = &svc_auth_none;

	return (AUTH_OK);
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
          int _len_rqst0 = 1;
          struct svc_req * rqst = (struct svc_req *) malloc(_len_rqst0*sizeof(struct svc_req));
          for(int _i0 = 0; _i0 < _len_rqst0; _i0++) {
              int _len_rqst__i0__rq_xprt0 = 1;
          rqst[_i0].rq_xprt = (struct TYPE_2__ *) malloc(_len_rqst__i0__rq_xprt0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rqst__i0__rq_xprt0; _j0++) {
              int _len_rqst__i0__rq_xprt_xp_auth0 = 1;
          rqst[_i0].rq_xprt->xp_auth = (int *) malloc(_len_rqst__i0__rq_xprt_xp_auth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rqst__i0__rq_xprt_xp_auth0; _j0++) {
            rqst[_i0].rq_xprt->xp_auth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_msg0 = 1;
          struct rpc_msg * msg = (struct rpc_msg *) malloc(_len_msg0*sizeof(struct rpc_msg));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum auth_stat benchRet = _svcauth_none(rqst,msg);
          for(int _aux = 0; _aux < _len_rqst0; _aux++) {
          free(rqst[_aux].rq_xprt);
          }
          free(rqst);
          free(msg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rqst0 = 65025;
          struct svc_req * rqst = (struct svc_req *) malloc(_len_rqst0*sizeof(struct svc_req));
          for(int _i0 = 0; _i0 < _len_rqst0; _i0++) {
              int _len_rqst__i0__rq_xprt0 = 1;
          rqst[_i0].rq_xprt = (struct TYPE_2__ *) malloc(_len_rqst__i0__rq_xprt0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rqst__i0__rq_xprt0; _j0++) {
              int _len_rqst__i0__rq_xprt_xp_auth0 = 1;
          rqst[_i0].rq_xprt->xp_auth = (int *) malloc(_len_rqst__i0__rq_xprt_xp_auth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rqst__i0__rq_xprt_xp_auth0; _j0++) {
            rqst[_i0].rq_xprt->xp_auth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_msg0 = 65025;
          struct rpc_msg * msg = (struct rpc_msg *) malloc(_len_msg0*sizeof(struct rpc_msg));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum auth_stat benchRet = _svcauth_none(rqst,msg);
          for(int _aux = 0; _aux < _len_rqst0; _aux++) {
          free(rqst[_aux].rq_xprt);
          }
          free(rqst);
          free(msg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rqst0 = 100;
          struct svc_req * rqst = (struct svc_req *) malloc(_len_rqst0*sizeof(struct svc_req));
          for(int _i0 = 0; _i0 < _len_rqst0; _i0++) {
              int _len_rqst__i0__rq_xprt0 = 1;
          rqst[_i0].rq_xprt = (struct TYPE_2__ *) malloc(_len_rqst__i0__rq_xprt0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rqst__i0__rq_xprt0; _j0++) {
              int _len_rqst__i0__rq_xprt_xp_auth0 = 1;
          rqst[_i0].rq_xprt->xp_auth = (int *) malloc(_len_rqst__i0__rq_xprt_xp_auth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rqst__i0__rq_xprt_xp_auth0; _j0++) {
            rqst[_i0].rq_xprt->xp_auth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_msg0 = 100;
          struct rpc_msg * msg = (struct rpc_msg *) malloc(_len_msg0*sizeof(struct rpc_msg));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum auth_stat benchRet = _svcauth_none(rqst,msg);
          for(int _aux = 0; _aux < _len_rqst0; _aux++) {
          free(rqst[_aux].rq_xprt);
          }
          free(rqst);
          free(msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
