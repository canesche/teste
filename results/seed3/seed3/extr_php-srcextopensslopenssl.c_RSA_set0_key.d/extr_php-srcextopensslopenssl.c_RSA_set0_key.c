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
struct TYPE_3__ {int /*<<< orphan*/ * d; int /*<<< orphan*/ * e; int /*<<< orphan*/ * n; } ;
typedef  TYPE_1__ RSA ;
typedef  int /*<<< orphan*/  BIGNUM ;

/* Variables and functions */

__attribute__((used)) static int RSA_set0_key(RSA *r, BIGNUM *n, BIGNUM *e, BIGNUM *d)
{
	r->n = n;
	r->e = e;
	r->d = d;

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
          int _len_r0 = 1;
          struct TYPE_3__ * r = (struct TYPE_3__ *) malloc(_len_r0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              int _len_r__i0__d0 = 1;
          r[_i0].d = (int *) malloc(_len_r__i0__d0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_r__i0__d0; _j0++) {
            r[_i0].d[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r__i0__e0 = 1;
          r[_i0].e = (int *) malloc(_len_r__i0__e0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_r__i0__e0; _j0++) {
            r[_i0].e[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r__i0__n0 = 1;
          r[_i0].n = (int *) malloc(_len_r__i0__n0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_r__i0__n0; _j0++) {
            r[_i0].n[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_n0 = 1;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e0 = 1;
          int * e = (int *) malloc(_len_e0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_d0 = 1;
          int * d = (int *) malloc(_len_d0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = RSA_set0_key(r,n,e,d);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].d);
          }
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].e);
          }
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].n);
          }
          free(r);
          free(n);
          free(e);
          free(d);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_r0 = 65025;
          struct TYPE_3__ * r = (struct TYPE_3__ *) malloc(_len_r0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              int _len_r__i0__d0 = 1;
          r[_i0].d = (int *) malloc(_len_r__i0__d0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_r__i0__d0; _j0++) {
            r[_i0].d[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r__i0__e0 = 1;
          r[_i0].e = (int *) malloc(_len_r__i0__e0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_r__i0__e0; _j0++) {
            r[_i0].e[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r__i0__n0 = 1;
          r[_i0].n = (int *) malloc(_len_r__i0__n0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_r__i0__n0; _j0++) {
            r[_i0].n[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_n0 = 65025;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e0 = 65025;
          int * e = (int *) malloc(_len_e0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_d0 = 65025;
          int * d = (int *) malloc(_len_d0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = RSA_set0_key(r,n,e,d);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].d);
          }
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].e);
          }
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].n);
          }
          free(r);
          free(n);
          free(e);
          free(d);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_r0 = 100;
          struct TYPE_3__ * r = (struct TYPE_3__ *) malloc(_len_r0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              int _len_r__i0__d0 = 1;
          r[_i0].d = (int *) malloc(_len_r__i0__d0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_r__i0__d0; _j0++) {
            r[_i0].d[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r__i0__e0 = 1;
          r[_i0].e = (int *) malloc(_len_r__i0__e0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_r__i0__e0; _j0++) {
            r[_i0].e[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r__i0__n0 = 1;
          r[_i0].n = (int *) malloc(_len_r__i0__n0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_r__i0__n0; _j0++) {
            r[_i0].n[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_n0 = 100;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e0 = 100;
          int * e = (int *) malloc(_len_e0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_d0 = 100;
          int * d = (int *) malloc(_len_d0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = RSA_set0_key(r,n,e,d);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].d);
          }
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].e);
          }
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].n);
          }
          free(r);
          free(n);
          free(e);
          free(d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
