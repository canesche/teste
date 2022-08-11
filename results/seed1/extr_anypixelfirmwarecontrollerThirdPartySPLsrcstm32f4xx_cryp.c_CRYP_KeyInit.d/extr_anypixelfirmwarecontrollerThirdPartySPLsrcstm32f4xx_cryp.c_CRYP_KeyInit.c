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
struct TYPE_5__ {int /*<<< orphan*/  K3RR; int /*<<< orphan*/  K3LR; int /*<<< orphan*/  K2RR; int /*<<< orphan*/  K2LR; int /*<<< orphan*/  K1RR; int /*<<< orphan*/  K1LR; int /*<<< orphan*/  K0RR; int /*<<< orphan*/  K0LR; } ;
struct TYPE_4__ {int /*<<< orphan*/  CRYP_Key3Right; int /*<<< orphan*/  CRYP_Key3Left; int /*<<< orphan*/  CRYP_Key2Right; int /*<<< orphan*/  CRYP_Key2Left; int /*<<< orphan*/  CRYP_Key1Right; int /*<<< orphan*/  CRYP_Key1Left; int /*<<< orphan*/  CRYP_Key0Right; int /*<<< orphan*/  CRYP_Key0Left; } ;
typedef  TYPE_1__ CRYP_KeyInitTypeDef ;

/* Variables and functions */
 TYPE_3__* CRYP ; 

void CRYP_KeyInit(CRYP_KeyInitTypeDef* CRYP_KeyInitStruct)
{
  /* Key Initialisation */
  CRYP->K0LR = CRYP_KeyInitStruct->CRYP_Key0Left;
  CRYP->K0RR = CRYP_KeyInitStruct->CRYP_Key0Right;
  CRYP->K1LR = CRYP_KeyInitStruct->CRYP_Key1Left;
  CRYP->K1RR = CRYP_KeyInitStruct->CRYP_Key1Right;
  CRYP->K2LR = CRYP_KeyInitStruct->CRYP_Key2Left;
  CRYP->K2RR = CRYP_KeyInitStruct->CRYP_Key2Right;
  CRYP->K3LR = CRYP_KeyInitStruct->CRYP_Key3Left;
  CRYP->K3RR = CRYP_KeyInitStruct->CRYP_Key3Right;
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
          int _len_CRYP_KeyInitStruct0 = 1;
          struct TYPE_4__ * CRYP_KeyInitStruct = (struct TYPE_4__ *) malloc(_len_CRYP_KeyInitStruct0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_CRYP_KeyInitStruct0; _i0++) {
            CRYP_KeyInitStruct[_i0].CRYP_Key3Right = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key3Left = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key2Right = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key2Left = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key1Right = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key1Left = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key0Right = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key0Left = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CRYP_KeyInit(CRYP_KeyInitStruct);
          free(CRYP_KeyInitStruct);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_CRYP_KeyInitStruct0 = 65025;
          struct TYPE_4__ * CRYP_KeyInitStruct = (struct TYPE_4__ *) malloc(_len_CRYP_KeyInitStruct0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_CRYP_KeyInitStruct0; _i0++) {
            CRYP_KeyInitStruct[_i0].CRYP_Key3Right = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key3Left = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key2Right = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key2Left = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key1Right = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key1Left = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key0Right = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key0Left = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CRYP_KeyInit(CRYP_KeyInitStruct);
          free(CRYP_KeyInitStruct);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_CRYP_KeyInitStruct0 = 100;
          struct TYPE_4__ * CRYP_KeyInitStruct = (struct TYPE_4__ *) malloc(_len_CRYP_KeyInitStruct0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_CRYP_KeyInitStruct0; _i0++) {
            CRYP_KeyInitStruct[_i0].CRYP_Key3Right = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key3Left = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key2Right = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key2Left = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key1Right = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key1Left = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key0Right = ((-2 * (next_i()%2)) + 1) * next_i();
        CRYP_KeyInitStruct[_i0].CRYP_Key0Left = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CRYP_KeyInit(CRYP_KeyInitStruct);
          free(CRYP_KeyInitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
