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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {char* buff_for_parsing; int /*<<< orphan*/  err; scalar_t__ amount_of_read_chars; int /*<<< orphan*/  state; } ;
typedef  TYPE_1__ SStateInfo ;

/* Variables and functions */
 int /*<<< orphan*/  eTCStateMachineErrOK ; 
 int /*<<< orphan*/  eTCStateStart ; 

__attribute__((used)) static void init_state_struct(SStateInfo *state, char *buff_for_parsing) {
	state->state = eTCStateStart;
	state->buff_for_parsing = buff_for_parsing;
	state->amount_of_read_chars = 0;
	state->err = eTCStateMachineErrOK;
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
          int _len_state0 = 1;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__buff_for_parsing0 = 1;
          state[_i0].buff_for_parsing = (char *) malloc(_len_state__i0__buff_for_parsing0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_state__i0__buff_for_parsing0; _j0++) {
            state[_i0].buff_for_parsing[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        state[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].amount_of_read_chars = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buff_for_parsing0 = 1;
          char * buff_for_parsing = (char *) malloc(_len_buff_for_parsing0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buff_for_parsing0; _i0++) {
            buff_for_parsing[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_state_struct(state,buff_for_parsing);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].buff_for_parsing);
          }
          free(state);
          free(buff_for_parsing);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_state0 = 65025;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__buff_for_parsing0 = 1;
          state[_i0].buff_for_parsing = (char *) malloc(_len_state__i0__buff_for_parsing0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_state__i0__buff_for_parsing0; _j0++) {
            state[_i0].buff_for_parsing[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        state[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].amount_of_read_chars = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buff_for_parsing0 = 65025;
          char * buff_for_parsing = (char *) malloc(_len_buff_for_parsing0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buff_for_parsing0; _i0++) {
            buff_for_parsing[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_state_struct(state,buff_for_parsing);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].buff_for_parsing);
          }
          free(state);
          free(buff_for_parsing);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_state0 = 100;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__buff_for_parsing0 = 1;
          state[_i0].buff_for_parsing = (char *) malloc(_len_state__i0__buff_for_parsing0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_state__i0__buff_for_parsing0; _j0++) {
            state[_i0].buff_for_parsing[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        state[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].amount_of_read_chars = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buff_for_parsing0 = 100;
          char * buff_for_parsing = (char *) malloc(_len_buff_for_parsing0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buff_for_parsing0; _i0++) {
            buff_for_parsing[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_state_struct(state,buff_for_parsing);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].buff_for_parsing);
          }
          free(state);
          free(buff_for_parsing);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
