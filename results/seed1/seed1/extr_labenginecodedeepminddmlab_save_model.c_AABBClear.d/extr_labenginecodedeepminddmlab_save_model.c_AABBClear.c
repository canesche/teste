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
struct TYPE_3__ {int* extents; scalar_t__* origin; } ;
typedef  TYPE_1__ aabb_t ;

/* Variables and functions */

__attribute__((used)) static void AABBClear(aabb_t *aabb) {
  aabb->origin[0] = aabb->origin[1] = aabb->origin[2] = 0;
  aabb->extents[0] = aabb->extents[1] = aabb->extents[2] = -1;
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
          int _len_aabb0 = 1;
          struct TYPE_3__ * aabb = (struct TYPE_3__ *) malloc(_len_aabb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_aabb0; _i0++) {
              int _len_aabb__i0__extents0 = 1;
          aabb[_i0].extents = (int *) malloc(_len_aabb__i0__extents0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_aabb__i0__extents0; _j0++) {
            aabb[_i0].extents[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aabb__i0__origin0 = 1;
          aabb[_i0].origin = (long *) malloc(_len_aabb__i0__origin0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_aabb__i0__origin0; _j0++) {
            aabb[_i0].origin[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          AABBClear(aabb);
          for(int _aux = 0; _aux < _len_aabb0; _aux++) {
          free(aabb[_aux].extents);
          }
          for(int _aux = 0; _aux < _len_aabb0; _aux++) {
          free(aabb[_aux].origin);
          }
          free(aabb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_aabb0 = 65025;
          struct TYPE_3__ * aabb = (struct TYPE_3__ *) malloc(_len_aabb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_aabb0; _i0++) {
              int _len_aabb__i0__extents0 = 1;
          aabb[_i0].extents = (int *) malloc(_len_aabb__i0__extents0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_aabb__i0__extents0; _j0++) {
            aabb[_i0].extents[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aabb__i0__origin0 = 1;
          aabb[_i0].origin = (long *) malloc(_len_aabb__i0__origin0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_aabb__i0__origin0; _j0++) {
            aabb[_i0].origin[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          AABBClear(aabb);
          for(int _aux = 0; _aux < _len_aabb0; _aux++) {
          free(aabb[_aux].extents);
          }
          for(int _aux = 0; _aux < _len_aabb0; _aux++) {
          free(aabb[_aux].origin);
          }
          free(aabb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_aabb0 = 100;
          struct TYPE_3__ * aabb = (struct TYPE_3__ *) malloc(_len_aabb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_aabb0; _i0++) {
              int _len_aabb__i0__extents0 = 1;
          aabb[_i0].extents = (int *) malloc(_len_aabb__i0__extents0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_aabb__i0__extents0; _j0++) {
            aabb[_i0].extents[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aabb__i0__origin0 = 1;
          aabb[_i0].origin = (long *) malloc(_len_aabb__i0__origin0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_aabb__i0__origin0; _j0++) {
            aabb[_i0].origin[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          AABBClear(aabb);
          for(int _aux = 0; _aux < _len_aabb0; _aux++) {
          free(aabb[_aux].extents);
          }
          for(int _aux = 0; _aux < _len_aabb0; _aux++) {
          free(aabb[_aux].origin);
          }
          free(aabb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
