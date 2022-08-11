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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {float x; float y; } ;
struct TYPE_5__ {float x; float y; } ;
struct TYPE_4__ {float x; float y; } ;
struct scroll_filter_data {TYPE_3__ offset; TYPE_2__ scroll_speed; TYPE_1__ size_i; } ;

/* Variables and functions */

__attribute__((used)) static void scroll_filter_tick(void *data, float seconds)
{
	struct scroll_filter_data *filter = data;

	filter->offset.x += filter->size_i.x * filter->scroll_speed.x * seconds;
	filter->offset.y += filter->size_i.y * filter->scroll_speed.y * seconds;

	if (filter->offset.x > 1.0f)
		filter->offset.x -= 1.0f;
	if (filter->offset.y > 1.0f)
		filter->offset.y -= 1.0f;
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
          float seconds = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          void * data;
          scroll_filter_tick(data,seconds);
        
        break;
    }
    // big-arr
    case 1:
    {
          float seconds = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          void * data;
          scroll_filter_tick(data,seconds);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          float seconds = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          void * data;
          scroll_filter_tick(data,seconds);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
