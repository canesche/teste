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
struct TYPE_8__ {TYPE_1__* Itf_Desc; } ;
struct TYPE_7__ {size_t current_interface; TYPE_3__ CfgDesc; } ;
struct TYPE_9__ {scalar_t__ gState; TYPE_2__ device; } ;
typedef  TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_6__ {scalar_t__ bInterfaceProtocol; } ;
typedef  int /*<<< orphan*/  HID_TypeTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  HID_KEYBOARD ; 
 scalar_t__ HID_KEYBRD_BOOT_CODE ; 
 int /*<<< orphan*/  HID_MOUSE ; 
 scalar_t__ HID_MOUSE_BOOT_CODE ; 
 int /*<<< orphan*/  HID_UNKNOWN ; 
 scalar_t__ HOST_CLASS ; 

HID_TypeTypeDef USBH_HID_GetDeviceType(USBH_HandleTypeDef *phost)
{
  HID_TypeTypeDef   type = HID_UNKNOWN;
  
  if(phost->gState == HOST_CLASS)
  {
    
    if(phost->device.CfgDesc.Itf_Desc[phost->device.current_interface].bInterfaceProtocol \
      == HID_KEYBRD_BOOT_CODE)
    {
      type = HID_KEYBOARD;  
    }
    else if(phost->device.CfgDesc.Itf_Desc[phost->device.current_interface].bInterfaceProtocol \
      == HID_MOUSE_BOOT_CODE)		  
    {
      type=  HID_MOUSE;  
    }
  }
  return type;
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
          struct TYPE_9__ * phost = (struct TYPE_9__ *) malloc(_len_phost0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
            phost[_i0].gState = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].device.current_interface = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__device_CfgDesc_Itf_Desc0 = 1;
          phost[_i0].device.CfgDesc.Itf_Desc = (struct TYPE_6__ *) malloc(_len_phost__i0__device_CfgDesc_Itf_Desc0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_phost__i0__device_CfgDesc_Itf_Desc0; _j0++) {
            phost[_i0].device.CfgDesc.Itf_Desc->bInterfaceProtocol = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = USBH_HID_GetDeviceType(phost);
          printf("%d\n", benchRet); 
          free(phost);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_phost0 = 65025;
          struct TYPE_9__ * phost = (struct TYPE_9__ *) malloc(_len_phost0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
            phost[_i0].gState = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].device.current_interface = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__device_CfgDesc_Itf_Desc0 = 1;
          phost[_i0].device.CfgDesc.Itf_Desc = (struct TYPE_6__ *) malloc(_len_phost__i0__device_CfgDesc_Itf_Desc0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_phost__i0__device_CfgDesc_Itf_Desc0; _j0++) {
            phost[_i0].device.CfgDesc.Itf_Desc->bInterfaceProtocol = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = USBH_HID_GetDeviceType(phost);
          printf("%d\n", benchRet); 
          free(phost);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_phost0 = 100;
          struct TYPE_9__ * phost = (struct TYPE_9__ *) malloc(_len_phost0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
            phost[_i0].gState = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].device.current_interface = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__device_CfgDesc_Itf_Desc0 = 1;
          phost[_i0].device.CfgDesc.Itf_Desc = (struct TYPE_6__ *) malloc(_len_phost__i0__device_CfgDesc_Itf_Desc0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_phost__i0__device_CfgDesc_Itf_Desc0; _j0++) {
            phost[_i0].device.CfgDesc.Itf_Desc->bInterfaceProtocol = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = USBH_HID_GetDeviceType(phost);
          printf("%d\n", benchRet); 
          free(phost);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
