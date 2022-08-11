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
typedef  int uint8_t ;

/* Variables and functions */
 int MAX_NEG_CROP ; 
 int* ff_crop_tab ; 

__attribute__((used)) static int mp_yuv_to_rgb(int y, int v, int u, int clip_rgb) {
    const uint8_t *cm = ff_crop_tab + MAX_NEG_CROP;
    int r, g, b;

    r = (1000 * y + 701 * v) / 1000;
    g = (1000 * y - 357 * v - 172 * u) / 1000;
    b = (1000 * y + 886 * u) / 1000;
    if (clip_rgb)
        return ((cm[r * 8] & 0xF8) << 7) | ((cm[g * 8] & 0xF8) << 2) | (cm[b * 8] >> 3);
    if ((unsigned)r < 32 && (unsigned)g < 32 && (unsigned)b < 32)
        return (r << 10) | (g << 5) | b;
    return 1 << 15;
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
          int y = 100;
          int v = 100;
          int u = 100;
          int clip_rgb = 100;
          int benchRet = mp_yuv_to_rgb(y,v,u,clip_rgb);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int y = 255;
          int v = 255;
          int u = 255;
          int clip_rgb = 255;
          int benchRet = mp_yuv_to_rgb(y,v,u,clip_rgb);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int y = 10;
          int v = 10;
          int u = 10;
          int clip_rgb = 10;
          int benchRet = mp_yuv_to_rgb(y,v,u,clip_rgb);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
