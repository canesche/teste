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
typedef  int /*<<< orphan*/  PCHAR ;

/* Variables and functions */

VOID NoUiDrawProgressBar(ULONG Left, ULONG Top, ULONG Right, ULONG Bottom, ULONG Position, ULONG Range, PCHAR ProgressText)
{
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
          int Left = 100;
          int Top = 100;
          int Right = 100;
          int Bottom = 100;
          int Position = 100;
          int Range = 100;
          int ProgressText = 100;
          int benchRet = NoUiDrawProgressBar(Left,Top,Right,Bottom,Position,Range,ProgressText);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int Left = 255;
          int Top = 255;
          int Right = 255;
          int Bottom = 255;
          int Position = 255;
          int Range = 255;
          int ProgressText = 255;
          int benchRet = NoUiDrawProgressBar(Left,Top,Right,Bottom,Position,Range,ProgressText);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int Left = 10;
          int Top = 10;
          int Right = 10;
          int Bottom = 10;
          int Position = 10;
          int Range = 10;
          int ProgressText = 10;
          int benchRet = NoUiDrawProgressBar(Left,Top,Right,Bottom,Position,Range,ProgressText);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
