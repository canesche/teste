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
typedef  struct TYPE_17__   TYPE_8__ ;
typedef  struct TYPE_16__   TYPE_7__ ;
typedef  struct TYPE_15__   TYPE_6__ ;
typedef  struct TYPE_14__   TYPE_5__ ;
typedef  struct TYPE_13__   TYPE_4__ ;
typedef  struct TYPE_12__   TYPE_3__ ;
typedef  struct TYPE_11__   TYPE_2__ ;
typedef  struct TYPE_10__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint8_t ;
typedef  int /*<<< orphan*/  USBH_StatusTypeDef ;
struct TYPE_13__ {TYPE_3__* Itf_Desc; } ;
struct TYPE_14__ {TYPE_4__ CfgDesc; } ;
struct TYPE_16__ {TYPE_5__ device; TYPE_1__* pActiveClass; } ;
typedef  TYPE_7__ USBH_HandleTypeDef ;
struct TYPE_17__ {TYPE_6__* stream_out; } ;
struct TYPE_15__ {int Ep; scalar_t__ EpSize; int valid; int /*<<< orphan*/  Poll; int /*<<< orphan*/  AltSettings; int /*<<< orphan*/  interface; } ;
struct TYPE_12__ {scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; TYPE_2__* Ep_Desc; int /*<<< orphan*/  bAlternateSetting; int /*<<< orphan*/  bInterfaceNumber; } ;
struct TYPE_11__ {int bEndpointAddress; scalar_t__ wMaxPacketSize; int /*<<< orphan*/  bInterval; } ;
struct TYPE_10__ {TYPE_8__* pData; } ;
typedef  TYPE_8__ AUDIO_HandleTypeDef ;

/* Variables and functions */
 scalar_t__ AC_CLASS ; 
 int /*<<< orphan*/  USBH_FAIL ; 
 size_t USBH_MAX_NUM_INTERFACES ; 
 int /*<<< orphan*/  USBH_OK ; 
 scalar_t__ USB_SUBCLASS_AUDIOSTREAMING ; 

