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

/* Variables and functions */
 int SV_ADCMULT ; 
 int SV_REFFREQUENCY ; 

__attribute__((used)) static void snd_sonicvibes_pll(unsigned int rate,
			       unsigned int *res_r,
			       unsigned int *res_m,
			       unsigned int *res_n)
{
	unsigned int r, m = 0, n = 0;
	unsigned int xm, xn, xr, xd, metric = ~0U;

	if (rate < 625000 / SV_ADCMULT)
		rate = 625000 / SV_ADCMULT;
	if (rate > 150000000 / SV_ADCMULT)
		rate = 150000000 / SV_ADCMULT;
	/* slight violation of specs, needed for continuous sampling rates */
	for (r = 0; rate < 75000000 / SV_ADCMULT; r += 0x20, rate <<= 1);
	for (xn = 3; xn < 33; xn++)	/* 35 */
		for (xm = 3; xm < 257; xm++) {
			xr = ((SV_REFFREQUENCY / SV_ADCMULT) * xm) / xn;
			if (xr >= rate)
				xd = xr - rate;
			else
				xd = rate - xr;
			if (xd < metric) {
				metric = xd;
				m = xm - 2;
				n = xn - 2;
			}
		}
	*res_r = r;
	*res_m = m;
	*res_n = n;
#if 0
	dev_dbg(sonic->card->dev,
		"metric = %i, xm = %i, xn = %i\n", metric, xm, xn);
	dev_dbg(sonic->card->dev,
		"pll: m = 0x%x, r = 0x%x, n = 0x%x\n", reg, m, r, n);
#endif
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
          unsigned int rate = 100;
          int _len_res_r0 = 1;
          unsigned int * res_r = (unsigned int *) malloc(_len_res_r0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_res_r0; _i0++) {
            res_r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res_m0 = 1;
          unsigned int * res_m = (unsigned int *) malloc(_len_res_m0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_res_m0; _i0++) {
            res_m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res_n0 = 1;
          unsigned int * res_n = (unsigned int *) malloc(_len_res_n0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_res_n0; _i0++) {
            res_n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          snd_sonicvibes_pll(rate,res_r,res_m,res_n);
          free(res_r);
          free(res_m);
          free(res_n);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int rate = 255;
          int _len_res_r0 = 65025;
          unsigned int * res_r = (unsigned int *) malloc(_len_res_r0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_res_r0; _i0++) {
            res_r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res_m0 = 65025;
          unsigned int * res_m = (unsigned int *) malloc(_len_res_m0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_res_m0; _i0++) {
            res_m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res_n0 = 65025;
          unsigned int * res_n = (unsigned int *) malloc(_len_res_n0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_res_n0; _i0++) {
            res_n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          snd_sonicvibes_pll(rate,res_r,res_m,res_n);
          free(res_r);
          free(res_m);
          free(res_n);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int rate = 10;
          int _len_res_r0 = 100;
          unsigned int * res_r = (unsigned int *) malloc(_len_res_r0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_res_r0; _i0++) {
            res_r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res_m0 = 100;
          unsigned int * res_m = (unsigned int *) malloc(_len_res_m0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_res_m0; _i0++) {
            res_m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res_n0 = 100;
          unsigned int * res_n = (unsigned int *) malloc(_len_res_n0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_res_n0; _i0++) {
            res_n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          snd_sonicvibes_pll(rate,res_r,res_m,res_n);
          free(res_r);
          free(res_m);
          free(res_n);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
