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
typedef  scalar_t__ u8 ;

/* Variables and functions */
 unsigned int UDFS_PER_SLICE ; 

__attribute__((used)) static inline unsigned int bcm_sf2_get_num_udf_slices(const u8 *layout)
{
	unsigned int i, count = 0;

	for (i = 0; i < UDFS_PER_SLICE; i++) {
		if (layout[i] != 0)
			count++;
	}

	return count;
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
          int _len_layout0 = 1;
          const long * layout = (const long *) malloc(_len_layout0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_layout0; _i0++) {
            layout[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = bcm_sf2_get_num_udf_slices(layout);
          printf("%u\n", benchRet); 
          free(layout);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_layout0 = 65025;
          const long * layout = (const long *) malloc(_len_layout0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_layout0; _i0++) {
            layout[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = bcm_sf2_get_num_udf_slices(layout);
          printf("%u\n", benchRet); 
          free(layout);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_layout0 = 100;
          const long * layout = (const long *) malloc(_len_layout0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_layout0; _i0++) {
            layout[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = bcm_sf2_get_num_udf_slices(layout);
          printf("%u\n", benchRet); 
          free(layout);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
