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
typedef  enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;
typedef  enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
typedef  enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
typedef  enum ib_qp_attr_mask { ____Placeholder_ib_qp_attr_mask } ib_qp_attr_mask ;
struct TYPE_2__ {int* req_param; int* opt_param; int /*<<< orphan*/  valid; } ;

/* Variables and functions */
 int IB_QPS_RTR ; 
 int IB_QPS_RTS ; 
 int IB_QPS_SQD ; 
 int IB_QPS_SQE ; 
 int IB_QP_CUR_STATE ; 
 int IB_QP_STATE ; 
 TYPE_1__** qp_state_table ; 

bool ib_modify_qp_is_ok(enum ib_qp_state cur_state, enum ib_qp_state next_state,
			enum ib_qp_type type, enum ib_qp_attr_mask mask,
			enum rdma_link_layer ll)
{
	enum ib_qp_attr_mask req_param, opt_param;

	if (mask & IB_QP_CUR_STATE  &&
	    cur_state != IB_QPS_RTR && cur_state != IB_QPS_RTS &&
	    cur_state != IB_QPS_SQD && cur_state != IB_QPS_SQE)
		return false;

	if (!qp_state_table[cur_state][next_state].valid)
		return false;

	req_param = qp_state_table[cur_state][next_state].req_param[type];
	opt_param = qp_state_table[cur_state][next_state].opt_param[type];

	if ((mask & req_param) != req_param)
		return false;

	if (mask & ~(req_param | opt_param | IB_QP_STATE))
		return false;

	return true;
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
          enum ib_qp_state cur_state = 0;
          enum ib_qp_state next_state = 0;
          enum ib_qp_type type = 0;
          enum ib_qp_attr_mask mask = 0;
          enum rdma_link_layer ll = 0;
          int benchRet = ib_modify_qp_is_ok(cur_state,next_state,type,mask,ll);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
