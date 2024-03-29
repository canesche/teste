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
typedef  int /*<<< orphan*/  u16 ;
struct TYPE_3__ {int flags; } ;
struct bnxt_tc_flow {int /*<<< orphan*/  src_fid; TYPE_1__ actions; } ;
struct TYPE_4__ {int /*<<< orphan*/  fw_fid; } ;
struct bnxt {TYPE_2__ pf; } ;

/* Variables and functions */
 int BNXT_TC_ACTION_FLAG_TUNNEL_DECAP ; 

__attribute__((used)) static void bnxt_tc_set_src_fid(struct bnxt *bp, struct bnxt_tc_flow *flow,
				u16 src_fid)
{
	if (flow->actions.flags & BNXT_TC_ACTION_FLAG_TUNNEL_DECAP)
		flow->src_fid = bp->pf.fw_fid;
	else
		flow->src_fid = src_fid;
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
          int src_fid = 100;
          int _len_bp0 = 1;
          struct bnxt * bp = (struct bnxt *) malloc(_len_bp0*sizeof(struct bnxt));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].pf.fw_fid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flow0 = 1;
          struct bnxt_tc_flow * flow = (struct bnxt_tc_flow *) malloc(_len_flow0*sizeof(struct bnxt_tc_flow));
          for(int _i0 = 0; _i0 < _len_flow0; _i0++) {
            flow[_i0].src_fid = ((-2 * (next_i()%2)) + 1) * next_i();
        flow[_i0].actions.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnxt_tc_set_src_fid(bp,flow,src_fid);
          free(bp);
          free(flow);
        
        break;
    }
    // big-arr
    case 1:
    {
          int src_fid = 255;
          int _len_bp0 = 65025;
          struct bnxt * bp = (struct bnxt *) malloc(_len_bp0*sizeof(struct bnxt));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].pf.fw_fid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flow0 = 65025;
          struct bnxt_tc_flow * flow = (struct bnxt_tc_flow *) malloc(_len_flow0*sizeof(struct bnxt_tc_flow));
          for(int _i0 = 0; _i0 < _len_flow0; _i0++) {
            flow[_i0].src_fid = ((-2 * (next_i()%2)) + 1) * next_i();
        flow[_i0].actions.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnxt_tc_set_src_fid(bp,flow,src_fid);
          free(bp);
          free(flow);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int src_fid = 10;
          int _len_bp0 = 100;
          struct bnxt * bp = (struct bnxt *) malloc(_len_bp0*sizeof(struct bnxt));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].pf.fw_fid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flow0 = 100;
          struct bnxt_tc_flow * flow = (struct bnxt_tc_flow *) malloc(_len_flow0*sizeof(struct bnxt_tc_flow));
          for(int _i0 = 0; _i0 < _len_flow0; _i0++) {
            flow[_i0].src_fid = ((-2 * (next_i()%2)) + 1) * next_i();
        flow[_i0].actions.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnxt_tc_set_src_fid(bp,flow,src_fid);
          free(bp);
          free(flow);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
