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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/ * base; } ;
struct TYPE_6__ {TYPE_1__ l; } ;
struct TYPE_7__ {int /*<<< orphan*/  const* top; TYPE_2__ u; } ;
typedef  int /*<<< orphan*/  TValue ;
typedef  int /*<<< orphan*/  const* StkId ;
typedef  TYPE_3__ CallInfo ;

/* Variables and functions */

__attribute__((used)) static int isinstack (CallInfo *ci, const TValue *o) {
  StkId p;
  for (p = ci->u.l.base; p < ci->top; p++)
    if (o == p) return 1;
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
          int _len_ci0 = 1;
          struct TYPE_7__ * ci = (struct TYPE_7__ *) malloc(_len_ci0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ci0; _i0++) {
              int _len_ci__i0__top0 = 1;
          ci[_i0].top = (const int *) malloc(_len_ci__i0__top0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_ci__i0__top0; _j0++) {
            ci[_i0].top[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ci__i0__u_l_base0 = 1;
          ci[_i0].u.l.base = (int *) malloc(_len_ci__i0__u_l_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ci__i0__u_l_base0; _j0++) {
            ci[_i0].u.l.base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_o0 = 1;
          const int * o = (const int *) malloc(_len_o0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
            o[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isinstack(ci,o);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ci0; _aux++) {
          free(ci[_aux].top);
          }
          free(ci);
          free(o);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ci0 = 65025;
          struct TYPE_7__ * ci = (struct TYPE_7__ *) malloc(_len_ci0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ci0; _i0++) {
              int _len_ci__i0__top0 = 1;
          ci[_i0].top = (const int *) malloc(_len_ci__i0__top0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_ci__i0__top0; _j0++) {
            ci[_i0].top[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ci__i0__u_l_base0 = 1;
          ci[_i0].u.l.base = (int *) malloc(_len_ci__i0__u_l_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ci__i0__u_l_base0; _j0++) {
            ci[_i0].u.l.base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_o0 = 65025;
          const int * o = (const int *) malloc(_len_o0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
            o[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isinstack(ci,o);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ci0; _aux++) {
          free(ci[_aux].top);
          }
          free(ci);
          free(o);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ci0 = 100;
          struct TYPE_7__ * ci = (struct TYPE_7__ *) malloc(_len_ci0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ci0; _i0++) {
              int _len_ci__i0__top0 = 1;
          ci[_i0].top = (const int *) malloc(_len_ci__i0__top0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_ci__i0__top0; _j0++) {
            ci[_i0].top[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ci__i0__u_l_base0 = 1;
          ci[_i0].u.l.base = (int *) malloc(_len_ci__i0__u_l_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ci__i0__u_l_base0; _j0++) {
            ci[_i0].u.l.base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_o0 = 100;
          const int * o = (const int *) malloc(_len_o0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
            o[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isinstack(ci,o);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ci0; _aux++) {
          free(ci[_aux].top);
          }
          free(ci);
          free(o);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
