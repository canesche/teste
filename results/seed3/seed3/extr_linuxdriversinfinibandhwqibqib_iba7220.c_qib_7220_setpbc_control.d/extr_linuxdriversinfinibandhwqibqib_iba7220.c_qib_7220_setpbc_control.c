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
typedef  size_t u8 ;
typedef  size_t u32 ;
struct qib_pportdata {size_t delay_mult; TYPE_1__* cpspec; } ;
struct TYPE_2__ {size_t last_delay_mult; } ;

/* Variables and functions */
 size_t PBC_7220_VL15_SEND_CTRL ; 
 size_t* ib_rate_to_delay ; 

__attribute__((used)) static u32 qib_7220_setpbc_control(struct qib_pportdata *ppd, u32 plen,
				   u8 srate, u8 vl)
{
	u8 snd_mult = ppd->delay_mult;
	u8 rcv_mult = ib_rate_to_delay[srate];
	u32 ret = ppd->cpspec->last_delay_mult;

	ppd->cpspec->last_delay_mult = (rcv_mult > snd_mult) ?
		(plen * (rcv_mult - snd_mult) + 1) >> 1 : 0;

	/* Indicate VL15, if necessary */
	if (vl == 15)
		ret |= PBC_7220_VL15_SEND_CTRL;
	return ret;
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
          unsigned long plen = 100;
          unsigned long srate = 100;
          unsigned long vl = 100;
          int _len_ppd0 = 1;
          struct qib_pportdata * ppd = (struct qib_pportdata *) malloc(_len_ppd0*sizeof(struct qib_pportdata));
          for(int _i0 = 0; _i0 < _len_ppd0; _i0++) {
            ppd[_i0].delay_mult = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ppd__i0__cpspec0 = 1;
          ppd[_i0].cpspec = (struct TYPE_2__ *) malloc(_len_ppd__i0__cpspec0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ppd__i0__cpspec0; _j0++) {
            ppd[_i0].cpspec->last_delay_mult = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = qib_7220_setpbc_control(ppd,plen,srate,vl);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_ppd0; _aux++) {
          free(ppd[_aux].cpspec);
          }
          free(ppd);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long plen = 255;
          unsigned long srate = 255;
          unsigned long vl = 255;
          int _len_ppd0 = 65025;
          struct qib_pportdata * ppd = (struct qib_pportdata *) malloc(_len_ppd0*sizeof(struct qib_pportdata));
          for(int _i0 = 0; _i0 < _len_ppd0; _i0++) {
            ppd[_i0].delay_mult = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ppd__i0__cpspec0 = 1;
          ppd[_i0].cpspec = (struct TYPE_2__ *) malloc(_len_ppd__i0__cpspec0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ppd__i0__cpspec0; _j0++) {
            ppd[_i0].cpspec->last_delay_mult = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = qib_7220_setpbc_control(ppd,plen,srate,vl);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_ppd0; _aux++) {
          free(ppd[_aux].cpspec);
          }
          free(ppd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long plen = 10;
          unsigned long srate = 10;
          unsigned long vl = 10;
          int _len_ppd0 = 100;
          struct qib_pportdata * ppd = (struct qib_pportdata *) malloc(_len_ppd0*sizeof(struct qib_pportdata));
          for(int _i0 = 0; _i0 < _len_ppd0; _i0++) {
            ppd[_i0].delay_mult = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ppd__i0__cpspec0 = 1;
          ppd[_i0].cpspec = (struct TYPE_2__ *) malloc(_len_ppd__i0__cpspec0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ppd__i0__cpspec0; _j0++) {
            ppd[_i0].cpspec->last_delay_mult = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = qib_7220_setpbc_control(ppd,plen,srate,vl);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_ppd0; _aux++) {
          free(ppd[_aux].cpspec);
          }
          free(ppd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
