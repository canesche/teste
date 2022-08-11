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
struct TYPE_2__ {int* prefix; scalar_t__* suffix; } ;
struct lzw_state {int code_bits; int init_code_bits; int next_code; TYPE_1__ dict; } ;

/* Variables and functions */
 int LZW_DICT_SIZE ; 

__attribute__((used)) static void lzw_dict_reset(struct lzw_state *state)
{
    int i;

    state->code_bits = state->init_code_bits + 1;
    state->next_code = (1 << state->init_code_bits) + 2;

    for(i = 0; i < LZW_DICT_SIZE; i++)
    {
        state->dict.prefix[i] = 1 << 12; /* impossible LZW code value */
        state->dict.suffix[i] = 0;
    }
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
          struct lzw_state * state = (struct lzw_state *) malloc(_len_state0*sizeof(struct lzw_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].code_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].init_code_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].next_code = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__dict_prefix0 = 1;
          state[_i0].dict.prefix = (int *) malloc(_len_state__i0__dict_prefix0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state__i0__dict_prefix0; _j0++) {
            state[_i0].dict.prefix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state__i0__dict_suffix0 = 1;
          state[_i0].dict.suffix = (long *) malloc(_len_state__i0__dict_suffix0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__dict_suffix0; _j0++) {
            state[_i0].dict.suffix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          lzw_dict_reset(state);
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_state0 = 65025;
          struct lzw_state * state = (struct lzw_state *) malloc(_len_state0*sizeof(struct lzw_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].code_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].init_code_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].next_code = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__dict_prefix0 = 1;
          state[_i0].dict.prefix = (int *) malloc(_len_state__i0__dict_prefix0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state__i0__dict_prefix0; _j0++) {
            state[_i0].dict.prefix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state__i0__dict_suffix0 = 1;
          state[_i0].dict.suffix = (long *) malloc(_len_state__i0__dict_suffix0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__dict_suffix0; _j0++) {
            state[_i0].dict.suffix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          lzw_dict_reset(state);
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_state0 = 100;
          struct lzw_state * state = (struct lzw_state *) malloc(_len_state0*sizeof(struct lzw_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].code_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].init_code_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].next_code = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__dict_prefix0 = 1;
          state[_i0].dict.prefix = (int *) malloc(_len_state__i0__dict_prefix0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state__i0__dict_prefix0; _j0++) {
            state[_i0].dict.prefix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state__i0__dict_suffix0 = 1;
          state[_i0].dict.suffix = (long *) malloc(_len_state__i0__dict_suffix0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__dict_suffix0; _j0++) {
            state[_i0].dict.suffix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          lzw_dict_reset(state);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
