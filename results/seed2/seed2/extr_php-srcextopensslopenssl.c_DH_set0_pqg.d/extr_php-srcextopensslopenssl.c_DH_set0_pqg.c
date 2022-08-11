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
struct TYPE_3__ {int /*<<< orphan*/ * g; int /*<<< orphan*/ * q; int /*<<< orphan*/ * p; } ;
typedef  TYPE_1__ DH ;
typedef  int /*<<< orphan*/  BIGNUM ;

/* Variables and functions */

__attribute__((used)) static int DH_set0_pqg(DH *dh, BIGNUM *p, BIGNUM *q, BIGNUM *g)
{
	dh->p = p;
	dh->q = q;
	dh->g = g;

	return 1;
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
          int _len_dh0 = 1;
          struct TYPE_3__ * dh = (struct TYPE_3__ *) malloc(_len_dh0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dh0; _i0++) {
              int _len_dh__i0__g0 = 1;
          dh[_i0].g = (int *) malloc(_len_dh__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dh__i0__g0; _j0++) {
            dh[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dh__i0__q0 = 1;
          dh[_i0].q = (int *) malloc(_len_dh__i0__q0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dh__i0__q0; _j0++) {
            dh[_i0].q[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dh__i0__p0 = 1;
          dh[_i0].p = (int *) malloc(_len_dh__i0__p0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dh__i0__p0; _j0++) {
            dh[_i0].p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_p0 = 1;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q0 = 1;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_g0 = 1;
          int * g = (int *) malloc(_len_g0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_g0; _i0++) {
            g[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = DH_set0_pqg(dh,p,q,g);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dh0; _aux++) {
          free(dh[_aux].g);
          }
          for(int _aux = 0; _aux < _len_dh0; _aux++) {
          free(dh[_aux].q);
          }
          for(int _aux = 0; _aux < _len_dh0; _aux++) {
          free(dh[_aux].p);
          }
          free(dh);
          free(p);
          free(q);
          free(g);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dh0 = 65025;
          struct TYPE_3__ * dh = (struct TYPE_3__ *) malloc(_len_dh0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dh0; _i0++) {
              int _len_dh__i0__g0 = 1;
          dh[_i0].g = (int *) malloc(_len_dh__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dh__i0__g0; _j0++) {
            dh[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dh__i0__q0 = 1;
          dh[_i0].q = (int *) malloc(_len_dh__i0__q0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dh__i0__q0; _j0++) {
            dh[_i0].q[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dh__i0__p0 = 1;
          dh[_i0].p = (int *) malloc(_len_dh__i0__p0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dh__i0__p0; _j0++) {
            dh[_i0].p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_p0 = 65025;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q0 = 65025;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_g0 = 65025;
          int * g = (int *) malloc(_len_g0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_g0; _i0++) {
            g[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = DH_set0_pqg(dh,p,q,g);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dh0; _aux++) {
          free(dh[_aux].g);
          }
          for(int _aux = 0; _aux < _len_dh0; _aux++) {
          free(dh[_aux].q);
          }
          for(int _aux = 0; _aux < _len_dh0; _aux++) {
          free(dh[_aux].p);
          }
          free(dh);
          free(p);
          free(q);
          free(g);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dh0 = 100;
          struct TYPE_3__ * dh = (struct TYPE_3__ *) malloc(_len_dh0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dh0; _i0++) {
              int _len_dh__i0__g0 = 1;
          dh[_i0].g = (int *) malloc(_len_dh__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dh__i0__g0; _j0++) {
            dh[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dh__i0__q0 = 1;
          dh[_i0].q = (int *) malloc(_len_dh__i0__q0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dh__i0__q0; _j0++) {
            dh[_i0].q[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dh__i0__p0 = 1;
          dh[_i0].p = (int *) malloc(_len_dh__i0__p0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dh__i0__p0; _j0++) {
            dh[_i0].p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_p0 = 100;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q0 = 100;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_g0 = 100;
          int * g = (int *) malloc(_len_g0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_g0; _i0++) {
            g[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = DH_set0_pqg(dh,p,q,g);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dh0; _aux++) {
          free(dh[_aux].g);
          }
          for(int _aux = 0; _aux < _len_dh0; _aux++) {
          free(dh[_aux].q);
          }
          for(int _aux = 0; _aux < _len_dh0; _aux++) {
          free(dh[_aux].p);
          }
          free(dh);
          free(p);
          free(q);
          free(g);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
