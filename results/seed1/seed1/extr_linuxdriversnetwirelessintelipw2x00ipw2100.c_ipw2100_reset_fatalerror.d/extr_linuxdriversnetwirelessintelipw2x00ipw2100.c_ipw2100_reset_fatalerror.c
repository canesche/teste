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
struct ipw2100_priv {scalar_t__ fatal_error; int /*<<< orphan*/  fatal_index; scalar_t__* fatal_errors; } ;

/* Variables and functions */
 int /*<<< orphan*/  IPW2100_ERROR_QUEUE ; 

__attribute__((used)) static inline void ipw2100_reset_fatalerror(struct ipw2100_priv *priv)
{
	if (!priv->fatal_error)
		return;

	priv->fatal_errors[priv->fatal_index++] = priv->fatal_error;
	priv->fatal_index %= IPW2100_ERROR_QUEUE;
	priv->fatal_error = 0;
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
          int _len_priv0 = 1;
          struct ipw2100_priv * priv = (struct ipw2100_priv *) malloc(_len_priv0*sizeof(struct ipw2100_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].fatal_error = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].fatal_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__fatal_errors0 = 1;
          priv[_i0].fatal_errors = (long *) malloc(_len_priv__i0__fatal_errors0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_priv__i0__fatal_errors0; _j0++) {
            priv[_i0].fatal_errors[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ipw2100_reset_fatalerror(priv);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].fatal_errors);
          }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct ipw2100_priv * priv = (struct ipw2100_priv *) malloc(_len_priv0*sizeof(struct ipw2100_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].fatal_error = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].fatal_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__fatal_errors0 = 1;
          priv[_i0].fatal_errors = (long *) malloc(_len_priv__i0__fatal_errors0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_priv__i0__fatal_errors0; _j0++) {
            priv[_i0].fatal_errors[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ipw2100_reset_fatalerror(priv);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].fatal_errors);
          }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct ipw2100_priv * priv = (struct ipw2100_priv *) malloc(_len_priv0*sizeof(struct ipw2100_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].fatal_error = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].fatal_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__fatal_errors0 = 1;
          priv[_i0].fatal_errors = (long *) malloc(_len_priv__i0__fatal_errors0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_priv__i0__fatal_errors0; _j0++) {
            priv[_i0].fatal_errors[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ipw2100_reset_fatalerror(priv);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].fatal_errors);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
