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
struct rdma_cm_id {scalar_t__ context; } ;
struct iser_conn {int /*<<< orphan*/  state; } ;

/* Variables and functions */
 int /*<<< orphan*/  ISER_CONN_TERMINATING ; 

__attribute__((used)) static void iser_connect_error(struct rdma_cm_id *cma_id)
{
	struct iser_conn *iser_conn;

	iser_conn = (struct iser_conn *)cma_id->context;
	iser_conn->state = ISER_CONN_TERMINATING;
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
          int _len_cma_id0 = 1;
          struct rdma_cm_id * cma_id = (struct rdma_cm_id *) malloc(_len_cma_id0*sizeof(struct rdma_cm_id));
          for(int _i0 = 0; _i0 < _len_cma_id0; _i0++) {
            cma_id[_i0].context = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iser_connect_error(cma_id);
          free(cma_id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cma_id0 = 65025;
          struct rdma_cm_id * cma_id = (struct rdma_cm_id *) malloc(_len_cma_id0*sizeof(struct rdma_cm_id));
          for(int _i0 = 0; _i0 < _len_cma_id0; _i0++) {
            cma_id[_i0].context = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iser_connect_error(cma_id);
          free(cma_id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cma_id0 = 100;
          struct rdma_cm_id * cma_id = (struct rdma_cm_id *) malloc(_len_cma_id0*sizeof(struct rdma_cm_id));
          for(int _i0 = 0; _i0 < _len_cma_id0; _i0++) {
            cma_id[_i0].context = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iser_connect_error(cma_id);
          free(cma_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
