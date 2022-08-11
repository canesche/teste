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
typedef  scalar_t__ uint32_t ;

/* Variables and functions */
 scalar_t__ bar_probing ; 

__attribute__((used)) static uint32_t *hdr_addr(const uint32_t *hdr, int reg)
{
	uint32_t addr;

	/*
	 * This is a little bit tricky.  The header maps consist of
	 * 0x20 bytes of size masks, followed by 0x70 bytes of header data.
	 * In the normal case, when not probing a BAR's size, we want
	 * to access the header data, so we add 0x20 to the reg offset,
	 * thus skipping the size mask area.
	 * In the BAR probing case, we want to access the size mask for
	 * the BAR, so we subtract 0x10 (the config header offset for
	 * BAR0), and don't skip the size mask area.
	 */

	addr = (uint32_t)hdr + reg + (bar_probing ? -0x10 : 0x20);

	bar_probing = 0;
	return (uint32_t *)addr;
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
          int reg = 100;
          int _len_hdr0 = 1;
          const long * hdr = (const long *) malloc(_len_hdr0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long * benchRet = hdr_addr(hdr,reg);
          printf("%ld\n", (*benchRet)); 
          free(hdr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int reg = 255;
          int _len_hdr0 = 65025;
          const long * hdr = (const long *) malloc(_len_hdr0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long * benchRet = hdr_addr(hdr,reg);
          printf("%ld\n", (*benchRet)); 
          free(hdr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int reg = 10;
          int _len_hdr0 = 100;
          const long * hdr = (const long *) malloc(_len_hdr0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long * benchRet = hdr_addr(hdr,reg);
          printf("%ld\n", (*benchRet)); 
          free(hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
