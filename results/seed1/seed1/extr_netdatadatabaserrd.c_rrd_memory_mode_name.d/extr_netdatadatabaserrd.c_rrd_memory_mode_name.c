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
typedef  int RRD_MEMORY_MODE ;

/* Variables and functions */
#define  RRD_MEMORY_MODE_ALLOC 132 
 char const* RRD_MEMORY_MODE_ALLOC_NAME ; 
#define  RRD_MEMORY_MODE_MAP 131 
 char const* RRD_MEMORY_MODE_MAP_NAME ; 
#define  RRD_MEMORY_MODE_NONE 130 
 char const* RRD_MEMORY_MODE_NONE_NAME ; 
#define  RRD_MEMORY_MODE_RAM 129 
 char const* RRD_MEMORY_MODE_RAM_NAME ; 
#define  RRD_MEMORY_MODE_SAVE 128 
 char const* RRD_MEMORY_MODE_SAVE_NAME ; 

inline const char *rrd_memory_mode_name(RRD_MEMORY_MODE id) {
    switch(id) {
        case RRD_MEMORY_MODE_RAM:
            return RRD_MEMORY_MODE_RAM_NAME;

        case RRD_MEMORY_MODE_MAP:
            return RRD_MEMORY_MODE_MAP_NAME;

        case RRD_MEMORY_MODE_NONE:
            return RRD_MEMORY_MODE_NONE_NAME;

        case RRD_MEMORY_MODE_SAVE:
            return RRD_MEMORY_MODE_SAVE_NAME;

        case RRD_MEMORY_MODE_ALLOC:
            return RRD_MEMORY_MODE_ALLOC_NAME;
    }

    return RRD_MEMORY_MODE_SAVE_NAME;
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
          int id = 100;
          const char * benchRet = rrd_memory_mode_name(id);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          const char * benchRet = rrd_memory_mode_name(id);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          const char * benchRet = rrd_memory_mode_name(id);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
