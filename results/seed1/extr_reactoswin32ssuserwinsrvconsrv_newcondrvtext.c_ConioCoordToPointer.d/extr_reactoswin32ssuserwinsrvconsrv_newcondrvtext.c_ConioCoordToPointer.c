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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  size_t ULONG ;
struct TYPE_4__ {size_t Y; size_t X; } ;
struct TYPE_5__ {size_t VirtualY; TYPE_1__ ScreenBufferSize; int /*<<< orphan*/ * Buffer; } ;
typedef  TYPE_2__* PTEXTMODE_SCREEN_BUFFER ;
typedef  int /*<<< orphan*/ * PCHAR_INFO ;

/* Variables and functions */

PCHAR_INFO
ConioCoordToPointer(PTEXTMODE_SCREEN_BUFFER Buff, ULONG X, ULONG Y)
{
    return &Buff->Buffer[((Y + Buff->VirtualY) % Buff->ScreenBufferSize.Y) * Buff->ScreenBufferSize.X + X];
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
          unsigned long X = 100;
          unsigned long Y = 100;
          int _len_Buff0 = 1;
          struct TYPE_5__ * Buff = (struct TYPE_5__ *) malloc(_len_Buff0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_Buff0; _i0++) {
            Buff[_i0].VirtualY = ((-2 * (next_i()%2)) + 1) * next_i();
        Buff[_i0].ScreenBufferSize.Y = ((-2 * (next_i()%2)) + 1) * next_i();
        Buff[_i0].ScreenBufferSize.X = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_Buff__i0__Buffer0 = 1;
          Buff[_i0].Buffer = (int *) malloc(_len_Buff__i0__Buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Buff__i0__Buffer0; _j0++) {
            Buff[_i0].Buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = ConioCoordToPointer(Buff,X,Y);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_Buff0; _aux++) {
          free(Buff[_aux].Buffer);
          }
          free(Buff);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long X = 255;
          unsigned long Y = 255;
          int _len_Buff0 = 65025;
          struct TYPE_5__ * Buff = (struct TYPE_5__ *) malloc(_len_Buff0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_Buff0; _i0++) {
            Buff[_i0].VirtualY = ((-2 * (next_i()%2)) + 1) * next_i();
        Buff[_i0].ScreenBufferSize.Y = ((-2 * (next_i()%2)) + 1) * next_i();
        Buff[_i0].ScreenBufferSize.X = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_Buff__i0__Buffer0 = 1;
          Buff[_i0].Buffer = (int *) malloc(_len_Buff__i0__Buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Buff__i0__Buffer0; _j0++) {
            Buff[_i0].Buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = ConioCoordToPointer(Buff,X,Y);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_Buff0; _aux++) {
          free(Buff[_aux].Buffer);
          }
          free(Buff);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long X = 10;
          unsigned long Y = 10;
          int _len_Buff0 = 100;
          struct TYPE_5__ * Buff = (struct TYPE_5__ *) malloc(_len_Buff0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_Buff0; _i0++) {
            Buff[_i0].VirtualY = ((-2 * (next_i()%2)) + 1) * next_i();
        Buff[_i0].ScreenBufferSize.Y = ((-2 * (next_i()%2)) + 1) * next_i();
        Buff[_i0].ScreenBufferSize.X = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_Buff__i0__Buffer0 = 1;
          Buff[_i0].Buffer = (int *) malloc(_len_Buff__i0__Buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Buff__i0__Buffer0; _j0++) {
            Buff[_i0].Buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = ConioCoordToPointer(Buff,X,Y);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_Buff0; _aux++) {
          free(Buff[_aux].Buffer);
          }
          free(Buff);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
