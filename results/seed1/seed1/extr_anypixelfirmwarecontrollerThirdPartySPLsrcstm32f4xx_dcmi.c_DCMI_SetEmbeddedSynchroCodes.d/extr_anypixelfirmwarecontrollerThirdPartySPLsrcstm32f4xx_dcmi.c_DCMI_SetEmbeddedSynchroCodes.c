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
typedef  int uint32_t ;
struct TYPE_5__ {int ESCR; } ;
struct TYPE_4__ {int DCMI_FrameStartCode; scalar_t__ DCMI_FrameEndCode; scalar_t__ DCMI_LineEndCode; scalar_t__ DCMI_LineStartCode; } ;
typedef  TYPE_1__ DCMI_CodesInitTypeDef ;

/* Variables and functions */
 TYPE_3__* DCMI ; 

void DCMI_SetEmbeddedSynchroCodes(DCMI_CodesInitTypeDef* DCMI_CodesInitStruct)
{
  DCMI->ESCR = (uint32_t)(DCMI_CodesInitStruct->DCMI_FrameStartCode |
                          ((uint32_t)DCMI_CodesInitStruct->DCMI_LineStartCode << 8)|
                          ((uint32_t)DCMI_CodesInitStruct->DCMI_LineEndCode << 16)|
                          ((uint32_t)DCMI_CodesInitStruct->DCMI_FrameEndCode << 24));
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
          int _len_DCMI_CodesInitStruct0 = 1;
          struct TYPE_4__ * DCMI_CodesInitStruct = (struct TYPE_4__ *) malloc(_len_DCMI_CodesInitStruct0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_DCMI_CodesInitStruct0; _i0++) {
            DCMI_CodesInitStruct[_i0].DCMI_FrameStartCode = ((-2 * (next_i()%2)) + 1) * next_i();
        DCMI_CodesInitStruct[_i0].DCMI_FrameEndCode = ((-2 * (next_i()%2)) + 1) * next_i();
        DCMI_CodesInitStruct[_i0].DCMI_LineEndCode = ((-2 * (next_i()%2)) + 1) * next_i();
        DCMI_CodesInitStruct[_i0].DCMI_LineStartCode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          DCMI_SetEmbeddedSynchroCodes(DCMI_CodesInitStruct);
          free(DCMI_CodesInitStruct);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_DCMI_CodesInitStruct0 = 65025;
          struct TYPE_4__ * DCMI_CodesInitStruct = (struct TYPE_4__ *) malloc(_len_DCMI_CodesInitStruct0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_DCMI_CodesInitStruct0; _i0++) {
            DCMI_CodesInitStruct[_i0].DCMI_FrameStartCode = ((-2 * (next_i()%2)) + 1) * next_i();
        DCMI_CodesInitStruct[_i0].DCMI_FrameEndCode = ((-2 * (next_i()%2)) + 1) * next_i();
        DCMI_CodesInitStruct[_i0].DCMI_LineEndCode = ((-2 * (next_i()%2)) + 1) * next_i();
        DCMI_CodesInitStruct[_i0].DCMI_LineStartCode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          DCMI_SetEmbeddedSynchroCodes(DCMI_CodesInitStruct);
          free(DCMI_CodesInitStruct);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_DCMI_CodesInitStruct0 = 100;
          struct TYPE_4__ * DCMI_CodesInitStruct = (struct TYPE_4__ *) malloc(_len_DCMI_CodesInitStruct0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_DCMI_CodesInitStruct0; _i0++) {
            DCMI_CodesInitStruct[_i0].DCMI_FrameStartCode = ((-2 * (next_i()%2)) + 1) * next_i();
        DCMI_CodesInitStruct[_i0].DCMI_FrameEndCode = ((-2 * (next_i()%2)) + 1) * next_i();
        DCMI_CodesInitStruct[_i0].DCMI_LineEndCode = ((-2 * (next_i()%2)) + 1) * next_i();
        DCMI_CodesInitStruct[_i0].DCMI_LineStartCode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          DCMI_SetEmbeddedSynchroCodes(DCMI_CodesInitStruct);
          free(DCMI_CodesInitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
