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
struct TYPE_12__ {int* bot_data; size_t scsi_sense_head; size_t scsi_sense_tail; size_t bot_data_length; TYPE_3__* scsi_sense; } ;
struct TYPE_11__ {TYPE_5__ MSC_BOT_ClassData; } ;
typedef  TYPE_4__ usbd_cdc_msc_hid_state_t ;
typedef  size_t uint8_t ;
typedef  int /*<<< orphan*/  int8_t ;
typedef  TYPE_5__ USBD_MSC_BOT_HandleTypeDef ;
struct TYPE_13__ {scalar_t__ pClassData; } ;
typedef  TYPE_6__ USBD_HandleTypeDef ;
struct TYPE_8__ {size_t ASCQ; size_t ASC; } ;
struct TYPE_9__ {TYPE_1__ b; } ;
struct TYPE_10__ {size_t Skey; TYPE_2__ w; } ;

/* Variables and functions */
 size_t REQUEST_SENSE_DATA_LEN ; 
 size_t SENSE_LIST_DEEPTH ; 

__attribute__((used)) static int8_t SCSI_RequestSense (USBD_HandleTypeDef  *pdev, uint8_t lun, uint8_t *params)
{
  uint8_t i;
  USBD_MSC_BOT_HandleTypeDef *hmsc = &((usbd_cdc_msc_hid_state_t*)pdev->pClassData)->MSC_BOT_ClassData;

  for(i=0 ; i < REQUEST_SENSE_DATA_LEN ; i++)
  {
    hmsc->bot_data[i] = 0;
  }

  hmsc->bot_data[0]     = 0x70;
  hmsc->bot_data[7]     = REQUEST_SENSE_DATA_LEN - 6;

  if((hmsc->scsi_sense_head != hmsc->scsi_sense_tail)) {

    hmsc->bot_data[2]     = hmsc->scsi_sense[hmsc->scsi_sense_head].Skey;
    hmsc->bot_data[12]    = hmsc->scsi_sense[hmsc->scsi_sense_head].w.b.ASCQ;
    hmsc->bot_data[13]    = hmsc->scsi_sense[hmsc->scsi_sense_head].w.b.ASC;
    hmsc->scsi_sense_head++;

    if (hmsc->scsi_sense_head == SENSE_LIST_DEEPTH)
    {
      hmsc->scsi_sense_head = 0;
    }
  }
  hmsc->bot_data_length = REQUEST_SENSE_DATA_LEN;

  if (params[4] <= REQUEST_SENSE_DATA_LEN)
  {
    hmsc->bot_data_length = params[4];
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
          unsigned long lun = 100;
          int _len_pdev0 = 1;
          struct TYPE_13__ * pdev = (struct TYPE_13__ *) malloc(_len_pdev0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].pClassData = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_params0 = 1;
          unsigned long * params = (unsigned long *) malloc(_len_params0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SCSI_RequestSense(pdev,lun,params);
          printf("%d\n", benchRet); 
          free(pdev);
          free(params);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long lun = 255;
          int _len_pdev0 = 65025;
          struct TYPE_13__ * pdev = (struct TYPE_13__ *) malloc(_len_pdev0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].pClassData = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_params0 = 65025;
          unsigned long * params = (unsigned long *) malloc(_len_params0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SCSI_RequestSense(pdev,lun,params);
          printf("%d\n", benchRet); 
          free(pdev);
          free(params);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long lun = 10;
          int _len_pdev0 = 100;
          struct TYPE_13__ * pdev = (struct TYPE_13__ *) malloc(_len_pdev0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].pClassData = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_params0 = 100;
          unsigned long * params = (unsigned long *) malloc(_len_params0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SCSI_RequestSense(pdev,lun,params);
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
