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
struct odm_dm_struct {struct adapter* Adapter; } ;
struct dm_priv {int bDynamicTxPowerEnable; void* DynamicTxHighPowerLvl; void* LastDTPLvl; } ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {struct dm_priv dmpriv; } ;

/* Variables and functions */
 void* TxHighPwrLevel_Normal ; 

void odm_DynamicTxPowerInit(struct odm_dm_struct *pDM_Odm)
{
	struct adapter *Adapter = pDM_Odm->Adapter;
	struct dm_priv	*pdmpriv = &Adapter->HalData->dmpriv;

	pdmpriv->bDynamicTxPowerEnable = false;
	pdmpriv->LastDTPLvl = TxHighPwrLevel_Normal;
	pdmpriv->DynamicTxHighPowerLvl = TxHighPwrLevel_Normal;
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
          struct odm_dm_struct * pDM_Odm = (struct odm_dm_struct *) malloc(_len_pDM_Odm0*sizeof(struct odm_dm_struct));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
              int _len_pDM_Odm__i0__Adapter0 = 1;
          pDM_Odm[_i0].Adapter = (struct adapter *) malloc(_len_pDM_Odm__i0__Adapter0*sizeof(struct adapter));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__Adapter0; _j0++) {
              int _len_pDM_Odm__i0__Adapter_HalData0 = 1;
          pDM_Odm[_i0].Adapter->HalData = (struct TYPE_2__ *) malloc(_len_pDM_Odm__i0__Adapter_HalData0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__Adapter_HalData0; _j0++) {
            pDM_Odm[_i0].Adapter->HalData->dmpriv.bDynamicTxPowerEnable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          odm_DynamicTxPowerInit(pDM_Odm);
          for(int _aux = 0; _aux < _len_pDM_Odm0; _aux++) {
          free(pDM_Odm[_aux].Adapter);
          }
          free(pDM_Odm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pDM_Odm0 = 65025;
          struct odm_dm_struct * pDM_Odm = (struct odm_dm_struct *) malloc(_len_pDM_Odm0*sizeof(struct odm_dm_struct));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
              int _len_pDM_Odm__i0__Adapter0 = 1;
          pDM_Odm[_i0].Adapter = (struct adapter *) malloc(_len_pDM_Odm__i0__Adapter0*sizeof(struct adapter));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__Adapter0; _j0++) {
              int _len_pDM_Odm__i0__Adapter_HalData0 = 1;
          pDM_Odm[_i0].Adapter->HalData = (struct TYPE_2__ *) malloc(_len_pDM_Odm__i0__Adapter_HalData0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__Adapter_HalData0; _j0++) {
            pDM_Odm[_i0].Adapter->HalData->dmpriv.bDynamicTxPowerEnable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          odm_DynamicTxPowerInit(pDM_Odm);
          for(int _aux = 0; _aux < _len_pDM_Odm0; _aux++) {
          free(pDM_Odm[_aux].Adapter);
          }
          free(pDM_Odm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pDM_Odm0 = 100;
          struct odm_dm_struct * pDM_Odm = (struct odm_dm_struct *) malloc(_len_pDM_Odm0*sizeof(struct odm_dm_struct));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
              int _len_pDM_Odm__i0__Adapter0 = 1;
          pDM_Odm[_i0].Adapter = (struct adapter *) malloc(_len_pDM_Odm__i0__Adapter0*sizeof(struct adapter));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__Adapter0; _j0++) {
              int _len_pDM_Odm__i0__Adapter_HalData0 = 1;
          pDM_Odm[_i0].Adapter->HalData = (struct TYPE_2__ *) malloc(_len_pDM_Odm__i0__Adapter_HalData0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__Adapter_HalData0; _j0++) {
            pDM_Odm[_i0].Adapter->HalData->dmpriv.bDynamicTxPowerEnable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          odm_DynamicTxPowerInit(pDM_Odm);
          for(int _aux = 0; _aux < _len_pDM_Odm0; _aux++) {
          free(pDM_Odm[_aux].Adapter);
          }
          free(pDM_Odm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
