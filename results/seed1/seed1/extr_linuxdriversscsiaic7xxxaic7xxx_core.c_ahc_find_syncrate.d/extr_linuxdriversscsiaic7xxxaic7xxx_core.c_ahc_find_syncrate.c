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
typedef  size_t u_int ;
struct ahc_syncrate {int sxfr_u2; size_t period; int /*<<< orphan*/ * rate; } ;
struct ahc_softc {int features; } ;

/* Variables and functions */
 int AHC_DT ; 
 size_t AHC_SYNCRATE_FAST ; 
 size_t AHC_SYNCRATE_ULTRA ; 
 size_t AHC_SYNCRATE_ULTRA2 ; 
 int AHC_ULTRA ; 
 int AHC_ULTRA2 ; 
 size_t MSG_EXT_PPR_DT_REQ ; 
 int ST_SXFR ; 
 struct ahc_syncrate const* ahc_syncrates ; 

const struct ahc_syncrate *
ahc_find_syncrate(struct ahc_softc *ahc, u_int *period,
		  u_int *ppr_options, u_int maxsync)
{
	const struct ahc_syncrate *syncrate;

	if ((ahc->features & AHC_DT) == 0)
		*ppr_options &= ~MSG_EXT_PPR_DT_REQ;

	/* Skip all DT only entries if DT is not available */
	if ((*ppr_options & MSG_EXT_PPR_DT_REQ) == 0
	 && maxsync < AHC_SYNCRATE_ULTRA2)
		maxsync = AHC_SYNCRATE_ULTRA2;

	/* Now set the maxsync based on the card capabilities
	 * DT is already done above */
	if ((ahc->features & (AHC_DT | AHC_ULTRA2)) == 0
	    && maxsync < AHC_SYNCRATE_ULTRA)
		maxsync = AHC_SYNCRATE_ULTRA;
	if ((ahc->features & (AHC_DT | AHC_ULTRA2 | AHC_ULTRA)) == 0
	    && maxsync < AHC_SYNCRATE_FAST)
		maxsync = AHC_SYNCRATE_FAST;

	for (syncrate = &ahc_syncrates[maxsync];
	     syncrate->rate != NULL;
	     syncrate++) {

		/*
		 * The Ultra2 table doesn't go as low
		 * as for the Fast/Ultra cards.
		 */
		if ((ahc->features & AHC_ULTRA2) != 0
		 && (syncrate->sxfr_u2 == 0))
			break;

		if (*period <= syncrate->period) {
			/*
			 * When responding to a target that requests
			 * sync, the requested rate may fall between
			 * two rates that we can output, but still be
			 * a rate that we can receive.  Because of this,
			 * we want to respond to the target with
			 * the same rate that it sent to us even
			 * if the period we use to send data to it
			 * is lower.  Only lower the response period
			 * if we must.
			 */
			if (syncrate == &ahc_syncrates[maxsync])
				*period = syncrate->period;

			/*
			 * At some speeds, we only support
			 * ST transfers.
			 */
		 	if ((syncrate->sxfr_u2 & ST_SXFR) != 0)
				*ppr_options &= ~MSG_EXT_PPR_DT_REQ;
			break;
		}
	}

	if ((*period == 0)
	 || (syncrate->rate == NULL)
	 || ((ahc->features & AHC_ULTRA2) != 0
	  && (syncrate->sxfr_u2 == 0))) {
		/* Use asynchronous transfers. */
		*period = 0;
		syncrate = NULL;
		*ppr_options &= ~MSG_EXT_PPR_DT_REQ;
	}
	return (syncrate);
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
          unsigned long maxsync = 100;
          int _len_ahc0 = 1;
          struct ahc_softc * ahc = (struct ahc_softc *) malloc(_len_ahc0*sizeof(struct ahc_softc));
          for(int _i0 = 0; _i0 < _len_ahc0; _i0++) {
            ahc[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_period0 = 1;
          unsigned long * period = (unsigned long *) malloc(_len_period0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_period0; _i0++) {
            period[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ppr_options0 = 1;
          unsigned long * ppr_options = (unsigned long *) malloc(_len_ppr_options0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ppr_options0; _i0++) {
            ppr_options[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct ahc_syncrate * benchRet = ahc_find_syncrate(ahc,period,ppr_options,maxsync);
          free(ahc);
          free(period);
          free(ppr_options);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long maxsync = 255;
          int _len_ahc0 = 65025;
          struct ahc_softc * ahc = (struct ahc_softc *) malloc(_len_ahc0*sizeof(struct ahc_softc));
          for(int _i0 = 0; _i0 < _len_ahc0; _i0++) {
            ahc[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_period0 = 65025;
          unsigned long * period = (unsigned long *) malloc(_len_period0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_period0; _i0++) {
            period[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ppr_options0 = 65025;
          unsigned long * ppr_options = (unsigned long *) malloc(_len_ppr_options0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ppr_options0; _i0++) {
            ppr_options[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct ahc_syncrate * benchRet = ahc_find_syncrate(ahc,period,ppr_options,maxsync);
          free(ahc);
          free(period);
          free(ppr_options);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long maxsync = 10;
          int _len_ahc0 = 100;
          struct ahc_softc * ahc = (struct ahc_softc *) malloc(_len_ahc0*sizeof(struct ahc_softc));
          for(int _i0 = 0; _i0 < _len_ahc0; _i0++) {
            ahc[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_period0 = 100;
          unsigned long * period = (unsigned long *) malloc(_len_period0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_period0; _i0++) {
            period[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ppr_options0 = 100;
          unsigned long * ppr_options = (unsigned long *) malloc(_len_ppr_options0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ppr_options0; _i0++) {
            ppr_options[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct ahc_syncrate * benchRet = ahc_find_syncrate(ahc,period,ppr_options,maxsync);
          free(ahc);
          free(period);
          free(ppr_options);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
