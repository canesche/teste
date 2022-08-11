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
typedef  int /*<<< orphan*/  gif_result ;
struct TYPE_3__ {unsigned char* gif_data; int buffer_position; int buffer_size; } ;
typedef  TYPE_1__ gif_animation ;

/* Variables and functions */
 unsigned char GIF_BLOCK_TERMINATOR ; 
#define  GIF_EXTENSION_COMMENT 128 
 unsigned char GIF_EXTENSION_INTRODUCER ; 
 int /*<<< orphan*/  GIF_INSUFFICIENT_FRAME_DATA ; 
 int /*<<< orphan*/  GIF_OK ; 

__attribute__((used)) static gif_result gif_skip_frame_extensions(gif_animation *gif) {
    unsigned char *gif_data, *gif_end;
    int gif_bytes;
    unsigned int block_size;

    /*    Get our buffer position etc.
    */
    gif_data = (unsigned char *)(gif->gif_data + gif->buffer_position);
    gif_end = (unsigned char *)(gif->gif_data + gif->buffer_size);
    gif_bytes = (unsigned int)(gif_end - gif_data);

    /*    Skip the extensions
    */
    while (gif_data[0] == GIF_EXTENSION_INTRODUCER) {
        ++gif_data;

        /*    Switch on extension label
        */
        switch(gif_data[0]) {
            /*    Move the pointer to the first data sub-block
             *    1 byte for the extension label
            */
            case GIF_EXTENSION_COMMENT:
                ++gif_data;
                break;

            /*    Move the pointer to the first data sub-block
             *    2 bytes for the extension label and size fields
             *    Skip the extension size itself
            */
            default:
                gif_data += (2 + gif_data[1]);
        }

        /*    Repeatedly skip blocks until we get a zero block or run out of data
         *    This data is ignored by this gif decoder
        */
        gif_bytes = (unsigned int)(gif_end - gif_data);
        block_size = 0;
        while (gif_data[0] != GIF_BLOCK_TERMINATOR) {
            block_size = gif_data[0] + 1;
            if ((gif_bytes -= block_size) < 0)
                return GIF_INSUFFICIENT_FRAME_DATA;
            gif_data += block_size;
        }
        ++gif_data;
    }

    /*    Set buffer position and return
    */
    gif->buffer_position = (unsigned int)(gif_data - gif->gif_data);
    return GIF_OK;
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
          int _len_gif0 = 1;
          struct TYPE_3__ * gif = (struct TYPE_3__ *) malloc(_len_gif0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_gif0; _i0++) {
              int _len_gif__i0__gif_data0 = 1;
          gif[_i0].gif_data = (unsigned char *) malloc(_len_gif__i0__gif_data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_gif__i0__gif_data0; _j0++) {
            gif[_i0].gif_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gif[_i0].buffer_position = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gif_skip_frame_extensions(gif);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_gif0; _aux++) {
          free(gif[_aux].gif_data);
          }
          free(gif);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_gif0 = 65025;
          struct TYPE_3__ * gif = (struct TYPE_3__ *) malloc(_len_gif0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_gif0; _i0++) {
              int _len_gif__i0__gif_data0 = 1;
          gif[_i0].gif_data = (unsigned char *) malloc(_len_gif__i0__gif_data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_gif__i0__gif_data0; _j0++) {
            gif[_i0].gif_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gif[_i0].buffer_position = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gif_skip_frame_extensions(gif);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_gif0; _aux++) {
          free(gif[_aux].gif_data);
          }
          free(gif);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_gif0 = 100;
          struct TYPE_3__ * gif = (struct TYPE_3__ *) malloc(_len_gif0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_gif0; _i0++) {
              int _len_gif__i0__gif_data0 = 1;
          gif[_i0].gif_data = (unsigned char *) malloc(_len_gif__i0__gif_data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_gif__i0__gif_data0; _j0++) {
            gif[_i0].gif_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gif[_i0].buffer_position = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gif_skip_frame_extensions(gif);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_gif0; _aux++) {
          free(gif[_aux].gif_data);
          }
          free(gif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
