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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {unsigned char a; scalar_t__ b; scalar_t__ g; scalar_t__ r; } ;
typedef  TYPE_1__ ddsColor_t ;
struct TYPE_5__ {unsigned short alpha0; unsigned short alpha1; int /*<<< orphan*/ * stuff; } ;
typedef  TYPE_2__ ddsAlphaBlock3BitLinear_t ;

/* Variables and functions */

__attribute__((used)) static void DDSDecodeAlpha3BitLinear( unsigned int *pixel, ddsAlphaBlock3BitLinear_t *alphaBlock, int width, unsigned int alphaZero ){

	int row, pix;
	unsigned int stuff;
	unsigned char bits[ 4 ][ 4 ];
	unsigned short alphas[ 8 ];
	ddsColor_t aColors[ 4 ][ 4 ];


	/* get initial alphas */
	alphas[ 0 ] = alphaBlock->alpha0;
	alphas[ 1 ] = alphaBlock->alpha1;

	/* 8-alpha block */
	if ( alphas[ 0 ] > alphas[ 1 ] ) {
		/* 000 = alpha_0, 001 = alpha_1, others are interpolated */
		alphas[ 2 ] = ( 6 * alphas[ 0 ] +     alphas[ 1 ] ) / 7; /* bit code 010 */
		alphas[ 3 ] = ( 5 * alphas[ 0 ] + 2 * alphas[ 1 ] ) / 7; /* bit code 011 */
		alphas[ 4 ] = ( 4 * alphas[ 0 ] + 3 * alphas[ 1 ] ) / 7; /* bit code 100 */
		alphas[ 5 ] = ( 3 * alphas[ 0 ] + 4 * alphas[ 1 ] ) / 7; /* bit code 101 */
		alphas[ 6 ] = ( 2 * alphas[ 0 ] + 5 * alphas[ 1 ] ) / 7; /* bit code 110 */
		alphas[ 7 ] = (     alphas[ 0 ] + 6 * alphas[ 1 ] ) / 7; /* bit code 111 */
	}

	/* 6-alpha block */
	else
	{
		/* 000 = alpha_0, 001 = alpha_1, others are interpolated */
		alphas[ 2 ] = ( 4 * alphas[ 0 ] +     alphas[ 1 ] ) / 5;  /* bit code 010 */
		alphas[ 3 ] = ( 3 * alphas[ 0 ] + 2 * alphas[ 1 ] ) / 5;  /* bit code 011 */
		alphas[ 4 ] = ( 2 * alphas[ 0 ] + 3 * alphas[ 1 ] ) / 5;  /* bit code 100 */
		alphas[ 5 ] = (    alphas[ 0 ] + 4 * alphas[ 1 ] ) / 5;  /* bit code 101 */
		alphas[ 6 ] = 0;                                        /* bit code 110 */
		alphas[ 7 ] = 255;                                      /* bit code 111 */
	}

	/* decode 3-bit fields into array of 16 bytes with same value */

	/* first two rows of 4 pixels each */
	stuff = *( (unsigned int*) &( alphaBlock->stuff[ 0 ] ) );

	bits[ 0 ][ 0 ] = (unsigned char) ( stuff & 0x00000007 );
	stuff >>= 3;
	bits[ 0 ][ 1 ] = (unsigned char) ( stuff & 0x00000007 );
	stuff >>= 3;
	bits[ 0 ][ 2 ] = (unsigned char) ( stuff & 0x00000007 );
	stuff >>= 3;
	bits[ 0 ][ 3 ] = (unsigned char) ( stuff & 0x00000007 );
	stuff >>= 3;
	bits[ 1 ][ 0 ] = (unsigned char) ( stuff & 0x00000007 );
	stuff >>= 3;
	bits[ 1 ][ 1 ] = (unsigned char) ( stuff & 0x00000007 );
	stuff >>= 3;
	bits[ 1 ][ 2 ] = (unsigned char) ( stuff & 0x00000007 );
	stuff >>= 3;
	bits[ 1 ][ 3 ] = (unsigned char) ( stuff & 0x00000007 );

	/* last two rows */
	stuff = *( (unsigned int*) &( alphaBlock->stuff[ 3 ] ) ); /* last 3 bytes */

	bits[ 2 ][ 0 ] = (unsigned char) ( stuff & 0x00000007 );
	stuff >>= 3;
	bits[ 2 ][ 1 ] = (unsigned char) ( stuff & 0x00000007 );
	stuff >>= 3;
	bits[ 2 ][ 2 ] = (unsigned char) ( stuff & 0x00000007 );
	stuff >>= 3;
	bits[ 2 ][ 3 ] = (unsigned char) ( stuff & 0x00000007 );
	stuff >>= 3;
	bits[ 3 ][ 0 ] = (unsigned char) ( stuff & 0x00000007 );
	stuff >>= 3;
	bits[ 3 ][ 1 ] = (unsigned char) ( stuff & 0x00000007 );
	stuff >>= 3;
	bits[ 3 ][ 2 ] = (unsigned char) ( stuff & 0x00000007 );
	stuff >>= 3;
	bits[ 3 ][ 3 ] = (unsigned char) ( stuff & 0x00000007 );

	/* decode the codes into alpha values */
	for ( row = 0; row < 4; row++ )
	{
		for ( pix = 0; pix < 4; pix++ )
		{
			aColors[ row ][ pix ].r = 0;
			aColors[ row ][ pix ].g = 0;
			aColors[ row ][ pix ].b = 0;
			aColors[ row ][ pix ].a = (unsigned char) alphas[ bits[ row ][ pix ] ];
		}
	}

	/* write out alpha values to the image bits */
	for ( row = 0; row < 4; row++, pixel += width - 4 )
	{
		for ( pix = 0; pix < 4; pix++ )
		{
			/* zero the alpha bits of image pixel */
			*pixel &= alphaZero;

			/* or the bits into the prev. nulled alpha */
			*pixel |= *( (unsigned int*) &( aColors[ row ][ pix ] ) );
			pixel++;
		}
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
          int width = 100;
          unsigned int alphaZero = 100;
          int _len_pixel0 = 1;
          unsigned int * pixel = (unsigned int *) malloc(_len_pixel0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_pixel0; _i0++) {
            pixel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_alphaBlock0 = 1;
          struct TYPE_5__ * alphaBlock = (struct TYPE_5__ *) malloc(_len_alphaBlock0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_alphaBlock0; _i0++) {
            alphaBlock[_i0].alpha0 = ((-2 * (next_i()%2)) + 1) * next_i();
        alphaBlock[_i0].alpha1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alphaBlock__i0__stuff0 = 1;
          alphaBlock[_i0].stuff = (int *) malloc(_len_alphaBlock__i0__stuff0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_alphaBlock__i0__stuff0; _j0++) {
            alphaBlock[_i0].stuff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          DDSDecodeAlpha3BitLinear(pixel,alphaBlock,width,alphaZero);
          free(pixel);
          for(int _aux = 0; _aux < _len_alphaBlock0; _aux++) {
          free(alphaBlock[_aux].stuff);
          }
          free(alphaBlock);
        
        break;
    }
    // big-arr
    case 1:
    {
          int width = 255;
          unsigned int alphaZero = 255;
          int _len_pixel0 = 65025;
          unsigned int * pixel = (unsigned int *) malloc(_len_pixel0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_pixel0; _i0++) {
            pixel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_alphaBlock0 = 65025;
          struct TYPE_5__ * alphaBlock = (struct TYPE_5__ *) malloc(_len_alphaBlock0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_alphaBlock0; _i0++) {
            alphaBlock[_i0].alpha0 = ((-2 * (next_i()%2)) + 1) * next_i();
        alphaBlock[_i0].alpha1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alphaBlock__i0__stuff0 = 1;
          alphaBlock[_i0].stuff = (int *) malloc(_len_alphaBlock__i0__stuff0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_alphaBlock__i0__stuff0; _j0++) {
            alphaBlock[_i0].stuff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          DDSDecodeAlpha3BitLinear(pixel,alphaBlock,width,alphaZero);
          free(pixel);
          for(int _aux = 0; _aux < _len_alphaBlock0; _aux++) {
          free(alphaBlock[_aux].stuff);
          }
          free(alphaBlock);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int width = 10;
          unsigned int alphaZero = 10;
          int _len_pixel0 = 100;
          unsigned int * pixel = (unsigned int *) malloc(_len_pixel0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_pixel0; _i0++) {
            pixel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_alphaBlock0 = 100;
          struct TYPE_5__ * alphaBlock = (struct TYPE_5__ *) malloc(_len_alphaBlock0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_alphaBlock0; _i0++) {
            alphaBlock[_i0].alpha0 = ((-2 * (next_i()%2)) + 1) * next_i();
        alphaBlock[_i0].alpha1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alphaBlock__i0__stuff0 = 1;
          alphaBlock[_i0].stuff = (int *) malloc(_len_alphaBlock__i0__stuff0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_alphaBlock__i0__stuff0; _j0++) {
            alphaBlock[_i0].stuff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          DDSDecodeAlpha3BitLinear(pixel,alphaBlock,width,alphaZero);
          free(pixel);
          for(int _aux = 0; _aux < _len_alphaBlock0; _aux++) {
          free(alphaBlock[_aux].stuff);
          }
          free(alphaBlock);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
