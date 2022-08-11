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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int v_rowbytes; scalar_t__ v_baseaddr; } ;

/* Variables and functions */
 unsigned int kDataAlpha ; 
 unsigned int kDataBack ; 
 unsigned int kDataIndexed ; 
 unsigned int kDataRotate ; 
 unsigned int kSave ; 
 int* vc_clut ; 
 scalar_t__ vc_progress_white ; 
 int*** vc_rotate_matr ; 
 TYPE_1__ vinfo ; 

__attribute__((used)) static void vc_blit_rect_32(int x, int y, int bx, 
                            int width, int height,
			    int sourceRow, int backRow,
			    const unsigned char * dataPtr,
			    unsigned int * backPtr,
			    unsigned int flags)
{
    volatile unsigned int * dst;
    int line, col;
    unsigned int data = 0, out = 0, back = 0;
    int sx, sy, a, b, c, d;
    int scale = 0x10000;

    a = vc_rotate_matr[kDataRotate & flags][0][0] * scale;
    b = vc_rotate_matr[kDataRotate & flags][0][1] * scale;
    c = vc_rotate_matr[kDataRotate & flags][1][0] * scale;
    d = vc_rotate_matr[kDataRotate & flags][1][1] * scale;
    sx = ((a + b) < 0) ? ((width * scale)  - 0x8000) : 0;
    sy = ((c + d) < 0) ? ((height * scale) - 0x8000) : 0;

    if (!sourceRow) data = (unsigned int)(uintptr_t)dataPtr;
    else if (1 == sourceRow) a = 0;
        
    if (backPtr)
	backPtr += bx;
    dst = (volatile unsigned int *) (vinfo.v_baseaddr +
                                    (y * vinfo.v_rowbytes) +
                                    (x * 4));

    for( line = 0; line < height; line++)
    {
        for( col = 0; col < width; col++)
	{
	    if (sourceRow) data = dataPtr[((sx + (col * a) + (line * b)) >> 16)
				+ sourceRow * (((sy + (col * c) + (line * d)) >> 16))];
	    if (backPtr) {
		if (kSave & flags) {
		    back = *(dst + col);
		    *backPtr++ = back;
		} else
		    back = *backPtr++;
	    }
	    if (kDataIndexed & flags) {
		out =     (vc_clut[data*3 + 0] << 16)
			| (vc_clut[data*3 + 1] << 8)
			| (vc_clut[data*3 + 2]);
	    } else if (kDataAlpha & flags) {
		out = (((((back & 0x00ff00ff) * data) + 0x00ff00ff) >> 8) & 0x00ff00ff)
		     | (((((back & 0x0000ff00) * data) + 0x0000ff00) >> 8) & 0x0000ff00);
		if (vc_progress_white) out += ((0xff - data) << 16)
					    | ((0xff - data) << 8)
					    |  (0xff - data);
            } else if (kDataBack & flags)
		out = back;
	    else
		out = data;
            *(dst + col) = out;
	}
        dst = (volatile unsigned int *) (((volatile char*)dst) + vinfo.v_rowbytes);
	if (backPtr)
	    backPtr += backRow - width;
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
          int x = 100;
          int y = 100;
          int bx = 100;
          int width = 100;
          int height = 100;
          int sourceRow = 100;
          int backRow = 100;
          unsigned int flags = 100;
          int _len_dataPtr0 = 1;
          const unsigned char * dataPtr = (const unsigned char *) malloc(_len_dataPtr0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_dataPtr0; _i0++) {
            dataPtr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_backPtr0 = 1;
          unsigned int * backPtr = (unsigned int *) malloc(_len_backPtr0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_backPtr0; _i0++) {
            backPtr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vc_blit_rect_32(x,y,bx,width,height,sourceRow,backRow,dataPtr,backPtr,flags);
          free(dataPtr);
          free(backPtr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          int bx = 255;
          int width = 255;
          int height = 255;
          int sourceRow = 255;
          int backRow = 255;
          unsigned int flags = 255;
          int _len_dataPtr0 = 65025;
          const unsigned char * dataPtr = (const unsigned char *) malloc(_len_dataPtr0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_dataPtr0; _i0++) {
            dataPtr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_backPtr0 = 65025;
          unsigned int * backPtr = (unsigned int *) malloc(_len_backPtr0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_backPtr0; _i0++) {
            backPtr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vc_blit_rect_32(x,y,bx,width,height,sourceRow,backRow,dataPtr,backPtr,flags);
          free(dataPtr);
          free(backPtr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          int bx = 10;
          int width = 10;
          int height = 10;
          int sourceRow = 10;
          int backRow = 10;
          unsigned int flags = 10;
          int _len_dataPtr0 = 100;
          const unsigned char * dataPtr = (const unsigned char *) malloc(_len_dataPtr0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_dataPtr0; _i0++) {
            dataPtr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_backPtr0 = 100;
          unsigned int * backPtr = (unsigned int *) malloc(_len_backPtr0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_backPtr0; _i0++) {
            backPtr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vc_blit_rect_32(x,y,bx,width,height,sourceRow,backRow,dataPtr,backPtr,flags);
          free(dataPtr);
          free(backPtr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
