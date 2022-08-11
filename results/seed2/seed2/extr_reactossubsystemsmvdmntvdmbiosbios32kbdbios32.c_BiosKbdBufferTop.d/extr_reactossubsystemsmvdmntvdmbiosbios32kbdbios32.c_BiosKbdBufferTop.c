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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ULONG_PTR ;
struct TYPE_2__ {scalar_t__ KeybdBufferHead; scalar_t__ KeybdBufferTail; } ;
typedef  int /*<<< orphan*/ * LPWORD ;
typedef  int /*<<< orphan*/  BOOLEAN ;

/* Variables and functions */
 TYPE_1__* Bda ; 
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static BOOLEAN BiosKbdBufferTop(LPWORD Data)
{
    /* If it's empty, fail */
    if (Bda->KeybdBufferHead == Bda->KeybdBufferTail) return FALSE;

    /* Otherwise, get the value and return success */
    *Data = *((LPWORD)((ULONG_PTR)Bda + Bda->KeybdBufferHead));

    return TRUE;
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
          int _len_Data0 = 1;
          int * Data = (int *) malloc(_len_Data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Data0; _i0++) {
            Data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = BiosKbdBufferTop(Data);
          printf("%d\n", benchRet); 
          free(Data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_Data0 = 65025;
          int * Data = (int *) malloc(_len_Data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Data0; _i0++) {
            Data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = BiosKbdBufferTop(Data);
          printf("%d\n", benchRet); 
          free(Data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_Data0 = 100;
          int * Data = (int *) malloc(_len_Data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Data0; _i0++) {
            Data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = BiosKbdBufferTop(Data);
          printf("%d\n", benchRet); 
          free(Data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
