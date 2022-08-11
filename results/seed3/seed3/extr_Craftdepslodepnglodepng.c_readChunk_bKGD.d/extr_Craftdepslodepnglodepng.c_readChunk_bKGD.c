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
struct TYPE_4__ {scalar_t__ colortype; } ;
struct TYPE_5__ {int background_defined; unsigned char background_r; unsigned char background_g; unsigned char background_b; TYPE_1__ color; } ;
typedef  TYPE_2__ LodePNGInfo ;

/* Variables and functions */
 scalar_t__ LCT_GREY ; 
 scalar_t__ LCT_GREY_ALPHA ; 
 scalar_t__ LCT_PALETTE ; 
 scalar_t__ LCT_RGB ; 
 scalar_t__ LCT_RGBA ; 

__attribute__((used)) static unsigned readChunk_bKGD(LodePNGInfo* info, const unsigned char* data, size_t chunkLength)
{
  if(info->color.colortype == LCT_PALETTE)
  {
    /*error: this chunk must be 1 byte for indexed color image*/
    if(chunkLength != 1) return 43;

    info->background_defined = 1;
    info->background_r = info->background_g = info->background_b = data[0];
  }
  else if(info->color.colortype == LCT_GREY || info->color.colortype == LCT_GREY_ALPHA)
  {
    /*error: this chunk must be 2 bytes for greyscale image*/
    if(chunkLength != 2) return 44;

    info->background_defined = 1;
    info->background_r = info->background_g = info->background_b
                                 = 256 * data[0] + data[1];
  }
  else if(info->color.colortype == LCT_RGB || info->color.colortype == LCT_RGBA)
  {
    /*error: this chunk must be 6 bytes for greyscale image*/
    if(chunkLength != 6) return 45;

    info->background_defined = 1;
    info->background_r = 256 * data[0] + data[1];
    info->background_g = 256 * data[2] + data[3];
    info->background_b = 256 * data[4] + data[5];
  }

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
          int _len_info0 = 1;
          struct TYPE_5__ * info = (struct TYPE_5__ *) malloc(_len_info0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].background_defined = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].background_r = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].background_g = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].background_b = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].color.colortype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          const unsigned char * data = (const unsigned char *) malloc(_len_data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = readChunk_bKGD(info,data,chunkLength);
          printf("%u\n", benchRet); 
          free(info);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long chunkLength = 255;
          int _len_info0 = 65025;
          struct TYPE_5__ * info = (struct TYPE_5__ *) malloc(_len_info0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].background_defined = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].background_r = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].background_g = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].background_b = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].color.colortype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          const unsigned char * data = (const unsigned char *) malloc(_len_data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = readChunk_bKGD(info,data,chunkLength);
          printf("%u\n", benchRet); 
          free(info);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long chunkLength = 10;
          int _len_info0 = 100;
          struct TYPE_5__ * info = (struct TYPE_5__ *) malloc(_len_info0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].background_defined = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].background_r = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].background_g = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].background_b = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].color.colortype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          const unsigned char * data = (const unsigned char *) malloc(_len_data0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = readChunk_bKGD(info,data,chunkLength);
          printf("%u\n", benchRet); 
          free(info);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
