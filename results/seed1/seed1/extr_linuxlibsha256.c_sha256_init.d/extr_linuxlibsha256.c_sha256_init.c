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
struct sha256_state {scalar_t__ count; int /*<<< orphan*/ * state; } ;

/* Variables and functions */
 int /*<<< orphan*/  SHA256_H0 ; 
 int /*<<< orphan*/  SHA256_H1 ; 
 int /*<<< orphan*/  SHA256_H2 ; 
 int /*<<< orphan*/  SHA256_H3 ; 
 int /*<<< orphan*/  SHA256_H4 ; 
 int /*<<< orphan*/  SHA256_H5 ; 
 int /*<<< orphan*/  SHA256_H6 ; 
 int /*<<< orphan*/  SHA256_H7 ; 

int sha256_init(struct sha256_state *sctx)
{
	sctx->state[0] = SHA256_H0;
	sctx->state[1] = SHA256_H1;
	sctx->state[2] = SHA256_H2;
	sctx->state[3] = SHA256_H3;
	sctx->state[4] = SHA256_H4;
	sctx->state[5] = SHA256_H5;
	sctx->state[6] = SHA256_H6;
	sctx->state[7] = SHA256_H7;
	sctx->count = 0;

	return 0;
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
          int _len_sctx0 = 1;
          struct sha256_state * sctx = (struct sha256_state *) malloc(_len_sctx0*sizeof(struct sha256_state));
          for(int _i0 = 0; _i0 < _len_sctx0; _i0++) {
            sctx[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sctx__i0__state0 = 1;
          sctx[_i0].state = (int *) malloc(_len_sctx__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sctx__i0__state0; _j0++) {
            sctx[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sha256_init(sctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sctx0; _aux++) {
          free(sctx[_aux].state);
          }
          free(sctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sctx0 = 65025;
          struct sha256_state * sctx = (struct sha256_state *) malloc(_len_sctx0*sizeof(struct sha256_state));
          for(int _i0 = 0; _i0 < _len_sctx0; _i0++) {
            sctx[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sctx__i0__state0 = 1;
          sctx[_i0].state = (int *) malloc(_len_sctx__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sctx__i0__state0; _j0++) {
            sctx[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sha256_init(sctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sctx0; _aux++) {
          free(sctx[_aux].state);
          }
          free(sctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sctx0 = 100;
          struct sha256_state * sctx = (struct sha256_state *) malloc(_len_sctx0*sizeof(struct sha256_state));
          for(int _i0 = 0; _i0 < _len_sctx0; _i0++) {
            sctx[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sctx__i0__state0 = 1;
          sctx[_i0].state = (int *) malloc(_len_sctx__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sctx__i0__state0; _j0++) {
            sctx[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sha256_init(sctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sctx0; _aux++) {
          free(sctx[_aux].state);
          }
          free(sctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
