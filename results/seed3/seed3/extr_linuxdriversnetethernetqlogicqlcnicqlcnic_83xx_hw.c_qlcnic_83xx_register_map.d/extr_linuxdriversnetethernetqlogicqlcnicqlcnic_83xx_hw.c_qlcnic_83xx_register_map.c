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
typedef  int /*<<< orphan*/  u32 ;
struct qlcnic_hardware_context {int /*<<< orphan*/ * ext_reg_tbl; int /*<<< orphan*/ * reg_tbl; int /*<<< orphan*/ * hw_ops; } ;

/* Variables and functions */
 scalar_t__ qlcnic_83xx_ext_reg_tbl ; 
 int /*<<< orphan*/  qlcnic_83xx_hw_ops ; 
 scalar_t__ qlcnic_83xx_reg_tbl ; 

void qlcnic_83xx_register_map(struct qlcnic_hardware_context *ahw)
{
	ahw->hw_ops		= &qlcnic_83xx_hw_ops;
	ahw->reg_tbl		= (u32 *)qlcnic_83xx_reg_tbl;
	ahw->ext_reg_tbl	= (u32 *)qlcnic_83xx_ext_reg_tbl;
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
          int _len_ahw0 = 1;
          struct qlcnic_hardware_context * ahw = (struct qlcnic_hardware_context *) malloc(_len_ahw0*sizeof(struct qlcnic_hardware_context));
          for(int _i0 = 0; _i0 < _len_ahw0; _i0++) {
              int _len_ahw__i0__ext_reg_tbl0 = 1;
          ahw[_i0].ext_reg_tbl = (int *) malloc(_len_ahw__i0__ext_reg_tbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ahw__i0__ext_reg_tbl0; _j0++) {
            ahw[_i0].ext_reg_tbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ahw__i0__reg_tbl0 = 1;
          ahw[_i0].reg_tbl = (int *) malloc(_len_ahw__i0__reg_tbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ahw__i0__reg_tbl0; _j0++) {
            ahw[_i0].reg_tbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ahw__i0__hw_ops0 = 1;
          ahw[_i0].hw_ops = (int *) malloc(_len_ahw__i0__hw_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ahw__i0__hw_ops0; _j0++) {
            ahw[_i0].hw_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qlcnic_83xx_register_map(ahw);
          for(int _aux = 0; _aux < _len_ahw0; _aux++) {
          free(ahw[_aux].ext_reg_tbl);
          }
          for(int _aux = 0; _aux < _len_ahw0; _aux++) {
          free(ahw[_aux].reg_tbl);
          }
          for(int _aux = 0; _aux < _len_ahw0; _aux++) {
          free(ahw[_aux].hw_ops);
          }
          free(ahw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ahw0 = 65025;
          struct qlcnic_hardware_context * ahw = (struct qlcnic_hardware_context *) malloc(_len_ahw0*sizeof(struct qlcnic_hardware_context));
          for(int _i0 = 0; _i0 < _len_ahw0; _i0++) {
              int _len_ahw__i0__ext_reg_tbl0 = 1;
          ahw[_i0].ext_reg_tbl = (int *) malloc(_len_ahw__i0__ext_reg_tbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ahw__i0__ext_reg_tbl0; _j0++) {
            ahw[_i0].ext_reg_tbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ahw__i0__reg_tbl0 = 1;
          ahw[_i0].reg_tbl = (int *) malloc(_len_ahw__i0__reg_tbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ahw__i0__reg_tbl0; _j0++) {
            ahw[_i0].reg_tbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ahw__i0__hw_ops0 = 1;
          ahw[_i0].hw_ops = (int *) malloc(_len_ahw__i0__hw_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ahw__i0__hw_ops0; _j0++) {
            ahw[_i0].hw_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qlcnic_83xx_register_map(ahw);
          for(int _aux = 0; _aux < _len_ahw0; _aux++) {
          free(ahw[_aux].ext_reg_tbl);
          }
          for(int _aux = 0; _aux < _len_ahw0; _aux++) {
          free(ahw[_aux].reg_tbl);
          }
          for(int _aux = 0; _aux < _len_ahw0; _aux++) {
          free(ahw[_aux].hw_ops);
          }
          free(ahw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ahw0 = 100;
          struct qlcnic_hardware_context * ahw = (struct qlcnic_hardware_context *) malloc(_len_ahw0*sizeof(struct qlcnic_hardware_context));
          for(int _i0 = 0; _i0 < _len_ahw0; _i0++) {
              int _len_ahw__i0__ext_reg_tbl0 = 1;
          ahw[_i0].ext_reg_tbl = (int *) malloc(_len_ahw__i0__ext_reg_tbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ahw__i0__ext_reg_tbl0; _j0++) {
            ahw[_i0].ext_reg_tbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ahw__i0__reg_tbl0 = 1;
          ahw[_i0].reg_tbl = (int *) malloc(_len_ahw__i0__reg_tbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ahw__i0__reg_tbl0; _j0++) {
            ahw[_i0].reg_tbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ahw__i0__hw_ops0 = 1;
          ahw[_i0].hw_ops = (int *) malloc(_len_ahw__i0__hw_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ahw__i0__hw_ops0; _j0++) {
            ahw[_i0].hw_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qlcnic_83xx_register_map(ahw);
          for(int _aux = 0; _aux < _len_ahw0; _aux++) {
          free(ahw[_aux].ext_reg_tbl);
          }
          for(int _aux = 0; _aux < _len_ahw0; _aux++) {
          free(ahw[_aux].reg_tbl);
          }
          for(int _aux = 0; _aux < _len_ahw0; _aux++) {
          free(ahw[_aux].hw_ops);
          }
          free(ahw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
