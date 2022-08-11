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
       3            linked\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct regulator_init_data {int dummy; } ;
struct lp872x_platform_data {TYPE_1__* regulator_data; } ;
struct lp872x {int num_regulators; struct lp872x_platform_data* pdata; } ;
struct TYPE_2__ {int id; struct regulator_init_data* init_data; } ;

/* Variables and functions */

__attribute__((used)) static struct regulator_init_data
*lp872x_find_regulator_init_data(int id, struct lp872x *lp)
{
	struct lp872x_platform_data *pdata = lp->pdata;
	int i;

	if (!pdata)
		return NULL;

	for (i = 0; i < lp->num_regulators; i++) {
		if (pdata->regulator_data[i].id == id)
			return pdata->regulator_data[i].init_data;
	}

	return NULL;
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
          int id = 100;
          int _len_lp0 = 1;
          struct lp872x * lp = (struct lp872x *) malloc(_len_lp0*sizeof(struct lp872x));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].num_regulators = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lp__i0__pdata0 = 1;
          lp[_i0].pdata = (struct lp872x_platform_data *) malloc(_len_lp__i0__pdata0*sizeof(struct lp872x_platform_data));
          for(int _j0 = 0; _j0 < _len_lp__i0__pdata0; _j0++) {
              int _len_lp__i0__pdata_regulator_data0 = 1;
          lp[_i0].pdata->regulator_data = (struct TYPE_2__ *) malloc(_len_lp__i0__pdata_regulator_data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_lp__i0__pdata_regulator_data0; _j0++) {
            lp[_i0].pdata->regulator_data->id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lp__i0__pdata_regulator_data_init_data0 = 1;
          lp[_i0].pdata->regulator_data->init_data = (struct regulator_init_data *) malloc(_len_lp__i0__pdata_regulator_data_init_data0*sizeof(struct regulator_init_data));
          for(int _j0 = 0; _j0 < _len_lp__i0__pdata_regulator_data_init_data0; _j0++) {
            lp[_i0].pdata->regulator_data->init_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct regulator_init_data * benchRet = lp872x_find_regulator_init_data(id,lp);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_lp0; _aux++) {
          free(lp[_aux].pdata);
          }
          free(lp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          int _len_lp0 = 65025;
          struct lp872x * lp = (struct lp872x *) malloc(_len_lp0*sizeof(struct lp872x));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].num_regulators = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lp__i0__pdata0 = 1;
          lp[_i0].pdata = (struct lp872x_platform_data *) malloc(_len_lp__i0__pdata0*sizeof(struct lp872x_platform_data));
          for(int _j0 = 0; _j0 < _len_lp__i0__pdata0; _j0++) {
              int _len_lp__i0__pdata_regulator_data0 = 1;
          lp[_i0].pdata->regulator_data = (struct TYPE_2__ *) malloc(_len_lp__i0__pdata_regulator_data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_lp__i0__pdata_regulator_data0; _j0++) {
            lp[_i0].pdata->regulator_data->id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lp__i0__pdata_regulator_data_init_data0 = 1;
          lp[_i0].pdata->regulator_data->init_data = (struct regulator_init_data *) malloc(_len_lp__i0__pdata_regulator_data_init_data0*sizeof(struct regulator_init_data));
          for(int _j0 = 0; _j0 < _len_lp__i0__pdata_regulator_data_init_data0; _j0++) {
            lp[_i0].pdata->regulator_data->init_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct regulator_init_data * benchRet = lp872x_find_regulator_init_data(id,lp);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_lp0; _aux++) {
          free(lp[_aux].pdata);
          }
          free(lp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          int _len_lp0 = 100;
          struct lp872x * lp = (struct lp872x *) malloc(_len_lp0*sizeof(struct lp872x));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].num_regulators = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lp__i0__pdata0 = 1;
          lp[_i0].pdata = (struct lp872x_platform_data *) malloc(_len_lp__i0__pdata0*sizeof(struct lp872x_platform_data));
          for(int _j0 = 0; _j0 < _len_lp__i0__pdata0; _j0++) {
              int _len_lp__i0__pdata_regulator_data0 = 1;
          lp[_i0].pdata->regulator_data = (struct TYPE_2__ *) malloc(_len_lp__i0__pdata_regulator_data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_lp__i0__pdata_regulator_data0; _j0++) {
            lp[_i0].pdata->regulator_data->id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lp__i0__pdata_regulator_data_init_data0 = 1;
          lp[_i0].pdata->regulator_data->init_data = (struct regulator_init_data *) malloc(_len_lp__i0__pdata_regulator_data_init_data0*sizeof(struct regulator_init_data));
          for(int _j0 = 0; _j0 < _len_lp__i0__pdata_regulator_data_init_data0; _j0++) {
            lp[_i0].pdata->regulator_data->init_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct regulator_init_data * benchRet = lp872x_find_regulator_init_data(id,lp);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_lp0; _aux++) {
          free(lp[_aux].pdata);
          }
          free(lp);
        
        break;
    }
    // linked
    case 3:
    {
          int id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lp0 = 1;
          struct lp872x * lp = (struct lp872x *) malloc(_len_lp0*sizeof(struct lp872x));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].num_regulators = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lp__i0__pdata0 = 1;
          lp[_i0].pdata = (struct lp872x_platform_data *) malloc(_len_lp__i0__pdata0*sizeof(struct lp872x_platform_data));
          for(int _j0 = 0; _j0 < _len_lp__i0__pdata0; _j0++) {
              int _len_lp__i0__pdata_regulator_data0 = 1;
          lp[_i0].pdata->regulator_data = (struct TYPE_2__ *) malloc(_len_lp__i0__pdata_regulator_data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_lp__i0__pdata_regulator_data0; _j0++) {
            lp[_i0].pdata->regulator_data->id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lp__i0__pdata_regulator_data_init_data0 = 1;
          lp[_i0].pdata->regulator_data->init_data = (struct regulator_init_data *) malloc(_len_lp__i0__pdata_regulator_data_init_data0*sizeof(struct regulator_init_data));
          for(int _j0 = 0; _j0 < _len_lp__i0__pdata_regulator_data_init_data0; _j0++) {
            lp[_i0].pdata->regulator_data->init_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct regulator_init_data * benchRet = lp872x_find_regulator_init_data(id,lp);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_lp0; _aux++) {
          free(lp[_aux].pdata);
          }
          free(lp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
