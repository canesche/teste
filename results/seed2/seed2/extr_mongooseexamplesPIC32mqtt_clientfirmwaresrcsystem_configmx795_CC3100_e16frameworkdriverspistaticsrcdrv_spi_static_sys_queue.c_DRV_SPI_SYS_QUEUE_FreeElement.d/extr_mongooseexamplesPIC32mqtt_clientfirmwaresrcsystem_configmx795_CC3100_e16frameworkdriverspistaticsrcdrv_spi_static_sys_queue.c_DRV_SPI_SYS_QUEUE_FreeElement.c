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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint32_t ;
struct TYPE_6__ {struct TYPE_6__* pNext; } ;
struct TYPE_5__ {scalar_t__ numAlloc; scalar_t__ numReserved; int /*<<< orphan*/ * pNext; TYPE_1__* pQueueManager; } ;
struct TYPE_4__ {int /*<<< orphan*/  numReserveElements; int /*<<< orphan*/  numFreeElements; TYPE_3__* pFreeElementTail; TYPE_3__* pFreeElementHead; } ;
typedef  int /*<<< orphan*/  DRV_SPI_SYS_QUEUE_RESULT ;
typedef  TYPE_1__ DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA ;
typedef  TYPE_2__ DRV_SPI_SYS_QUEUE_QUEUE_DATA ;
typedef  scalar_t__ DRV_SPI_SYS_QUEUE_HANDLE ;
typedef  TYPE_3__ DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA ;

/* Variables and functions */
 int /*<<< orphan*/  DRV_SPI_SYS_QUEUE_INVALID_PARAMETER ; 
 scalar_t__ DRV_SPI_SYS_QUEUE_MAX_ERROR ; 
 int /*<<< orphan*/  DRV_SPI_SYS_QUEUE_SUCCESS ; 

DRV_SPI_SYS_QUEUE_RESULT DRV_SPI_SYS_QUEUE_FreeElement(DRV_SPI_SYS_QUEUE_HANDLE queue, void * element)
{
    if ((queue <= 0) && (queue >= DRV_SPI_SYS_QUEUE_MAX_ERROR))
    {
        return DRV_SPI_SYS_QUEUE_INVALID_PARAMETER;
    }

    DRV_SPI_SYS_QUEUE_QUEUE_DATA * pQueue = (DRV_SPI_SYS_QUEUE_QUEUE_DATA *)queue;
    DRV_SPI_SYS_QUEUE_QUEUE_MANAGER_DATA * pQueueManager = pQueue->pQueueManager;

    if (pQueue->pNext != NULL)
    {
        return DRV_SPI_SYS_QUEUE_INVALID_PARAMETER;
    }

    DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA * pEntry = (DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA *)((uint32_t)element - sizeof(DRV_SPI_SYS_QUEUE_FIFO_ELEMENT_DATA));

    if (pQueueManager->pFreeElementHead == NULL)
    {
        pQueueManager->pFreeElementHead = pEntry;
    }
    else
    {
        pQueueManager->pFreeElementTail->pNext = pEntry;
    }
    pQueueManager->pFreeElementTail = pEntry;

    pQueueManager->numFreeElements++;
    pQueue->numAlloc--;
    if (pQueue->numAlloc < pQueue->numReserved)
    {
        pQueueManager->numReserveElements++;
    }

#if _SPI_DRV_SYS_QUEUE_TRACKING
    pQueue->numFreeOps ++;
    pQueueManager->numFreeOps ++;
#endif
    return DRV_SPI_SYS_QUEUE_SUCCESS;
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
          long queue = 100;
          void * element;
          int benchRet = DRV_SPI_SYS_QUEUE_FreeElement(queue,element);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long queue = 255;
          void * element;
          int benchRet = DRV_SPI_SYS_QUEUE_FreeElement(queue,element);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long queue = 10;
          void * element;
          int benchRet = DRV_SPI_SYS_QUEUE_FreeElement(queue,element);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
