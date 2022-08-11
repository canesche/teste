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
typedef  int /*<<< orphan*/  u64 ;
struct can_frame {scalar_t__ data; int /*<<< orphan*/  can_dlc; int /*<<< orphan*/  can_id; } ;

/* Variables and functions */

__attribute__((used)) static inline void canframecpy(struct can_frame *dst, struct can_frame *src)
{
	/*
	 * Copy the struct members separately to ensure that no uninitialized
	 * data are copied in the 3 bytes hole of the struct. This is needed
	 * to make easy compares of the data in the struct cf_mod.
	 */

	dst->can_id = src->can_id;
	dst->can_dlc = src->can_dlc;
	*(u64 *)dst->data = *(u64 *)src->data;
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
          int _len_dst0 = 1;
          struct can_frame * dst = (struct can_frame *) malloc(_len_dst0*sizeof(struct can_frame));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].can_dlc = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].can_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          struct can_frame * src = (struct can_frame *) malloc(_len_src0*sizeof(struct can_frame));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].can_dlc = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].can_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          canframecpy(dst,src);
          free(dst);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dst0 = 65025;
          struct can_frame * dst = (struct can_frame *) malloc(_len_dst0*sizeof(struct can_frame));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].can_dlc = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].can_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          struct can_frame * src = (struct can_frame *) malloc(_len_src0*sizeof(struct can_frame));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].can_dlc = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].can_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          canframecpy(dst,src);
          free(dst);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dst0 = 100;
          struct can_frame * dst = (struct can_frame *) malloc(_len_dst0*sizeof(struct can_frame));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].can_dlc = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].can_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          struct can_frame * src = (struct can_frame *) malloc(_len_src0*sizeof(struct can_frame));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].can_dlc = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].can_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          canframecpy(dst,src);
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
