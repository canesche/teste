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
struct scm_request {TYPE_2__* aob; struct request** request; } ;
struct request {int dummy; } ;
struct TYPE_3__ {size_t msb_count; } ;
struct TYPE_4__ {TYPE_1__ request; } ;

/* Variables and functions */

__attribute__((used)) static inline void scm_request_set(struct scm_request *scmrq,
				   struct request *req)
{
	scmrq->request[scmrq->aob->request.msb_count] = req;
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
          int _len_scmrq0 = 1;
          struct scm_request * scmrq = (struct scm_request *) malloc(_len_scmrq0*sizeof(struct scm_request));
          for(int _i0 = 0; _i0 < _len_scmrq0; _i0++) {
              int _len_scmrq__i0__aob0 = 1;
          scmrq[_i0].aob = (struct TYPE_4__ *) malloc(_len_scmrq__i0__aob0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_scmrq__i0__aob0; _j0++) {
            scmrq[_i0].aob->request.msb_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scmrq__i0__request0 = 1;
          scmrq[_i0].request = (struct request **) malloc(_len_scmrq__i0__request0*sizeof(struct request *));
          for(int _j0 = 0; _j0 < _len_scmrq__i0__request0; _j0++) {
            int _len_scmrq__i0__request1 = 1;
            scmrq[_i0].request[_j0] = (struct request *) malloc(_len_scmrq__i0__request1*sizeof(struct request));
            for(int _j1 = 0; _j1 < _len_scmrq__i0__request1; _j1++) {
              scmrq[_i0].request[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_req0 = 1;
          struct request * req = (struct request *) malloc(_len_req0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          scm_request_set(scmrq,req);
          for(int _aux = 0; _aux < _len_scmrq0; _aux++) {
          free(scmrq[_aux].aob);
          }
          for(int _aux = 0; _aux < _len_scmrq0; _aux++) {
          free(*(scmrq[_aux].request));
        free(scmrq[_aux].request);
          }
          free(scmrq);
          free(req);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_scmrq0 = 65025;
          struct scm_request * scmrq = (struct scm_request *) malloc(_len_scmrq0*sizeof(struct scm_request));
          for(int _i0 = 0; _i0 < _len_scmrq0; _i0++) {
              int _len_scmrq__i0__aob0 = 1;
          scmrq[_i0].aob = (struct TYPE_4__ *) malloc(_len_scmrq__i0__aob0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_scmrq__i0__aob0; _j0++) {
            scmrq[_i0].aob->request.msb_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scmrq__i0__request0 = 1;
          scmrq[_i0].request = (struct request **) malloc(_len_scmrq__i0__request0*sizeof(struct request *));
          for(int _j0 = 0; _j0 < _len_scmrq__i0__request0; _j0++) {
            int _len_scmrq__i0__request1 = 1;
            scmrq[_i0].request[_j0] = (struct request *) malloc(_len_scmrq__i0__request1*sizeof(struct request));
            for(int _j1 = 0; _j1 < _len_scmrq__i0__request1; _j1++) {
              scmrq[_i0].request[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_req0 = 65025;
          struct request * req = (struct request *) malloc(_len_req0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          scm_request_set(scmrq,req);
          for(int _aux = 0; _aux < _len_scmrq0; _aux++) {
          free(scmrq[_aux].aob);
          }
          for(int _aux = 0; _aux < _len_scmrq0; _aux++) {
          free(*(scmrq[_aux].request));
        free(scmrq[_aux].request);
          }
          free(scmrq);
          free(req);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_scmrq0 = 100;
          struct scm_request * scmrq = (struct scm_request *) malloc(_len_scmrq0*sizeof(struct scm_request));
          for(int _i0 = 0; _i0 < _len_scmrq0; _i0++) {
              int _len_scmrq__i0__aob0 = 1;
          scmrq[_i0].aob = (struct TYPE_4__ *) malloc(_len_scmrq__i0__aob0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_scmrq__i0__aob0; _j0++) {
            scmrq[_i0].aob->request.msb_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scmrq__i0__request0 = 1;
          scmrq[_i0].request = (struct request **) malloc(_len_scmrq__i0__request0*sizeof(struct request *));
          for(int _j0 = 0; _j0 < _len_scmrq__i0__request0; _j0++) {
            int _len_scmrq__i0__request1 = 1;
            scmrq[_i0].request[_j0] = (struct request *) malloc(_len_scmrq__i0__request1*sizeof(struct request));
            for(int _j1 = 0; _j1 < _len_scmrq__i0__request1; _j1++) {
              scmrq[_i0].request[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_req0 = 100;
          struct request * req = (struct request *) malloc(_len_req0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          scm_request_set(scmrq,req);
          for(int _aux = 0; _aux < _len_scmrq0; _aux++) {
          free(scmrq[_aux].aob);
          }
          for(int _aux = 0; _aux < _len_scmrq0; _aux++) {
          free(*(scmrq[_aux].request));
        free(scmrq[_aux].request);
          }
          free(scmrq);
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
