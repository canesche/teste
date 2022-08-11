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
struct sh_veu_vfmt {int dummy; } ;
struct sh_veu_dev {struct sh_veu_vfmt vfmt_in; struct sh_veu_vfmt vfmt_out; } ;
typedef  enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;

/* Variables and functions */
#define  V4L2_BUF_TYPE_VIDEO_CAPTURE 129 
#define  V4L2_BUF_TYPE_VIDEO_OUTPUT 128 

__attribute__((used)) static struct sh_veu_vfmt *sh_veu_get_vfmt(struct sh_veu_dev *veu,
					   enum v4l2_buf_type type)
{
	switch (type) {
	case V4L2_BUF_TYPE_VIDEO_CAPTURE:
		return &veu->vfmt_out;
	case V4L2_BUF_TYPE_VIDEO_OUTPUT:
		return &veu->vfmt_in;
	default:
		return NULL;
	}
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
          enum v4l2_buf_type type = 0;
          int _len_veu0 = 1;
          struct sh_veu_dev * veu = (struct sh_veu_dev *) malloc(_len_veu0*sizeof(struct sh_veu_dev));
          for(int _i0 = 0; _i0 < _len_veu0; _i0++) {
            veu[_i0].vfmt_in.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        veu[_i0].vfmt_out.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct sh_veu_vfmt * benchRet = sh_veu_get_vfmt(veu,type);
          printf("%d\n", (*benchRet).dummy);
          free(veu);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum v4l2_buf_type type = 0;
          int _len_veu0 = 65025;
          struct sh_veu_dev * veu = (struct sh_veu_dev *) malloc(_len_veu0*sizeof(struct sh_veu_dev));
          for(int _i0 = 0; _i0 < _len_veu0; _i0++) {
            veu[_i0].vfmt_in.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        veu[_i0].vfmt_out.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct sh_veu_vfmt * benchRet = sh_veu_get_vfmt(veu,type);
          printf("%d\n", (*benchRet).dummy);
          free(veu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum v4l2_buf_type type = 0;
          int _len_veu0 = 100;
          struct sh_veu_dev * veu = (struct sh_veu_dev *) malloc(_len_veu0*sizeof(struct sh_veu_dev));
          for(int _i0 = 0; _i0 < _len_veu0; _i0++) {
            veu[_i0].vfmt_in.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        veu[_i0].vfmt_out.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct sh_veu_vfmt * benchRet = sh_veu_get_vfmt(veu,type);
          printf("%d\n", (*benchRet).dummy);
          free(veu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
