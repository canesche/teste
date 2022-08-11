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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ colortype; size_t palettesize; unsigned char* palette; int key_defined; int key_r; int key_g; int key_b; } ;
typedef  TYPE_1__ LodePNGColorMode ;

/* Variables and functions */
 scalar_t__ LCT_GREY ; 
 scalar_t__ LCT_PALETTE ; 
 scalar_t__ LCT_RGB ; 

__attribute__((used)) static unsigned readChunk_tRNS(LodePNGColorMode* color, const unsigned char* data, size_t chunkLength)
{
  unsigned i;
  if(color->colortype == LCT_PALETTE)
  {
    /*error: more alpha values given than there are palette entries*/
    if(chunkLength > color->palettesize) return 38;

    for(i = 0; i < chunkLength; i++) color->palette[4 * i + 3] = data[i];
  }
  else if(color->colortype == LCT_GREY)
  {
    /*error: this chunk must be 2 bytes for greyscale image*/
    if(chunkLength != 2) return 30;

    color->key_defined = 1;
    color->key_r = color->key_g = color->key_b = 256 * data[0] + data[1];
  }
  else if(color->colortype == LCT_RGB)
  {
    /*error: this chunk must be 6 bytes for RGB image*/
    if(chunkLength != 6) return 41;

    color->key_defined = 1;
    color->key_r = 256 * data[0] + data[1];
    color->key_g = 256 * data[2] + data[3];
    color->key_b = 256 * data[4] + data[5];
  }
  else return 42; /*error: tRNS chunk not allowed for other color models*/

  return 0; /* OK */
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
          unsigned long chunkLength = 100;
          int _len_color0 = 1;
          struct TYPE_3__ * color = (struct TYPE_3__ *) malloc(_len_color0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0].colortype = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].palettesize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_color__i0__palette0 = 1;
          color[_i0].palette = (unsigned char *) malloc(_len_color__i0__palette0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_color__i0__palette0; _j0++) {
            color[_i0].palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        color[_i0].key_defined = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].key_r = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].key_g = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].key_b = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          const unsigned char * data = (const unsigned char *) malloc(_len_data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = readChunk_tRNS(color,data,chunkLength);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_color0; _aux++) {
          free(color[_aux].palette);
          }
          free(color);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long chunkLength = 255;
          int _len_color0 = 65025;
          struct TYPE_3__ * color = (struct TYPE_3__ *) malloc(_len_color0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0].colortype = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].palettesize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_color__i0__palette0 = 1;
          color[_i0].palette = (unsigned char *) malloc(_len_color__i0__palette0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_color__i0__palette0; _j0++) {
            color[_i0].palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        color[_i0].key_defined = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].key_r = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].key_g = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].key_b = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          const unsigned char * data = (const unsigned char *) malloc(_len_data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = readChunk_tRNS(color,data,chunkLength);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_color0; _aux++) {
          free(color[_aux].palette);
          }
          free(color);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long chunkLength = 10;
          int _len_color0 = 100;
          struct TYPE_3__ * color = (struct TYPE_3__ *) malloc(_len_color0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0].colortype = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].palettesize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_color__i0__palette0 = 1;
          color[_i0].palette = (unsigned char *) malloc(_len_color__i0__palette0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_color__i0__palette0; _j0++) {
            color[_i0].palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        color[_i0].key_defined = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].key_r = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].key_g = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].key_b = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          const unsigned char * data = (const unsigned char *) malloc(_len_data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = readChunk_tRNS(color,data,chunkLength);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_color0; _aux++) {
          free(color[_aux].palette);
          }
          free(color);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
