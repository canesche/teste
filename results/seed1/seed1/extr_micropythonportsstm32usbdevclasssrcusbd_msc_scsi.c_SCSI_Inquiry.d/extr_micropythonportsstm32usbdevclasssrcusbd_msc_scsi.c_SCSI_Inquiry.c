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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int bot_data_length; int* bot_data; TYPE_1__* bdev_ops; } ;
struct TYPE_7__ {TYPE_3__ MSC_BOT_ClassData; } ;
typedef  TYPE_2__ usbd_cdc_msc_hid_state_t ;
typedef  int uint8_t ;
typedef  int uint16_t ;
typedef  int /*<<< orphan*/  int8_t ;
typedef  TYPE_3__ USBD_MSC_BOT_HandleTypeDef ;
struct TYPE_9__ {scalar_t__ pClassData; } ;
typedef  TYPE_4__ USBD_HandleTypeDef ;
struct TYPE_6__ {int /*<<< orphan*/ * pInquiry; } ;

/* Variables and functions */
 int LENGTH_INQUIRY_PAGE00 ; 
 scalar_t__ MSC_Page00_Inquiry_Data ; 
 int STANDARD_INQUIRY_DATA_LEN ; 

__attribute__((used)) static int8_t  SCSI_Inquiry(USBD_HandleTypeDef  *pdev, uint8_t lun, uint8_t *params)
{
  uint8_t* pPage;
  uint16_t len;
  USBD_MSC_BOT_HandleTypeDef *hmsc = &((usbd_cdc_msc_hid_state_t*)pdev->pClassData)->MSC_BOT_ClassData;

  if (params[1] & 0x01)/*Evpd is set*/
  {
    pPage = (uint8_t *)MSC_Page00_Inquiry_Data;
    len = LENGTH_INQUIRY_PAGE00;
  }
  else
  {

    pPage = (uint8_t *)&hmsc->bdev_ops->pInquiry[lun * STANDARD_INQUIRY_DATA_LEN];
    len = pPage[4] + 5;

    if (params[4] <= len)
    {
      len = params[4];
    }
  }
  hmsc->bot_data_length = len;

  while (len)
  {
    len--;
    hmsc->bot_data[len] = pPage[len];
  }
  return 0;
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
          int lun = 100;
          int _len_pdev0 = 1;
          struct TYPE_9__ * pdev = (struct TYPE_9__ *) malloc(_len_pdev0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].pClassData = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_params0 = 1;
          int * params = (int *) malloc(_len_params0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SCSI_Inquiry(pdev,lun,params);
          printf("%d\n", benchRet); 
          free(pdev);
          free(params);
        
        break;
    }
    // big-arr
    case 1:
    {
          int lun = 255;
          int _len_pdev0 = 65025;
          struct TYPE_9__ * pdev = (struct TYPE_9__ *) malloc(_len_pdev0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].pClassData = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_params0 = 65025;
          int * params = (int *) malloc(_len_params0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SCSI_Inquiry(pdev,lun,params);
          printf("%d\n", benchRet); 
          free(pdev);
          free(params);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int lun = 10;
          int _len_pdev0 = 100;
          struct TYPE_9__ * pdev = (struct TYPE_9__ *) malloc(_len_pdev0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].pClassData = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_params0 = 100;
          int * params = (int *) malloc(_len_params0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SCSI_Inquiry(pdev,lun,params);
          printf("%d\n", benchRet); 
          free(pdev);
          free(params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
