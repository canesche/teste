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
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint8_t ;
typedef  int /*<<< orphan*/  USBH_StatusTypeDef ;
struct TYPE_12__ {TYPE_1__* pActiveClass; } ;
typedef  TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_10__ {size_t n; int /*<<< orphan*/ * Storage; } ;
struct TYPE_11__ {TYPE_3__ storids; } ;
struct TYPE_9__ {int /*<<< orphan*/  CurrentStorageId; } ;
struct TYPE_13__ {TYPE_4__ info; TYPE_2__ params; scalar_t__ is_ready; } ;
struct TYPE_8__ {TYPE_6__* pData; } ;
typedef  TYPE_6__ MTP_HandleTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  USBH_FAIL ; 
 int /*<<< orphan*/  USBH_OK ; 

USBH_StatusTypeDef USBH_MTP_SelectStorage (USBH_HandleTypeDef *phost, uint8_t storage_idx)
{
  USBH_StatusTypeDef status = USBH_FAIL;
  MTP_HandleTypeDef *MTP_Handle =  phost->pActiveClass->pData;
  
  if((storage_idx < MTP_Handle->info.storids.n) && (MTP_Handle->is_ready))
  {
      MTP_Handle->params.CurrentStorageId = MTP_Handle->info.storids.Storage[storage_idx];
      status  = USBH_OK;
  }
  
  return status;
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
          unsigned long storage_idx = 100;
          int _len_phost0 = 1;
          struct TYPE_12__ * phost = (struct TYPE_12__ *) malloc(_len_phost0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
              int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_8__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_13__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
            phost[_i0].pActiveClass->pData->info.storids.n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__pActiveClass_pData_info_storids_Storage0 = 1;
          phost[_i0].pActiveClass->pData->info.storids.Storage = (int *) malloc(_len_phost__i0__pActiveClass_pData_info_storids_Storage0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_info_storids_Storage0; _j0++) {
            phost[_i0].pActiveClass->pData->info.storids.Storage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phost[_i0].pActiveClass->pData->params.CurrentStorageId = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->is_ready = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = USBH_MTP_SelectStorage(phost,storage_idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_phost0; _aux++) {
          free(phost[_aux].pActiveClass);
          }
          free(phost);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long storage_idx = 255;
          int _len_phost0 = 65025;
          struct TYPE_12__ * phost = (struct TYPE_12__ *) malloc(_len_phost0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
              int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_8__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_13__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
            phost[_i0].pActiveClass->pData->info.storids.n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__pActiveClass_pData_info_storids_Storage0 = 1;
          phost[_i0].pActiveClass->pData->info.storids.Storage = (int *) malloc(_len_phost__i0__pActiveClass_pData_info_storids_Storage0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_info_storids_Storage0; _j0++) {
            phost[_i0].pActiveClass->pData->info.storids.Storage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phost[_i0].pActiveClass->pData->params.CurrentStorageId = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->is_ready = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = USBH_MTP_SelectStorage(phost,storage_idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_phost0; _aux++) {
          free(phost[_aux].pActiveClass);
          }
          free(phost);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long storage_idx = 10;
          int _len_phost0 = 100;
          struct TYPE_12__ * phost = (struct TYPE_12__ *) malloc(_len_phost0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
              int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_8__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_13__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
            phost[_i0].pActiveClass->pData->info.storids.n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__pActiveClass_pData_info_storids_Storage0 = 1;
          phost[_i0].pActiveClass->pData->info.storids.Storage = (int *) malloc(_len_phost__i0__pActiveClass_pData_info_storids_Storage0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_info_storids_Storage0; _j0++) {
            phost[_i0].pActiveClass->pData->info.storids.Storage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phost[_i0].pActiveClass->pData->params.CurrentStorageId = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->is_ready = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = USBH_MTP_SelectStorage(phost,storage_idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_phost0; _aux++) {
          free(phost[_aux].pActiveClass);
          }
          free(phost);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
