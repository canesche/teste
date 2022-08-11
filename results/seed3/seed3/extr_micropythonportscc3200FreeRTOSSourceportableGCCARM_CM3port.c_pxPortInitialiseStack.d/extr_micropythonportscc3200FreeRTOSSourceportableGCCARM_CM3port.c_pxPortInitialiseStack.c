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

/* Type definitions */
typedef  scalar_t__ TaskFunction_t ;
typedef  int StackType_t ;

/* Variables and functions */
 int portINITIAL_XPSR ; 
 int portSTART_ADDRESS_MASK ; 
 scalar_t__ portTASK_RETURN_ADDRESS ; 

StackType_t *pxPortInitialiseStack( StackType_t *pxTopOfStack, TaskFunction_t pxCode, void *pvParameters )
{
	/* Simulate the stack frame as it would be created by a context switch
	interrupt. */
	pxTopOfStack--; /* Offset added to account for the way the MCU uses the stack on entry/exit of interrupts. */
	*pxTopOfStack = portINITIAL_XPSR;	/* xPSR */
	pxTopOfStack--;
	*pxTopOfStack = ( ( StackType_t ) pxCode ) & portSTART_ADDRESS_MASK;	/* PC */
	pxTopOfStack--;
	*pxTopOfStack = ( StackType_t ) portTASK_RETURN_ADDRESS;	/* LR */
	pxTopOfStack -= 5;	/* R12, R3, R2 and R1. */
	*pxTopOfStack = ( StackType_t ) pvParameters;	/* R0 */
	pxTopOfStack -= 8;	/* R11, R10, R9, R8, R7, R6, R5 and R4. */

	return pxTopOfStack;
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
          long pxCode = 100;
          int _len_pxTopOfStack0 = 1;
          int * pxTopOfStack = (int *) malloc(_len_pxTopOfStack0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pxTopOfStack0; _i0++) {
            pxTopOfStack[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * pvParameters;
          int * benchRet = pxPortInitialiseStack(pxTopOfStack,pxCode,pvParameters);
          printf("%d\n", (*benchRet)); 
          free(pxTopOfStack);
        
        break;
    }
    // big-arr
    case 1:
    {
          long pxCode = 255;
          int _len_pxTopOfStack0 = 65025;
          int * pxTopOfStack = (int *) malloc(_len_pxTopOfStack0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pxTopOfStack0; _i0++) {
            pxTopOfStack[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * pvParameters;
          int * benchRet = pxPortInitialiseStack(pxTopOfStack,pxCode,pvParameters);
          printf("%d\n", (*benchRet)); 
          free(pxTopOfStack);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long pxCode = 10;
          int _len_pxTopOfStack0 = 100;
          int * pxTopOfStack = (int *) malloc(_len_pxTopOfStack0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pxTopOfStack0; _i0++) {
            pxTopOfStack[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * pvParameters;
          int * benchRet = pxPortInitialiseStack(pxTopOfStack,pxCode,pvParameters);
          printf("%d\n", (*benchRet)); 
          free(pxTopOfStack);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
