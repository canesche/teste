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
struct dm_table {int /*<<< orphan*/ ** index; } ;
typedef  int /*<<< orphan*/  sector_t ;

/* Variables and functions */
 unsigned int KEYS_PER_NODE ; 

__attribute__((used)) static inline sector_t *get_node(struct dm_table *t,
				 unsigned int l, unsigned int n)
{
	return t->index[l] + (n * KEYS_PER_NODE);
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
          unsigned int l = 100;
          unsigned int n = 100;
          int _len_t0 = 1;
          struct dm_table * t = (struct dm_table *) malloc(_len_t0*sizeof(struct dm_table));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__index0 = 1;
          t[_i0].index = (int **) malloc(_len_t__i0__index0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_t__i0__index0; _j0++) {
            int _len_t__i0__index1 = 1;
            t[_i0].index[_j0] = (int *) malloc(_len_t__i0__index1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_t__i0__index1; _j1++) {
              t[_i0].index[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = get_node(t,l,n);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(*(t[_aux].index));
        free(t[_aux].index);
          }
          free(t);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int l = 255;
          unsigned int n = 255;
          int _len_t0 = 65025;
          struct dm_table * t = (struct dm_table *) malloc(_len_t0*sizeof(struct dm_table));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__index0 = 1;
          t[_i0].index = (int **) malloc(_len_t__i0__index0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_t__i0__index0; _j0++) {
            int _len_t__i0__index1 = 1;
            t[_i0].index[_j0] = (int *) malloc(_len_t__i0__index1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_t__i0__index1; _j1++) {
              t[_i0].index[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = get_node(t,l,n);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(*(t[_aux].index));
        free(t[_aux].index);
          }
          free(t);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int l = 10;
          unsigned int n = 10;
          int _len_t0 = 100;
          struct dm_table * t = (struct dm_table *) malloc(_len_t0*sizeof(struct dm_table));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__index0 = 1;
          t[_i0].index = (int **) malloc(_len_t__i0__index0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_t__i0__index0; _j0++) {
            int _len_t__i0__index1 = 1;
            t[_i0].index[_j0] = (int *) malloc(_len_t__i0__index1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_t__i0__index1; _j1++) {
              t[_i0].index[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = get_node(t,l,n);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(*(t[_aux].index));
        free(t[_aux].index);
          }
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
