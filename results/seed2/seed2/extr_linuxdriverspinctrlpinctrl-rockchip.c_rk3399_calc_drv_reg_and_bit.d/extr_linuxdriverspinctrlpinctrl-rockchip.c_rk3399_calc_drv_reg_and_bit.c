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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct rockchip_pinctrl {struct regmap* regmap_base; struct regmap* regmap_pmu; } ;
struct rockchip_pin_bank {int bank_num; TYPE_1__* drv; struct rockchip_pinctrl* drvdata; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int offset; scalar_t__ drv_type; } ;

/* Variables and functions */
 scalar_t__ DRV_TYPE_IO_1V8_3V0_AUTO ; 
 scalar_t__ DRV_TYPE_IO_3V3_ONLY ; 

__attribute__((used)) static void rk3399_calc_drv_reg_and_bit(struct rockchip_pin_bank *bank,
					int pin_num, struct regmap **regmap,
					int *reg, u8 *bit)
{
	struct rockchip_pinctrl *info = bank->drvdata;
	int drv_num = (pin_num / 8);

	/*  The bank0:16 and bank1:32 pins are located in PMU */
	if ((bank->bank_num == 0) || (bank->bank_num == 1))
		*regmap = info->regmap_pmu;
	else
		*regmap = info->regmap_base;

	*reg = bank->drv[drv_num].offset;
	if ((bank->drv[drv_num].drv_type == DRV_TYPE_IO_1V8_3V0_AUTO) ||
	    (bank->drv[drv_num].drv_type == DRV_TYPE_IO_3V3_ONLY))
		*bit = (pin_num % 8) * 3;
	else
		*bit = (pin_num % 8) * 2;
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
          int pin_num = 100;
          int _len_bank0 = 1;
          struct rockchip_pin_bank * bank = (struct rockchip_pin_bank *) malloc(_len_bank0*sizeof(struct rockchip_pin_bank));
          for(int _i0 = 0; _i0 < _len_bank0; _i0++) {
            bank[_i0].bank_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bank__i0__drv0 = 1;
          bank[_i0].drv = (struct TYPE_2__ *) malloc(_len_bank__i0__drv0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_bank__i0__drv0; _j0++) {
            bank[_i0].drv->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        bank[_i0].drv->drv_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bank__i0__drvdata0 = 1;
          bank[_i0].drvdata = (struct rockchip_pinctrl *) malloc(_len_bank__i0__drvdata0*sizeof(struct rockchip_pinctrl));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata0; _j0++) {
              int _len_bank__i0__drvdata_regmap_base0 = 1;
          bank[_i0].drvdata->regmap_base = (struct regmap *) malloc(_len_bank__i0__drvdata_regmap_base0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata_regmap_base0; _j0++) {
            bank[_i0].drvdata->regmap_base->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bank__i0__drvdata_regmap_pmu0 = 1;
          bank[_i0].drvdata->regmap_pmu = (struct regmap *) malloc(_len_bank__i0__drvdata_regmap_pmu0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata_regmap_pmu0; _j0++) {
            bank[_i0].drvdata->regmap_pmu->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_regmap0 = 1;
          struct regmap ** regmap = (struct regmap **) malloc(_len_regmap0*sizeof(struct regmap *));
          for(int _i0 = 0; _i0 < _len_regmap0; _i0++) {
            int _len_regmap1 = 1;
            regmap[_i0] = (struct regmap *) malloc(_len_regmap1*sizeof(struct regmap));
            for(int _i1 = 0; _i1 < _len_regmap1; _i1++) {
              regmap[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_reg0 = 1;
          int * reg = (int *) malloc(_len_reg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bit0 = 1;
          int * bit = (int *) malloc(_len_bit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bit0; _i0++) {
            bit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rk3399_calc_drv_reg_and_bit(bank,pin_num,regmap,reg,bit);
          for(int _aux = 0; _aux < _len_bank0; _aux++) {
          free(bank[_aux].drv);
          }
          for(int _aux = 0; _aux < _len_bank0; _aux++) {
          free(bank[_aux].drvdata);
          }
          free(bank);
          for(int i1 = 0; i1 < _len_regmap0; i1++) {
            int _len_regmap1 = 1;
              free(regmap[i1]);
          }
          free(regmap);
          free(reg);
          free(bit);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pin_num = 255;
          int _len_bank0 = 65025;
          struct rockchip_pin_bank * bank = (struct rockchip_pin_bank *) malloc(_len_bank0*sizeof(struct rockchip_pin_bank));
          for(int _i0 = 0; _i0 < _len_bank0; _i0++) {
            bank[_i0].bank_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bank__i0__drv0 = 1;
          bank[_i0].drv = (struct TYPE_2__ *) malloc(_len_bank__i0__drv0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_bank__i0__drv0; _j0++) {
            bank[_i0].drv->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        bank[_i0].drv->drv_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bank__i0__drvdata0 = 1;
          bank[_i0].drvdata = (struct rockchip_pinctrl *) malloc(_len_bank__i0__drvdata0*sizeof(struct rockchip_pinctrl));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata0; _j0++) {
              int _len_bank__i0__drvdata_regmap_base0 = 1;
          bank[_i0].drvdata->regmap_base = (struct regmap *) malloc(_len_bank__i0__drvdata_regmap_base0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata_regmap_base0; _j0++) {
            bank[_i0].drvdata->regmap_base->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bank__i0__drvdata_regmap_pmu0 = 1;
          bank[_i0].drvdata->regmap_pmu = (struct regmap *) malloc(_len_bank__i0__drvdata_regmap_pmu0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata_regmap_pmu0; _j0++) {
            bank[_i0].drvdata->regmap_pmu->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_regmap0 = 65025;
          struct regmap ** regmap = (struct regmap **) malloc(_len_regmap0*sizeof(struct regmap *));
          for(int _i0 = 0; _i0 < _len_regmap0; _i0++) {
            int _len_regmap1 = 1;
            regmap[_i0] = (struct regmap *) malloc(_len_regmap1*sizeof(struct regmap));
            for(int _i1 = 0; _i1 < _len_regmap1; _i1++) {
              regmap[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_reg0 = 65025;
          int * reg = (int *) malloc(_len_reg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bit0 = 65025;
          int * bit = (int *) malloc(_len_bit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bit0; _i0++) {
            bit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rk3399_calc_drv_reg_and_bit(bank,pin_num,regmap,reg,bit);
          for(int _aux = 0; _aux < _len_bank0; _aux++) {
          free(bank[_aux].drv);
          }
          for(int _aux = 0; _aux < _len_bank0; _aux++) {
          free(bank[_aux].drvdata);
          }
          free(bank);
          for(int i1 = 0; i1 < _len_regmap0; i1++) {
            int _len_regmap1 = 1;
              free(regmap[i1]);
          }
          free(regmap);
          free(reg);
          free(bit);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pin_num = 10;
          int _len_bank0 = 100;
          struct rockchip_pin_bank * bank = (struct rockchip_pin_bank *) malloc(_len_bank0*sizeof(struct rockchip_pin_bank));
          for(int _i0 = 0; _i0 < _len_bank0; _i0++) {
            bank[_i0].bank_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bank__i0__drv0 = 1;
          bank[_i0].drv = (struct TYPE_2__ *) malloc(_len_bank__i0__drv0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_bank__i0__drv0; _j0++) {
            bank[_i0].drv->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        bank[_i0].drv->drv_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bank__i0__drvdata0 = 1;
          bank[_i0].drvdata = (struct rockchip_pinctrl *) malloc(_len_bank__i0__drvdata0*sizeof(struct rockchip_pinctrl));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata0; _j0++) {
              int _len_bank__i0__drvdata_regmap_base0 = 1;
          bank[_i0].drvdata->regmap_base = (struct regmap *) malloc(_len_bank__i0__drvdata_regmap_base0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata_regmap_base0; _j0++) {
            bank[_i0].drvdata->regmap_base->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bank__i0__drvdata_regmap_pmu0 = 1;
          bank[_i0].drvdata->regmap_pmu = (struct regmap *) malloc(_len_bank__i0__drvdata_regmap_pmu0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata_regmap_pmu0; _j0++) {
            bank[_i0].drvdata->regmap_pmu->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_regmap0 = 100;
          struct regmap ** regmap = (struct regmap **) malloc(_len_regmap0*sizeof(struct regmap *));
          for(int _i0 = 0; _i0 < _len_regmap0; _i0++) {
            int _len_regmap1 = 1;
            regmap[_i0] = (struct regmap *) malloc(_len_regmap1*sizeof(struct regmap));
            for(int _i1 = 0; _i1 < _len_regmap1; _i1++) {
              regmap[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_reg0 = 100;
          int * reg = (int *) malloc(_len_reg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bit0 = 100;
          int * bit = (int *) malloc(_len_bit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bit0; _i0++) {
            bit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rk3399_calc_drv_reg_and_bit(bank,pin_num,regmap,reg,bit);
          for(int _aux = 0; _aux < _len_bank0; _aux++) {
          free(bank[_aux].drv);
          }
          for(int _aux = 0; _aux < _len_bank0; _aux++) {
          free(bank[_aux].drvdata);
          }
          free(bank);
          for(int i1 = 0; i1 < _len_regmap0; i1++) {
            int _len_regmap1 = 1;
              free(regmap[i1]);
          }
          free(regmap);
          free(reg);
          free(bit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
