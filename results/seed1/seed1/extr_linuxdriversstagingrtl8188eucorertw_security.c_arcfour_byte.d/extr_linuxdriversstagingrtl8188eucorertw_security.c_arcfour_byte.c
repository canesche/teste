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
typedef  size_t u8 ;
typedef  size_t u32 ;
struct arc4context {size_t* state; int x; size_t y; } ;

/* Variables and functions */

__attribute__((used)) static u32 arcfour_byte(struct arc4context *parc4ctx)
{
	u32 x;
	u32 y;
	u32 sx, sy;
	u8 *state;

	state = parc4ctx->state;
	x = (parc4ctx->x + 1) & 0xff;
	sx = state[x];
	y = (sx + parc4ctx->y) & 0xff;
	sy = state[y];
	parc4ctx->x = x;
	parc4ctx->y = y;
	state[y] = (u8)sx;
	state[x] = (u8)sy;
	return state[(sx + sy) & 0xff];
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
          int _len_parc4ctx0 = 1;
          struct arc4context * parc4ctx = (struct arc4context *) malloc(_len_parc4ctx0*sizeof(struct arc4context));
          for(int _i0 = 0; _i0 < _len_parc4ctx0; _i0++) {
              int _len_parc4ctx__i0__state0 = 1;
          parc4ctx[_i0].state = (unsigned long *) malloc(_len_parc4ctx__i0__state0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_parc4ctx__i0__state0; _j0++) {
            parc4ctx[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        parc4ctx[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        parc4ctx[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = arcfour_byte(parc4ctx);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_parc4ctx0; _aux++) {
          free(parc4ctx[_aux].state);
          }
          free(parc4ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_parc4ctx0 = 65025;
          struct arc4context * parc4ctx = (struct arc4context *) malloc(_len_parc4ctx0*sizeof(struct arc4context));
          for(int _i0 = 0; _i0 < _len_parc4ctx0; _i0++) {
              int _len_parc4ctx__i0__state0 = 1;
          parc4ctx[_i0].state = (unsigned long *) malloc(_len_parc4ctx__i0__state0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_parc4ctx__i0__state0; _j0++) {
            parc4ctx[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        parc4ctx[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        parc4ctx[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = arcfour_byte(parc4ctx);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_parc4ctx0; _aux++) {
          free(parc4ctx[_aux].state);
          }
          free(parc4ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_parc4ctx0 = 100;
          struct arc4context * parc4ctx = (struct arc4context *) malloc(_len_parc4ctx0*sizeof(struct arc4context));
          for(int _i0 = 0; _i0 < _len_parc4ctx0; _i0++) {
              int _len_parc4ctx__i0__state0 = 1;
          parc4ctx[_i0].state = (unsigned long *) malloc(_len_parc4ctx__i0__state0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_parc4ctx__i0__state0; _j0++) {
            parc4ctx[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        parc4ctx[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        parc4ctx[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = arcfour_byte(parc4ctx);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_parc4ctx0; _aux++) {
          free(parc4ctx[_aux].state);
          }
          free(parc4ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
