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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int sizeimage; } ;
struct TYPE_9__ {TYPE_2__ pix; } ;
struct TYPE_10__ {TYPE_3__ fmt; } ;
struct TYPE_11__ {size_t video_head; TYPE_4__ format; TYPE_1__* video_ringbuffer; scalar_t__ video_cnt; } ;
typedef  TYPE_5__ priv_t ;
struct TYPE_7__ {int framesize; } ;

/* Variables and functions */

__attribute__((used)) static int get_video_framesize(priv_t *priv)
{
    /*
      this routine will be called before grab_video_frame
      thus let's return topmost frame's size
    */
    if (priv->video_cnt)
        return priv->video_ringbuffer[priv->video_head].framesize;
    /*
      no video frames yet available. i don't know what to do in this case,
      thus let's return some fallback result (for compressed format this will be
      maximum allowed frame size.
    */
    return priv->format.fmt.pix.sizeimage;
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
          int _len_priv0 = 1;
          struct TYPE_11__ * priv = (struct TYPE_11__ *) malloc(_len_priv0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].video_head = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].format.fmt.pix.sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__video_ringbuffer0 = 1;
          priv[_i0].video_ringbuffer = (struct TYPE_7__ *) malloc(_len_priv__i0__video_ringbuffer0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_priv__i0__video_ringbuffer0; _j0++) {
            priv[_i0].video_ringbuffer->framesize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].video_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_video_framesize(priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].video_ringbuffer);
          }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct TYPE_11__ * priv = (struct TYPE_11__ *) malloc(_len_priv0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].video_head = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].format.fmt.pix.sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__video_ringbuffer0 = 1;
          priv[_i0].video_ringbuffer = (struct TYPE_7__ *) malloc(_len_priv__i0__video_ringbuffer0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_priv__i0__video_ringbuffer0; _j0++) {
            priv[_i0].video_ringbuffer->framesize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].video_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_video_framesize(priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].video_ringbuffer);
          }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct TYPE_11__ * priv = (struct TYPE_11__ *) malloc(_len_priv0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].video_head = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].format.fmt.pix.sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__video_ringbuffer0 = 1;
          priv[_i0].video_ringbuffer = (struct TYPE_7__ *) malloc(_len_priv__i0__video_ringbuffer0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_priv__i0__video_ringbuffer0; _j0++) {
            priv[_i0].video_ringbuffer->framesize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].video_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_video_framesize(priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].video_ringbuffer);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
