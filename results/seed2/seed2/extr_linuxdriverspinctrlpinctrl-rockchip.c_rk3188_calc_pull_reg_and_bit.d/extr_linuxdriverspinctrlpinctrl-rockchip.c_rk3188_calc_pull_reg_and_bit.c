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
typedef  int u8 ;
struct rockchip_pinctrl {struct regmap* regmap_pull; struct regmap* regmap_base; struct regmap* regmap_pmu; } ;
struct rockchip_pin_bank {int bank_num; struct regmap* regmap_pull; struct rockchip_pinctrl* drvdata; } ;
struct regmap {int dummy; } ;

/* Variables and functions */
 int RK3188_PULL_BANK_STRIDE ; 
 int RK3188_PULL_BITS_PER_PIN ; 
 int RK3188_PULL_OFFSET ; 
 int RK3188_PULL_PINS_PER_REG ; 
 int RK3188_PULL_PMU_OFFSET ; 

__attribute__((used)) static void rk3188_calc_pull_reg_and_bit(struct rockchip_pin_bank *bank,
				    int pin_num, struct regmap **regmap,
				    int *reg, u8 *bit)
{
	struct rockchip_pinctrl *info = bank->drvdata;

	/* The first 12 pins of the first bank are located elsewhere */
	if (bank->bank_num == 0 && pin_num < 12) {
		*regmap = info->regmap_pmu ? info->regmap_pmu
					   : bank->regmap_pull;
		*reg = info->regmap_pmu ? RK3188_PULL_PMU_OFFSET : 0;
		*reg += ((pin_num / RK3188_PULL_PINS_PER_REG) * 4);
		*bit = pin_num % RK3188_PULL_PINS_PER_REG;
		*bit *= RK3188_PULL_BITS_PER_PIN;
	} else {
		*regmap = info->regmap_pull ? info->regmap_pull
					    : info->regmap_base;
		*reg = info->regmap_pull ? 0 : RK3188_PULL_OFFSET;

		/* correct the offset, as it is the 2nd pull register */
		*reg -= 4;
		*reg += bank->bank_num * RK3188_PULL_BANK_STRIDE;
		*reg += ((pin_num / RK3188_PULL_PINS_PER_REG) * 4);

		/*
		 * The bits in these registers have an inverse ordering
		 * with the lowest pin being in bits 15:14 and the highest
		 * pin in bits 1:0
		 */
		*bit = 7 - (pin_num % RK3188_PULL_PINS_PER_REG);
		*bit *= RK3188_PULL_BITS_PER_PIN;
	}
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
          int _len_bank__i0__regmap_pull0 = 1;
          bank[_i0].regmap_pull = (struct regmap *) malloc(_len_bank__i0__regmap_pull0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_bank__i0__regmap_pull0; _j0++) {
            bank[_i0].regmap_pull->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bank__i0__drvdata0 = 1;
          bank[_i0].drvdata = (struct rockchip_pinctrl *) malloc(_len_bank__i0__drvdata0*sizeof(struct rockchip_pinctrl));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata0; _j0++) {
              int _len_bank__i0__drvdata_regmap_pull0 = 1;
          bank[_i0].drvdata->regmap_pull = (struct regmap *) malloc(_len_bank__i0__drvdata_regmap_pull0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata_regmap_pull0; _j0++) {
            bank[_i0].drvdata->regmap_pull->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
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
          rk3188_calc_pull_reg_and_bit(bank,pin_num,regmap,reg,bit);
          for(int _aux = 0; _aux < _len_bank0; _aux++) {
          free(bank[_aux].regmap_pull);
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
          int _len_bank__i0__regmap_pull0 = 1;
          bank[_i0].regmap_pull = (struct regmap *) malloc(_len_bank__i0__regmap_pull0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_bank__i0__regmap_pull0; _j0++) {
            bank[_i0].regmap_pull->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bank__i0__drvdata0 = 1;
          bank[_i0].drvdata = (struct rockchip_pinctrl *) malloc(_len_bank__i0__drvdata0*sizeof(struct rockchip_pinctrl));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata0; _j0++) {
              int _len_bank__i0__drvdata_regmap_pull0 = 1;
          bank[_i0].drvdata->regmap_pull = (struct regmap *) malloc(_len_bank__i0__drvdata_regmap_pull0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata_regmap_pull0; _j0++) {
            bank[_i0].drvdata->regmap_pull->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
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
          rk3188_calc_pull_reg_and_bit(bank,pin_num,regmap,reg,bit);
          for(int _aux = 0; _aux < _len_bank0; _aux++) {
          free(bank[_aux].regmap_pull);
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
          int _len_bank__i0__regmap_pull0 = 1;
          bank[_i0].regmap_pull = (struct regmap *) malloc(_len_bank__i0__regmap_pull0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_bank__i0__regmap_pull0; _j0++) {
            bank[_i0].regmap_pull->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bank__i0__drvdata0 = 1;
          bank[_i0].drvdata = (struct rockchip_pinctrl *) malloc(_len_bank__i0__drvdata0*sizeof(struct rockchip_pinctrl));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata0; _j0++) {
              int _len_bank__i0__drvdata_regmap_pull0 = 1;
          bank[_i0].drvdata->regmap_pull = (struct regmap *) malloc(_len_bank__i0__drvdata_regmap_pull0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_bank__i0__drvdata_regmap_pull0; _j0++) {
            bank[_i0].drvdata->regmap_pull->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
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
          rk3188_calc_pull_reg_and_bit(bank,pin_num,regmap,reg,bit);
          for(int _aux = 0; _aux < _len_bank0; _aux++) {
          free(bank[_aux].regmap_pull);
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
