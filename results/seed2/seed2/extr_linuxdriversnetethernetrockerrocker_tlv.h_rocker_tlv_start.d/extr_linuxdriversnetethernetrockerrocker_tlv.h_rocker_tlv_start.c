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
struct rocker_tlv {int dummy; } ;
struct rocker_desc_info {int tlv_size; scalar_t__ data; } ;

/* Variables and functions */

__attribute__((used)) static inline struct rocker_tlv *
rocker_tlv_start(struct rocker_desc_info *desc_info)
{
	return (struct rocker_tlv *) ((char *) desc_info->data +
					       desc_info->tlv_size);
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
          int _len_desc_info0 = 1;
          struct rocker_desc_info * desc_info = (struct rocker_desc_info *) malloc(_len_desc_info0*sizeof(struct rocker_desc_info));
          for(int _i0 = 0; _i0 < _len_desc_info0; _i0++) {
            desc_info[_i0].tlv_size = ((-2 * (next_i()%2)) + 1) * next_i();
        desc_info[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct rocker_tlv * benchRet = rocker_tlv_start(desc_info);
          printf("%d\n", (*benchRet).dummy);
          free(desc_info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_desc_info0 = 65025;
          struct rocker_desc_info * desc_info = (struct rocker_desc_info *) malloc(_len_desc_info0*sizeof(struct rocker_desc_info));
          for(int _i0 = 0; _i0 < _len_desc_info0; _i0++) {
            desc_info[_i0].tlv_size = ((-2 * (next_i()%2)) + 1) * next_i();
        desc_info[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct rocker_tlv * benchRet = rocker_tlv_start(desc_info);
          printf("%d\n", (*benchRet).dummy);
          free(desc_info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_desc_info0 = 100;
          struct rocker_desc_info * desc_info = (struct rocker_desc_info *) malloc(_len_desc_info0*sizeof(struct rocker_desc_info));
          for(int _i0 = 0; _i0 < _len_desc_info0; _i0++) {
            desc_info[_i0].tlv_size = ((-2 * (next_i()%2)) + 1) * next_i();
        desc_info[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct rocker_tlv * benchRet = rocker_tlv_start(desc_info);
          printf("%d\n", (*benchRet).dummy);
          free(desc_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
