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
typedef  int uint8_t ;
struct TYPE_5__ {int /*<<< orphan*/ * CSR; int /*<<< orphan*/  CR; int /*<<< orphan*/  STR; int /*<<< orphan*/  IMR; } ;
struct TYPE_4__ {int /*<<< orphan*/ * HASH_CSR; int /*<<< orphan*/  HASH_CR; int /*<<< orphan*/  HASH_STR; int /*<<< orphan*/  HASH_IMR; } ;
typedef  TYPE_1__ HASH_Context ;

/* Variables and functions */
 TYPE_3__* HASH ; 
 int /*<<< orphan*/  HASH_CR_INIT ; 

void HASH_RestoreContext(HASH_Context* HASH_ContextRestore)  
{
  uint8_t i = 0;
  
  /* restore context registers */
  HASH->IMR = HASH_ContextRestore->HASH_IMR;   
  HASH->STR = HASH_ContextRestore->HASH_STR;     
  HASH->CR = HASH_ContextRestore->HASH_CR;
  
  /* Initialize the hash processor */
  HASH->CR |= HASH_CR_INIT; 
  
   /* continue restoring context registers */     
  for(i=0; i<=50;i++)
  {
     HASH->CSR[i] = HASH_ContextRestore->HASH_CSR[i];
  }   
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
          int _len_HASH_ContextRestore0 = 1;
          struct TYPE_4__ * HASH_ContextRestore = (struct TYPE_4__ *) malloc(_len_HASH_ContextRestore0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_HASH_ContextRestore0; _i0++) {
              int _len_HASH_ContextRestore__i0__HASH_CSR0 = 1;
          HASH_ContextRestore[_i0].HASH_CSR = (int *) malloc(_len_HASH_ContextRestore__i0__HASH_CSR0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_HASH_ContextRestore__i0__HASH_CSR0; _j0++) {
            HASH_ContextRestore[_i0].HASH_CSR[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        HASH_ContextRestore[_i0].HASH_CR = ((-2 * (next_i()%2)) + 1) * next_i();
        HASH_ContextRestore[_i0].HASH_STR = ((-2 * (next_i()%2)) + 1) * next_i();
        HASH_ContextRestore[_i0].HASH_IMR = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          HASH_RestoreContext(HASH_ContextRestore);
          for(int _aux = 0; _aux < _len_HASH_ContextRestore0; _aux++) {
          free(HASH_ContextRestore[_aux].HASH_CSR);
          }
          free(HASH_ContextRestore);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_HASH_ContextRestore0 = 65025;
          struct TYPE_4__ * HASH_ContextRestore = (struct TYPE_4__ *) malloc(_len_HASH_ContextRestore0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_HASH_ContextRestore0; _i0++) {
              int _len_HASH_ContextRestore__i0__HASH_CSR0 = 1;
          HASH_ContextRestore[_i0].HASH_CSR = (int *) malloc(_len_HASH_ContextRestore__i0__HASH_CSR0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_HASH_ContextRestore__i0__HASH_CSR0; _j0++) {
            HASH_ContextRestore[_i0].HASH_CSR[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        HASH_ContextRestore[_i0].HASH_CR = ((-2 * (next_i()%2)) + 1) * next_i();
        HASH_ContextRestore[_i0].HASH_STR = ((-2 * (next_i()%2)) + 1) * next_i();
        HASH_ContextRestore[_i0].HASH_IMR = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          HASH_RestoreContext(HASH_ContextRestore);
          for(int _aux = 0; _aux < _len_HASH_ContextRestore0; _aux++) {
          free(HASH_ContextRestore[_aux].HASH_CSR);
          }
          free(HASH_ContextRestore);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_HASH_ContextRestore0 = 100;
          struct TYPE_4__ * HASH_ContextRestore = (struct TYPE_4__ *) malloc(_len_HASH_ContextRestore0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_HASH_ContextRestore0; _i0++) {
              int _len_HASH_ContextRestore__i0__HASH_CSR0 = 1;
          HASH_ContextRestore[_i0].HASH_CSR = (int *) malloc(_len_HASH_ContextRestore__i0__HASH_CSR0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_HASH_ContextRestore__i0__HASH_CSR0; _j0++) {
            HASH_ContextRestore[_i0].HASH_CSR[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        HASH_ContextRestore[_i0].HASH_CR = ((-2 * (next_i()%2)) + 1) * next_i();
        HASH_ContextRestore[_i0].HASH_STR = ((-2 * (next_i()%2)) + 1) * next_i();
        HASH_ContextRestore[_i0].HASH_IMR = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          HASH_RestoreContext(HASH_ContextRestore);
          for(int _aux = 0; _aux < _len_HASH_ContextRestore0; _aux++) {
          free(HASH_ContextRestore[_aux].HASH_CSR);
          }
          free(HASH_ContextRestore);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
