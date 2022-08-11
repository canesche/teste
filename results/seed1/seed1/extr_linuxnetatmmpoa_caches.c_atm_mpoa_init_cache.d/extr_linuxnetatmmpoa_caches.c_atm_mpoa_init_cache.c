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
struct mpoa_client {int /*<<< orphan*/ * eg_ops; int /*<<< orphan*/ * in_ops; } ;

/* Variables and functions */
 int /*<<< orphan*/  egress_ops ; 
 int /*<<< orphan*/  ingress_ops ; 

void atm_mpoa_init_cache(struct mpoa_client *mpc)
{
	mpc->in_ops = &ingress_ops;
	mpc->eg_ops = &egress_ops;
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
          int _len_mpc0 = 1;
          struct mpoa_client * mpc = (struct mpoa_client *) malloc(_len_mpc0*sizeof(struct mpoa_client));
          for(int _i0 = 0; _i0 < _len_mpc0; _i0++) {
              int _len_mpc__i0__eg_ops0 = 1;
          mpc[_i0].eg_ops = (int *) malloc(_len_mpc__i0__eg_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mpc__i0__eg_ops0; _j0++) {
            mpc[_i0].eg_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mpc__i0__in_ops0 = 1;
          mpc[_i0].in_ops = (int *) malloc(_len_mpc__i0__in_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mpc__i0__in_ops0; _j0++) {
            mpc[_i0].in_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          atm_mpoa_init_cache(mpc);
          for(int _aux = 0; _aux < _len_mpc0; _aux++) {
          free(mpc[_aux].eg_ops);
          }
          for(int _aux = 0; _aux < _len_mpc0; _aux++) {
          free(mpc[_aux].in_ops);
          }
          free(mpc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mpc0 = 65025;
          struct mpoa_client * mpc = (struct mpoa_client *) malloc(_len_mpc0*sizeof(struct mpoa_client));
          for(int _i0 = 0; _i0 < _len_mpc0; _i0++) {
              int _len_mpc__i0__eg_ops0 = 1;
          mpc[_i0].eg_ops = (int *) malloc(_len_mpc__i0__eg_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mpc__i0__eg_ops0; _j0++) {
            mpc[_i0].eg_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mpc__i0__in_ops0 = 1;
          mpc[_i0].in_ops = (int *) malloc(_len_mpc__i0__in_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mpc__i0__in_ops0; _j0++) {
            mpc[_i0].in_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          atm_mpoa_init_cache(mpc);
          for(int _aux = 0; _aux < _len_mpc0; _aux++) {
          free(mpc[_aux].eg_ops);
          }
          for(int _aux = 0; _aux < _len_mpc0; _aux++) {
          free(mpc[_aux].in_ops);
          }
          free(mpc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mpc0 = 100;
          struct mpoa_client * mpc = (struct mpoa_client *) malloc(_len_mpc0*sizeof(struct mpoa_client));
          for(int _i0 = 0; _i0 < _len_mpc0; _i0++) {
              int _len_mpc__i0__eg_ops0 = 1;
          mpc[_i0].eg_ops = (int *) malloc(_len_mpc__i0__eg_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mpc__i0__eg_ops0; _j0++) {
            mpc[_i0].eg_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mpc__i0__in_ops0 = 1;
          mpc[_i0].in_ops = (int *) malloc(_len_mpc__i0__in_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mpc__i0__in_ops0; _j0++) {
            mpc[_i0].in_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          atm_mpoa_init_cache(mpc);
          for(int _aux = 0; _aux < _len_mpc0; _aux++) {
          free(mpc[_aux].eg_ops);
          }
          for(int _aux = 0; _aux < _len_mpc0; _aux++) {
          free(mpc[_aux].in_ops);
          }
          free(mpc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
