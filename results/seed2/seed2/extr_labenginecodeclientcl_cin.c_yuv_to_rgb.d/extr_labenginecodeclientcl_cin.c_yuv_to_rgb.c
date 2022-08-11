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
 long* ROQ_UB_tab ; 
 long* ROQ_UG_tab ; 
 long* ROQ_VG_tab ; 
 long* ROQ_VR_tab ; 
 scalar_t__* ROQ_YY_tab ; 

__attribute__((used)) static unsigned short yuv_to_rgb( long y, long u, long v )
{ 
	long r,g,b,YY = (long)(ROQ_YY_tab[(y)]);

	r = (YY + ROQ_VR_tab[v]) >> 9;
	g = (YY + ROQ_UG_tab[u] + ROQ_VG_tab[v]) >> 8;
	b = (YY + ROQ_UB_tab[u]) >> 9;
	
	if (r<0) r = 0;
	if (g<0) g = 0;
	if (b<0) b = 0;
	if (r > 31) r = 31;
	if (g > 63) g = 63;
	if (b > 31) b = 31;

	return (unsigned short)((r<<11)+(g<<5)+(b));
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
          long y = 100;
          long u = 100;
          long v = 100;
          unsigned short benchRet = yuv_to_rgb(y,u,v);
          printf("%hu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long y = 255;
          long u = 255;
          long v = 255;
          unsigned short benchRet = yuv_to_rgb(y,u,v);
          printf("%hu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long y = 10;
          long u = 10;
          long v = 10;
          unsigned short benchRet = yuv_to_rgb(y,u,v);
          printf("%hu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
