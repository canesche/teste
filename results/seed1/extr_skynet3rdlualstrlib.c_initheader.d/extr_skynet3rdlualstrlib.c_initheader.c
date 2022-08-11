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
typedef  int /*<<< orphan*/  lua_State ;
struct TYPE_5__ {int /*<<< orphan*/  little; } ;
struct TYPE_4__ {int maxalign; int /*<<< orphan*/  islittle; int /*<<< orphan*/ * L; } ;
typedef  TYPE_1__ Header ;

/* Variables and functions */
 TYPE_2__ nativeendian ; 

__attribute__((used)) static void initheader (lua_State *L, Header *h) {
  h->L = L;
  h->islittle = nativeendian.little;
  h->maxalign = 1;
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
          int _len_L0 = 1;
          int * L = (int *) malloc(_len_L0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_L0; _i0++) {
            L[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h0 = 1;
          struct TYPE_4__ * h = (struct TYPE_4__ *) malloc(_len_h0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].maxalign = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].islittle = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__L0 = 1;
          h[_i0].L = (int *) malloc(_len_h__i0__L0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__L0; _j0++) {
            h[_i0].L[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          initheader(L,h);
          free(L);
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].L);
          }
          free(h);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_L0 = 65025;
          int * L = (int *) malloc(_len_L0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_L0; _i0++) {
            L[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h0 = 65025;
          struct TYPE_4__ * h = (struct TYPE_4__ *) malloc(_len_h0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].maxalign = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].islittle = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__L0 = 1;
          h[_i0].L = (int *) malloc(_len_h__i0__L0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__L0; _j0++) {
            h[_i0].L[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          initheader(L,h);
          free(L);
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].L);
          }
          free(h);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_L0 = 100;
          int * L = (int *) malloc(_len_L0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_L0; _i0++) {
            L[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h0 = 100;
          struct TYPE_4__ * h = (struct TYPE_4__ *) malloc(_len_h0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].maxalign = ((-2 * (next_i()%2)) + 1) * next_i();
        h[_i0].islittle = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__L0 = 1;
          h[_i0].L = (int *) malloc(_len_h__i0__L0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__L0; _j0++) {
            h[_i0].L[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          initheader(L,h);
          free(L);
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].L);
          }
          free(h);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
