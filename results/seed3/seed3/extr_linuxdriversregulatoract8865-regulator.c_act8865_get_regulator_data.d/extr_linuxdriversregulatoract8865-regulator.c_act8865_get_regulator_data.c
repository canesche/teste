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
struct act8865_regulator_data {int id; } ;
struct act8865_platform_data {int num_regulators; struct act8865_regulator_data* regulators; } ;

/* Variables and functions */

__attribute__((used)) static struct act8865_regulator_data *act8865_get_regulator_data(
		int id, struct act8865_platform_data *pdata)
{
	int i;

	if (!pdata)
		return NULL;

	for (i = 0; i < pdata->num_regulators; i++) {
		if (pdata->regulators[i].id == id)
			return &pdata->regulators[i];
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
          int _len_pdata0 = 1;
          struct act8865_platform_data * pdata = (struct act8865_platform_data *) malloc(_len_pdata0*sizeof(struct act8865_platform_data));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
            pdata[_i0].num_regulators = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdata__i0__regulators0 = 1;
          pdata[_i0].regulators = (struct act8865_regulator_data *) malloc(_len_pdata__i0__regulators0*sizeof(struct act8865_regulator_data));
          for(int _j0 = 0; _j0 < _len_pdata__i0__regulators0; _j0++) {
            pdata[_i0].regulators->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct act8865_regulator_data * benchRet = act8865_get_regulator_data(id,pdata);
          printf("%d\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].regulators);
          }
          free(pdata);
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          int _len_pdata0 = 65025;
          struct act8865_platform_data * pdata = (struct act8865_platform_data *) malloc(_len_pdata0*sizeof(struct act8865_platform_data));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
            pdata[_i0].num_regulators = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdata__i0__regulators0 = 1;
          pdata[_i0].regulators = (struct act8865_regulator_data *) malloc(_len_pdata__i0__regulators0*sizeof(struct act8865_regulator_data));
          for(int _j0 = 0; _j0 < _len_pdata__i0__regulators0; _j0++) {
            pdata[_i0].regulators->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct act8865_regulator_data * benchRet = act8865_get_regulator_data(id,pdata);
          printf("%d\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].regulators);
          }
          free(pdata);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          int _len_pdata0 = 100;
          struct act8865_platform_data * pdata = (struct act8865_platform_data *) malloc(_len_pdata0*sizeof(struct act8865_platform_data));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
            pdata[_i0].num_regulators = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdata__i0__regulators0 = 1;
          pdata[_i0].regulators = (struct act8865_regulator_data *) malloc(_len_pdata__i0__regulators0*sizeof(struct act8865_regulator_data));
          for(int _j0 = 0; _j0 < _len_pdata__i0__regulators0; _j0++) {
            pdata[_i0].regulators->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct act8865_regulator_data * benchRet = act8865_get_regulator_data(id,pdata);
          printf("%d\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].regulators);
          }
          free(pdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
