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
typedef  int uint64_t ;
typedef  int uint32_t ;
struct MovChannelLayoutMap {int tag; int layout; } ;

/* Variables and functions */
 int MOV_CH_LAYOUT_USE_BITMAP ; 
 int MOV_CH_LAYOUT_USE_DESCRIPTIONS ; 
 struct MovChannelLayoutMap** mov_ch_layout_map ; 

uint64_t ff_mov_get_channel_layout(uint32_t tag, uint32_t bitmap)
{
    int i, channels;
    const struct MovChannelLayoutMap *layout_map;

    /* use ff_mov_get_channel_label() to build a layout instead */
    if (tag == MOV_CH_LAYOUT_USE_DESCRIPTIONS)
        return 0;

    /* handle the use of the channel bitmap */
    if (tag == MOV_CH_LAYOUT_USE_BITMAP)
        return bitmap < 0x40000 ? bitmap : 0;

    /* get the layout map based on the channel count for the specified layout tag */
    channels = tag & 0xFFFF;
    if (channels > 9)
        channels = 0;
    layout_map = mov_ch_layout_map[channels];

    /* find the channel layout for the specified layout tag */
    for (i = 0; layout_map[i].tag != 0; i++) {
        if (layout_map[i].tag == tag)
            break;
    }
    return layout_map[i].layout;
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
          int tag = 100;
          int bitmap = 100;
          int benchRet = ff_mov_get_channel_layout(tag,bitmap);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int tag = 255;
          int bitmap = 255;
          int benchRet = ff_mov_get_channel_layout(tag,bitmap);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tag = 10;
          int bitmap = 10;
          int benchRet = ff_mov_get_channel_layout(tag,bitmap);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
