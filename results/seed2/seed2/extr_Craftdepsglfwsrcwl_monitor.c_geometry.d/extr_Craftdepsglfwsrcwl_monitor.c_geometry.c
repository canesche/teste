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
struct wl_output {int dummy; } ;
struct TYPE_2__ {void* y; void* x; } ;
struct _GLFWmonitor {void* heightMM; void* widthMM; TYPE_1__ wl; } ;
typedef  void* int32_t ;

/* Variables and functions */

__attribute__((used)) static void geometry(void* data,
                     struct wl_output* output,
                     int32_t x,
                     int32_t y,
                     int32_t physicalWidth,
                     int32_t physicalHeight,
                     int32_t subpixel,
                     const char* make,
                     const char* model,
                     int32_t transform)
{
    struct _GLFWmonitor *monitor = data;

    monitor->wl.x = x;
    monitor->wl.y = y;
    monitor->widthMM = physicalWidth;
    monitor->heightMM = physicalHeight;
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
          int _len_output0 = 1;
          struct wl_output * output = (struct wl_output *) malloc(_len_output0*sizeof(struct wl_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * x;
          void * y;
          void * physicalWidth;
          void * physicalHeight;
          void * subpixel;
          int _len_make0 = 1;
          const char * make = (const char *) malloc(_len_make0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_make0; _i0++) {
            make[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_model0 = 1;
          const char * model = (const char *) malloc(_len_model0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_model0; _i0++) {
            model[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * transform;
          geometry(data,output,x,y,physicalWidth,physicalHeight,subpixel,make,model,transform);
          free(output);
          free(make);
          free(model);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * data;
          int _len_output0 = 65025;
          struct wl_output * output = (struct wl_output *) malloc(_len_output0*sizeof(struct wl_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * x;
          void * y;
          void * physicalWidth;
          void * physicalHeight;
          void * subpixel;
          int _len_make0 = 65025;
          const char * make = (const char *) malloc(_len_make0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_make0; _i0++) {
            make[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_model0 = 65025;
          const char * model = (const char *) malloc(_len_model0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_model0; _i0++) {
            model[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * transform;
          geometry(data,output,x,y,physicalWidth,physicalHeight,subpixel,make,model,transform);
          free(output);
          free(make);
          free(model);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * data;
          int _len_output0 = 100;
          struct wl_output * output = (struct wl_output *) malloc(_len_output0*sizeof(struct wl_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * x;
          void * y;
          void * physicalWidth;
          void * physicalHeight;
          void * subpixel;
          int _len_make0 = 100;
          const char * make = (const char *) malloc(_len_make0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_make0; _i0++) {
            make[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_model0 = 100;
          const char * model = (const char *) malloc(_len_model0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_model0; _i0++) {
            model[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * transform;
          geometry(data,output,x,y,physicalWidth,physicalHeight,subpixel,make,model,transform);
          free(output);
          free(make);
          free(model);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
