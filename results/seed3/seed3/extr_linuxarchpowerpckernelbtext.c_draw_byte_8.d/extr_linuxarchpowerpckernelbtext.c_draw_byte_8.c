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
 scalar_t__ expand_bits_8 ; 

__attribute__((used)) static inline void draw_byte_8(unsigned char *font, unsigned int *base, int rb)
{
	int l, bits;
	int fg = 0x0F0F0F0FUL;
	int bg = 0x00000000UL;
	unsigned int *eb = (int *)expand_bits_8;

	for (l = 0; l < 16; ++l)
	{
		bits = *font++;
		base[0] = (eb[bits >> 4] & fg) ^ bg;
		base[1] = (eb[bits & 0xf] & fg) ^ bg;
		base = (unsigned int *) ((char *)base + rb);
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
          int rb = 100;
          int _len_font0 = 1;
          unsigned char * font = (unsigned char *) malloc(_len_font0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_font0; _i0++) {
            font[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 1;
          unsigned int * base = (unsigned int *) malloc(_len_base0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          draw_byte_8(font,base,rb);
          free(font);
          free(base);
        
        break;
    }
    // big-arr
    case 1:
    {
          int rb = 255;
          int _len_font0 = 65025;
          unsigned char * font = (unsigned char *) malloc(_len_font0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_font0; _i0++) {
            font[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 65025;
          unsigned int * base = (unsigned int *) malloc(_len_base0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          draw_byte_8(font,base,rb);
          free(font);
          free(base);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int rb = 10;
          int _len_font0 = 100;
          unsigned char * font = (unsigned char *) malloc(_len_font0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_font0; _i0++) {
            font[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 100;
          unsigned int * base = (unsigned int *) malloc(_len_base0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          draw_byte_8(font,base,rb);
          free(font);
          free(base);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
