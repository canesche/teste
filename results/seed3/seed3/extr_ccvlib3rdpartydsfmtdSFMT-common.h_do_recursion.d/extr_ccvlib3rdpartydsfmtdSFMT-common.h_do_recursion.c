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
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int uint64_t ;
struct TYPE_6__ {int* u; } ;
typedef  TYPE_1__ dw128_t ;

/* Variables and functions */
 int DSFMT_MSK1 ; 
 int DSFMT_MSK2 ; 
 int DSFMT_SL1 ; 
 int DSFMT_SR ; 

__attribute__((used)) inline static void do_recursion(dw128_t *r, dw128_t *a, dw128_t * b,
				dw128_t *lung) {
    uint64_t t0, t1, L0, L1;

    t0 = a->u[0];
    t1 = a->u[1];
    L0 = lung->u[0];
    L1 = lung->u[1];
    lung->u[0] = (t0 << DSFMT_SL1) ^ (L1 >> 32) ^ (L1 << 32) ^ b->u[0];
    lung->u[1] = (t1 << DSFMT_SL1) ^ (L0 >> 32) ^ (L0 << 32) ^ b->u[1];
    r->u[0] = (lung->u[0] >> DSFMT_SR) ^ (lung->u[0] & DSFMT_MSK1) ^ t0;
    r->u[1] = (lung->u[1] >> DSFMT_SR) ^ (lung->u[1] & DSFMT_MSK2) ^ t1;
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
          struct TYPE_6__ * r = (struct TYPE_6__ *) malloc(_len_r0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              int _len_r__i0__u0 = 1;
          r[_i0].u = (int *) malloc(_len_r__i0__u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_r__i0__u0; _j0++) {
            r[_i0].u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_a0 = 1;
          struct TYPE_6__ * a = (struct TYPE_6__ *) malloc(_len_a0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__u0 = 1;
          a[_i0].u = (int *) malloc(_len_a__i0__u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a__i0__u0; _j0++) {
            a[_i0].u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_b0 = 1;
          struct TYPE_6__ * b = (struct TYPE_6__ *) malloc(_len_b0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__u0 = 1;
          b[_i0].u = (int *) malloc(_len_b__i0__u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__u0; _j0++) {
            b[_i0].u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_lung0 = 1;
          struct TYPE_6__ * lung = (struct TYPE_6__ *) malloc(_len_lung0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_lung0; _i0++) {
              int _len_lung__i0__u0 = 1;
          lung[_i0].u = (int *) malloc(_len_lung__i0__u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lung__i0__u0; _j0++) {
            lung[_i0].u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          do_recursion(r,a,b,lung);
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].u);
          }
          free(r);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].u);
          }
          free(a);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].u);
          }
          free(b);
          for(int _aux = 0; _aux < _len_lung0; _aux++) {
          free(lung[_aux].u);
          }
          free(lung);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_r0 = 65025;
          struct TYPE_6__ * r = (struct TYPE_6__ *) malloc(_len_r0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              int _len_r__i0__u0 = 1;
          r[_i0].u = (int *) malloc(_len_r__i0__u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_r__i0__u0; _j0++) {
            r[_i0].u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_a0 = 65025;
          struct TYPE_6__ * a = (struct TYPE_6__ *) malloc(_len_a0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__u0 = 1;
          a[_i0].u = (int *) malloc(_len_a__i0__u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a__i0__u0; _j0++) {
            a[_i0].u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_b0 = 65025;
          struct TYPE_6__ * b = (struct TYPE_6__ *) malloc(_len_b0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__u0 = 1;
          b[_i0].u = (int *) malloc(_len_b__i0__u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__u0; _j0++) {
            b[_i0].u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_lung0 = 65025;
          struct TYPE_6__ * lung = (struct TYPE_6__ *) malloc(_len_lung0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_lung0; _i0++) {
              int _len_lung__i0__u0 = 1;
          lung[_i0].u = (int *) malloc(_len_lung__i0__u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lung__i0__u0; _j0++) {
            lung[_i0].u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          do_recursion(r,a,b,lung);
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].u);
          }
          free(r);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].u);
          }
          free(a);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].u);
          }
          free(b);
          for(int _aux = 0; _aux < _len_lung0; _aux++) {
          free(lung[_aux].u);
          }
          free(lung);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_r0 = 100;
          struct TYPE_6__ * r = (struct TYPE_6__ *) malloc(_len_r0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              int _len_r__i0__u0 = 1;
          r[_i0].u = (int *) malloc(_len_r__i0__u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_r__i0__u0; _j0++) {
            r[_i0].u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_a0 = 100;
          struct TYPE_6__ * a = (struct TYPE_6__ *) malloc(_len_a0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__u0 = 1;
          a[_i0].u = (int *) malloc(_len_a__i0__u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a__i0__u0; _j0++) {
            a[_i0].u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_b0 = 100;
          struct TYPE_6__ * b = (struct TYPE_6__ *) malloc(_len_b0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__u0 = 1;
          b[_i0].u = (int *) malloc(_len_b__i0__u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__u0; _j0++) {
            b[_i0].u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_lung0 = 100;
          struct TYPE_6__ * lung = (struct TYPE_6__ *) malloc(_len_lung0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_lung0; _i0++) {
              int _len_lung__i0__u0 = 1;
          lung[_i0].u = (int *) malloc(_len_lung__i0__u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lung__i0__u0; _j0++) {
            lung[_i0].u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          do_recursion(r,a,b,lung);
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].u);
          }
          free(r);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].u);
          }
          free(a);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].u);
          }
          free(b);
          for(int _aux = 0; _aux < _len_lung0; _aux++) {
          free(lung[_aux].u);
          }
          free(lung);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
