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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ Type; int LdpcThres; int bUseLdpc; int HighRSSIThresh; int LowRSSIThresh; int /*<<< orphan*/  RATRState; } ;
struct TYPE_5__ {int bUseRAMask; TYPE_1__ RateAdaptive; } ;
typedef  TYPE_1__* PODM_RATE_ADAPTIVE ;
typedef  TYPE_2__* PDM_ODM_T ;

/* Variables and functions */
 int /*<<< orphan*/  DM_RATR_STA_INIT ; 
 scalar_t__ DM_Type_ByDriver ; 

void odm_RateAdaptiveMaskInit(PDM_ODM_T pDM_Odm)
{
	PODM_RATE_ADAPTIVE pOdmRA = &pDM_Odm->RateAdaptive;

	pOdmRA->Type = DM_Type_ByDriver;
	if (pOdmRA->Type == DM_Type_ByDriver)
		pDM_Odm->bUseRAMask = true;
	else
		pDM_Odm->bUseRAMask = false;

	pOdmRA->RATRState = DM_RATR_STA_INIT;
	pOdmRA->LdpcThres = 35;
	pOdmRA->bUseLdpc = false;
	pOdmRA->HighRSSIThresh = 50;
	pOdmRA->LowRSSIThresh = 20;
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
          int _len_pDM_Odm0 = 1;
          struct TYPE_5__ * pDM_Odm = (struct TYPE_5__ *) malloc(_len_pDM_Odm0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
            pDM_Odm[_i0].bUseRAMask = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.Type = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.LdpcThres = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.bUseLdpc = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.HighRSSIThresh = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.LowRSSIThresh = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.RATRState = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          odm_RateAdaptiveMaskInit(pDM_Odm);
          free(pDM_Odm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pDM_Odm0 = 65025;
          struct TYPE_5__ * pDM_Odm = (struct TYPE_5__ *) malloc(_len_pDM_Odm0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
            pDM_Odm[_i0].bUseRAMask = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.Type = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.LdpcThres = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.bUseLdpc = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.HighRSSIThresh = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.LowRSSIThresh = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.RATRState = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          odm_RateAdaptiveMaskInit(pDM_Odm);
          free(pDM_Odm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pDM_Odm0 = 100;
          struct TYPE_5__ * pDM_Odm = (struct TYPE_5__ *) malloc(_len_pDM_Odm0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
            pDM_Odm[_i0].bUseRAMask = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.Type = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.LdpcThres = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.bUseLdpc = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.HighRSSIThresh = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.LowRSSIThresh = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].RateAdaptive.RATRState = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          odm_RateAdaptiveMaskInit(pDM_Odm);
          free(pDM_Odm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
