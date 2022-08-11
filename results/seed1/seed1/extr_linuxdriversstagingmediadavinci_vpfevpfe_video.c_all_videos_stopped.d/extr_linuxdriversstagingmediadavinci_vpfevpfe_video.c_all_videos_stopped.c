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
struct vpfe_pipeline {int input_num; int output_num; TYPE_1__** outputs; TYPE_2__** inputs; } ;
struct vpfe_video_device {struct vpfe_pipeline pipe; } ;
struct TYPE_4__ {scalar_t__ started; } ;
struct TYPE_3__ {scalar_t__ started; } ;

/* Variables and functions */

__attribute__((used)) static int all_videos_stopped(struct vpfe_video_device *video)
{
	struct vpfe_pipeline *pipe = &video->pipe;
	int i;

	for (i = 0; i < pipe->input_num; i++)
		if (pipe->inputs[i]->started)
			return 0;
	for (i = 0; i < pipe->output_num; i++)
		if (pipe->outputs[i]->started)
			return 0;
	return 1;
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
          int _len_video0 = 1;
          struct vpfe_video_device * video = (struct vpfe_video_device *) malloc(_len_video0*sizeof(struct vpfe_video_device));
          for(int _i0 = 0; _i0 < _len_video0; _i0++) {
            video[_i0].pipe.input_num = ((-2 * (next_i()%2)) + 1) * next_i();
        video[_i0].pipe.output_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_video__i0__pipe_outputs0 = 1;
          video[_i0].pipe.outputs = (struct TYPE_3__ **) malloc(_len_video__i0__pipe_outputs0*sizeof(struct TYPE_3__ *));
          for(int _j0 = 0; _j0 < _len_video__i0__pipe_outputs0; _j0++) {
            int _len_video__i0__pipe_outputs1 = 1;
            video[_i0].pipe.outputs[_j0] = (struct TYPE_3__ *) malloc(_len_video__i0__pipe_outputs1*sizeof(struct TYPE_3__));
            for(int _j1 = 0; _j1 < _len_video__i0__pipe_outputs1; _j1++) {
              video[_i0].pipe.outputs[_j0]->started = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_video__i0__pipe_inputs0 = 1;
          video[_i0].pipe.inputs = (struct TYPE_4__ **) malloc(_len_video__i0__pipe_inputs0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_video__i0__pipe_inputs0; _j0++) {
            int _len_video__i0__pipe_inputs1 = 1;
            video[_i0].pipe.inputs[_j0] = (struct TYPE_4__ *) malloc(_len_video__i0__pipe_inputs1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_video__i0__pipe_inputs1; _j1++) {
              video[_i0].pipe.inputs[_j0]->started = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = all_videos_stopped(video);
          printf("%d\n", benchRet); 
          free(video);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_video0 = 65025;
          struct vpfe_video_device * video = (struct vpfe_video_device *) malloc(_len_video0*sizeof(struct vpfe_video_device));
          for(int _i0 = 0; _i0 < _len_video0; _i0++) {
            video[_i0].pipe.input_num = ((-2 * (next_i()%2)) + 1) * next_i();
        video[_i0].pipe.output_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_video__i0__pipe_outputs0 = 1;
          video[_i0].pipe.outputs = (struct TYPE_3__ **) malloc(_len_video__i0__pipe_outputs0*sizeof(struct TYPE_3__ *));
          for(int _j0 = 0; _j0 < _len_video__i0__pipe_outputs0; _j0++) {
            int _len_video__i0__pipe_outputs1 = 1;
            video[_i0].pipe.outputs[_j0] = (struct TYPE_3__ *) malloc(_len_video__i0__pipe_outputs1*sizeof(struct TYPE_3__));
            for(int _j1 = 0; _j1 < _len_video__i0__pipe_outputs1; _j1++) {
              video[_i0].pipe.outputs[_j0]->started = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_video__i0__pipe_inputs0 = 1;
          video[_i0].pipe.inputs = (struct TYPE_4__ **) malloc(_len_video__i0__pipe_inputs0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_video__i0__pipe_inputs0; _j0++) {
            int _len_video__i0__pipe_inputs1 = 1;
            video[_i0].pipe.inputs[_j0] = (struct TYPE_4__ *) malloc(_len_video__i0__pipe_inputs1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_video__i0__pipe_inputs1; _j1++) {
              video[_i0].pipe.inputs[_j0]->started = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = all_videos_stopped(video);
          printf("%d\n", benchRet); 
          free(video);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_video0 = 100;
          struct vpfe_video_device * video = (struct vpfe_video_device *) malloc(_len_video0*sizeof(struct vpfe_video_device));
          for(int _i0 = 0; _i0 < _len_video0; _i0++) {
            video[_i0].pipe.input_num = ((-2 * (next_i()%2)) + 1) * next_i();
        video[_i0].pipe.output_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_video__i0__pipe_outputs0 = 1;
          video[_i0].pipe.outputs = (struct TYPE_3__ **) malloc(_len_video__i0__pipe_outputs0*sizeof(struct TYPE_3__ *));
          for(int _j0 = 0; _j0 < _len_video__i0__pipe_outputs0; _j0++) {
            int _len_video__i0__pipe_outputs1 = 1;
            video[_i0].pipe.outputs[_j0] = (struct TYPE_3__ *) malloc(_len_video__i0__pipe_outputs1*sizeof(struct TYPE_3__));
            for(int _j1 = 0; _j1 < _len_video__i0__pipe_outputs1; _j1++) {
              video[_i0].pipe.outputs[_j0]->started = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_video__i0__pipe_inputs0 = 1;
          video[_i0].pipe.inputs = (struct TYPE_4__ **) malloc(_len_video__i0__pipe_inputs0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_video__i0__pipe_inputs0; _j0++) {
            int _len_video__i0__pipe_inputs1 = 1;
            video[_i0].pipe.inputs[_j0] = (struct TYPE_4__ *) malloc(_len_video__i0__pipe_inputs1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_video__i0__pipe_inputs1; _j1++) {
              video[_i0].pipe.inputs[_j0]->started = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = all_videos_stopped(video);
          printf("%d\n", benchRet); 
          free(video);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
