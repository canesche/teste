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
struct mtk_thermal {int o_slope; int adc_ge; int* vts; int degc_cali; } ;
typedef  int s32 ;

/* Variables and functions */

__attribute__((used)) static int raw_to_mcelsius(struct mtk_thermal *mt, int sensno, s32 raw)
{
	s32 tmp;

	raw &= 0xfff;

	tmp = 203450520 << 3;
	tmp /= 165 + mt->o_slope;
	tmp /= 10000 + mt->adc_ge;
	tmp *= raw - mt->vts[sensno] - 3350;
	tmp >>= 3;

	return mt->degc_cali * 500 - tmp;
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
          int sensno = 100;
          int raw = 100;
          int _len_mt0 = 1;
          struct mtk_thermal * mt = (struct mtk_thermal *) malloc(_len_mt0*sizeof(struct mtk_thermal));
          for(int _i0 = 0; _i0 < _len_mt0; _i0++) {
            mt[_i0].o_slope = ((-2 * (next_i()%2)) + 1) * next_i();
        mt[_i0].adc_ge = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mt__i0__vts0 = 1;
          mt[_i0].vts = (int *) malloc(_len_mt__i0__vts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mt__i0__vts0; _j0++) {
            mt[_i0].vts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mt[_i0].degc_cali = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = raw_to_mcelsius(mt,sensno,raw);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mt0; _aux++) {
          free(mt[_aux].vts);
          }
          free(mt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sensno = 255;
          int raw = 255;
          int _len_mt0 = 65025;
          struct mtk_thermal * mt = (struct mtk_thermal *) malloc(_len_mt0*sizeof(struct mtk_thermal));
          for(int _i0 = 0; _i0 < _len_mt0; _i0++) {
            mt[_i0].o_slope = ((-2 * (next_i()%2)) + 1) * next_i();
        mt[_i0].adc_ge = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mt__i0__vts0 = 1;
          mt[_i0].vts = (int *) malloc(_len_mt__i0__vts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mt__i0__vts0; _j0++) {
            mt[_i0].vts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mt[_i0].degc_cali = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = raw_to_mcelsius(mt,sensno,raw);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mt0; _aux++) {
          free(mt[_aux].vts);
          }
          free(mt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sensno = 10;
          int raw = 10;
          int _len_mt0 = 100;
          struct mtk_thermal * mt = (struct mtk_thermal *) malloc(_len_mt0*sizeof(struct mtk_thermal));
          for(int _i0 = 0; _i0 < _len_mt0; _i0++) {
            mt[_i0].o_slope = ((-2 * (next_i()%2)) + 1) * next_i();
        mt[_i0].adc_ge = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mt__i0__vts0 = 1;
          mt[_i0].vts = (int *) malloc(_len_mt__i0__vts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mt__i0__vts0; _j0++) {
            mt[_i0].vts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mt[_i0].degc_cali = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = raw_to_mcelsius(mt,sensno,raw);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mt0; _aux++) {
          free(mt[_aux].vts);
          }
          free(mt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
