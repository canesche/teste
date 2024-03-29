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
struct TYPE_2__ {unsigned long expires; } ;
struct rxrpc_call {unsigned long ack_at; unsigned long ack_lost_at; unsigned long resend_at; unsigned long ping_at; unsigned long expect_rx_by; unsigned long expect_req_by; unsigned long expect_term_by; TYPE_1__ timer; } ;

/* Variables and functions */
 unsigned long MAX_JIFFY_OFFSET ; 
 unsigned long jiffies ; 

__attribute__((used)) static void rxrpc_start_call_timer(struct rxrpc_call *call)
{
	unsigned long now = jiffies;
	unsigned long j = now + MAX_JIFFY_OFFSET;

	call->ack_at = j;
	call->ack_lost_at = j;
	call->resend_at = j;
	call->ping_at = j;
	call->expect_rx_by = j;
	call->expect_req_by = j;
	call->expect_term_by = j;
	call->timer.expires = now;
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
          int _len_call0 = 1;
          struct rxrpc_call * call = (struct rxrpc_call *) malloc(_len_call0*sizeof(struct rxrpc_call));
          for(int _i0 = 0; _i0 < _len_call0; _i0++) {
            call[_i0].ack_at = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].ack_lost_at = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].resend_at = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].ping_at = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].expect_rx_by = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].expect_req_by = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].expect_term_by = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].timer.expires = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rxrpc_start_call_timer(call);
          free(call);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_call0 = 65025;
          struct rxrpc_call * call = (struct rxrpc_call *) malloc(_len_call0*sizeof(struct rxrpc_call));
          for(int _i0 = 0; _i0 < _len_call0; _i0++) {
            call[_i0].ack_at = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].ack_lost_at = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].resend_at = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].ping_at = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].expect_rx_by = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].expect_req_by = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].expect_term_by = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].timer.expires = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rxrpc_start_call_timer(call);
          free(call);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_call0 = 100;
          struct rxrpc_call * call = (struct rxrpc_call *) malloc(_len_call0*sizeof(struct rxrpc_call));
          for(int _i0 = 0; _i0 < _len_call0; _i0++) {
            call[_i0].ack_at = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].ack_lost_at = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].resend_at = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].ping_at = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].expect_rx_by = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].expect_req_by = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].expect_term_by = ((-2 * (next_i()%2)) + 1) * next_i();
        call[_i0].timer.expires = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rxrpc_start_call_timer(call);
          free(call);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
