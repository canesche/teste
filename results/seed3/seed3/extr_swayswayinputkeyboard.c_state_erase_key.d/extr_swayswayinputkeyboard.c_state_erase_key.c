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
typedef  scalar_t__ uint32_t ;
struct sway_shortcut_state {size_t npressed; scalar_t__* pressed_keycodes; scalar_t__ current_key; scalar_t__* pressed_keys; } ;

/* Variables and functions */

__attribute__((used)) static void state_erase_key(struct sway_shortcut_state *state,
		uint32_t keycode) {
	size_t j = 0;
	for (size_t i = 0; i < state->npressed; ++i) {
		if (i > j) {
			state->pressed_keys[j] = state->pressed_keys[i];
			state->pressed_keycodes[j] = state->pressed_keycodes[i];
		}
		if (state->pressed_keycodes[i] != keycode) {
			++j;
		}
	}
	while(state->npressed > j) {
		--state->npressed;
		state->pressed_keys[state->npressed] = 0;
		state->pressed_keycodes[state->npressed] = 0;
	}
	state->current_key = 0;
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
          long keycode = 100;
          int _len_state0 = 1;
          struct sway_shortcut_state * state = (struct sway_shortcut_state *) malloc(_len_state0*sizeof(struct sway_shortcut_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].npressed = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__pressed_keycodes0 = 1;
          state[_i0].pressed_keycodes = (long *) malloc(_len_state__i0__pressed_keycodes0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__pressed_keycodes0; _j0++) {
            state[_i0].pressed_keycodes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        state[_i0].current_key = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__pressed_keys0 = 1;
          state[_i0].pressed_keys = (long *) malloc(_len_state__i0__pressed_keys0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__pressed_keys0; _j0++) {
            state[_i0].pressed_keys[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          state_erase_key(state,keycode);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].pressed_keycodes);
          }
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].pressed_keys);
          }
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          long keycode = 255;
          int _len_state0 = 65025;
          struct sway_shortcut_state * state = (struct sway_shortcut_state *) malloc(_len_state0*sizeof(struct sway_shortcut_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].npressed = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__pressed_keycodes0 = 1;
          state[_i0].pressed_keycodes = (long *) malloc(_len_state__i0__pressed_keycodes0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__pressed_keycodes0; _j0++) {
            state[_i0].pressed_keycodes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        state[_i0].current_key = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__pressed_keys0 = 1;
          state[_i0].pressed_keys = (long *) malloc(_len_state__i0__pressed_keys0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__pressed_keys0; _j0++) {
            state[_i0].pressed_keys[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          state_erase_key(state,keycode);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].pressed_keycodes);
          }
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].pressed_keys);
          }
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long keycode = 10;
          int _len_state0 = 100;
          struct sway_shortcut_state * state = (struct sway_shortcut_state *) malloc(_len_state0*sizeof(struct sway_shortcut_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].npressed = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__pressed_keycodes0 = 1;
          state[_i0].pressed_keycodes = (long *) malloc(_len_state__i0__pressed_keycodes0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__pressed_keycodes0; _j0++) {
            state[_i0].pressed_keycodes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        state[_i0].current_key = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__pressed_keys0 = 1;
          state[_i0].pressed_keys = (long *) malloc(_len_state__i0__pressed_keys0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__pressed_keys0; _j0++) {
            state[_i0].pressed_keys[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          state_erase_key(state,keycode);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].pressed_keycodes);
          }
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].pressed_keys);
          }
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
