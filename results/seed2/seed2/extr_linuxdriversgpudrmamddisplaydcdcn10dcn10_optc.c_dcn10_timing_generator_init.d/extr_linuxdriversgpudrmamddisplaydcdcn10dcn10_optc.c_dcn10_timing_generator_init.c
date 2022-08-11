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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/ * funcs; } ;
struct optc {int min_h_blank; int min_v_blank; int min_v_blank_interlace; int min_h_sync_width; int min_v_sync_width; TYPE_2__* tg_mask; scalar_t__ max_v_total; scalar_t__ max_h_total; TYPE_1__ base; } ;
struct TYPE_4__ {scalar_t__ OTG_V_TOTAL; scalar_t__ OTG_H_TOTAL; } ;

/* Variables and functions */
 int /*<<< orphan*/  dcn10_tg_funcs ; 

void dcn10_timing_generator_init(struct optc *optc1)
{
	optc1->base.funcs = &dcn10_tg_funcs;

	optc1->max_h_total = optc1->tg_mask->OTG_H_TOTAL + 1;
	optc1->max_v_total = optc1->tg_mask->OTG_V_TOTAL + 1;

	optc1->min_h_blank = 32;
	optc1->min_v_blank = 3;
	optc1->min_v_blank_interlace = 5;
	optc1->min_h_sync_width = 8;
	optc1->min_v_sync_width = 1;
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
          int _len_optc10 = 1;
          struct optc * optc1 = (struct optc *) malloc(_len_optc10*sizeof(struct optc));
          for(int _i0 = 0; _i0 < _len_optc10; _i0++) {
            optc1[_i0].min_h_blank = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].min_v_blank = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].min_v_blank_interlace = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].min_h_sync_width = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].min_v_sync_width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_optc1__i0__tg_mask0 = 1;
          optc1[_i0].tg_mask = (struct TYPE_4__ *) malloc(_len_optc1__i0__tg_mask0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_optc1__i0__tg_mask0; _j0++) {
            optc1[_i0].tg_mask->OTG_V_TOTAL = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].tg_mask->OTG_H_TOTAL = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        optc1[_i0].max_v_total = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].max_h_total = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_optc1__i0__base_funcs0 = 1;
          optc1[_i0].base.funcs = (int *) malloc(_len_optc1__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_optc1__i0__base_funcs0; _j0++) {
            optc1[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dcn10_timing_generator_init(optc1);
          for(int _aux = 0; _aux < _len_optc10; _aux++) {
          free(optc1[_aux].tg_mask);
          }
          free(optc1);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_optc10 = 65025;
          struct optc * optc1 = (struct optc *) malloc(_len_optc10*sizeof(struct optc));
          for(int _i0 = 0; _i0 < _len_optc10; _i0++) {
            optc1[_i0].min_h_blank = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].min_v_blank = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].min_v_blank_interlace = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].min_h_sync_width = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].min_v_sync_width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_optc1__i0__tg_mask0 = 1;
          optc1[_i0].tg_mask = (struct TYPE_4__ *) malloc(_len_optc1__i0__tg_mask0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_optc1__i0__tg_mask0; _j0++) {
            optc1[_i0].tg_mask->OTG_V_TOTAL = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].tg_mask->OTG_H_TOTAL = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        optc1[_i0].max_v_total = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].max_h_total = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_optc1__i0__base_funcs0 = 1;
          optc1[_i0].base.funcs = (int *) malloc(_len_optc1__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_optc1__i0__base_funcs0; _j0++) {
            optc1[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dcn10_timing_generator_init(optc1);
          for(int _aux = 0; _aux < _len_optc10; _aux++) {
          free(optc1[_aux].tg_mask);
          }
          free(optc1);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_optc10 = 100;
          struct optc * optc1 = (struct optc *) malloc(_len_optc10*sizeof(struct optc));
          for(int _i0 = 0; _i0 < _len_optc10; _i0++) {
            optc1[_i0].min_h_blank = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].min_v_blank = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].min_v_blank_interlace = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].min_h_sync_width = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].min_v_sync_width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_optc1__i0__tg_mask0 = 1;
          optc1[_i0].tg_mask = (struct TYPE_4__ *) malloc(_len_optc1__i0__tg_mask0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_optc1__i0__tg_mask0; _j0++) {
            optc1[_i0].tg_mask->OTG_V_TOTAL = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].tg_mask->OTG_H_TOTAL = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        optc1[_i0].max_v_total = ((-2 * (next_i()%2)) + 1) * next_i();
        optc1[_i0].max_h_total = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_optc1__i0__base_funcs0 = 1;
          optc1[_i0].base.funcs = (int *) malloc(_len_optc1__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_optc1__i0__base_funcs0; _j0++) {
            optc1[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dcn10_timing_generator_init(optc1);
          for(int _aux = 0; _aux < _len_optc10; _aux++) {
          free(optc1[_aux].tg_mask);
          }
          free(optc1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
