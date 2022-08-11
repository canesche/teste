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
struct TYPE_3__ {scalar_t__ pos; unsigned long* key; } ;
typedef  TYPE_1__ rk_state ;

/* Variables and functions */
 unsigned long LOWER_MASK ; 
 int M ; 
 unsigned long MATRIX_A ; 
 int N ; 
 scalar_t__ RK_STATE_LEN ; 
 unsigned long UPPER_MASK ; 

unsigned long
rk_random(rk_state *state)
{
    unsigned long y;

    if (state->pos == RK_STATE_LEN) {
        int i;

        for (i = 0; i < N - M; i++) {
            y = (state->key[i] & UPPER_MASK) | (state->key[i+1] & LOWER_MASK);
            state->key[i] = state->key[i+M] ^ (y>>1) ^ (-(y & 1) & MATRIX_A);
        }
        for (; i < N - 1; i++) {
            y = (state->key[i] & UPPER_MASK) | (state->key[i+1] & LOWER_MASK);
            state->key[i] = state->key[i+(M-N)] ^ (y>>1) ^ (-(y & 1) & MATRIX_A);
        }
        y = (state->key[N - 1] & UPPER_MASK) | (state->key[0] & LOWER_MASK);
        state->key[N - 1] = state->key[M - 1] ^ (y >> 1) ^ (-(y & 1) & MATRIX_A);

        state->pos = 0;
    }
    y = state->key[state->pos++];

    /* Tempering */
    y ^= (y >> 11);
    y ^= (y << 7) & 0x9d2c5680UL;
    y ^= (y << 15) & 0xefc60000UL;
    y ^= (y >> 18);

    return y;
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
            state[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__key0 = 1;
          state[_i0].key = (unsigned long *) malloc(_len_state__i0__key0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_state__i0__key0; _j0++) {
            state[_i0].key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = rk_random(state);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].key);
          }
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_state0 = 65025;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__key0 = 1;
          state[_i0].key = (unsigned long *) malloc(_len_state__i0__key0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_state__i0__key0; _j0++) {
            state[_i0].key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = rk_random(state);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].key);
          }
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_state0 = 100;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__key0 = 1;
          state[_i0].key = (unsigned long *) malloc(_len_state__i0__key0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_state__i0__key0; _j0++) {
            state[_i0].key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = rk_random(state);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].key);
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
