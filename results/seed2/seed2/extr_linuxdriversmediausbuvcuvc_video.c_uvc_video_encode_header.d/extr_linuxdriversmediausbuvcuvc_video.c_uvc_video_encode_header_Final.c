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
       0            big-arr\n\
       1            big-arr-10x\n\
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
typedef  int u8 ;
struct uvc_streaming {int last_fid; } ;
struct uvc_buffer {int dummy; } ;

/* Variables and functions */
 int UVC_STREAM_EOF ; 
 int UVC_STREAM_EOH ; 
 int UVC_STREAM_FID ; 

__attribute__((used)) static int uvc_video_encode_header(struct uvc_streaming *stream,
		struct uvc_buffer *buf, u8 *data, int len)
{
	data[0] = 2;	/* Header length */
	data[1] = UVC_STREAM_EOH | UVC_STREAM_EOF
		| (stream->last_fid & UVC_STREAM_FID);
	return 2;
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

    // big-arr
    case 0:
    {
          int len = 255;
          int _len_stream0 = 65025;
          struct uvc_streaming * stream = (struct uvc_streaming *) malloc(_len_stream0*sizeof(struct uvc_streaming));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].last_fid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          struct uvc_buffer * buf = (struct uvc_buffer *) malloc(_len_buf0*sizeof(struct uvc_buffer));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uvc_video_encode_header(stream,buf,data,len);
          printf("%d\n", benchRet); 
          free(stream);
          free(buf);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int len = 10;
          int _len_stream0 = 100;
          struct uvc_streaming * stream = (struct uvc_streaming *) malloc(_len_stream0*sizeof(struct uvc_streaming));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].last_fid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          struct uvc_buffer * buf = (struct uvc_buffer *) malloc(_len_buf0*sizeof(struct uvc_buffer));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uvc_video_encode_header(stream,buf,data,len);
          printf("%d\n", benchRet); 
          free(stream);
          free(buf);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
