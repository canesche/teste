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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct v4l2_mbus_framefmt {int /*<<< orphan*/  field; int /*<<< orphan*/  code; int /*<<< orphan*/  colorspace; int /*<<< orphan*/  height; int /*<<< orphan*/  width; } ;
struct TYPE_4__ {int /*<<< orphan*/  code; } ;
struct TYPE_3__ {int /*<<< orphan*/  height; int /*<<< orphan*/  width; } ;

/* Variables and functions */
 int /*<<< orphan*/  V4L2_COLORSPACE_SRGB ; 
 int /*<<< orphan*/  V4L2_FIELD_NONE ; 
 TYPE_2__* ov2659_formats ; 
 TYPE_1__* ov2659_framesizes ; 

__attribute__((used)) static void ov2659_get_default_format(struct v4l2_mbus_framefmt *format)
{
	format->width = ov2659_framesizes[2].width;
	format->height = ov2659_framesizes[2].height;
	format->colorspace = V4L2_COLORSPACE_SRGB;
	format->code = ov2659_formats[0].code;
	format->field = V4L2_FIELD_NONE;
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
          int _len_format0 = 1;
          struct v4l2_mbus_framefmt * format = (struct v4l2_mbus_framefmt *) malloc(_len_format0*sizeof(struct v4l2_mbus_framefmt));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0].field = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ov2659_get_default_format(format);
          free(format);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_format0 = 65025;
          struct v4l2_mbus_framefmt * format = (struct v4l2_mbus_framefmt *) malloc(_len_format0*sizeof(struct v4l2_mbus_framefmt));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0].field = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ov2659_get_default_format(format);
          free(format);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_format0 = 100;
          struct v4l2_mbus_framefmt * format = (struct v4l2_mbus_framefmt *) malloc(_len_format0*sizeof(struct v4l2_mbus_framefmt));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0].field = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ov2659_get_default_format(format);
          free(format);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
