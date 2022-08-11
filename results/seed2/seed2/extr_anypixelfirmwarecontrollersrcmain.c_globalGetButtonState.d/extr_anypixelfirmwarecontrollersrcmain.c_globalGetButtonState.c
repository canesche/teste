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

/* Variables and functions */
#define  PANEL_NE 131 
#define  PANEL_NW 130 
#define  PANEL_SE 129 
#define  PANEL_SW 128 
 int* buttonpacket ; 

bool globalGetButtonState(int boardButtonIndex, int panel) {
    int col = boardButtonIndex % 7;
    int row = boardButtonIndex / 7;
    int bitAddr;

    switch(panel) {
        case PANEL_NW:
            bitAddr = row * 14 + col;
            break;
        case PANEL_NE:
            bitAddr = row * 14 + col + 7;
            break;
        case PANEL_SW:
            bitAddr = (row + 7) * 14 + col;
            break;
        case PANEL_SE:
            bitAddr = (row + 7) * 14 + col + 7;
            break;
    }
    int byteAddr = bitAddr / 8;
    int bitOffset = 7-(bitAddr - (byteAddr*8));
    if( buttonpacket[4+byteAddr] & (1 << bitOffset) )
        return true;
    return false;
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
          int boardButtonIndex = 100;
          int panel = 100;
          int benchRet = globalGetButtonState(boardButtonIndex,panel);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int boardButtonIndex = 255;
          int panel = 255;
          int benchRet = globalGetButtonState(boardButtonIndex,panel);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int boardButtonIndex = 10;
          int panel = 10;
          int benchRet = globalGetButtonState(boardButtonIndex,panel);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
