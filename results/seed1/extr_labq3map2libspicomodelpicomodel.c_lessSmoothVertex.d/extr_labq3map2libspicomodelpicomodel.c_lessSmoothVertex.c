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
struct TYPE_2__ {scalar_t__** xyz; scalar_t__* smoothingGroups; } ;
typedef  TYPE_1__ picoSmoothVertices_t ;
typedef  size_t picoIndex_t ;

/* Variables and functions */

int lessSmoothVertex(void* data, picoIndex_t first, picoIndex_t second) {
	picoSmoothVertices_t* smoothVertices = data;

	if (smoothVertices->xyz[first][0] != smoothVertices->xyz[second][0]) {
		return smoothVertices->xyz[first][0] < smoothVertices->xyz[second][0];
	}
	if (smoothVertices->xyz[first][1] != smoothVertices->xyz[second][1]) {
		return smoothVertices->xyz[first][1] < smoothVertices->xyz[second][1];
	}
	if (smoothVertices->xyz[first][2] != smoothVertices->xyz[second][2]) {
		return smoothVertices->xyz[first][2] < smoothVertices->xyz[second][2];
	}
	if (smoothVertices->smoothingGroups[first] != smoothVertices->smoothingGroups[second]) {
		return smoothVertices->smoothingGroups[first] < smoothVertices->smoothingGroups[second];
	}
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
          unsigned long first = 100;
          unsigned long second = 100;
          void * data;
          int benchRet = lessSmoothVertex(data,first,second);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long first = 255;
          unsigned long second = 255;
          void * data;
          int benchRet = lessSmoothVertex(data,first,second);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long first = 10;
          unsigned long second = 10;
          void * data;
          int benchRet = lessSmoothVertex(data,first,second);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
