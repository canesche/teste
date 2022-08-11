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
typedef  int u64 ;
typedef  int u32 ;
struct cobalt_vars {int rec_inv_sqrt; scalar_t__ count; } ;

/* Variables and functions */

__attribute__((used)) static void cobalt_newton_step(struct cobalt_vars *vars)
{
	u32 invsqrt, invsqrt2;
	u64 val;

	invsqrt = vars->rec_inv_sqrt;
	invsqrt2 = ((u64)invsqrt * invsqrt) >> 32;
	val = (3LL << 32) - ((u64)vars->count * invsqrt2);

	val >>= 2; /* avoid overflow in following multiply */
	val = (val * invsqrt) >> (32 - 2 + 1);

	vars->rec_inv_sqrt = val;
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
          int _len_vars0 = 1;
          struct cobalt_vars * vars = (struct cobalt_vars *) malloc(_len_vars0*sizeof(struct cobalt_vars));
          for(int _i0 = 0; _i0 < _len_vars0; _i0++) {
            vars[_i0].rec_inv_sqrt = ((-2 * (next_i()%2)) + 1) * next_i();
        vars[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cobalt_newton_step(vars);
          free(vars);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vars0 = 65025;
          struct cobalt_vars * vars = (struct cobalt_vars *) malloc(_len_vars0*sizeof(struct cobalt_vars));
          for(int _i0 = 0; _i0 < _len_vars0; _i0++) {
            vars[_i0].rec_inv_sqrt = ((-2 * (next_i()%2)) + 1) * next_i();
        vars[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cobalt_newton_step(vars);
          free(vars);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vars0 = 100;
          struct cobalt_vars * vars = (struct cobalt_vars *) malloc(_len_vars0*sizeof(struct cobalt_vars));
          for(int _i0 = 0; _i0 < _len_vars0; _i0++) {
            vars[_i0].rec_inv_sqrt = ((-2 * (next_i()%2)) + 1) * next_i();
        vars[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cobalt_newton_step(vars);
          free(vars);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
