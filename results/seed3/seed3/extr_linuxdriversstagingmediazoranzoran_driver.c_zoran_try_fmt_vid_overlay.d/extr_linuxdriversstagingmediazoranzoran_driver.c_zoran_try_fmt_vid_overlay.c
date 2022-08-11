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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct zoran_fh {struct zoran* zr; } ;
struct zoran {int dummy; } ;
struct TYPE_4__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_5__ {TYPE_1__ w; } ;
struct TYPE_6__ {TYPE_2__ win; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;

/* Variables and functions */
 scalar_t__ BUZ_MAX_HEIGHT ; 
 scalar_t__ BUZ_MAX_WIDTH ; 
 scalar_t__ BUZ_MIN_HEIGHT ; 
 scalar_t__ BUZ_MIN_WIDTH ; 

__attribute__((used)) static int zoran_try_fmt_vid_overlay(struct file *file, void *__fh,
					struct v4l2_format *fmt)
{
	struct zoran_fh *fh = __fh;
	struct zoran *zr = fh->zr;

	if (fmt->fmt.win.w.width > BUZ_MAX_WIDTH)
		fmt->fmt.win.w.width = BUZ_MAX_WIDTH;
	if (fmt->fmt.win.w.width < BUZ_MIN_WIDTH)
		fmt->fmt.win.w.width = BUZ_MIN_WIDTH;
	if (fmt->fmt.win.w.height > BUZ_MAX_HEIGHT)
		fmt->fmt.win.w.height = BUZ_MAX_HEIGHT;
	if (fmt->fmt.win.w.height < BUZ_MIN_HEIGHT)
		fmt->fmt.win.w.height = BUZ_MIN_HEIGHT;

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
          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * __fh;
          int _len_fmt0 = 1;
          struct v4l2_format * fmt = (struct v4l2_format *) malloc(_len_fmt0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0].fmt.win.w.width = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].fmt.win.w.height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zoran_try_fmt_vid_overlay(file,__fh,fmt);
          printf("%d\n", benchRet); 
          free(file);
          free(fmt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_file0 = 65025;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * __fh;
          int _len_fmt0 = 65025;
          struct v4l2_format * fmt = (struct v4l2_format *) malloc(_len_fmt0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0].fmt.win.w.width = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].fmt.win.w.height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zoran_try_fmt_vid_overlay(file,__fh,fmt);
          printf("%d\n", benchRet); 
          free(file);
          free(fmt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_file0 = 100;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * __fh;
          int _len_fmt0 = 100;
          struct v4l2_format * fmt = (struct v4l2_format *) malloc(_len_fmt0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0].fmt.win.w.width = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].fmt.win.w.height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zoran_try_fmt_vid_overlay(file,__fh,fmt);
          printf("%d\n", benchRet); 
          free(file);
          free(fmt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
