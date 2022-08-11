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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {scalar_t__ level; int /*<<< orphan*/  condition_cnt; int /*<<< orphan*/  max_current; int /*<<< orphan*/  test_delta_i; int /*<<< orphan*/  current_iset; int /*<<< orphan*/  original_iset; } ;
struct abx500_chargalg {TYPE_4__ ccm; TYPE_3__* bm; } ;
struct TYPE_7__ {size_t batt_id; TYPE_2__* maxi; TYPE_1__* bat_type; } ;
struct TYPE_6__ {int /*<<< orphan*/  wait_cycles; int /*<<< orphan*/  chg_curr; int /*<<< orphan*/  charger_curr_step; } ;
struct TYPE_5__ {int /*<<< orphan*/  normal_cur_lvl; } ;

/* Variables and functions */

__attribute__((used)) static void init_maxim_chg_curr(struct abx500_chargalg *di)
{
	di->ccm.original_iset =
		di->bm->bat_type[di->bm->batt_id].normal_cur_lvl;
	di->ccm.current_iset =
		di->bm->bat_type[di->bm->batt_id].normal_cur_lvl;
	di->ccm.test_delta_i = di->bm->maxi->charger_curr_step;
	di->ccm.max_current = di->bm->maxi->chg_curr;
	di->ccm.condition_cnt = di->bm->maxi->wait_cycles;
	di->ccm.level = 0;
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
          int _len_di0 = 1;
          struct abx500_chargalg * di = (struct abx500_chargalg *) malloc(_len_di0*sizeof(struct abx500_chargalg));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
            di[_i0].ccm.level = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].ccm.condition_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].ccm.max_current = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].ccm.test_delta_i = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].ccm.current_iset = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].ccm.original_iset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_di__i0__bm0 = 1;
          di[_i0].bm = (struct TYPE_7__ *) malloc(_len_di__i0__bm0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_di__i0__bm0; _j0++) {
            di[_i0].bm->batt_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_di__i0__bm_maxi0 = 1;
          di[_i0].bm->maxi = (struct TYPE_6__ *) malloc(_len_di__i0__bm_maxi0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_di__i0__bm_maxi0; _j0++) {
            di[_i0].bm->maxi->wait_cycles = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].bm->maxi->chg_curr = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].bm->maxi->charger_curr_step = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_di__i0__bm_bat_type0 = 1;
          di[_i0].bm->bat_type = (struct TYPE_5__ *) malloc(_len_di__i0__bm_bat_type0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_di__i0__bm_bat_type0; _j0++) {
            di[_i0].bm->bat_type->normal_cur_lvl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          init_maxim_chg_curr(di);
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].bm);
          }
          free(di);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_di0 = 65025;
          struct abx500_chargalg * di = (struct abx500_chargalg *) malloc(_len_di0*sizeof(struct abx500_chargalg));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
            di[_i0].ccm.level = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].ccm.condition_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].ccm.max_current = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].ccm.test_delta_i = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].ccm.current_iset = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].ccm.original_iset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_di__i0__bm0 = 1;
          di[_i0].bm = (struct TYPE_7__ *) malloc(_len_di__i0__bm0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_di__i0__bm0; _j0++) {
            di[_i0].bm->batt_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_di__i0__bm_maxi0 = 1;
          di[_i0].bm->maxi = (struct TYPE_6__ *) malloc(_len_di__i0__bm_maxi0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_di__i0__bm_maxi0; _j0++) {
            di[_i0].bm->maxi->wait_cycles = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].bm->maxi->chg_curr = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].bm->maxi->charger_curr_step = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_di__i0__bm_bat_type0 = 1;
          di[_i0].bm->bat_type = (struct TYPE_5__ *) malloc(_len_di__i0__bm_bat_type0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_di__i0__bm_bat_type0; _j0++) {
            di[_i0].bm->bat_type->normal_cur_lvl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          init_maxim_chg_curr(di);
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].bm);
          }
          free(di);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_di0 = 100;
          struct abx500_chargalg * di = (struct abx500_chargalg *) malloc(_len_di0*sizeof(struct abx500_chargalg));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
            di[_i0].ccm.level = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].ccm.condition_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].ccm.max_current = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].ccm.test_delta_i = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].ccm.current_iset = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].ccm.original_iset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_di__i0__bm0 = 1;
          di[_i0].bm = (struct TYPE_7__ *) malloc(_len_di__i0__bm0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_di__i0__bm0; _j0++) {
            di[_i0].bm->batt_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_di__i0__bm_maxi0 = 1;
          di[_i0].bm->maxi = (struct TYPE_6__ *) malloc(_len_di__i0__bm_maxi0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_di__i0__bm_maxi0; _j0++) {
            di[_i0].bm->maxi->wait_cycles = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].bm->maxi->chg_curr = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].bm->maxi->charger_curr_step = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_di__i0__bm_bat_type0 = 1;
          di[_i0].bm->bat_type = (struct TYPE_5__ *) malloc(_len_di__i0__bm_bat_type0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_di__i0__bm_bat_type0; _j0++) {
            di[_i0].bm->bat_type->normal_cur_lvl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          init_maxim_chg_curr(di);
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].bm);
          }
          free(di);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
