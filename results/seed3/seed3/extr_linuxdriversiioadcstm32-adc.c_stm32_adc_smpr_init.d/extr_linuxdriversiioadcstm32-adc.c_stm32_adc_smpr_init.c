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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  unsigned int u32 ;
struct stm32_adc_regs {unsigned int shift; unsigned int mask; unsigned int reg; } ;
struct stm32_adc {unsigned int* smpr_val; TYPE_3__* cfg; TYPE_2__* common; } ;
struct TYPE_6__ {unsigned int* smp_cycles; TYPE_1__* regs; } ;
struct TYPE_5__ {unsigned int rate; } ;
struct TYPE_4__ {struct stm32_adc_regs* smp_bits; } ;

/* Variables and functions */
 unsigned int NSEC_PER_SEC ; 
 unsigned int STM32_ADC_MAX_SMP ; 

__attribute__((used)) static void stm32_adc_smpr_init(struct stm32_adc *adc, int channel, u32 smp_ns)
{
	const struct stm32_adc_regs *smpr = &adc->cfg->regs->smp_bits[channel];
	u32 period_ns, shift = smpr->shift, mask = smpr->mask;
	unsigned int smp, r = smpr->reg;

	/* Determine sampling time (ADC clock cycles) */
	period_ns = NSEC_PER_SEC / adc->common->rate;
	for (smp = 0; smp <= STM32_ADC_MAX_SMP; smp++)
		if ((period_ns * adc->cfg->smp_cycles[smp]) >= smp_ns)
			break;
	if (smp > STM32_ADC_MAX_SMP)
		smp = STM32_ADC_MAX_SMP;

	/* pre-build sampling time registers (e.g. smpr1, smpr2) */
	adc->smpr_val[r] = (adc->smpr_val[r] & ~mask) | (smp << shift);
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
          int channel = 100;
          unsigned int smp_ns = 100;
          int _len_adc0 = 1;
          struct stm32_adc * adc = (struct stm32_adc *) malloc(_len_adc0*sizeof(struct stm32_adc));
          for(int _i0 = 0; _i0 < _len_adc0; _i0++) {
              int _len_adc__i0__smpr_val0 = 1;
          adc[_i0].smpr_val = (unsigned int *) malloc(_len_adc__i0__smpr_val0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_adc__i0__smpr_val0; _j0++) {
            adc[_i0].smpr_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adc__i0__cfg0 = 1;
          adc[_i0].cfg = (struct TYPE_6__ *) malloc(_len_adc__i0__cfg0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_adc__i0__cfg0; _j0++) {
              int _len_adc__i0__cfg_smp_cycles0 = 1;
          adc[_i0].cfg->smp_cycles = (unsigned int *) malloc(_len_adc__i0__cfg_smp_cycles0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_adc__i0__cfg_smp_cycles0; _j0++) {
            adc[_i0].cfg->smp_cycles[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adc__i0__cfg_regs0 = 1;
          adc[_i0].cfg->regs = (struct TYPE_4__ *) malloc(_len_adc__i0__cfg_regs0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_adc__i0__cfg_regs0; _j0++) {
              int _len_adc__i0__cfg_regs_smp_bits0 = 1;
          adc[_i0].cfg->regs->smp_bits = (struct stm32_adc_regs *) malloc(_len_adc__i0__cfg_regs_smp_bits0*sizeof(struct stm32_adc_regs));
          for(int _j0 = 0; _j0 < _len_adc__i0__cfg_regs_smp_bits0; _j0++) {
            adc[_i0].cfg->regs->smp_bits->shift = ((-2 * (next_i()%2)) + 1) * next_i();
        adc[_i0].cfg->regs->smp_bits->mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adc[_i0].cfg->regs->smp_bits->reg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_adc__i0__common0 = 1;
          adc[_i0].common = (struct TYPE_5__ *) malloc(_len_adc__i0__common0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_adc__i0__common0; _j0++) {
            adc[_i0].common->rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          stm32_adc_smpr_init(adc,channel,smp_ns);
          for(int _aux = 0; _aux < _len_adc0; _aux++) {
          free(adc[_aux].smpr_val);
          }
          for(int _aux = 0; _aux < _len_adc0; _aux++) {
          free(adc[_aux].cfg);
          }
          for(int _aux = 0; _aux < _len_adc0; _aux++) {
          free(adc[_aux].common);
          }
          free(adc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int channel = 255;
          unsigned int smp_ns = 255;
          int _len_adc0 = 65025;
          struct stm32_adc * adc = (struct stm32_adc *) malloc(_len_adc0*sizeof(struct stm32_adc));
          for(int _i0 = 0; _i0 < _len_adc0; _i0++) {
              int _len_adc__i0__smpr_val0 = 1;
          adc[_i0].smpr_val = (unsigned int *) malloc(_len_adc__i0__smpr_val0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_adc__i0__smpr_val0; _j0++) {
            adc[_i0].smpr_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adc__i0__cfg0 = 1;
          adc[_i0].cfg = (struct TYPE_6__ *) malloc(_len_adc__i0__cfg0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_adc__i0__cfg0; _j0++) {
              int _len_adc__i0__cfg_smp_cycles0 = 1;
          adc[_i0].cfg->smp_cycles = (unsigned int *) malloc(_len_adc__i0__cfg_smp_cycles0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_adc__i0__cfg_smp_cycles0; _j0++) {
            adc[_i0].cfg->smp_cycles[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adc__i0__cfg_regs0 = 1;
          adc[_i0].cfg->regs = (struct TYPE_4__ *) malloc(_len_adc__i0__cfg_regs0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_adc__i0__cfg_regs0; _j0++) {
              int _len_adc__i0__cfg_regs_smp_bits0 = 1;
          adc[_i0].cfg->regs->smp_bits = (struct stm32_adc_regs *) malloc(_len_adc__i0__cfg_regs_smp_bits0*sizeof(struct stm32_adc_regs));
          for(int _j0 = 0; _j0 < _len_adc__i0__cfg_regs_smp_bits0; _j0++) {
            adc[_i0].cfg->regs->smp_bits->shift = ((-2 * (next_i()%2)) + 1) * next_i();
        adc[_i0].cfg->regs->smp_bits->mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adc[_i0].cfg->regs->smp_bits->reg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_adc__i0__common0 = 1;
          adc[_i0].common = (struct TYPE_5__ *) malloc(_len_adc__i0__common0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_adc__i0__common0; _j0++) {
            adc[_i0].common->rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          stm32_adc_smpr_init(adc,channel,smp_ns);
          for(int _aux = 0; _aux < _len_adc0; _aux++) {
          free(adc[_aux].smpr_val);
          }
          for(int _aux = 0; _aux < _len_adc0; _aux++) {
          free(adc[_aux].cfg);
          }
          for(int _aux = 0; _aux < _len_adc0; _aux++) {
          free(adc[_aux].common);
          }
          free(adc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int channel = 10;
          unsigned int smp_ns = 10;
          int _len_adc0 = 100;
          struct stm32_adc * adc = (struct stm32_adc *) malloc(_len_adc0*sizeof(struct stm32_adc));
          for(int _i0 = 0; _i0 < _len_adc0; _i0++) {
              int _len_adc__i0__smpr_val0 = 1;
          adc[_i0].smpr_val = (unsigned int *) malloc(_len_adc__i0__smpr_val0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_adc__i0__smpr_val0; _j0++) {
            adc[_i0].smpr_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adc__i0__cfg0 = 1;
          adc[_i0].cfg = (struct TYPE_6__ *) malloc(_len_adc__i0__cfg0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_adc__i0__cfg0; _j0++) {
              int _len_adc__i0__cfg_smp_cycles0 = 1;
          adc[_i0].cfg->smp_cycles = (unsigned int *) malloc(_len_adc__i0__cfg_smp_cycles0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_adc__i0__cfg_smp_cycles0; _j0++) {
            adc[_i0].cfg->smp_cycles[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adc__i0__cfg_regs0 = 1;
          adc[_i0].cfg->regs = (struct TYPE_4__ *) malloc(_len_adc__i0__cfg_regs0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_adc__i0__cfg_regs0; _j0++) {
              int _len_adc__i0__cfg_regs_smp_bits0 = 1;
          adc[_i0].cfg->regs->smp_bits = (struct stm32_adc_regs *) malloc(_len_adc__i0__cfg_regs_smp_bits0*sizeof(struct stm32_adc_regs));
          for(int _j0 = 0; _j0 < _len_adc__i0__cfg_regs_smp_bits0; _j0++) {
            adc[_i0].cfg->regs->smp_bits->shift = ((-2 * (next_i()%2)) + 1) * next_i();
        adc[_i0].cfg->regs->smp_bits->mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adc[_i0].cfg->regs->smp_bits->reg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_adc__i0__common0 = 1;
          adc[_i0].common = (struct TYPE_5__ *) malloc(_len_adc__i0__common0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_adc__i0__common0; _j0++) {
            adc[_i0].common->rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          stm32_adc_smpr_init(adc,channel,smp_ns);
          for(int _aux = 0; _aux < _len_adc0; _aux++) {
          free(adc[_aux].smpr_val);
          }
          for(int _aux = 0; _aux < _len_adc0; _aux++) {
          free(adc[_aux].cfg);
          }
          for(int _aux = 0; _aux < _len_adc0; _aux++) {
          free(adc[_aux].common);
          }
          free(adc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
