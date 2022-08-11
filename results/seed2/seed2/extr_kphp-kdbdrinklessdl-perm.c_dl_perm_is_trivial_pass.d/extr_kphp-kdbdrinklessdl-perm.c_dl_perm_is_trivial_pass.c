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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ n; scalar_t__ len; TYPE_1__* v; } ;
typedef  TYPE_2__ dl_perm ;
struct TYPE_4__ {int a; int /*<<< orphan*/ * r; int /*<<< orphan*/ * l; } ;

/* Variables and functions */

int dl_perm_is_trivial_pass (dl_perm *p, int pass_n) {
  return p->n == p->len + pass_n && (p->v == NULL || (p->v->l == NULL && p->v->r == NULL && p->v->a == pass_n));
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
          int pass_n = 100;
          int _len_p0 = 1;
          struct TYPE_5__ * p = (struct TYPE_5__ *) malloc(_len_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__v0 = 1;
          p[_i0].v = (struct TYPE_4__ *) malloc(_len_p__i0__v0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__v0; _j0++) {
            p[_i0].v->a = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__v_r0 = 1;
          p[_i0].v->r = (int *) malloc(_len_p__i0__v_r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__v_r0; _j0++) {
            p[_i0].v->r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__v_l0 = 1;
          p[_i0].v->l = (int *) malloc(_len_p__i0__v_l0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__v_l0; _j0++) {
            p[_i0].v->l[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = dl_perm_is_trivial_pass(p,pass_n);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].v);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pass_n = 255;
          int _len_p0 = 65025;
          struct TYPE_5__ * p = (struct TYPE_5__ *) malloc(_len_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__v0 = 1;
          p[_i0].v = (struct TYPE_4__ *) malloc(_len_p__i0__v0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__v0; _j0++) {
            p[_i0].v->a = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__v_r0 = 1;
          p[_i0].v->r = (int *) malloc(_len_p__i0__v_r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__v_r0; _j0++) {
            p[_i0].v->r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__v_l0 = 1;
          p[_i0].v->l = (int *) malloc(_len_p__i0__v_l0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__v_l0; _j0++) {
            p[_i0].v->l[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = dl_perm_is_trivial_pass(p,pass_n);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].v);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pass_n = 10;
          int _len_p0 = 100;
          struct TYPE_5__ * p = (struct TYPE_5__ *) malloc(_len_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__v0 = 1;
          p[_i0].v = (struct TYPE_4__ *) malloc(_len_p__i0__v0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__v0; _j0++) {
            p[_i0].v->a = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__v_r0 = 1;
          p[_i0].v->r = (int *) malloc(_len_p__i0__v_r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__v_r0; _j0++) {
            p[_i0].v->r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__v_l0 = 1;
          p[_i0].v->l = (int *) malloc(_len_p__i0__v_l0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__v_l0; _j0++) {
            p[_i0].v->l[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = dl_perm_is_trivial_pass(p,pass_n);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].v);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
