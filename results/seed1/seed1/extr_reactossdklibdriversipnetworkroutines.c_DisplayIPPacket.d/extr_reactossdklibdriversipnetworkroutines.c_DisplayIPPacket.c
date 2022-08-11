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
typedef  int /*<<< orphan*/  VOID ;
typedef  int /*<<< orphan*/  PIP_PACKET ;

/* Variables and functions */

VOID DisplayIPPacket(
    PIP_PACKET IPPacket)
{
#if DBG
    UINT Length;
    PCHAR CharBuffer;

    /* DbgQueryDebugFilterState returns (NTSTATUS)TRUE, (NTSTATUS)FALSE or a failure status code */
    if ((DbgQueryDebugFilterState(DPFLTR_TCPIP_ID, DEBUG_PBUFFER | DPFLTR_MASK) != (NTSTATUS)TRUE) ||
        (DbgQueryDebugFilterState(DPFLTR_TCPIP_ID, DEBUG_IP | DPFLTR_MASK) != (NTSTATUS)TRUE)) {
        return;
    }

    if (!IPPacket) {
        TI_DbgPrint(MIN_TRACE, ("Cannot display null packet.\n"));
        return;
    }

    TI_DbgPrint(MIN_TRACE, ("IPPacket is at (0x%X).\n", IPPacket));
    TI_DbgPrint(MIN_TRACE, ("Header buffer is at (0x%X).\n", IPPacket->Header));
    TI_DbgPrint(MIN_TRACE, ("Header size is (%d).\n", IPPacket->HeaderSize));
    TI_DbgPrint(MIN_TRACE, ("TotalSize (%d).\n", IPPacket->TotalSize));
    TI_DbgPrint(MIN_TRACE, ("NdisPacket (0x%X).\n", IPPacket->NdisPacket));

    CharBuffer = IPPacket->Header;
    Length = IPPacket->HeaderSize;
    DisplayIPHeader(CharBuffer, Length);
#endif
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
          int IPPacket = 100;
          int benchRet = DisplayIPPacket(IPPacket);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int IPPacket = 255;
          int benchRet = DisplayIPPacket(IPPacket);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int IPPacket = 10;
          int benchRet = DisplayIPPacket(IPPacket);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
