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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ width; scalar_t__ height; } ;
struct v4l2_frmsizeenum {scalar_t__ pixel_format; unsigned int index; TYPE_1__ discrete; int /*<<< orphan*/  type; } ;
struct uvc_streaming {unsigned int nformats; struct uvc_format* format; } ;
struct uvc_frame {scalar_t__ wWidth; scalar_t__ wHeight; } ;
struct uvc_format {scalar_t__ fcc; unsigned int nframes; struct uvc_frame* frame; } ;
struct uvc_fh {struct uvc_streaming* stream; } ;
struct file {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 int /*<<< orphan*/  V4L2_FRMSIZE_TYPE_DISCRETE ; 

__attribute__((used)) static int uvc_ioctl_enum_framesizes(struct file *file, void *fh,
				     struct v4l2_frmsizeenum *fsize)
{
	struct uvc_fh *handle = fh;
	struct uvc_streaming *stream = handle->stream;
	struct uvc_format *format = NULL;
	struct uvc_frame *frame = NULL;
	unsigned int index;
	unsigned int i;

	/* Look for the given pixel format */
	for (i = 0; i < stream->nformats; i++) {
		if (stream->format[i].fcc == fsize->pixel_format) {
			format = &stream->format[i];
			break;
		}
	}
	if (format == NULL)
		return -EINVAL;

	/* Skip duplicate frame sizes */
	for (i = 0, index = 0; i < format->nframes; i++) {
		if (frame && frame->wWidth == format->frame[i].wWidth &&
		    frame->wHeight == format->frame[i].wHeight)
			continue;
		frame = &format->frame[i];
		if (index == fsize->index)
			break;
		index++;
	}

	if (i == format->nframes)
		return -EINVAL;

	fsize->type = V4L2_FRMSIZE_TYPE_DISCRETE;
	fsize->discrete.width = frame->wWidth;
	fsize->discrete.height = frame->wHeight;
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
          void * fh;
          int _len_fsize0 = 1;
          struct v4l2_frmsizeenum * fsize = (struct v4l2_frmsizeenum *) malloc(_len_fsize0*sizeof(struct v4l2_frmsizeenum));
          for(int _i0 = 0; _i0 < _len_fsize0; _i0++) {
            fsize[_i0].pixel_format = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].discrete.width = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].discrete.height = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uvc_ioctl_enum_framesizes(file,fh,fsize);
          printf("%d\n", benchRet); 
          free(file);
          free(fsize);
        
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
          void * fh;
          int _len_fsize0 = 65025;
          struct v4l2_frmsizeenum * fsize = (struct v4l2_frmsizeenum *) malloc(_len_fsize0*sizeof(struct v4l2_frmsizeenum));
          for(int _i0 = 0; _i0 < _len_fsize0; _i0++) {
            fsize[_i0].pixel_format = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].discrete.width = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].discrete.height = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uvc_ioctl_enum_framesizes(file,fh,fsize);
          printf("%d\n", benchRet); 
          free(file);
          free(fsize);
        
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
          void * fh;
          int _len_fsize0 = 100;
          struct v4l2_frmsizeenum * fsize = (struct v4l2_frmsizeenum *) malloc(_len_fsize0*sizeof(struct v4l2_frmsizeenum));
          for(int _i0 = 0; _i0 < _len_fsize0; _i0++) {
            fsize[_i0].pixel_format = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].discrete.width = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].discrete.height = ((-2 * (next_i()%2)) + 1) * next_i();
        fsize[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uvc_ioctl_enum_framesizes(file,fh,fsize);
          printf("%d\n", benchRet); 
          free(file);
          free(fsize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
