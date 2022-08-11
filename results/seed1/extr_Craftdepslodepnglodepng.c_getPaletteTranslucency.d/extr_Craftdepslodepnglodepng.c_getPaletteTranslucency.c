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

__attribute__((used)) static unsigned getPaletteTranslucency(const unsigned char* palette, size_t palettesize)
{
  size_t i, key = 0;
  unsigned r = 0, g = 0, b = 0; /*the value of the color with alpha 0, so long as color keying is possible*/
  for(i = 0; i < palettesize; i++)
  {
    if(!key && palette[4 * i + 3] == 0)
    {
      r = palette[4 * i + 0]; g = palette[4 * i + 1]; b = palette[4 * i + 2];
      key = 1;
      i = (size_t)(-1); /*restart from beginning, to detect earlier opaque colors with key's value*/
    }
    else if(palette[4 * i + 3] != 255) return 2;
    /*when key, no opaque RGB may have key's RGB*/
    else if(key && r == palette[i * 4 + 0] && g == palette[i * 4 + 1] && b == palette[i * 4 + 2]) return 2;
  }
  return key;
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
          unsigned long palettesize = 100;
          int _len_palette0 = 1;
          const unsigned char * palette = (const unsigned char *) malloc(_len_palette0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_palette0; _i0++) {
            palette[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = getPaletteTranslucency(palette,palettesize);
          printf("%u\n", benchRet); 
          free(palette);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long palettesize = 255;
          int _len_palette0 = 65025;
          const unsigned char * palette = (const unsigned char *) malloc(_len_palette0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_palette0; _i0++) {
            palette[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = getPaletteTranslucency(palette,palettesize);
          printf("%u\n", benchRet); 
          free(palette);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long palettesize = 10;
          int _len_palette0 = 100;
          const unsigned char * palette = (const unsigned char *) malloc(_len_palette0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_palette0; _i0++) {
            palette[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = getPaletteTranslucency(palette,palettesize);
          printf("%u\n", benchRet); 
          free(palette);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
