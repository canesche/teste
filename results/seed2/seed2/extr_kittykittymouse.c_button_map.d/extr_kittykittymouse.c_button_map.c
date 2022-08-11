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

/* Variables and functions */
 unsigned int EXTRA_BUTTON_INDICATOR ; 
#define  GLFW_MOUSE_BUTTON_4 132 
#define  GLFW_MOUSE_BUTTON_5 131 
#define  GLFW_MOUSE_BUTTON_LEFT 130 
#define  GLFW_MOUSE_BUTTON_MIDDLE 129 
#define  GLFW_MOUSE_BUTTON_RIGHT 128 
 unsigned int UINT_MAX ; 

__attribute__((used)) static inline unsigned int
button_map(int button) {
    switch(button) {
        case GLFW_MOUSE_BUTTON_LEFT:
            return 0;
        case GLFW_MOUSE_BUTTON_RIGHT:
            return 2;
        case GLFW_MOUSE_BUTTON_MIDDLE:
            return 1;
        case GLFW_MOUSE_BUTTON_4:
            return EXTRA_BUTTON_INDICATOR;
        case GLFW_MOUSE_BUTTON_5:
            return EXTRA_BUTTON_INDICATOR | 1;
        default:
            return UINT_MAX;
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
          int button = 100;
          unsigned int benchRet = button_map(button);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int button = 255;
          unsigned int benchRet = button_map(button);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int button = 10;
          unsigned int benchRet = button_map(button);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
