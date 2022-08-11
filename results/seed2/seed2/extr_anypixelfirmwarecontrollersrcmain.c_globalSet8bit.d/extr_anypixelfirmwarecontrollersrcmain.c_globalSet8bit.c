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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint8_t ;
struct TYPE_3__ {int /*<<< orphan*/ * payload; } ;
struct TYPE_4__ {TYPE_1__ s; } ;

/* Variables and functions */
 TYPE_2__* ledpackets ; 
 int* panelLEDmap ; 

void globalSet8bit(int index, uint8_t value) {
    int global_row = index / 3 / 14;
    int global_column = (index / 3) % 14;
    int channel = index % 3;
    int panel_row = global_row % 7;
    int panel_column = global_column % 7;
    int panel_index = (global_row / 7)*2+(global_column / 7);
    int addr = panelLEDmap[(panel_row*7+panel_column)*3+channel];
    addr += (addr>>5)*16;   // make sure things are in the correct places for the 5 LED board CPUs to find them
    ledpackets[panel_index].s.payload[addr] = value;
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
          globalSet8bit(index,value);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int value = 255;
          globalSet8bit(index,value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int value = 10;
          globalSet8bit(index,value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
