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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* pPS_T ;
struct TYPE_3__ {scalar_t__ initialize; scalar_t__ Rssi_val_min; void* CurRFState; void* PreRFState; void* CurCCAState; void* PreCCAState; } ;
struct TYPE_4__ {TYPE_1__ DM_PSTable; } ;
typedef  TYPE_2__* PDM_ODM_T ;

/* Variables and functions */
 void* CCA_MAX ; 
 void* RF_MAX ; 

void odm_DynamicBBPowerSavingInit(void *pDM_VOID)
{
	PDM_ODM_T pDM_Odm = (PDM_ODM_T)pDM_VOID;
	pPS_T pDM_PSTable = &pDM_Odm->DM_PSTable;

	pDM_PSTable->PreCCAState = CCA_MAX;
	pDM_PSTable->CurCCAState = CCA_MAX;
	pDM_PSTable->PreRFState = RF_MAX;
	pDM_PSTable->CurRFState = RF_MAX;
	pDM_PSTable->Rssi_val_min = 0;
	pDM_PSTable->initialize = 0;
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
          void * pDM_VOID;
          odm_DynamicBBPowerSavingInit(pDM_VOID);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * pDM_VOID;
          odm_DynamicBBPowerSavingInit(pDM_VOID);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * pDM_VOID;
          odm_DynamicBBPowerSavingInit(pDM_VOID);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
