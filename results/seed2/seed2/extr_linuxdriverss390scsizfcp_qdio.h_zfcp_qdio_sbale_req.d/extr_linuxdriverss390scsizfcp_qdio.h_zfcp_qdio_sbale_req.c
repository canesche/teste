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
struct zfcp_qdio_req {size_t sbal_last; } ;
struct zfcp_qdio {TYPE_1__** req_q; } ;
struct qdio_buffer_element {int dummy; } ;
struct TYPE_2__ {struct qdio_buffer_element* element; } ;

/* Variables and functions */

__attribute__((used)) static inline struct qdio_buffer_element *
zfcp_qdio_sbale_req(struct zfcp_qdio *qdio, struct zfcp_qdio_req *q_req)
{
	return &qdio->req_q[q_req->sbal_last]->element[0];
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
          int _len_qdio0 = 1;
          struct zfcp_qdio * qdio = (struct zfcp_qdio *) malloc(_len_qdio0*sizeof(struct zfcp_qdio));
          for(int _i0 = 0; _i0 < _len_qdio0; _i0++) {
              int _len_qdio__i0__req_q0 = 1;
          qdio[_i0].req_q = (struct TYPE_2__ **) malloc(_len_qdio__i0__req_q0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_qdio__i0__req_q0; _j0++) {
            int _len_qdio__i0__req_q1 = 1;
            qdio[_i0].req_q[_j0] = (struct TYPE_2__ *) malloc(_len_qdio__i0__req_q1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_qdio__i0__req_q1; _j1++) {
                int _len_qdio__i0__req_q__j0__element0 = 1;
          qdio[_i0].req_q[_j0]->element = (struct qdio_buffer_element *) malloc(_len_qdio__i0__req_q__j0__element0*sizeof(struct qdio_buffer_element));
          for(int _j0 = 0; _j0 < _len_qdio__i0__req_q__j0__element0; _j0++) {
            qdio[_i0].req_q[_j0]->element->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_q_req0 = 1;
          struct zfcp_qdio_req * q_req = (struct zfcp_qdio_req *) malloc(_len_q_req0*sizeof(struct zfcp_qdio_req));
          for(int _i0 = 0; _i0 < _len_q_req0; _i0++) {
            q_req[_i0].sbal_last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct qdio_buffer_element * benchRet = zfcp_qdio_sbale_req(qdio,q_req);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_qdio0; _aux++) {
          free(*(qdio[_aux].req_q));
        free(qdio[_aux].req_q);
          }
          free(qdio);
          free(q_req);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_qdio0 = 65025;
          struct zfcp_qdio * qdio = (struct zfcp_qdio *) malloc(_len_qdio0*sizeof(struct zfcp_qdio));
          for(int _i0 = 0; _i0 < _len_qdio0; _i0++) {
              int _len_qdio__i0__req_q0 = 1;
          qdio[_i0].req_q = (struct TYPE_2__ **) malloc(_len_qdio__i0__req_q0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_qdio__i0__req_q0; _j0++) {
            int _len_qdio__i0__req_q1 = 1;
            qdio[_i0].req_q[_j0] = (struct TYPE_2__ *) malloc(_len_qdio__i0__req_q1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_qdio__i0__req_q1; _j1++) {
                int _len_qdio__i0__req_q__j0__element0 = 1;
          qdio[_i0].req_q[_j0]->element = (struct qdio_buffer_element *) malloc(_len_qdio__i0__req_q__j0__element0*sizeof(struct qdio_buffer_element));
          for(int _j0 = 0; _j0 < _len_qdio__i0__req_q__j0__element0; _j0++) {
            qdio[_i0].req_q[_j0]->element->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_q_req0 = 65025;
          struct zfcp_qdio_req * q_req = (struct zfcp_qdio_req *) malloc(_len_q_req0*sizeof(struct zfcp_qdio_req));
          for(int _i0 = 0; _i0 < _len_q_req0; _i0++) {
            q_req[_i0].sbal_last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct qdio_buffer_element * benchRet = zfcp_qdio_sbale_req(qdio,q_req);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_qdio0; _aux++) {
          free(*(qdio[_aux].req_q));
        free(qdio[_aux].req_q);
          }
          free(qdio);
          free(q_req);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_qdio0 = 100;
          struct zfcp_qdio * qdio = (struct zfcp_qdio *) malloc(_len_qdio0*sizeof(struct zfcp_qdio));
          for(int _i0 = 0; _i0 < _len_qdio0; _i0++) {
              int _len_qdio__i0__req_q0 = 1;
          qdio[_i0].req_q = (struct TYPE_2__ **) malloc(_len_qdio__i0__req_q0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_qdio__i0__req_q0; _j0++) {
            int _len_qdio__i0__req_q1 = 1;
            qdio[_i0].req_q[_j0] = (struct TYPE_2__ *) malloc(_len_qdio__i0__req_q1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_qdio__i0__req_q1; _j1++) {
                int _len_qdio__i0__req_q__j0__element0 = 1;
          qdio[_i0].req_q[_j0]->element = (struct qdio_buffer_element *) malloc(_len_qdio__i0__req_q__j0__element0*sizeof(struct qdio_buffer_element));
          for(int _j0 = 0; _j0 < _len_qdio__i0__req_q__j0__element0; _j0++) {
            qdio[_i0].req_q[_j0]->element->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_q_req0 = 100;
          struct zfcp_qdio_req * q_req = (struct zfcp_qdio_req *) malloc(_len_q_req0*sizeof(struct zfcp_qdio_req));
          for(int _i0 = 0; _i0 < _len_q_req0; _i0++) {
            q_req[_i0].sbal_last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct qdio_buffer_element * benchRet = zfcp_qdio_sbale_req(qdio,q_req);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_qdio0; _aux++) {
          free(*(qdio[_aux].req_q));
        free(qdio[_aux].req_q);
          }
          free(qdio);
          free(q_req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
