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
struct sctp_sm_table_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ auth_enable; scalar_t__ reconf_enable; scalar_t__ addip_enable; scalar_t__ prsctp_enable; } ;
struct net {TYPE_1__ sctp; } ;
typedef  enum sctp_state { ____Placeholder_sctp_state } sctp_state ;
typedef  enum sctp_cid { ____Placeholder_sctp_cid } sctp_cid ;

/* Variables and functions */
 int SCTP_CID_ASCONF ; 
 int SCTP_CID_ASCONF_ACK ; 
 int SCTP_CID_AUTH ; 
 int SCTP_CID_BASE_MAX ; 
 int SCTP_CID_DATA ; 
 int SCTP_CID_FWD_TSN ; 
 int SCTP_CID_I_DATA ; 
 int SCTP_CID_I_FWD_TSN ; 
 int SCTP_CID_RECONF ; 
 int SCTP_STATE_MAX ; 
 struct sctp_sm_table_entry const** addip_chunk_event_table ; 
 struct sctp_sm_table_entry const** auth_chunk_event_table ; 
 struct sctp_sm_table_entry const bug ; 
 struct sctp_sm_table_entry const** chunk_event_table ; 
 struct sctp_sm_table_entry const* chunk_event_table_unknown ; 
 struct sctp_sm_table_entry const** prsctp_chunk_event_table ; 
 struct sctp_sm_table_entry const** reconf_chunk_event_table ; 

__attribute__((used)) static const struct sctp_sm_table_entry *sctp_chunk_event_lookup(
						struct net *net,
						enum sctp_cid cid,
						enum sctp_state state)
{
	if (state > SCTP_STATE_MAX)
		return &bug;

	if (cid == SCTP_CID_I_DATA)
		cid = SCTP_CID_DATA;

	if (cid <= SCTP_CID_BASE_MAX)
		return &chunk_event_table[cid][state];

	if (net->sctp.prsctp_enable) {
		if (cid == SCTP_CID_FWD_TSN || cid == SCTP_CID_I_FWD_TSN)
			return &prsctp_chunk_event_table[0][state];
	}

	if (net->sctp.addip_enable) {
		if (cid == SCTP_CID_ASCONF)
			return &addip_chunk_event_table[0][state];

		if (cid == SCTP_CID_ASCONF_ACK)
			return &addip_chunk_event_table[1][state];
	}

	if (net->sctp.reconf_enable)
		if (cid == SCTP_CID_RECONF)
			return &reconf_chunk_event_table[0][state];

	if (net->sctp.auth_enable) {
		if (cid == SCTP_CID_AUTH)
			return &auth_chunk_event_table[0][state];
	}

	return &chunk_event_table_unknown[state];
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
          enum sctp_cid cid = 0;
          enum sctp_state state = 0;
          int _len_net0 = 1;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].sctp.auth_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].sctp.reconf_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].sctp.addip_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].sctp.prsctp_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct sctp_sm_table_entry * benchRet = sctp_chunk_event_lookup(net,cid,state);
          free(net);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum sctp_cid cid = 0;
          enum sctp_state state = 0;
          int _len_net0 = 65025;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].sctp.auth_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].sctp.reconf_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].sctp.addip_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].sctp.prsctp_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct sctp_sm_table_entry * benchRet = sctp_chunk_event_lookup(net,cid,state);
          free(net);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum sctp_cid cid = 0;
          enum sctp_state state = 0;
          int _len_net0 = 100;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].sctp.auth_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].sctp.reconf_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].sctp.addip_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].sctp.prsctp_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct sctp_sm_table_entry * benchRet = sctp_chunk_event_lookup(net,cid,state);
          free(net);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
