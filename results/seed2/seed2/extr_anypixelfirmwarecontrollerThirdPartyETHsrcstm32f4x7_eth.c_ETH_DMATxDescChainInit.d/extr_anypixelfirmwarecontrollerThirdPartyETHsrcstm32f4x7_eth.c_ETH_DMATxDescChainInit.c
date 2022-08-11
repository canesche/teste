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
struct TYPE_6__ {int DMATDLAR; } ;
struct TYPE_5__ {int Buffer1Addr; int Buffer2NextDescAddr; int /*<<< orphan*/  Status; } ;
typedef  TYPE_1__ ETH_DMADESCTypeDef ;

/* Variables and functions */
 TYPE_1__* DMATxDescToSet ; 
 TYPE_3__* ETH ; 
 int /*<<< orphan*/  ETH_DMATxDesc_TCH ; 
 int ETH_TX_BUF_SIZE ; 

void ETH_DMATxDescChainInit(ETH_DMADESCTypeDef *DMATxDescTab, uint8_t* TxBuff, uint32_t TxBuffCount)
{
  uint32_t i = 0;
  ETH_DMADESCTypeDef *DMATxDesc;

  /* Set the DMATxDescToSet pointer with the first one of the DMATxDescTab list */
  DMATxDescToSet = DMATxDescTab;
  /* Fill each DMATxDesc descriptor with the right values */
  for(i=0; i < TxBuffCount; i++)
  {
    /* Get the pointer on the ith member of the Tx Desc list */
    DMATxDesc = DMATxDescTab + i;
    /* Set Second Address Chained bit */
    DMATxDesc->Status = ETH_DMATxDesc_TCH;

    /* Set Buffer1 address pointer */
    DMATxDesc->Buffer1Addr = (uint32_t)(&TxBuff[i*ETH_TX_BUF_SIZE]);

    /* Initialize the next descriptor with the Next Descriptor Polling Enable */
    if(i < (TxBuffCount-1))
    {
      /* Set next descriptor address register with next descriptor base address */
      DMATxDesc->Buffer2NextDescAddr = (uint32_t)(DMATxDescTab+i+1);
    }
    else
    {
      /* For last descriptor, set next descriptor address register equal to the first descriptor base address */
      DMATxDesc->Buffer2NextDescAddr = (uint32_t) DMATxDescTab;
    }
  }

  /* Set Transmit Desciptor List Address Register */
  ETH->DMATDLAR = (uint32_t) DMATxDescTab;
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
          int TxBuffCount = 100;
          int _len_DMATxDescTab0 = 1;
          struct TYPE_5__ * DMATxDescTab = (struct TYPE_5__ *) malloc(_len_DMATxDescTab0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_DMATxDescTab0; _i0++) {
            DMATxDescTab[_i0].Buffer1Addr = ((-2 * (next_i()%2)) + 1) * next_i();
        DMATxDescTab[_i0].Buffer2NextDescAddr = ((-2 * (next_i()%2)) + 1) * next_i();
        DMATxDescTab[_i0].Status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_TxBuff0 = 1;
          int * TxBuff = (int *) malloc(_len_TxBuff0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_TxBuff0; _i0++) {
            TxBuff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ETH_DMATxDescChainInit(DMATxDescTab,TxBuff,TxBuffCount);
          free(DMATxDescTab);
          free(TxBuff);
        
        break;
    }
    // big-arr
    case 1:
    {
          int TxBuffCount = 255;
          int _len_DMATxDescTab0 = 65025;
          struct TYPE_5__ * DMATxDescTab = (struct TYPE_5__ *) malloc(_len_DMATxDescTab0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_DMATxDescTab0; _i0++) {
            DMATxDescTab[_i0].Buffer1Addr = ((-2 * (next_i()%2)) + 1) * next_i();
        DMATxDescTab[_i0].Buffer2NextDescAddr = ((-2 * (next_i()%2)) + 1) * next_i();
        DMATxDescTab[_i0].Status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_TxBuff0 = 65025;
          int * TxBuff = (int *) malloc(_len_TxBuff0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_TxBuff0; _i0++) {
            TxBuff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ETH_DMATxDescChainInit(DMATxDescTab,TxBuff,TxBuffCount);
          free(DMATxDescTab);
          free(TxBuff);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int TxBuffCount = 10;
          int _len_DMATxDescTab0 = 100;
          struct TYPE_5__ * DMATxDescTab = (struct TYPE_5__ *) malloc(_len_DMATxDescTab0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_DMATxDescTab0; _i0++) {
            DMATxDescTab[_i0].Buffer1Addr = ((-2 * (next_i()%2)) + 1) * next_i();
        DMATxDescTab[_i0].Buffer2NextDescAddr = ((-2 * (next_i()%2)) + 1) * next_i();
        DMATxDescTab[_i0].Status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_TxBuff0 = 100;
          int * TxBuff = (int *) malloc(_len_TxBuff0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_TxBuff0; _i0++) {
            TxBuff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ETH_DMATxDescChainInit(DMATxDescTab,TxBuff,TxBuffCount);
          free(DMATxDescTab);
          free(TxBuff);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
