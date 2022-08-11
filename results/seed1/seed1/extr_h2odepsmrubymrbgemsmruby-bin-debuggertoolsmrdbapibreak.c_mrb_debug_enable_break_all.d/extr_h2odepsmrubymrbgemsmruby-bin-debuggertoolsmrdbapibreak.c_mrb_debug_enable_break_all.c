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
typedef  size_t uint32_t ;
typedef  int /*<<< orphan*/  mrb_state ;
struct TYPE_5__ {size_t bpnum; TYPE_1__* bp; } ;
typedef  TYPE_2__ mrb_debug_context ;
typedef  int /*<<< orphan*/  int32_t ;
struct TYPE_4__ {int /*<<< orphan*/  enable; } ;

/* Variables and functions */
 int /*<<< orphan*/  MRB_DEBUG_INVALID_ARGUMENT ; 
 int /*<<< orphan*/  MRB_DEBUG_OK ; 
 int /*<<< orphan*/  TRUE ; 

int32_t
mrb_debug_enable_break_all(mrb_state *mrb, mrb_debug_context *dbg)
{
  uint32_t i;

  if ((mrb == NULL) || (dbg == NULL)) {
    return MRB_DEBUG_INVALID_ARGUMENT;
  }

  for(i = 0 ; i < dbg->bpnum; i++) {
    dbg->bp[i].enable = TRUE;
  }

  return MRB_DEBUG_OK;
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
          int _len_mrb0 = 1;
          int * mrb = (int *) malloc(_len_mrb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mrb0; _i0++) {
            mrb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dbg0 = 1;
          struct TYPE_5__ * dbg = (struct TYPE_5__ *) malloc(_len_dbg0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_dbg0; _i0++) {
            dbg[_i0].bpnum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dbg__i0__bp0 = 1;
          dbg[_i0].bp = (struct TYPE_4__ *) malloc(_len_dbg__i0__bp0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dbg__i0__bp0; _j0++) {
            dbg[_i0].bp->enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mrb_debug_enable_break_all(mrb,dbg);
          printf("%d\n", benchRet); 
          free(mrb);
          for(int _aux = 0; _aux < _len_dbg0; _aux++) {
          free(dbg[_aux].bp);
          }
          free(dbg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mrb0 = 65025;
          int * mrb = (int *) malloc(_len_mrb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mrb0; _i0++) {
            mrb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dbg0 = 65025;
          struct TYPE_5__ * dbg = (struct TYPE_5__ *) malloc(_len_dbg0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_dbg0; _i0++) {
            dbg[_i0].bpnum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dbg__i0__bp0 = 1;
          dbg[_i0].bp = (struct TYPE_4__ *) malloc(_len_dbg__i0__bp0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dbg__i0__bp0; _j0++) {
            dbg[_i0].bp->enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mrb_debug_enable_break_all(mrb,dbg);
          printf("%d\n", benchRet); 
          free(mrb);
          for(int _aux = 0; _aux < _len_dbg0; _aux++) {
          free(dbg[_aux].bp);
          }
          free(dbg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mrb0 = 100;
          int * mrb = (int *) malloc(_len_mrb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mrb0; _i0++) {
            mrb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dbg0 = 100;
          struct TYPE_5__ * dbg = (struct TYPE_5__ *) malloc(_len_dbg0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_dbg0; _i0++) {
            dbg[_i0].bpnum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dbg__i0__bp0 = 1;
          dbg[_i0].bp = (struct TYPE_4__ *) malloc(_len_dbg__i0__bp0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dbg__i0__bp0; _j0++) {
            dbg[_i0].bp->enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mrb_debug_enable_break_all(mrb,dbg);
          printf("%d\n", benchRet); 
          free(mrb);
          for(int _aux = 0; _aux < _len_dbg0; _aux++) {
          free(dbg[_aux].bp);
          }
          free(dbg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
