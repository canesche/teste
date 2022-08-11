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
typedef  struct TYPE_5__   TYPE_3__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/ * root; int /*<<< orphan*/  DA; int /*<<< orphan*/  IA; int /*<<< orphan*/  N; } ;
typedef  TYPE_1__ listree_xglobal_t ;
struct TYPE_5__ {int /*<<< orphan*/  g_tree; } ;

/* Variables and functions */
 TYPE_3__* M_List ; 
 int /*<<< orphan*/  M_global_id_list ; 
 int /*<<< orphan*/  M_sorted_global_id_list ; 
 int /*<<< orphan*/  M_tot_entries ; 

__attribute__((used)) static inline void load_g_tree (listree_xglobal_t *LX) {
  LX->N = M_tot_entries;
  LX->IA = M_sorted_global_id_list;
  LX->DA = M_global_id_list;
  LX->root = &M_List->g_tree;
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
          int _len_LX0 = 1;
          struct TYPE_4__ * LX = (struct TYPE_4__ *) malloc(_len_LX0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_LX0; _i0++) {
              int _len_LX__i0__root0 = 1;
          LX[_i0].root = (int *) malloc(_len_LX__i0__root0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_LX__i0__root0; _j0++) {
            LX[_i0].root[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        LX[_i0].DA = ((-2 * (next_i()%2)) + 1) * next_i();
        LX[_i0].IA = ((-2 * (next_i()%2)) + 1) * next_i();
        LX[_i0].N = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          load_g_tree(LX);
          for(int _aux = 0; _aux < _len_LX0; _aux++) {
          free(LX[_aux].root);
          }
          free(LX);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_LX0 = 65025;
          struct TYPE_4__ * LX = (struct TYPE_4__ *) malloc(_len_LX0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_LX0; _i0++) {
              int _len_LX__i0__root0 = 1;
          LX[_i0].root = (int *) malloc(_len_LX__i0__root0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_LX__i0__root0; _j0++) {
            LX[_i0].root[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        LX[_i0].DA = ((-2 * (next_i()%2)) + 1) * next_i();
        LX[_i0].IA = ((-2 * (next_i()%2)) + 1) * next_i();
        LX[_i0].N = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          load_g_tree(LX);
          for(int _aux = 0; _aux < _len_LX0; _aux++) {
          free(LX[_aux].root);
          }
          free(LX);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_LX0 = 100;
          struct TYPE_4__ * LX = (struct TYPE_4__ *) malloc(_len_LX0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_LX0; _i0++) {
              int _len_LX__i0__root0 = 1;
          LX[_i0].root = (int *) malloc(_len_LX__i0__root0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_LX__i0__root0; _j0++) {
            LX[_i0].root[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        LX[_i0].DA = ((-2 * (next_i()%2)) + 1) * next_i();
        LX[_i0].IA = ((-2 * (next_i()%2)) + 1) * next_i();
        LX[_i0].N = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          load_g_tree(LX);
          for(int _aux = 0; _aux < _len_LX0; _aux++) {
          free(LX[_aux].root);
          }
          free(LX);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
