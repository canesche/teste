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
typedef  int /*<<< orphan*/  VOID ;
struct TYPE_5__ {int /*<<< orphan*/  ByteCount; } ;
struct TYPE_4__ {int /*<<< orphan*/  MappedSystemVa; } ;
typedef  int /*<<< orphan*/  PVOID ;
typedef  int /*<<< orphan*/ * PUINT ;
typedef  TYPE_1__* PNDIS_BUFFER ;
typedef  TYPE_2__* PMDL ;

/* Variables and functions */

VOID XNdisQueryBuffer
(PNDIS_BUFFER    Buffer,
 PVOID           *VirtualAddress,
 PUINT           Length)
/*
 * FUNCTION:
 *     Queries an NDIS buffer for information
 * ARGUMENTS:
 *     Buffer         = Pointer to NDIS buffer to query
 *     VirtualAddress = Address of buffer to place virtual address
 *     Length         = Address of buffer to place length of buffer
 */
{
	if (VirtualAddress != NULL)
	    *(PVOID*)VirtualAddress = Buffer->MappedSystemVa;

	*Length = ((PMDL)Buffer)->ByteCount;
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
          int _len_Buffer0 = 1;
          struct TYPE_4__ * Buffer = (struct TYPE_4__ *) malloc(_len_Buffer0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_Buffer0; _i0++) {
            Buffer[_i0].MappedSystemVa = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_VirtualAddress0 = 1;
          int * VirtualAddress = (int *) malloc(_len_VirtualAddress0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_VirtualAddress0; _i0++) {
            VirtualAddress[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Length0 = 1;
          int * Length = (int *) malloc(_len_Length0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Length0; _i0++) {
            Length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = XNdisQueryBuffer(Buffer,VirtualAddress,Length);
          printf("%d\n", benchRet); 
          free(Buffer);
          free(VirtualAddress);
          free(Length);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_Buffer0 = 65025;
          struct TYPE_4__ * Buffer = (struct TYPE_4__ *) malloc(_len_Buffer0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_Buffer0; _i0++) {
            Buffer[_i0].MappedSystemVa = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_VirtualAddress0 = 65025;
          int * VirtualAddress = (int *) malloc(_len_VirtualAddress0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_VirtualAddress0; _i0++) {
            VirtualAddress[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Length0 = 65025;
          int * Length = (int *) malloc(_len_Length0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Length0; _i0++) {
            Length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = XNdisQueryBuffer(Buffer,VirtualAddress,Length);
          printf("%d\n", benchRet); 
          free(Buffer);
          free(VirtualAddress);
          free(Length);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_Buffer0 = 100;
          struct TYPE_4__ * Buffer = (struct TYPE_4__ *) malloc(_len_Buffer0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_Buffer0; _i0++) {
            Buffer[_i0].MappedSystemVa = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_VirtualAddress0 = 100;
          int * VirtualAddress = (int *) malloc(_len_VirtualAddress0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_VirtualAddress0; _i0++) {
            VirtualAddress[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Length0 = 100;
          int * Length = (int *) malloc(_len_Length0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Length0; _i0++) {
            Length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = XNdisQueryBuffer(Buffer,VirtualAddress,Length);
          printf("%d\n", benchRet); 
          free(Buffer);
          free(VirtualAddress);
          free(Length);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
