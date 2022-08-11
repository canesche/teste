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
 unsigned int* ADAM7_DX ; 
 unsigned int* ADAM7_DY ; 
 unsigned int* ADAM7_IX ; 
 unsigned int* ADAM7_IY ; 

__attribute__((used)) static void Adam7_getpassvalues(unsigned passw[7], unsigned passh[7], size_t filter_passstart[8],
                                size_t padded_passstart[8], size_t passstart[8], unsigned w, unsigned h, unsigned bpp)
{
  /*the passstart values have 8 values: the 8th one indicates the byte after the end of the 7th (= last) pass*/
  unsigned i;

  /*calculate width and height in pixels of each pass*/
  for(i = 0; i < 7; i++)
  {
    passw[i] = (w + ADAM7_DX[i] - ADAM7_IX[i] - 1) / ADAM7_DX[i];
    passh[i] = (h + ADAM7_DY[i] - ADAM7_IY[i] - 1) / ADAM7_DY[i];
    if(passw[i] == 0) passh[i] = 0;
    if(passh[i] == 0) passw[i] = 0;
  }

  filter_passstart[0] = padded_passstart[0] = passstart[0] = 0;
  for(i = 0; i < 7; i++)
  {
    /*if passw[i] is 0, it's 0 bytes, not 1 (no filtertype-byte)*/
    filter_passstart[i + 1] = filter_passstart[i]
                            + ((passw[i] && passh[i]) ? passh[i] * (1 + (passw[i] * bpp + 7) / 8) : 0);
    /*bits padded if needed to fill full byte at end of each scanline*/
    padded_passstart[i + 1] = padded_passstart[i] + passh[i] * ((passw[i] * bpp + 7) / 8);
    /*only padded at end of reduced image*/
    passstart[i + 1] = passstart[i] + (passh[i] * passw[i] * bpp + 7) / 8;
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
          unsigned int w = 100;
          unsigned int h = 100;
          unsigned int bpp = 100;
          int _len_passw0 = 7;
          unsigned int * passw = (unsigned int *) malloc(_len_passw0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_passw0; _i0++) {
            passw[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_passh0 = 7;
          unsigned int * passh = (unsigned int *) malloc(_len_passh0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_passh0; _i0++) {
            passh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filter_passstart0 = 8;
          unsigned long * filter_passstart = (unsigned long *) malloc(_len_filter_passstart0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_filter_passstart0; _i0++) {
            filter_passstart[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_padded_passstart0 = 8;
          unsigned long * padded_passstart = (unsigned long *) malloc(_len_padded_passstart0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_padded_passstart0; _i0++) {
            padded_passstart[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_passstart0 = 8;
          unsigned long * passstart = (unsigned long *) malloc(_len_passstart0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_passstart0; _i0++) {
            passstart[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Adam7_getpassvalues(passw,passh,filter_passstart,padded_passstart,passstart,w,h,bpp);
          free(passw);
          free(passh);
          free(filter_passstart);
          free(padded_passstart);
          free(passstart);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int w = 255;
          unsigned int h = 255;
          unsigned int bpp = 255;
          int _len_passw0 = 65025;
          unsigned int * passw = (unsigned int *) malloc(_len_passw0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_passw0; _i0++) {
            passw[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_passh0 = 65025;
          unsigned int * passh = (unsigned int *) malloc(_len_passh0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_passh0; _i0++) {
            passh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filter_passstart0 = 65025;
          unsigned long * filter_passstart = (unsigned long *) malloc(_len_filter_passstart0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_filter_passstart0; _i0++) {
            filter_passstart[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_padded_passstart0 = 65025;
          unsigned long * padded_passstart = (unsigned long *) malloc(_len_padded_passstart0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_padded_passstart0; _i0++) {
            padded_passstart[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_passstart0 = 65025;
          unsigned long * passstart = (unsigned long *) malloc(_len_passstart0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_passstart0; _i0++) {
            passstart[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Adam7_getpassvalues(passw,passh,filter_passstart,padded_passstart,passstart,w,h,bpp);
          free(passw);
          free(passh);
          free(filter_passstart);
          free(padded_passstart);
          free(passstart);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int w = 10;
          unsigned int h = 10;
          unsigned int bpp = 10;
          int _len_passw0 = 100;
          unsigned int * passw = (unsigned int *) malloc(_len_passw0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_passw0; _i0++) {
            passw[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_passh0 = 100;
          unsigned int * passh = (unsigned int *) malloc(_len_passh0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_passh0; _i0++) {
            passh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filter_passstart0 = 100;
          unsigned long * filter_passstart = (unsigned long *) malloc(_len_filter_passstart0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_filter_passstart0; _i0++) {
            filter_passstart[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_padded_passstart0 = 100;
          unsigned long * padded_passstart = (unsigned long *) malloc(_len_padded_passstart0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_padded_passstart0; _i0++) {
            padded_passstart[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_passstart0 = 100;
          unsigned long * passstart = (unsigned long *) malloc(_len_passstart0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_passstart0; _i0++) {
            passstart[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Adam7_getpassvalues(passw,passh,filter_passstart,padded_passstart,passstart,w,h,bpp);
          free(passw);
          free(passh);
          free(filter_passstart);
          free(padded_passstart);
          free(passstart);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
