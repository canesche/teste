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
struct TYPE_3__ {int /*<<< orphan*/ * camera_port; } ;
struct bm2835_mmal_dev {TYPE_2__** component; TYPE_1__ capture; } ;
struct TYPE_4__ {int /*<<< orphan*/ * output; } ;

/* Variables and functions */
 size_t CAM_PORT_CAPTURE ; 
 size_t COMP_CAMERA ; 

__attribute__((used)) static inline bool is_capturing(struct bm2835_mmal_dev *dev)
{
	return dev->capture.camera_port ==
	    &dev->component[COMP_CAMERA]->output[CAM_PORT_CAPTURE];
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
          int _len_dev0 = 1;
          struct bm2835_mmal_dev * dev = (struct bm2835_mmal_dev *) malloc(_len_dev0*sizeof(struct bm2835_mmal_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__component0 = 1;
          dev[_i0].component = (struct TYPE_4__ **) malloc(_len_dev__i0__component0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_dev__i0__component0; _j0++) {
            int _len_dev__i0__component1 = 1;
            dev[_i0].component[_j0] = (struct TYPE_4__ *) malloc(_len_dev__i0__component1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_dev__i0__component1; _j1++) {
                int _len_dev__i0__component__j0__output0 = 1;
          dev[_i0].component[_j0]->output = (int *) malloc(_len_dev__i0__component__j0__output0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__component__j0__output0; _j0++) {
            dev[_i0].component[_j0]->output[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_dev__i0__capture_camera_port0 = 1;
          dev[_i0].capture.camera_port = (int *) malloc(_len_dev__i0__capture_camera_port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__capture_camera_port0; _j0++) {
            dev[_i0].capture.camera_port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_capturing(dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(*(dev[_aux].component));
        free(dev[_aux].component);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct bm2835_mmal_dev * dev = (struct bm2835_mmal_dev *) malloc(_len_dev0*sizeof(struct bm2835_mmal_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__component0 = 1;
          dev[_i0].component = (struct TYPE_4__ **) malloc(_len_dev__i0__component0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_dev__i0__component0; _j0++) {
            int _len_dev__i0__component1 = 1;
            dev[_i0].component[_j0] = (struct TYPE_4__ *) malloc(_len_dev__i0__component1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_dev__i0__component1; _j1++) {
                int _len_dev__i0__component__j0__output0 = 1;
          dev[_i0].component[_j0]->output = (int *) malloc(_len_dev__i0__component__j0__output0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__component__j0__output0; _j0++) {
            dev[_i0].component[_j0]->output[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_dev__i0__capture_camera_port0 = 1;
          dev[_i0].capture.camera_port = (int *) malloc(_len_dev__i0__capture_camera_port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__capture_camera_port0; _j0++) {
            dev[_i0].capture.camera_port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_capturing(dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(*(dev[_aux].component));
        free(dev[_aux].component);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct bm2835_mmal_dev * dev = (struct bm2835_mmal_dev *) malloc(_len_dev0*sizeof(struct bm2835_mmal_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__component0 = 1;
          dev[_i0].component = (struct TYPE_4__ **) malloc(_len_dev__i0__component0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_dev__i0__component0; _j0++) {
            int _len_dev__i0__component1 = 1;
            dev[_i0].component[_j0] = (struct TYPE_4__ *) malloc(_len_dev__i0__component1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_dev__i0__component1; _j1++) {
                int _len_dev__i0__component__j0__output0 = 1;
          dev[_i0].component[_j0]->output = (int *) malloc(_len_dev__i0__component__j0__output0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__component__j0__output0; _j0++) {
            dev[_i0].component[_j0]->output[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_dev__i0__capture_camera_port0 = 1;
          dev[_i0].capture.camera_port = (int *) malloc(_len_dev__i0__capture_camera_port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__capture_camera_port0; _j0++) {
            dev[_i0].capture.camera_port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_capturing(dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(*(dev[_aux].component));
        free(dev[_aux].component);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
