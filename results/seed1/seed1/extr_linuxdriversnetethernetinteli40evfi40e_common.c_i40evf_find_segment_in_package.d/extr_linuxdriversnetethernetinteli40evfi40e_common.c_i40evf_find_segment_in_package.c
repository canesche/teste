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
typedef  int /*<<< orphan*/  u8 ;
typedef  size_t u32 ;
struct i40e_package_header {size_t segment_count; int* segment_offset; } ;
struct i40e_generic_seg_header {size_t type; } ;

/* Variables and functions */

struct i40e_generic_seg_header *
i40evf_find_segment_in_package(u32 segment_type,
			       struct i40e_package_header *pkg_hdr)
{
	struct i40e_generic_seg_header *segment;
	u32 i;

	/* Search all package segments for the requested segment type */
	for (i = 0; i < pkg_hdr->segment_count; i++) {
		segment =
			(struct i40e_generic_seg_header *)((u8 *)pkg_hdr +
			 pkg_hdr->segment_offset[i]);

		if (segment->type == segment_type)
			return segment;
	}

	return NULL;
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
          unsigned long segment_type = 100;
          int _len_pkg_hdr0 = 1;
          struct i40e_package_header * pkg_hdr = (struct i40e_package_header *) malloc(_len_pkg_hdr0*sizeof(struct i40e_package_header));
          for(int _i0 = 0; _i0 < _len_pkg_hdr0; _i0++) {
            pkg_hdr[_i0].segment_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pkg_hdr__i0__segment_offset0 = 1;
          pkg_hdr[_i0].segment_offset = (int *) malloc(_len_pkg_hdr__i0__segment_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pkg_hdr__i0__segment_offset0; _j0++) {
            pkg_hdr[_i0].segment_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct i40e_generic_seg_header * benchRet = i40evf_find_segment_in_package(segment_type,pkg_hdr);
          printf("%lu\n", (*benchRet).type);
          for(int _aux = 0; _aux < _len_pkg_hdr0; _aux++) {
          free(pkg_hdr[_aux].segment_offset);
          }
          free(pkg_hdr);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long segment_type = 255;
          int _len_pkg_hdr0 = 65025;
          struct i40e_package_header * pkg_hdr = (struct i40e_package_header *) malloc(_len_pkg_hdr0*sizeof(struct i40e_package_header));
          for(int _i0 = 0; _i0 < _len_pkg_hdr0; _i0++) {
            pkg_hdr[_i0].segment_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pkg_hdr__i0__segment_offset0 = 1;
          pkg_hdr[_i0].segment_offset = (int *) malloc(_len_pkg_hdr__i0__segment_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pkg_hdr__i0__segment_offset0; _j0++) {
            pkg_hdr[_i0].segment_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct i40e_generic_seg_header * benchRet = i40evf_find_segment_in_package(segment_type,pkg_hdr);
          printf("%lu\n", (*benchRet).type);
          for(int _aux = 0; _aux < _len_pkg_hdr0; _aux++) {
          free(pkg_hdr[_aux].segment_offset);
          }
          free(pkg_hdr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long segment_type = 10;
          int _len_pkg_hdr0 = 100;
          struct i40e_package_header * pkg_hdr = (struct i40e_package_header *) malloc(_len_pkg_hdr0*sizeof(struct i40e_package_header));
          for(int _i0 = 0; _i0 < _len_pkg_hdr0; _i0++) {
            pkg_hdr[_i0].segment_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pkg_hdr__i0__segment_offset0 = 1;
          pkg_hdr[_i0].segment_offset = (int *) malloc(_len_pkg_hdr__i0__segment_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pkg_hdr__i0__segment_offset0; _j0++) {
            pkg_hdr[_i0].segment_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct i40e_generic_seg_header * benchRet = i40evf_find_segment_in_package(segment_type,pkg_hdr);
          printf("%lu\n", (*benchRet).type);
          for(int _aux = 0; _aux < _len_pkg_hdr0; _aux++) {
          free(pkg_hdr[_aux].segment_offset);
          }
          free(pkg_hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
