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
struct gather {int /*<<< orphan*/ * methods; } ;

/* Variables and functions */
 int /*<<< orphan*/  gather_do_nothing_methods ; 

void merge_terminate_gather (struct gather *G) {
  G->methods = &gather_do_nothing_methods;
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
          int _len_G0 = 1;
          struct gather * G = (struct gather *) malloc(_len_G0*sizeof(struct gather));
          for(int _i0 = 0; _i0 < _len_G0; _i0++) {
              int _len_G__i0__methods0 = 1;
          G[_i0].methods = (int *) malloc(_len_G__i0__methods0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_G__i0__methods0; _j0++) {
            G[_i0].methods[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          merge_terminate_gather(G);
          for(int _aux = 0; _aux < _len_G0; _aux++) {
          free(G[_aux].methods);
          }
          free(G);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_G0 = 65025;
          struct gather * G = (struct gather *) malloc(_len_G0*sizeof(struct gather));
          for(int _i0 = 0; _i0 < _len_G0; _i0++) {
              int _len_G__i0__methods0 = 1;
          G[_i0].methods = (int *) malloc(_len_G__i0__methods0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_G__i0__methods0; _j0++) {
            G[_i0].methods[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          merge_terminate_gather(G);
          for(int _aux = 0; _aux < _len_G0; _aux++) {
          free(G[_aux].methods);
          }
          free(G);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_G0 = 100;
          struct gather * G = (struct gather *) malloc(_len_G0*sizeof(struct gather));
          for(int _i0 = 0; _i0 < _len_G0; _i0++) {
              int _len_G__i0__methods0 = 1;
          G[_i0].methods = (int *) malloc(_len_G__i0__methods0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_G__i0__methods0; _j0++) {
            G[_i0].methods[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          merge_terminate_gather(G);
          for(int _aux = 0; _aux < _len_G0; _aux++) {
          free(G[_aux].methods);
          }
          free(G);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
