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
typedef  int int32_t ;
struct TYPE_8__ {scalar_t__ gState; TYPE_1__* pActiveClass; } ;
typedef  TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_7__ {int partial_ptr; } ;
struct TYPE_9__ {scalar_t__ play_state; TYPE_2__ headphone; } ;
struct TYPE_6__ {TYPE_4__* pData; } ;
typedef  TYPE_4__ AUDIO_HandleTypeDef ;

/* Variables and functions */
 scalar_t__ AUDIO_PLAYBACK_PLAY ; 
 scalar_t__ HOST_CLASS ; 

int32_t USBH_AUDIO_GetOutOffset (USBH_HandleTypeDef *phost)
{
  AUDIO_HandleTypeDef *AUDIO_Handle; 
  
  if(phost->gState == HOST_CLASS)
  {
    AUDIO_Handle =  phost->pActiveClass->pData;
    if(AUDIO_Handle->play_state == AUDIO_PLAYBACK_PLAY)
    {
      return AUDIO_Handle->headphone.partial_ptr;
    }
  }
  return -1;  
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
          struct TYPE_8__ * phost = (struct TYPE_8__ *) malloc(_len_phost0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
            phost[_i0].gState = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_6__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_9__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
            phost[_i0].pActiveClass->pData->play_state = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->headphone.partial_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = USBH_AUDIO_GetOutOffset(phost);
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
          struct TYPE_8__ * phost = (struct TYPE_8__ *) malloc(_len_phost0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
            phost[_i0].gState = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_6__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_9__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
            phost[_i0].pActiveClass->pData->play_state = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->headphone.partial_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = USBH_AUDIO_GetOutOffset(phost);
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
          struct TYPE_8__ * phost = (struct TYPE_8__ *) malloc(_len_phost0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
            phost[_i0].gState = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_6__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_9__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
            phost[_i0].pActiveClass->pData->play_state = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->headphone.partial_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = USBH_AUDIO_GetOutOffset(phost);
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
