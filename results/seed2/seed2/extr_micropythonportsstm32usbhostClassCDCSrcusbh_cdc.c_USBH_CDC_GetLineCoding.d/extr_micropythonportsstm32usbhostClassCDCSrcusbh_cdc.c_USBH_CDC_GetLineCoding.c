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
typedef  int /*<<< orphan*/  USBH_StatusTypeDef ;
struct TYPE_6__ {scalar_t__ gState; TYPE_1__* pActiveClass; } ;
typedef  TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_7__ {int /*<<< orphan*/  LineCoding; } ;
struct TYPE_5__ {TYPE_3__* pData; } ;
typedef  int /*<<< orphan*/  CDC_LineCodingTypeDef ;
typedef  TYPE_3__ CDC_HandleTypeDef ;

/* Variables and functions */
 scalar_t__ HOST_CLASS ; 
 scalar_t__ HOST_CLASS_REQUEST ; 
 int /*<<< orphan*/  USBH_FAIL ; 
 int /*<<< orphan*/  USBH_OK ; 

USBH_StatusTypeDef  USBH_CDC_GetLineCoding(USBH_HandleTypeDef *phost, CDC_LineCodingTypeDef *linecodin)
{
  CDC_HandleTypeDef *CDC_Handle =  phost->pActiveClass->pData; 
  
  if((phost->gState == HOST_CLASS) ||(phost->gState == HOST_CLASS_REQUEST))
  {
    *linecodin = CDC_Handle->LineCoding;
    return USBH_OK;
  }
  else
  {
    return USBH_FAIL;
  }
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
          int _len_phost0 = 1;
          struct TYPE_6__ * phost = (struct TYPE_6__ *) malloc(_len_phost0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
            phost[_i0].gState = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_5__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_7__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
            phost[_i0].pActiveClass->pData->LineCoding = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_linecodin0 = 1;
          int * linecodin = (int *) malloc(_len_linecodin0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_linecodin0; _i0++) {
            linecodin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = USBH_CDC_GetLineCoding(phost,linecodin);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_phost0; _aux++) {
          free(phost[_aux].pActiveClass);
          }
          free(phost);
          free(linecodin);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_phost0 = 65025;
          struct TYPE_6__ * phost = (struct TYPE_6__ *) malloc(_len_phost0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
            phost[_i0].gState = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_5__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_7__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
            phost[_i0].pActiveClass->pData->LineCoding = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_linecodin0 = 65025;
          int * linecodin = (int *) malloc(_len_linecodin0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_linecodin0; _i0++) {
            linecodin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = USBH_CDC_GetLineCoding(phost,linecodin);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_phost0; _aux++) {
          free(phost[_aux].pActiveClass);
          }
          free(phost);
          free(linecodin);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_phost0 = 100;
          struct TYPE_6__ * phost = (struct TYPE_6__ *) malloc(_len_phost0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
            phost[_i0].gState = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_5__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_7__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
            phost[_i0].pActiveClass->pData->LineCoding = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_linecodin0 = 100;
          int * linecodin = (int *) malloc(_len_linecodin0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_linecodin0; _i0++) {
            linecodin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = USBH_CDC_GetLineCoding(phost,linecodin);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_phost0; _aux++) {
          free(phost[_aux].pActiveClass);
          }
          free(phost);
          free(linecodin);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
