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

__attribute__((used)) static int qr_finder_quick_crossing_check(const unsigned char *_img,
 int _width,int _height,int _x0,int _y0,int _x1,int _y1,int _v){
  /*The points must be inside the image, and have a !_v:_v:!_v pattern.
    We don't scan the whole line initially, but quickly reject if the endpoints
     aren't !_v, or the midpoint isn't _v.
    If either end point is out of the image, or we don't encounter a _v pixel,
     we return a negative value, indicating the region should be considered
     empty.
    Otherwise, we return a positive value to indicate it is non-empty.*/
  if(_x0<0||_x0>=_width||_y0<0||_y0>=_height||
   _x1<0||_x1>=_width||_y1<0||_y1>=_height){
    return -1;
  }
  if(!_img[_y0*_width+_x0]!=_v||!_img[_y1*_width+_x1]!=_v)return 1;
  if(!_img[(_y0+_y1>>1)*_width+(_x0+_x1>>1)]==_v)return -1;
  return 0;
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
          int _width = 100;
          int _height = 100;
          int _x0 = 100;
          int _y0 = 100;
          int _x1 = 100;
          int _y1 = 100;
          int _v = 100;
          int _len__img0 = 1;
          const unsigned char * _img = (const unsigned char *) malloc(_len__img0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len__img0; _i0++) {
            _img[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qr_finder_quick_crossing_check(_img,_width,_height,_x0,_y0,_x1,_y1,_v);
          printf("%d\n", benchRet); 
          free(_img);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _width = 255;
          int _height = 255;
          int _x0 = 255;
          int _y0 = 255;
          int _x1 = 255;
          int _y1 = 255;
          int _v = 255;
          int _len__img0 = 65025;
          const unsigned char * _img = (const unsigned char *) malloc(_len__img0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len__img0; _i0++) {
            _img[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qr_finder_quick_crossing_check(_img,_width,_height,_x0,_y0,_x1,_y1,_v);
          printf("%d\n", benchRet); 
          free(_img);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _width = 10;
          int _height = 10;
          int _x0 = 10;
          int _y0 = 10;
          int _x1 = 10;
          int _y1 = 10;
          int _v = 10;
          int _len__img0 = 100;
          const unsigned char * _img = (const unsigned char *) malloc(_len__img0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len__img0; _i0++) {
            _img[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qr_finder_quick_crossing_check(_img,_width,_height,_x0,_y0,_x1,_y1,_v);
          printf("%d\n", benchRet); 
          free(_img);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
