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
typedef  int uint32_t ;
struct TYPE_3__ {int* row_start; int col; scalar_t__ width; scalar_t__ row; scalar_t__ height; scalar_t__ bytes_per_row; scalar_t__* clut; } ;
typedef  TYPE_1__ lzss_image_state ;

/* Variables and functions */

__attribute__((used)) static inline int 
vc_decompress_lzss_next_pixel (int next_data, lzss_image_state* state) 
{
    uint32_t palette_index = 0;
    uint32_t pixel_value   = 0;

    palette_index = next_data * 3;

    pixel_value = ( (uint32_t) state->clut[palette_index + 0] << 16) 
                | ( (uint32_t) state->clut[palette_index + 1] << 8) 
                | ( (uint32_t) state->clut[palette_index + 2]); 

    *(state->row_start + state->col) = pixel_value;

    if (++state->col >= state->width) {
        state->col = 0;
        if (++state->row >= state->height) {
            return 1;
        }
        state->row_start = (volatile uint32_t *) (((uintptr_t)state->row_start) + state->bytes_per_row);
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
          int next_data = 100;
          int _len_state0 = 1;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__row_start0 = 1;
          state[_i0].row_start = (int *) malloc(_len_state__i0__row_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state__i0__row_start0; _j0++) {
            state[_i0].row_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        state[_i0].col = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].row = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].bytes_per_row = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__clut0 = 1;
          state[_i0].clut = (long *) malloc(_len_state__i0__clut0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__clut0; _j0++) {
            state[_i0].clut[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vc_decompress_lzss_next_pixel(next_data,state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].row_start);
          }
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].clut);
          }
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int next_data = 255;
          int _len_state0 = 65025;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__row_start0 = 1;
          state[_i0].row_start = (int *) malloc(_len_state__i0__row_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state__i0__row_start0; _j0++) {
            state[_i0].row_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        state[_i0].col = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].row = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].bytes_per_row = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__clut0 = 1;
          state[_i0].clut = (long *) malloc(_len_state__i0__clut0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__clut0; _j0++) {
            state[_i0].clut[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vc_decompress_lzss_next_pixel(next_data,state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].row_start);
          }
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].clut);
          }
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int next_data = 10;
          int _len_state0 = 100;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__row_start0 = 1;
          state[_i0].row_start = (int *) malloc(_len_state__i0__row_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state__i0__row_start0; _j0++) {
            state[_i0].row_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        state[_i0].col = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].row = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].bytes_per_row = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__clut0 = 1;
          state[_i0].clut = (long *) malloc(_len_state__i0__clut0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__clut0; _j0++) {
            state[_i0].clut[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vc_decompress_lzss_next_pixel(next_data,state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].row_start);
          }
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].clut);
          }
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
