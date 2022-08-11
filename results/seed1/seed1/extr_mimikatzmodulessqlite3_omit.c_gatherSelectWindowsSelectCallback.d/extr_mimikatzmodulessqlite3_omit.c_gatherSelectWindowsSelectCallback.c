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
struct TYPE_4__ {int /*<<< orphan*/ * pSelect; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef  TYPE_2__ Walker ;
typedef  int /*<<< orphan*/  Select ;

/* Variables and functions */
 int WRC_Continue ; 
 int WRC_Prune ; 

__attribute__((used)) static int gatherSelectWindowsSelectCallback(Walker *pWalker, Select *p){
  return p==pWalker->u.pSelect ? WRC_Continue : WRC_Prune;
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
          int _len_pWalker0 = 1;
          struct TYPE_5__ * pWalker = (struct TYPE_5__ *) malloc(_len_pWalker0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pWalker0; _i0++) {
              int _len_pWalker__i0__u_pSelect0 = 1;
          pWalker[_i0].u.pSelect = (int *) malloc(_len_pWalker__i0__u_pSelect0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pWalker__i0__u_pSelect0; _j0++) {
            pWalker[_i0].u.pSelect[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_p0 = 1;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gatherSelectWindowsSelectCallback(pWalker,p);
          printf("%d\n", benchRet); 
          free(pWalker);
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pWalker0 = 65025;
          struct TYPE_5__ * pWalker = (struct TYPE_5__ *) malloc(_len_pWalker0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pWalker0; _i0++) {
              int _len_pWalker__i0__u_pSelect0 = 1;
          pWalker[_i0].u.pSelect = (int *) malloc(_len_pWalker__i0__u_pSelect0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pWalker__i0__u_pSelect0; _j0++) {
            pWalker[_i0].u.pSelect[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_p0 = 65025;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gatherSelectWindowsSelectCallback(pWalker,p);
          printf("%d\n", benchRet); 
          free(pWalker);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pWalker0 = 100;
          struct TYPE_5__ * pWalker = (struct TYPE_5__ *) malloc(_len_pWalker0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pWalker0; _i0++) {
              int _len_pWalker__i0__u_pSelect0 = 1;
          pWalker[_i0].u.pSelect = (int *) malloc(_len_pWalker__i0__u_pSelect0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pWalker__i0__u_pSelect0; _j0++) {
            pWalker[_i0].u.pSelect[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_p0 = 100;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gatherSelectWindowsSelectCallback(pWalker,p);
          printf("%d\n", benchRet); 
          free(pWalker);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
