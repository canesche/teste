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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  void* word ;
struct TYPE_4__ {int min_digit_duration; int min_gap_duration; int /*<<< orphan*/  state; int /*<<< orphan*/  indication_state_ack; } ;
struct TYPE_5__ {TYPE_1__ recv; } ;
typedef  TYPE_2__ t_capidtmf_state ;
typedef  int dword ;

/* Variables and functions */
 int /*<<< orphan*/  CAPIDTMF_RECV_INDICATION_DIGIT ; 
 int /*<<< orphan*/  CAPIDTMF_RECV_STATE_DTMF_ACTIVE ; 
 int CAPIDTMF_RECV_TIME_GRANULARITY ; 

void capidtmf_recv_enable(t_capidtmf_state *p_state, word min_digit_duration, word min_gap_duration)
{
	p_state->recv.indication_state_ack &= CAPIDTMF_RECV_INDICATION_DIGIT;
	p_state->recv.min_digit_duration = (word)(((((dword) min_digit_duration) * 8) +
						   ((dword)(CAPIDTMF_RECV_TIME_GRANULARITY / 2))) / ((dword) CAPIDTMF_RECV_TIME_GRANULARITY));
	if (p_state->recv.min_digit_duration <= 1)
		p_state->recv.min_digit_duration = 1;
	else
		(p_state->recv.min_digit_duration)--;
	p_state->recv.min_gap_duration =
		(word)((((dword) min_gap_duration) * 8) / ((dword) CAPIDTMF_RECV_TIME_GRANULARITY));
	if (p_state->recv.min_gap_duration <= 1)
		p_state->recv.min_gap_duration = 1;
	else
		(p_state->recv.min_gap_duration)--;
	p_state->recv.state |= CAPIDTMF_RECV_STATE_DTMF_ACTIVE;
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
          int _len_p_state0 = 1;
          struct TYPE_5__ * p_state = (struct TYPE_5__ *) malloc(_len_p_state0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p_state0; _i0++) {
            p_state[_i0].recv.min_digit_duration = ((-2 * (next_i()%2)) + 1) * next_i();
        p_state[_i0].recv.min_gap_duration = ((-2 * (next_i()%2)) + 1) * next_i();
        p_state[_i0].recv.state = ((-2 * (next_i()%2)) + 1) * next_i();
        p_state[_i0].recv.indication_state_ack = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * min_digit_duration;
          void * min_gap_duration;
          capidtmf_recv_enable(p_state,min_digit_duration,min_gap_duration);
          free(p_state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p_state0 = 65025;
          struct TYPE_5__ * p_state = (struct TYPE_5__ *) malloc(_len_p_state0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p_state0; _i0++) {
            p_state[_i0].recv.min_digit_duration = ((-2 * (next_i()%2)) + 1) * next_i();
        p_state[_i0].recv.min_gap_duration = ((-2 * (next_i()%2)) + 1) * next_i();
        p_state[_i0].recv.state = ((-2 * (next_i()%2)) + 1) * next_i();
        p_state[_i0].recv.indication_state_ack = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * min_digit_duration;
          void * min_gap_duration;
          capidtmf_recv_enable(p_state,min_digit_duration,min_gap_duration);
          free(p_state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p_state0 = 100;
          struct TYPE_5__ * p_state = (struct TYPE_5__ *) malloc(_len_p_state0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p_state0; _i0++) {
            p_state[_i0].recv.min_digit_duration = ((-2 * (next_i()%2)) + 1) * next_i();
        p_state[_i0].recv.min_gap_duration = ((-2 * (next_i()%2)) + 1) * next_i();
        p_state[_i0].recv.state = ((-2 * (next_i()%2)) + 1) * next_i();
        p_state[_i0].recv.indication_state_ack = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * min_digit_duration;
          void * min_gap_duration;
          capidtmf_recv_enable(p_state,min_digit_duration,min_gap_duration);
          free(p_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
