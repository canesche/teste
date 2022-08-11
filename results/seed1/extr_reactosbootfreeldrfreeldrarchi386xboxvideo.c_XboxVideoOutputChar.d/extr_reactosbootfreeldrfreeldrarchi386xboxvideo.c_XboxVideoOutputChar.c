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
typedef  int /*<<< orphan*/  ULONG ;
typedef  int UCHAR ;
typedef  int /*<<< orphan*/ * PULONG ;
typedef  int* PUCHAR ;

/* Variables and functions */
 unsigned int BytesPerPixel ; 
 unsigned int CHAR_HEIGHT ; 
 unsigned int CHAR_WIDTH ; 
 unsigned int Delta ; 
 scalar_t__ FrameBuffer ; 
 unsigned int TOP_BOTTOM_LINES ; 
 int* XboxFont8x16 ; 

__attribute__((used)) static VOID
XboxVideoOutputChar(UCHAR Char, unsigned X, unsigned Y, ULONG FgColor, ULONG BgColor)
{
  PUCHAR FontPtr;
  PULONG Pixel;
  UCHAR Mask;
  unsigned Line;
  unsigned Col;

  FontPtr = XboxFont8x16 + Char * 16;
  Pixel = (PULONG) ((char *) FrameBuffer + (Y * CHAR_HEIGHT + TOP_BOTTOM_LINES) * Delta
                  + X * CHAR_WIDTH * BytesPerPixel);
  for (Line = 0; Line < CHAR_HEIGHT; Line++)
    {
      Mask = 0x80;
      for (Col = 0; Col < CHAR_WIDTH; Col++)
        {
          Pixel[Col] = (0 != (FontPtr[Line] & Mask) ? FgColor : BgColor);
          Mask = Mask >> 1;
        }
      Pixel = (PULONG) ((char *) Pixel + Delta);
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
          int Char = 100;
          unsigned int X = 100;
          unsigned int Y = 100;
          int FgColor = 100;
          int BgColor = 100;
          int benchRet = XboxVideoOutputChar(Char,X,Y,FgColor,BgColor);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int Char = 255;
          unsigned int X = 255;
          unsigned int Y = 255;
          int FgColor = 255;
          int BgColor = 255;
          int benchRet = XboxVideoOutputChar(Char,X,Y,FgColor,BgColor);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int Char = 10;
          unsigned int X = 10;
          unsigned int Y = 10;
          int FgColor = 10;
          int BgColor = 10;
          int benchRet = XboxVideoOutputChar(Char,X,Y,FgColor,BgColor);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
