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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int* table; int* trans; } ;
typedef  TYPE_1__ TINF_TREE ;

/* Variables and functions */

__attribute__((used)) static void tinf_build_fixed_trees(TINF_TREE *lt, TINF_TREE *dt)
{
   int i;

   /* build fixed length tree */
   for (i = 0; i < 7; ++i) lt->table[i] = 0;

   lt->table[7] = 24;
   lt->table[8] = 152;
   lt->table[9] = 112;

   for (i = 0; i < 24; ++i) lt->trans[i] = 256 + i;
   for (i = 0; i < 144; ++i) lt->trans[24 + i] = i;
   for (i = 0; i < 8; ++i) lt->trans[24 + 144 + i] = 280 + i;
   for (i = 0; i < 112; ++i) lt->trans[24 + 144 + 8 + i] = 144 + i;

   /* build fixed distance tree */
   for (i = 0; i < 5; ++i) dt->table[i] = 0;

   dt->table[5] = 32;

   for (i = 0; i < 32; ++i) dt->trans[i] = i;
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
          int _len_lt0 = 1;
          struct TYPE_4__ * lt = (struct TYPE_4__ *) malloc(_len_lt0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_lt0; _i0++) {
              int _len_lt__i0__table0 = 1;
          lt[_i0].table = (int *) malloc(_len_lt__i0__table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lt__i0__table0; _j0++) {
            lt[_i0].table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lt__i0__trans0 = 1;
          lt[_i0].trans = (int *) malloc(_len_lt__i0__trans0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lt__i0__trans0; _j0++) {
            lt[_i0].trans[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dt0 = 1;
          struct TYPE_4__ * dt = (struct TYPE_4__ *) malloc(_len_dt0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dt0; _i0++) {
              int _len_dt__i0__table0 = 1;
          dt[_i0].table = (int *) malloc(_len_dt__i0__table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dt__i0__table0; _j0++) {
            dt[_i0].table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dt__i0__trans0 = 1;
          dt[_i0].trans = (int *) malloc(_len_dt__i0__trans0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dt__i0__trans0; _j0++) {
            dt[_i0].trans[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          tinf_build_fixed_trees(lt,dt);
          for(int _aux = 0; _aux < _len_lt0; _aux++) {
          free(lt[_aux].table);
          }
          for(int _aux = 0; _aux < _len_lt0; _aux++) {
          free(lt[_aux].trans);
          }
          free(lt);
          for(int _aux = 0; _aux < _len_dt0; _aux++) {
          free(dt[_aux].table);
          }
          for(int _aux = 0; _aux < _len_dt0; _aux++) {
          free(dt[_aux].trans);
          }
          free(dt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_lt0 = 65025;
          struct TYPE_4__ * lt = (struct TYPE_4__ *) malloc(_len_lt0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_lt0; _i0++) {
              int _len_lt__i0__table0 = 1;
          lt[_i0].table = (int *) malloc(_len_lt__i0__table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lt__i0__table0; _j0++) {
            lt[_i0].table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lt__i0__trans0 = 1;
          lt[_i0].trans = (int *) malloc(_len_lt__i0__trans0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lt__i0__trans0; _j0++) {
            lt[_i0].trans[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dt0 = 65025;
          struct TYPE_4__ * dt = (struct TYPE_4__ *) malloc(_len_dt0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dt0; _i0++) {
              int _len_dt__i0__table0 = 1;
          dt[_i0].table = (int *) malloc(_len_dt__i0__table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dt__i0__table0; _j0++) {
            dt[_i0].table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dt__i0__trans0 = 1;
          dt[_i0].trans = (int *) malloc(_len_dt__i0__trans0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dt__i0__trans0; _j0++) {
            dt[_i0].trans[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          tinf_build_fixed_trees(lt,dt);
          for(int _aux = 0; _aux < _len_lt0; _aux++) {
          free(lt[_aux].table);
          }
          for(int _aux = 0; _aux < _len_lt0; _aux++) {
          free(lt[_aux].trans);
          }
          free(lt);
          for(int _aux = 0; _aux < _len_dt0; _aux++) {
          free(dt[_aux].table);
          }
          for(int _aux = 0; _aux < _len_dt0; _aux++) {
          free(dt[_aux].trans);
          }
          free(dt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_lt0 = 100;
          struct TYPE_4__ * lt = (struct TYPE_4__ *) malloc(_len_lt0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_lt0; _i0++) {
              int _len_lt__i0__table0 = 1;
          lt[_i0].table = (int *) malloc(_len_lt__i0__table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lt__i0__table0; _j0++) {
            lt[_i0].table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lt__i0__trans0 = 1;
          lt[_i0].trans = (int *) malloc(_len_lt__i0__trans0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lt__i0__trans0; _j0++) {
            lt[_i0].trans[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dt0 = 100;
          struct TYPE_4__ * dt = (struct TYPE_4__ *) malloc(_len_dt0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dt0; _i0++) {
              int _len_dt__i0__table0 = 1;
          dt[_i0].table = (int *) malloc(_len_dt__i0__table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dt__i0__table0; _j0++) {
            dt[_i0].table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dt__i0__trans0 = 1;
          dt[_i0].trans = (int *) malloc(_len_dt__i0__trans0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dt__i0__trans0; _j0++) {
            dt[_i0].trans[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          tinf_build_fixed_trees(lt,dt);
          for(int _aux = 0; _aux < _len_lt0; _aux++) {
          free(lt[_aux].table);
          }
          for(int _aux = 0; _aux < _len_lt0; _aux++) {
          free(lt[_aux].trans);
          }
          free(lt);
          for(int _aux = 0; _aux < _len_dt0; _aux++) {
          free(dt[_aux].table);
          }
          for(int _aux = 0; _aux < _len_dt0; _aux++) {
          free(dt[_aux].trans);
          }
          free(dt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
