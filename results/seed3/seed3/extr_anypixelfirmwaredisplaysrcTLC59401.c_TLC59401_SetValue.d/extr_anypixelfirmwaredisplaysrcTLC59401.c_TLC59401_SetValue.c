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
 int* txpacket ; 

void TLC59401_SetValue(int index, int value) {
    int addr = (index * 3) / 2;
    if(index & 1) {
        // odd so first 4 msb in first byte, 8 bits in second
        txpacket[addr] &= 0xF0;   // erase the low 4 bits we are writing to
        txpacket[addr] |= ((value >> 8) & 0x0F);  // store the 4 msb of the input in the low 4 bits of the first packet byte
        txpacket[addr+1] = value & 0xFF;
    } else {
        txpacket[addr] = (value >> 4) & 0xFF;
        txpacket[addr+1] &= 0x0F; // erase the high 4 bits we are writing to
        txpacket[addr+1] |= (value << 4) & 0xF0;
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
          int index = 100;
          int value = 100;
          TLC59401_SetValue(index,value);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int value = 255;
          TLC59401_SetValue(index,value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int value = 10;
          TLC59401_SetValue(index,value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
