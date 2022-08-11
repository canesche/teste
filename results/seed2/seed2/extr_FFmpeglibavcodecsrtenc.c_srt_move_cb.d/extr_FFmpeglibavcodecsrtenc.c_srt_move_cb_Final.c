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

__attribute__((used)) static void srt_move_cb(void *priv, int x1, int y1, int x2, int y2,
                        int t1, int t2)
{
    // TODO: add a AV_PKT_DATA_SUBTITLE_POSITION side data when a new subtitles
    // encoding API passing the AVPacket is available.
}


// ------------------------------------------------------------------------- //




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
          int x1 = 100;
          int y1 = 100;
          int x2 = 100;
          int y2 = 100;
          int t1 = 100;
          int t2 = 100;
          void * priv;
          srt_move_cb(priv,x1,y1,x2,y2,t1,t2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x1 = 255;
          int y1 = 255;
          int x2 = 255;
          int y2 = 255;
          int t1 = 255;
          int t2 = 255;
          void * priv;
          srt_move_cb(priv,x1,y1,x2,y2,t1,t2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x1 = 10;
          int y1 = 10;
          int x2 = 10;
          int y2 = 10;
          int t1 = 10;
          int t2 = 10;
          void * priv;
          srt_move_cb(priv,x1,y1,x2,y2,t1,t2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
