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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* my_src_ptr ;
typedef  TYPE_2__* j_decompress_ptr ;
struct TYPE_5__ {int /*<<< orphan*/  src; } ;
struct TYPE_4__ {int /*<<< orphan*/  start_of_file; } ;

/* Variables and functions */
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static void my_init_source( j_decompress_ptr cinfo ){
	my_src_ptr src = (my_src_ptr) cinfo->src;

	/* We reset the empty-input-file flag for each image,
	 * but we don't clear the input buffer.
	 * This is correct behavior for reading a series of images from one source.
	 */
	src->start_of_file = TRUE;
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
          int _len_cinfo0 = 1;
          struct TYPE_5__ * cinfo = (struct TYPE_5__ *) malloc(_len_cinfo0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_cinfo0; _i0++) {
            cinfo[_i0].src = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          my_init_source(cinfo);
          free(cinfo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cinfo0 = 65025;
          struct TYPE_5__ * cinfo = (struct TYPE_5__ *) malloc(_len_cinfo0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_cinfo0; _i0++) {
            cinfo[_i0].src = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          my_init_source(cinfo);
          free(cinfo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cinfo0 = 100;
          struct TYPE_5__ * cinfo = (struct TYPE_5__ *) malloc(_len_cinfo0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_cinfo0; _i0++) {
            cinfo[_i0].src = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          my_init_source(cinfo);
          free(cinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
