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
struct regmap_irq_chip_data {TYPE_1__* chip; } ;
struct regmap_irq {int dummy; } ;
struct TYPE_2__ {struct regmap_irq const* irqs; } ;

/* Variables and functions */

__attribute__((used)) static inline const
struct regmap_irq *irq_to_regmap_irq(struct regmap_irq_chip_data *data,
				     int irq)
{
	return &data->chip->irqs[irq];
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
          int irq = 100;
          int _len_data0 = 1;
          struct regmap_irq_chip_data * data = (struct regmap_irq_chip_data *) malloc(_len_data0*sizeof(struct regmap_irq_chip_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__chip0 = 1;
          data[_i0].chip = (struct TYPE_2__ *) malloc(_len_data__i0__chip0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_data__i0__chip0; _j0++) {
              int _len_data__i0__chip_irqs0 = 1;
          data[_i0].chip->irqs = (const struct regmap_irq *) malloc(_len_data__i0__chip_irqs0*sizeof(const struct regmap_irq));
          for(int _j0 = 0; _j0 < _len_data__i0__chip_irqs0; _j0++) {
              }
          }
          }
          const struct regmap_irq * benchRet = irq_to_regmap_irq(data,irq);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].chip);
          }
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int irq = 255;
          int _len_data0 = 65025;
          struct regmap_irq_chip_data * data = (struct regmap_irq_chip_data *) malloc(_len_data0*sizeof(struct regmap_irq_chip_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__chip0 = 1;
          data[_i0].chip = (struct TYPE_2__ *) malloc(_len_data__i0__chip0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_data__i0__chip0; _j0++) {
              int _len_data__i0__chip_irqs0 = 1;
          data[_i0].chip->irqs = (const struct regmap_irq *) malloc(_len_data__i0__chip_irqs0*sizeof(const struct regmap_irq));
          for(int _j0 = 0; _j0 < _len_data__i0__chip_irqs0; _j0++) {
              }
          }
          }
          const struct regmap_irq * benchRet = irq_to_regmap_irq(data,irq);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].chip);
          }
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int irq = 10;
          int _len_data0 = 100;
          struct regmap_irq_chip_data * data = (struct regmap_irq_chip_data *) malloc(_len_data0*sizeof(struct regmap_irq_chip_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__chip0 = 1;
          data[_i0].chip = (struct TYPE_2__ *) malloc(_len_data__i0__chip0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_data__i0__chip0; _j0++) {
              int _len_data__i0__chip_irqs0 = 1;
          data[_i0].chip->irqs = (const struct regmap_irq *) malloc(_len_data__i0__chip_irqs0*sizeof(const struct regmap_irq));
          for(int _j0 = 0; _j0 < _len_data__i0__chip_irqs0; _j0++) {
              }
          }
          }
          const struct regmap_irq * benchRet = irq_to_regmap_irq(data,irq);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].chip);
          }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
