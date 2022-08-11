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
union sub_crq {TYPE_1__ generic; } ;
struct ibmvnic_sub_crq_queue {size_t cur; union sub_crq* msgs; } ;
struct ibmvnic_adapter {int dummy; } ;

/* Variables and functions */
 int IBMVNIC_CRQ_CMD_RSP ; 

__attribute__((used)) static int pending_scrq(struct ibmvnic_adapter *adapter,
			struct ibmvnic_sub_crq_queue *scrq)
{
	union sub_crq *entry = &scrq->msgs[scrq->cur];

	if (entry->generic.first & IBMVNIC_CRQ_CMD_RSP)
		return 1;
	else
		return 0;
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
            adapter[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scrq0 = 1;
          struct ibmvnic_sub_crq_queue * scrq = (struct ibmvnic_sub_crq_queue *) malloc(_len_scrq0*sizeof(struct ibmvnic_sub_crq_queue));
          for(int _i0 = 0; _i0 < _len_scrq0; _i0++) {
            scrq[_i0].cur = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_scrq__i0__msgs0 = 1;
          scrq[_i0].msgs = (union sub_crq *) malloc(_len_scrq__i0__msgs0*sizeof(union sub_crq));
          for(int _j0 = 0; _j0 < _len_scrq__i0__msgs0; _j0++) {
            scrq[_i0].msgs[_j0] = 0;
          }
          }
          int benchRet = pending_scrq(adapter,scrq);
          printf("%d\n", benchRet); 
          free(adapter);
          for(int _aux = 0; _aux < _len_scrq0; _aux++) {
          free(scrq[_aux].msgs);
          }
          free(scrq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adapter0 = 65025;
          struct ibmvnic_adapter * adapter = (struct ibmvnic_adapter *) malloc(_len_adapter0*sizeof(struct ibmvnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scrq0 = 65025;
          struct ibmvnic_sub_crq_queue * scrq = (struct ibmvnic_sub_crq_queue *) malloc(_len_scrq0*sizeof(struct ibmvnic_sub_crq_queue));
          for(int _i0 = 0; _i0 < _len_scrq0; _i0++) {
            scrq[_i0].cur = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_scrq__i0__msgs0 = 1;
          scrq[_i0].msgs = (union sub_crq *) malloc(_len_scrq__i0__msgs0*sizeof(union sub_crq));
          for(int _j0 = 0; _j0 < _len_scrq__i0__msgs0; _j0++) {
            scrq[_i0].msgs[_j0] = 0;
          }
          }
          int benchRet = pending_scrq(adapter,scrq);
          printf("%d\n", benchRet); 
          free(adapter);
          for(int _aux = 0; _aux < _len_scrq0; _aux++) {
          free(scrq[_aux].msgs);
          }
          free(scrq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adapter0 = 100;
          struct ibmvnic_adapter * adapter = (struct ibmvnic_adapter *) malloc(_len_adapter0*sizeof(struct ibmvnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scrq0 = 100;
          struct ibmvnic_sub_crq_queue * scrq = (struct ibmvnic_sub_crq_queue *) malloc(_len_scrq0*sizeof(struct ibmvnic_sub_crq_queue));
          for(int _i0 = 0; _i0 < _len_scrq0; _i0++) {
            scrq[_i0].cur = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_scrq__i0__msgs0 = 1;
          scrq[_i0].msgs = (union sub_crq *) malloc(_len_scrq__i0__msgs0*sizeof(union sub_crq));
          for(int _j0 = 0; _j0 < _len_scrq__i0__msgs0; _j0++) {
            scrq[_i0].msgs[_j0] = 0;
          }
          }
          int benchRet = pending_scrq(adapter,scrq);
          printf("%d\n", benchRet); 
          free(adapter);
          for(int _aux = 0; _aux < _len_scrq0; _aux++) {
          free(scrq[_aux].msgs);
          }
          free(scrq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
