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
struct zxdg_output_v1 {int dummy; } ;
struct swaybar_output {void* output_width; void* output_height; } ;
typedef  void* int32_t ;

/* Variables and functions */

__attribute__((used)) static void xdg_output_handle_logical_size(void *data,
		struct zxdg_output_v1 *xdg_output, int32_t width, int32_t height) {
	struct swaybar_output *output = data;
	output->output_height = height;
	output->output_width = width;
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
          void * data;
          int _len_xdg_output0 = 1;
          struct zxdg_output_v1 * xdg_output = (struct zxdg_output_v1 *) malloc(_len_xdg_output0*sizeof(struct zxdg_output_v1));
          for(int _i0 = 0; _i0 < _len_xdg_output0; _i0++) {
            xdg_output[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * width;
          void * height;
          xdg_output_handle_logical_size(data,xdg_output,width,height);
          free(xdg_output);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * data;
          int _len_xdg_output0 = 65025;
          struct zxdg_output_v1 * xdg_output = (struct zxdg_output_v1 *) malloc(_len_xdg_output0*sizeof(struct zxdg_output_v1));
          for(int _i0 = 0; _i0 < _len_xdg_output0; _i0++) {
            xdg_output[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * width;
          void * height;
          xdg_output_handle_logical_size(data,xdg_output,width,height);
          free(xdg_output);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * data;
          int _len_xdg_output0 = 100;
          struct zxdg_output_v1 * xdg_output = (struct zxdg_output_v1 *) malloc(_len_xdg_output0*sizeof(struct zxdg_output_v1));
          for(int _i0 = 0; _i0 < _len_xdg_output0; _i0++) {
            xdg_output[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * width;
          void * height;
          xdg_output_handle_logical_size(data,xdg_output,width,height);
          free(xdg_output);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
