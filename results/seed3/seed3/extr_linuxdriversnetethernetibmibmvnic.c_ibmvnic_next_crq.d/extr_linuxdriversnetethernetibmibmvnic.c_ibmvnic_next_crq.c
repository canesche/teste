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
struct TYPE_2__ {int first; } ;
union ibmvnic_crq {TYPE_1__ generic; } ;
struct ibmvnic_crq_queue {size_t cur; size_t size; union ibmvnic_crq* msgs; } ;
struct ibmvnic_adapter {struct ibmvnic_crq_queue crq; } ;

/* Variables and functions */
 int IBMVNIC_CRQ_CMD_RSP ; 

__attribute__((used)) static union ibmvnic_crq *ibmvnic_next_crq(struct ibmvnic_adapter *adapter)
{
	struct ibmvnic_crq_queue *queue = &adapter->crq;
	union ibmvnic_crq *crq;

	crq = &queue->msgs[queue->cur];
	if (crq->generic.first & IBMVNIC_CRQ_CMD_RSP) {
		if (++queue->cur == queue->size)
			queue->cur = 0;
	} else {
		crq = NULL;
	}

	return crq;
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
          int _len_adapter0 = 1;
          struct ibmvnic_adapter * adapter = (struct ibmvnic_adapter *) malloc(_len_adapter0*sizeof(struct ibmvnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].crq.cur = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].crq.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__crq_msgs0 = 1;
          adapter[_i0].crq.msgs = (union ibmvnic_crq *) malloc(_len_adapter__i0__crq_msgs0*sizeof(union ibmvnic_crq));
          for(int _j0 = 0; _j0 < _len_adapter__i0__crq_msgs0; _j0++) {
            adapter[_i0].crq.msgs[_j0] = 0;
          }
          }
          union ibmvnic_crq * benchRet = ibmvnic_next_crq(adapter);
          free(adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adapter0 = 65025;
          struct ibmvnic_adapter * adapter = (struct ibmvnic_adapter *) malloc(_len_adapter0*sizeof(struct ibmvnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].crq.cur = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].crq.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__crq_msgs0 = 1;
          adapter[_i0].crq.msgs = (union ibmvnic_crq *) malloc(_len_adapter__i0__crq_msgs0*sizeof(union ibmvnic_crq));
          for(int _j0 = 0; _j0 < _len_adapter__i0__crq_msgs0; _j0++) {
            adapter[_i0].crq.msgs[_j0] = 0;
          }
          }
          union ibmvnic_crq * benchRet = ibmvnic_next_crq(adapter);
          free(adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adapter0 = 100;
          struct ibmvnic_adapter * adapter = (struct ibmvnic_adapter *) malloc(_len_adapter0*sizeof(struct ibmvnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].crq.cur = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].crq.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__crq_msgs0 = 1;
          adapter[_i0].crq.msgs = (union ibmvnic_crq *) malloc(_len_adapter__i0__crq_msgs0*sizeof(union ibmvnic_crq));
          for(int _j0 = 0; _j0 < _len_adapter__i0__crq_msgs0; _j0++) {
            adapter[_i0].crq.msgs[_j0] = 0;
          }
          }
          union ibmvnic_crq * benchRet = ibmvnic_next_crq(adapter);
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
