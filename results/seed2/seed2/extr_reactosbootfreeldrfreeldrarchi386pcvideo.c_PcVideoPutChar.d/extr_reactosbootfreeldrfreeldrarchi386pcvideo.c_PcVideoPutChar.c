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
typedef  int USHORT ;
typedef  scalar_t__ ULONG_PTR ;
typedef  scalar_t__ UCHAR ;

/* Variables and functions */
 unsigned int BytesPerScanLine ; 
 scalar_t__ VIDEOTEXT_MEM_ADDRESS ; 

VOID
PcVideoPutChar(int Ch, UCHAR Attr, unsigned X, unsigned Y)
{
  USHORT *BufPtr;

  BufPtr = (USHORT *) (ULONG_PTR)(VIDEOTEXT_MEM_ADDRESS + Y * BytesPerScanLine + X * 2);
  *BufPtr = ((USHORT) Attr << 8) | (Ch & 0xff);
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
          int Ch = 100;
          long Attr = 100;
          unsigned int X = 100;
          unsigned int Y = 100;
          int benchRet = PcVideoPutChar(Ch,Attr,X,Y);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int Ch = 255;
          long Attr = 255;
          unsigned int X = 255;
          unsigned int Y = 255;
          int benchRet = PcVideoPutChar(Ch,Attr,X,Y);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int Ch = 10;
          long Attr = 10;
          unsigned int X = 10;
          unsigned int Y = 10;
          int benchRet = PcVideoPutChar(Ch,Attr,X,Y);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
