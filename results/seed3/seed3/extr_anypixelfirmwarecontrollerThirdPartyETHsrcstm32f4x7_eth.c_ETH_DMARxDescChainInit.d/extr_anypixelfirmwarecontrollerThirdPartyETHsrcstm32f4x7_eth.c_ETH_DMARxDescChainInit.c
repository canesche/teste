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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int uint32_t ;
struct TYPE_6__ {int DMARDLAR; } ;
struct TYPE_5__ {int ControlBufferSize; int Buffer1Addr; int Buffer2NextDescAddr; int /*<<< orphan*/  Status; } ;
typedef  TYPE_1__ ETH_DMADESCTypeDef ;

/* Variables and functions */
 TYPE_1__* DMARxDescToGet ; 
 int /*<<< orphan*/ * DMA_RX_FRAME_infos ; 
 TYPE_3__* ETH ; 
 int /*<<< orphan*/  ETH_DMARxDesc_OWN ; 
 int ETH_DMARxDesc_RCH ; 
 int ETH_RX_BUF_SIZE ; 
 int /*<<< orphan*/  RX_Frame_Descriptor ; 

void ETH_DMARxDescChainInit(ETH_DMADESCTypeDef *DMARxDescTab, uint8_t *RxBuff, uint32_t RxBuffCount)
{
  uint32_t i = 0;
  ETH_DMADESCTypeDef *DMARxDesc;

  /* Set the DMARxDescToGet pointer with the first one of the DMARxDescTab list */
  DMARxDescToGet = DMARxDescTab;
  /* Fill each DMARxDesc descriptor with the right values */
  for(i=0; i < RxBuffCount; i++)
  {
    /* Get the pointer on the ith member of the Rx Desc list */
    DMARxDesc = DMARxDescTab+i;
    /* Set Own bit of the Rx descriptor Status */
    DMARxDesc->Status = ETH_DMARxDesc_OWN;

    /* Set Buffer1 size and Second Address Chained bit */
    DMARxDesc->ControlBufferSize = ETH_DMARxDesc_RCH | (uint32_t)ETH_RX_BUF_SIZE;
    /* Set Buffer1 address pointer */
    DMARxDesc->Buffer1Addr = (uint32_t)(&RxBuff[i*ETH_RX_BUF_SIZE]);

    /* Initialize the next descriptor with the Next Descriptor Polling Enable */
    if(i < (RxBuffCount-1))
    {
      /* Set next descriptor address register with next descriptor base address */
      DMARxDesc->Buffer2NextDescAddr = (uint32_t)(DMARxDescTab+i+1);
    }
    else
    {
      /* For last descriptor, set next descriptor address register equal to the first descriptor base address */
      DMARxDesc->Buffer2NextDescAddr = (uint32_t)(DMARxDescTab);
    }
  }

  /* Set Receive Descriptor List Address Register */
  ETH->DMARDLAR = (uint32_t) DMARxDescTab;

  DMA_RX_FRAME_infos = &RX_Frame_Descriptor;

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
          int RxBuffCount = 100;
          int _len_DMARxDescTab0 = 1;
          struct TYPE_5__ * DMARxDescTab = (struct TYPE_5__ *) malloc(_len_DMARxDescTab0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_DMARxDescTab0; _i0++) {
            DMARxDescTab[_i0].ControlBufferSize = ((-2 * (next_i()%2)) + 1) * next_i();
        DMARxDescTab[_i0].Buffer1Addr = ((-2 * (next_i()%2)) + 1) * next_i();
        DMARxDescTab[_i0].Buffer2NextDescAddr = ((-2 * (next_i()%2)) + 1) * next_i();
        DMARxDescTab[_i0].Status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_RxBuff0 = 1;
          int * RxBuff = (int *) malloc(_len_RxBuff0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_RxBuff0; _i0++) {
            RxBuff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ETH_DMARxDescChainInit(DMARxDescTab,RxBuff,RxBuffCount);
          free(DMARxDescTab);
          free(RxBuff);
        
        break;
    }
    // big-arr
    case 1:
    {
          int RxBuffCount = 255;
          int _len_DMARxDescTab0 = 65025;
          struct TYPE_5__ * DMARxDescTab = (struct TYPE_5__ *) malloc(_len_DMARxDescTab0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_DMARxDescTab0; _i0++) {
            DMARxDescTab[_i0].ControlBufferSize = ((-2 * (next_i()%2)) + 1) * next_i();
        DMARxDescTab[_i0].Buffer1Addr = ((-2 * (next_i()%2)) + 1) * next_i();
        DMARxDescTab[_i0].Buffer2NextDescAddr = ((-2 * (next_i()%2)) + 1) * next_i();
        DMARxDescTab[_i0].Status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_RxBuff0 = 65025;
          int * RxBuff = (int *) malloc(_len_RxBuff0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_RxBuff0; _i0++) {
            RxBuff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ETH_DMARxDescChainInit(DMARxDescTab,RxBuff,RxBuffCount);
          free(DMARxDescTab);
          free(RxBuff);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int RxBuffCount = 10;
          int _len_DMARxDescTab0 = 100;
          struct TYPE_5__ * DMARxDescTab = (struct TYPE_5__ *) malloc(_len_DMARxDescTab0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_DMARxDescTab0; _i0++) {
            DMARxDescTab[_i0].ControlBufferSize = ((-2 * (next_i()%2)) + 1) * next_i();
        DMARxDescTab[_i0].Buffer1Addr = ((-2 * (next_i()%2)) + 1) * next_i();
        DMARxDescTab[_i0].Buffer2NextDescAddr = ((-2 * (next_i()%2)) + 1) * next_i();
        DMARxDescTab[_i0].Status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_RxBuff0 = 100;
          int * RxBuff = (int *) malloc(_len_RxBuff0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_RxBuff0; _i0++) {
            RxBuff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ETH_DMARxDescChainInit(DMARxDescTab,RxBuff,RxBuffCount);
          free(DMARxDescTab);
          free(RxBuff);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
