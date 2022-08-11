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
struct hfi1_packet {int opcode; TYPE_1__* qp; } ;
typedef  int /*<<< orphan*/ * opcode_handler ;
struct TYPE_2__ {size_t state; int allowed_ops; } ;

/* Variables and functions */
 int IB_OPCODE_CNP ; 
 int RVT_OPCODE_QP_MASK ; 
 int RVT_PROCESS_RECV_OK ; 
 int* ib_rvt_state_ops ; 
 int /*<<< orphan*/ ** opcode_handler_tbl ; 

__attribute__((used)) static inline opcode_handler qp_ok(struct hfi1_packet *packet)
{
	if (!(ib_rvt_state_ops[packet->qp->state] & RVT_PROCESS_RECV_OK))
		return NULL;
	if (((packet->opcode & RVT_OPCODE_QP_MASK) ==
	     packet->qp->allowed_ops) ||
	    (packet->opcode == IB_OPCODE_CNP))
		return opcode_handler_tbl[packet->opcode];

	return NULL;
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
          int _len_packet0 = 1;
          struct hfi1_packet * packet = (struct hfi1_packet *) malloc(_len_packet0*sizeof(struct hfi1_packet));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_packet__i0__qp0 = 1;
          packet[_i0].qp = (struct TYPE_2__ *) malloc(_len_packet__i0__qp0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_packet__i0__qp0; _j0++) {
            packet[_i0].qp->state = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].qp->allowed_ops = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = qp_ok(packet);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_packet0; _aux++) {
          free(packet[_aux].qp);
          }
          free(packet);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_packet0 = 65025;
          struct hfi1_packet * packet = (struct hfi1_packet *) malloc(_len_packet0*sizeof(struct hfi1_packet));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_packet__i0__qp0 = 1;
          packet[_i0].qp = (struct TYPE_2__ *) malloc(_len_packet__i0__qp0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_packet__i0__qp0; _j0++) {
            packet[_i0].qp->state = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].qp->allowed_ops = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = qp_ok(packet);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_packet0; _aux++) {
          free(packet[_aux].qp);
          }
          free(packet);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_packet0 = 100;
          struct hfi1_packet * packet = (struct hfi1_packet *) malloc(_len_packet0*sizeof(struct hfi1_packet));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_packet__i0__qp0 = 1;
          packet[_i0].qp = (struct TYPE_2__ *) malloc(_len_packet__i0__qp0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_packet__i0__qp0; _j0++) {
            packet[_i0].qp->state = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].qp->allowed_ops = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = qp_ok(packet);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_packet0; _aux++) {
          free(packet[_aux].qp);
          }
          free(packet);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
