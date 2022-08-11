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
struct TYPE_5__ {TYPE_1__* pbus; } ;
struct TYPE_6__ {TYPE_2__ pbus; } ;
struct snd_hal2 {TYPE_3__ adc; } ;
struct TYPE_4__ {int /*<<< orphan*/  pbdma_ctrl; } ;

/* Variables and functions */
 int /*<<< orphan*/  HPC3_PDMACTRL_LD ; 

__attribute__((used)) static inline void hal2_stop_adc(struct snd_hal2 *hal2)
{
	hal2->adc.pbus.pbus->pbdma_ctrl = HPC3_PDMACTRL_LD;
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
          int _len_hal20 = 1;
          struct snd_hal2 * hal2 = (struct snd_hal2 *) malloc(_len_hal20*sizeof(struct snd_hal2));
          for(int _i0 = 0; _i0 < _len_hal20; _i0++) {
              int _len_hal2__i0__adc_pbus_pbus0 = 1;
          hal2[_i0].adc.pbus.pbus = (struct TYPE_4__ *) malloc(_len_hal2__i0__adc_pbus_pbus0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hal2__i0__adc_pbus_pbus0; _j0++) {
            hal2[_i0].adc.pbus.pbus->pbdma_ctrl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hal2_stop_adc(hal2);
          free(hal2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hal20 = 65025;
          struct snd_hal2 * hal2 = (struct snd_hal2 *) malloc(_len_hal20*sizeof(struct snd_hal2));
          for(int _i0 = 0; _i0 < _len_hal20; _i0++) {
              int _len_hal2__i0__adc_pbus_pbus0 = 1;
          hal2[_i0].adc.pbus.pbus = (struct TYPE_4__ *) malloc(_len_hal2__i0__adc_pbus_pbus0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hal2__i0__adc_pbus_pbus0; _j0++) {
            hal2[_i0].adc.pbus.pbus->pbdma_ctrl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hal2_stop_adc(hal2);
          free(hal2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hal20 = 100;
          struct snd_hal2 * hal2 = (struct snd_hal2 *) malloc(_len_hal20*sizeof(struct snd_hal2));
          for(int _i0 = 0; _i0 < _len_hal20; _i0++) {
              int _len_hal2__i0__adc_pbus_pbus0 = 1;
          hal2[_i0].adc.pbus.pbus = (struct TYPE_4__ *) malloc(_len_hal2__i0__adc_pbus_pbus0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hal2__i0__adc_pbus_pbus0; _j0++) {
            hal2[_i0].adc.pbus.pbus->pbdma_ctrl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hal2_stop_adc(hal2);
          free(hal2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