__attribute__((used)) static USBH_StatusTypeDef USBH_AUDIO_FindAudioStreamingOUT(USBH_HandleTypeDef *phost)
{
  uint8_t interface, alt_settings;
  USBH_StatusTypeDef status = USBH_FAIL ;
  AUDIO_HandleTypeDef *AUDIO_Handle;

  AUDIO_Handle =  phost->pActiveClass->pData; 

  /* Look For AUDIOSTREAMING IN interface */
  alt_settings = 0;
  for (interface = 0;  interface < USBH_MAX_NUM_INTERFACES ; interface ++ )
  {
    if((phost->device.CfgDesc.Itf_Desc[interface].bInterfaceClass == AC_CLASS)&&
       (phost->device.CfgDesc.Itf_Desc[interface].bInterfaceSubClass == USB_SUBCLASS_AUDIOSTREAMING))
    {
      if(((phost->device.CfgDesc.Itf_Desc[interface].Ep_Desc[0].bEndpointAddress & 0x80) == 0x00)&&
         (phost->device.CfgDesc.Itf_Desc[interface].Ep_Desc[0].wMaxPacketSize > 0))        
      {
        AUDIO_Handle->stream_out[alt_settings].Ep = phost->device.CfgDesc.Itf_Desc[interface].Ep_Desc[0].bEndpointAddress;
        AUDIO_Handle->stream_out[alt_settings].EpSize = phost->device.CfgDesc.Itf_Desc[interface].Ep_Desc[0].wMaxPacketSize;
        AUDIO_Handle->stream_out[alt_settings].interface = phost->device.CfgDesc.Itf_Desc[interface].bInterfaceNumber;
        AUDIO_Handle->stream_out[alt_settings].AltSettings = phost->device.CfgDesc.Itf_Desc[interface].bAlternateSetting;
        AUDIO_Handle->stream_out[alt_settings].Poll = phost->device.CfgDesc.Itf_Desc[interface].Ep_Desc[0].bInterval;           
        AUDIO_Handle->stream_out[alt_settings].valid = 1; 
        alt_settings++;
      }
    }
  }
  
  if(alt_settings > 0)
  {
     status = USBH_OK;
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
          int _len_phost0 = 1;
          struct TYPE_16__ * phost = (struct TYPE_16__ *) malloc(_len_phost0*sizeof(struct TYPE_16__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
              int _len_phost__i0__device_CfgDesc_Itf_Desc0 = 1;
          phost[_i0].device.CfgDesc.Itf_Desc = (struct TYPE_12__ *) malloc(_len_phost__i0__device_CfgDesc_Itf_Desc0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_phost__i0__device_CfgDesc_Itf_Desc0; _j0++) {
            phost[_i0].device.CfgDesc.Itf_Desc->bInterfaceClass = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].device.CfgDesc.Itf_Desc->bInterfaceSubClass = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__device_CfgDesc_Itf_Desc_Ep_Desc0 = 1;
          phost[_i0].device.CfgDesc.Itf_Desc->Ep_Desc = (struct TYPE_11__ *) malloc(_len_phost__i0__device_CfgDesc_Itf_Desc_Ep_Desc0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_phost__i0__device_CfgDesc_Itf_Desc_Ep_Desc0; _j0++) {
            phost[_i0].device.CfgDesc.Itf_Desc->Ep_Desc->bEndpointAddress = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].device.CfgDesc.Itf_Desc->Ep_Desc->wMaxPacketSize = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].device.CfgDesc.Itf_Desc->Ep_Desc->bInterval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phost[_i0].device.CfgDesc.Itf_Desc->bAlternateSetting = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].device.CfgDesc.Itf_Desc->bInterfaceNumber = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_10__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_17__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_17__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
              int _len_phost__i0__pActiveClass_pData_stream_out0 = 1;
          phost[_i0].pActiveClass->pData->stream_out = (struct TYPE_15__ *) malloc(_len_phost__i0__pActiveClass_pData_stream_out0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_stream_out0; _j0++) {
            phost[_i0].pActiveClass->pData->stream_out->Ep = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->stream_out->EpSize = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->stream_out->valid = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->stream_out->Poll = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->stream_out->AltSettings = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->stream_out->interface = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = USBH_AUDIO_FindAudioStreamingOUT(phost);
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
          int _len_phost0 = 65025;
          struct TYPE_16__ * phost = (struct TYPE_16__ *) malloc(_len_phost0*sizeof(struct TYPE_16__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
              int _len_phost__i0__device_CfgDesc_Itf_Desc0 = 1;
          phost[_i0].device.CfgDesc.Itf_Desc = (struct TYPE_12__ *) malloc(_len_phost__i0__device_CfgDesc_Itf_Desc0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_phost__i0__device_CfgDesc_Itf_Desc0; _j0++) {
            phost[_i0].device.CfgDesc.Itf_Desc->bInterfaceClass = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].device.CfgDesc.Itf_Desc->bInterfaceSubClass = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__device_CfgDesc_Itf_Desc_Ep_Desc0 = 1;
          phost[_i0].device.CfgDesc.Itf_Desc->Ep_Desc = (struct TYPE_11__ *) malloc(_len_phost__i0__device_CfgDesc_Itf_Desc_Ep_Desc0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_phost__i0__device_CfgDesc_Itf_Desc_Ep_Desc0; _j0++) {
            phost[_i0].device.CfgDesc.Itf_Desc->Ep_Desc->bEndpointAddress = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].device.CfgDesc.Itf_Desc->Ep_Desc->wMaxPacketSize = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].device.CfgDesc.Itf_Desc->Ep_Desc->bInterval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phost[_i0].device.CfgDesc.Itf_Desc->bAlternateSetting = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].device.CfgDesc.Itf_Desc->bInterfaceNumber = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_10__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_17__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_17__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
              int _len_phost__i0__pActiveClass_pData_stream_out0 = 1;
          phost[_i0].pActiveClass->pData->stream_out = (struct TYPE_15__ *) malloc(_len_phost__i0__pActiveClass_pData_stream_out0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_stream_out0; _j0++) {
            phost[_i0].pActiveClass->pData->stream_out->Ep = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->stream_out->EpSize = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->stream_out->valid = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->stream_out->Poll = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->stream_out->AltSettings = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->stream_out->interface = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = USBH_AUDIO_FindAudioStreamingOUT(phost);
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
          int _len_phost0 = 100;
          struct TYPE_16__ * phost = (struct TYPE_16__ *) malloc(_len_phost0*sizeof(struct TYPE_16__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
              int _len_phost__i0__device_CfgDesc_Itf_Desc0 = 1;
          phost[_i0].device.CfgDesc.Itf_Desc = (struct TYPE_12__ *) malloc(_len_phost__i0__device_CfgDesc_Itf_Desc0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_phost__i0__device_CfgDesc_Itf_Desc0; _j0++) {
            phost[_i0].device.CfgDesc.Itf_Desc->bInterfaceClass = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].device.CfgDesc.Itf_Desc->bInterfaceSubClass = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__device_CfgDesc_Itf_Desc_Ep_Desc0 = 1;
          phost[_i0].device.CfgDesc.Itf_Desc->Ep_Desc = (struct TYPE_11__ *) malloc(_len_phost__i0__device_CfgDesc_Itf_Desc_Ep_Desc0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_phost__i0__device_CfgDesc_Itf_Desc_Ep_Desc0; _j0++) {
            phost[_i0].device.CfgDesc.Itf_Desc->Ep_Desc->bEndpointAddress = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].device.CfgDesc.Itf_Desc->Ep_Desc->wMaxPacketSize = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].device.CfgDesc.Itf_Desc->Ep_Desc->bInterval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phost[_i0].device.CfgDesc.Itf_Desc->bAlternateSetting = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].device.CfgDesc.Itf_Desc->bInterfaceNumber = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_10__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_17__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_17__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
              int _len_phost__i0__pActiveClass_pData_stream_out0 = 1;
          phost[_i0].pActiveClass->pData->stream_out = (struct TYPE_15__ *) malloc(_len_phost__i0__pActiveClass_pData_stream_out0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_stream_out0; _j0++) {
            phost[_i0].pActiveClass->pData->stream_out->Ep = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->stream_out->EpSize = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->stream_out->valid = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->stream_out->Poll = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->stream_out->AltSettings = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->stream_out->interface = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = USBH_AUDIO_FindAudioStreamingOUT(phost);
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
