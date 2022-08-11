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
struct TYPE_2__ {char obj_type; int /*<<< orphan*/  obj_index; scalar_t__ read_only; scalar_t__ spare; int /*<<< orphan*/  adapter_index; } ;
union handle_word {int /*<<< orphan*/  w; TYPE_1__ h; } ;
typedef  int /*<<< orphan*/  u32 ;
typedef  int /*<<< orphan*/  u16 ;

/* Variables and functions */

u32 hpi_indexes_to_handle(const char c_object, const u16 adapter_index,
	const u16 object_index)
{
	union handle_word handle;

	handle.h.adapter_index = adapter_index;
	handle.h.spare = 0;
	handle.h.read_only = 0;
	handle.h.obj_type = c_object;
	handle.h.obj_index = object_index;
	return handle.w;
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
          const char c_object = 100;
          const int adapter_index = 100;
          const int object_index = 100;
          int benchRet = hpi_indexes_to_handle(c_object,adapter_index,object_index);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          const char c_object = 255;
          const int adapter_index = 255;
          const int object_index = 255;
          int benchRet = hpi_indexes_to_handle(c_object,adapter_index,object_index);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const char c_object = 10;
          const int adapter_index = 10;
          const int object_index = 10;
          int benchRet = hpi_indexes_to_handle(c_object,adapter_index,object_index);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
