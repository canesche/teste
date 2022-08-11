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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int /*<<< orphan*/  uint32_t ;
typedef  int /*<<< orphan*/  USBH_StatusTypeDef ;
struct TYPE_6__ {TYPE_1__* pActiveClass; } ;
typedef  TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_7__ {scalar_t__ state; int /*<<< orphan*/  data_rx_state; int /*<<< orphan*/  RxDataLength; int /*<<< orphan*/ * pRxData; } ;
struct TYPE_5__ {TYPE_3__* pData; } ;
typedef  TYPE_3__ CDC_HandleTypeDef ;

/* Variables and functions */
 scalar_t__ CDC_IDLE_STATE ; 
 int /*<<< orphan*/  CDC_RECEIVE_DATA ; 
 scalar_t__ CDC_TRANSFER_DATA ; 
 int /*<<< orphan*/  USBH_BUSY ; 
 int /*<<< orphan*/  USBH_OK ; 

USBH_StatusTypeDef  USBH_CDC_Receive(USBH_HandleTypeDef *phost, uint8_t *pbuff, uint32_t length)
{
  USBH_StatusTypeDef Status = USBH_BUSY;
  CDC_HandleTypeDef *CDC_Handle =  phost->pActiveClass->pData;
  
  if((CDC_Handle->state == CDC_IDLE_STATE) || (CDC_Handle->state == CDC_TRANSFER_DATA))
  {
    CDC_Handle->pRxData = pbuff;
    CDC_Handle->RxDataLength = length;  
    CDC_Handle->state = CDC_TRANSFER_DATA;
    CDC_Handle->data_rx_state = CDC_RECEIVE_DATA;     
    Status = USBH_OK;
  }
  return Status;    
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
          int length = 100;
          int _len_phost0 = 1;
          struct TYPE_6__ * phost = (struct TYPE_6__ *) malloc(_len_phost0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
              int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_5__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_7__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
            phost[_i0].pActiveClass->pData->state = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->data_rx_state = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->RxDataLength = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__pActiveClass_pData_pRxData0 = 1;
          phost[_i0].pActiveClass->pData->pRxData = (int *) malloc(_len_phost__i0__pActiveClass_pData_pRxData0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_pRxData0; _j0++) {
            phost[_i0].pActiveClass->pData->pRxData[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_pbuff0 = 1;
          int * pbuff = (int *) malloc(_len_pbuff0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pbuff0; _i0++) {
            pbuff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = USBH_CDC_Receive(phost,pbuff,length);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_phost0; _aux++) {
          free(phost[_aux].pActiveClass);
          }
          free(phost);
          free(pbuff);
        
        break;
    }
    // big-arr
    case 1:
    {
          int length = 255;
          int _len_phost0 = 65025;
          struct TYPE_6__ * phost = (struct TYPE_6__ *) malloc(_len_phost0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
              int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_5__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_7__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
            phost[_i0].pActiveClass->pData->state = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->data_rx_state = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->RxDataLength = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__pActiveClass_pData_pRxData0 = 1;
          phost[_i0].pActiveClass->pData->pRxData = (int *) malloc(_len_phost__i0__pActiveClass_pData_pRxData0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_pRxData0; _j0++) {
            phost[_i0].pActiveClass->pData->pRxData[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_pbuff0 = 65025;
          int * pbuff = (int *) malloc(_len_pbuff0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pbuff0; _i0++) {
            pbuff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = USBH_CDC_Receive(phost,pbuff,length);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_phost0; _aux++) {
          free(phost[_aux].pActiveClass);
          }
          free(phost);
          free(pbuff);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int length = 10;
          int _len_phost0 = 100;
          struct TYPE_6__ * phost = (struct TYPE_6__ *) malloc(_len_phost0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
              int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_5__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_7__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
            phost[_i0].pActiveClass->pData->state = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->data_rx_state = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->RxDataLength = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__pActiveClass_pData_pRxData0 = 1;
          phost[_i0].pActiveClass->pData->pRxData = (int *) malloc(_len_phost__i0__pActiveClass_pData_pRxData0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_pRxData0; _j0++) {
            phost[_i0].pActiveClass->pData->pRxData[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_pbuff0 = 100;
          int * pbuff = (int *) malloc(_len_pbuff0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pbuff0; _i0++) {
            pbuff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = USBH_CDC_Receive(phost,pbuff,length);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_phost0; _aux++) {
          free(phost[_aux].pActiveClass);
          }
          free(phost);
          free(pbuff);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
