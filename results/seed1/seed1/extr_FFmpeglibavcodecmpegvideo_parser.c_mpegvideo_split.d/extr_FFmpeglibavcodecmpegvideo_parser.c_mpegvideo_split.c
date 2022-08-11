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
typedef  int uint8_t ;
typedef  int uint32_t ;
typedef  int /*<<< orphan*/  AVCodecContext ;

/* Variables and functions */

__attribute__((used)) static int mpegvideo_split(AVCodecContext *avctx,
                           const uint8_t *buf, int buf_size)
{
    int i;
    uint32_t state= -1;
    int found=0;

    for(i=0; i<buf_size; i++){
        state= (state<<8) | buf[i];
        if(state == 0x1B3){
            found=1;
        }else if(found && state != 0x1B5 && state < 0x200 && state >= 0x100)
            return i-3;
    }
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
          int buf_size = 100;
          int _len_avctx0 = 1;
          int * avctx = (int *) malloc(_len_avctx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mpegvideo_split(avctx,buf,buf_size);
          printf("%d\n", benchRet); 
          free(avctx);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int buf_size = 255;
          int _len_avctx0 = 65025;
          int * avctx = (int *) malloc(_len_avctx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mpegvideo_split(avctx,buf,buf_size);
          printf("%d\n", benchRet); 
          free(avctx);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int buf_size = 10;
          int _len_avctx0 = 100;
          int * avctx = (int *) malloc(_len_avctx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mpegvideo_split(avctx,buf,buf_size);
          printf("%d\n", benchRet); 
          free(avctx);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
