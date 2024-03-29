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

__attribute__((used)) static void j_putGrayScanlineToRGB( unsigned char* jpegline, int widthPix, unsigned char* outBuf, int row ){
	int offset = row * widthPix * 4;
	int count;

	for ( count = 0; count < widthPix; count++ )
	{
		unsigned char iGray;
		unsigned char *oRed, *oBlu, *oGrn, *oAlp;

		// get our grayscale value
		iGray = *( jpegline + count );

		oRed = outBuf + offset + count * 4;
		oGrn = outBuf + offset + count * 4 + 1;
		oBlu = outBuf + offset + count * 4 + 2;
		oAlp = outBuf + offset + count * 4 + 3;

		*oRed = iGray;
		*oGrn = iGray;
		*oBlu = iGray;
		*oAlp = 255;
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
          int widthPix = 100;
          int row = 100;
          int _len_jpegline0 = 1;
          unsigned char * jpegline = (unsigned char *) malloc(_len_jpegline0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_jpegline0; _i0++) {
            jpegline[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outBuf0 = 1;
          unsigned char * outBuf = (unsigned char *) malloc(_len_outBuf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_outBuf0; _i0++) {
            outBuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          j_putGrayScanlineToRGB(jpegline,widthPix,outBuf,row);
          free(jpegline);
          free(outBuf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int widthPix = 255;
          int row = 255;
          int _len_jpegline0 = 65025;
          unsigned char * jpegline = (unsigned char *) malloc(_len_jpegline0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_jpegline0; _i0++) {
            jpegline[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outBuf0 = 65025;
          unsigned char * outBuf = (unsigned char *) malloc(_len_outBuf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_outBuf0; _i0++) {
            outBuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          j_putGrayScanlineToRGB(jpegline,widthPix,outBuf,row);
          free(jpegline);
          free(outBuf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int widthPix = 10;
          int row = 10;
          int _len_jpegline0 = 100;
          unsigned char * jpegline = (unsigned char *) malloc(_len_jpegline0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_jpegline0; _i0++) {
            jpegline[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outBuf0 = 100;
          unsigned char * outBuf = (unsigned char *) malloc(_len_outBuf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_outBuf0; _i0++) {
            outBuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          j_putGrayScanlineToRGB(jpegline,widthPix,outBuf,row);
          free(jpegline);
          free(outBuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
