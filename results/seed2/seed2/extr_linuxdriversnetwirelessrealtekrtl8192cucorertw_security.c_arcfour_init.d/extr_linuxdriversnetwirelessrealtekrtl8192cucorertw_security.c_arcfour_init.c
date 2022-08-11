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
typedef  int u8 ;
typedef  int u32 ;
struct arc4context {int* state; scalar_t__ y; scalar_t__ x; } ;

/* Variables and functions */
 int /*<<< orphan*/  _func_enter_ ; 
 int /*<<< orphan*/  _func_exit_ ; 

__attribute__((used)) static void arcfour_init(struct arc4context 	*parc4ctx, u8 * key,u32	key_len)
{
	u32	t, u;
	u32	keyindex;
	u32	stateindex;
	u8 * state;
	u32	counter;
_func_enter_;
	state = parc4ctx->state;
	parc4ctx->x = 0;
	parc4ctx->y = 0;
	for (counter = 0; counter < 256; counter++)
		state[counter] = (u8)counter;
	keyindex = 0;
	stateindex = 0;
	for (counter = 0; counter < 256; counter++)
	{
		t = state[counter];
		stateindex = (stateindex + key[keyindex] + t) & 0xff;
		u = state[stateindex];
		state[stateindex] = (u8)t;
		state[counter] = (u8)u;
		if (++keyindex >= key_len)
			keyindex = 0;
	}
_func_exit_;	
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
          int key_len = 100;
          int _len_parc4ctx0 = 1;
          struct arc4context * parc4ctx = (struct arc4context *) malloc(_len_parc4ctx0*sizeof(struct arc4context));
          for(int _i0 = 0; _i0 < _len_parc4ctx0; _i0++) {
              int _len_parc4ctx__i0__state0 = 1;
          parc4ctx[_i0].state = (int *) malloc(_len_parc4ctx__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_parc4ctx__i0__state0; _j0++) {
            parc4ctx[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        parc4ctx[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        parc4ctx[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 1;
          int * key = (int *) malloc(_len_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          arcfour_init(parc4ctx,key,key_len);
          for(int _aux = 0; _aux < _len_parc4ctx0; _aux++) {
          free(parc4ctx[_aux].state);
          }
          free(parc4ctx);
          free(key);
        
        break;
    }
    // big-arr
    case 1:
    {
          int key_len = 255;
          int _len_parc4ctx0 = 65025;
          struct arc4context * parc4ctx = (struct arc4context *) malloc(_len_parc4ctx0*sizeof(struct arc4context));
          for(int _i0 = 0; _i0 < _len_parc4ctx0; _i0++) {
              int _len_parc4ctx__i0__state0 = 1;
          parc4ctx[_i0].state = (int *) malloc(_len_parc4ctx__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_parc4ctx__i0__state0; _j0++) {
            parc4ctx[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        parc4ctx[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        parc4ctx[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 65025;
          int * key = (int *) malloc(_len_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          arcfour_init(parc4ctx,key,key_len);
          for(int _aux = 0; _aux < _len_parc4ctx0; _aux++) {
          free(parc4ctx[_aux].state);
          }
          free(parc4ctx);
          free(key);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int key_len = 10;
          int _len_parc4ctx0 = 100;
          struct arc4context * parc4ctx = (struct arc4context *) malloc(_len_parc4ctx0*sizeof(struct arc4context));
          for(int _i0 = 0; _i0 < _len_parc4ctx0; _i0++) {
              int _len_parc4ctx__i0__state0 = 1;
          parc4ctx[_i0].state = (int *) malloc(_len_parc4ctx__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_parc4ctx__i0__state0; _j0++) {
            parc4ctx[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        parc4ctx[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        parc4ctx[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 100;
          int * key = (int *) malloc(_len_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          arcfour_init(parc4ctx,key,key_len);
          for(int _aux = 0; _aux < _len_parc4ctx0; _aux++) {
          free(parc4ctx[_aux].state);
          }
          free(parc4ctx);
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
