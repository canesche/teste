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
typedef  int /*<<< orphan*/  _GLFWwindow ;
typedef  int /*<<< orphan*/  _GLFWfbconfig ;
typedef  int /*<<< orphan*/  _GLFWctxconfig ;

/* Variables and functions */

int _glfwAnalyzeContext(const _GLFWwindow* window,
                        const _GLFWctxconfig* ctxconfig,
                        const _GLFWfbconfig* fbconfig)
{
#if defined(_GLFW_WIN32)
    return _GLFW_RECREATION_NOT_NEEDED;
#else
    return 0;
#endif
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
          int _len_window0 = 1;
          const int * window = (const int *) malloc(_len_window0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
            window[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctxconfig0 = 1;
          const int * ctxconfig = (const int *) malloc(_len_ctxconfig0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ctxconfig0; _i0++) {
            ctxconfig[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fbconfig0 = 1;
          const int * fbconfig = (const int *) malloc(_len_fbconfig0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_fbconfig0; _i0++) {
            fbconfig[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _glfwAnalyzeContext(window,ctxconfig,fbconfig);
          printf("%d\n", benchRet); 
          free(window);
          free(ctxconfig);
          free(fbconfig);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_window0 = 65025;
          const int * window = (const int *) malloc(_len_window0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
            window[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctxconfig0 = 65025;
          const int * ctxconfig = (const int *) malloc(_len_ctxconfig0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ctxconfig0; _i0++) {
            ctxconfig[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fbconfig0 = 65025;
          const int * fbconfig = (const int *) malloc(_len_fbconfig0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_fbconfig0; _i0++) {
            fbconfig[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _glfwAnalyzeContext(window,ctxconfig,fbconfig);
          printf("%d\n", benchRet); 
          free(window);
          free(ctxconfig);
          free(fbconfig);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_window0 = 100;
          const int * window = (const int *) malloc(_len_window0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
            window[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctxconfig0 = 100;
          const int * ctxconfig = (const int *) malloc(_len_ctxconfig0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ctxconfig0; _i0++) {
            ctxconfig[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fbconfig0 = 100;
          const int * fbconfig = (const int *) malloc(_len_fbconfig0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_fbconfig0; _i0++) {
            fbconfig[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _glfwAnalyzeContext(window,ctxconfig,fbconfig);
          printf("%d\n", benchRet); 
          free(window);
          free(ctxconfig);
          free(fbconfig);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
