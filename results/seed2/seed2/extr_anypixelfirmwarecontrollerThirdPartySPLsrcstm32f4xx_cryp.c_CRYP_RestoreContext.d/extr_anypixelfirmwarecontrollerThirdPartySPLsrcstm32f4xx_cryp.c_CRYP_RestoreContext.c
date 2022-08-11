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
typedef  struct TYPE_5__   TYPE_3__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/  CR; int /*<<< orphan*/  IV1RR; int /*<<< orphan*/  IV1LR; int /*<<< orphan*/  IV0RR; int /*<<< orphan*/  IV0LR; int /*<<< orphan*/  K3RR; int /*<<< orphan*/  K3LR; int /*<<< orphan*/  K2RR; int /*<<< orphan*/  K2LR; int /*<<< orphan*/  K1RR; int /*<<< orphan*/  K1LR; int /*<<< orphan*/  K0RR; int /*<<< orphan*/  K0LR; } ;
struct TYPE_4__ {int /*<<< orphan*/  CRYP_IV1RR; int /*<<< orphan*/  CRYP_IV1LR; int /*<<< orphan*/  CRYP_IV0RR; int /*<<< orphan*/  CRYP_IV0LR; int /*<<< orphan*/  CRYP_K3RR; int /*<<< orphan*/  CRYP_K3LR; int /*<<< orphan*/  CRYP_K2RR; int /*<<< orphan*/  CRYP_K2LR; int /*<<< orphan*/  CRYP_K1RR; int /*<<< orphan*/  CRYP_K1LR; int /*<<< orphan*/  CRYP_K0RR; int /*<<< orphan*/  CRYP_K0LR; int /*<<< orphan*/  CR_bits9to2; } ;
typedef  TYPE_1__ CRYP_Context ;

/* Variables and functions */
 TYPE_3__* CRYP ; 
 int /*<<< orphan*/  CRYP_CR_CRYPEN ; 

void CRYP_RestoreContext(CRYP_Context* CRYP_ContextRestore)  
{

  /* Configure the processor with the saved configuration */
  CRYP->CR = CRYP_ContextRestore->CR_bits9to2;

  /* restore The key value */
  CRYP->K0LR = CRYP_ContextRestore->CRYP_K0LR; 
  CRYP->K0RR = CRYP_ContextRestore->CRYP_K0RR;
  CRYP->K1LR = CRYP_ContextRestore->CRYP_K1LR;
  CRYP->K1RR = CRYP_ContextRestore->CRYP_K1RR;
  CRYP->K2LR = CRYP_ContextRestore->CRYP_K2LR;
  CRYP->K2RR = CRYP_ContextRestore->CRYP_K2RR;
  CRYP->K3LR = CRYP_ContextRestore->CRYP_K3LR;
  CRYP->K3RR = CRYP_ContextRestore->CRYP_K3RR;

  /* and the initialization vectors. */
  CRYP->IV0LR = CRYP_ContextRestore->CRYP_IV0LR;
  CRYP->IV0RR = CRYP_ContextRestore->CRYP_IV0RR;
  CRYP->IV1LR = CRYP_ContextRestore->CRYP_IV1LR;
  CRYP->IV1RR = CRYP_ContextRestore->CRYP_IV1RR;

  /* Enable the cryptographic processor */
  CRYP->CR |= CRYP_CR_CRYPEN;
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
          int _len_CRYP_ContextRestore0 = 1;
          struct TYPE_4__ * CRYP_ContextRestore = (struct TYPE_4__ *) malloc(_len_CRYP_ContextRestore0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_CRYP_ContextRestore0; _i0++) {
            CRYP_ContextRestore[_i0].CRYP_IV1RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_IV1LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_IV0RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_IV0LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K3RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K3LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K2RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K2LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K1RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K1LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K0RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K0LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CR_bits9to2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CRYP_RestoreContext(CRYP_ContextRestore);
          free(CRYP_ContextRestore);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_CRYP_ContextRestore0 = 65025;
          struct TYPE_4__ * CRYP_ContextRestore = (struct TYPE_4__ *) malloc(_len_CRYP_ContextRestore0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_CRYP_ContextRestore0; _i0++) {
            CRYP_ContextRestore[_i0].CRYP_IV1RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_IV1LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_IV0RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_IV0LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K3RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K3LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K2RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K2LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K1RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K1LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K0RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K0LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CR_bits9to2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CRYP_RestoreContext(CRYP_ContextRestore);
          free(CRYP_ContextRestore);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_CRYP_ContextRestore0 = 100;
          struct TYPE_4__ * CRYP_ContextRestore = (struct TYPE_4__ *) malloc(_len_CRYP_ContextRestore0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_CRYP_ContextRestore0; _i0++) {
            CRYP_ContextRestore[_i0].CRYP_IV1RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_IV1LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_IV0RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_IV0LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K3RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K3LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K2RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K2LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K1RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K1LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K0RR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CRYP_K0LR = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_ContextRestore[_i0].CR_bits9to2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CRYP_RestoreContext(CRYP_ContextRestore);
          free(CRYP_ContextRestore);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
