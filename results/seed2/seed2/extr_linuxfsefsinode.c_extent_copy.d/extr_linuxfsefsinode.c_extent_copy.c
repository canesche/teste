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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {unsigned int ex_magic; unsigned int ex_bn; unsigned int ex_length; unsigned int ex_offset; } ;
struct TYPE_6__ {scalar_t__* raw; TYPE_1__ cooked; } ;
typedef  TYPE_2__ efs_extent ;

/* Variables and functions */

__attribute__((used)) static inline void extent_copy(efs_extent *src, efs_extent *dst) {
	/*
	 * this is slightly evil. it doesn't just copy
	 * efs_extent from src to dst, it also mangles
	 * the bits so that dst ends up in cpu byte-order.
	 */

	dst->cooked.ex_magic  =  (unsigned int) src->raw[0];
	dst->cooked.ex_bn     = ((unsigned int) src->raw[1] << 16) |
				((unsigned int) src->raw[2] <<  8) |
				((unsigned int) src->raw[3] <<  0);
	dst->cooked.ex_length =  (unsigned int) src->raw[4];
	dst->cooked.ex_offset = ((unsigned int) src->raw[5] << 16) |
				((unsigned int) src->raw[6] <<  8) |
				((unsigned int) src->raw[7] <<  0);
	return;
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
          int _len_src0 = 1;
          struct TYPE_6__ * src = (struct TYPE_6__ *) malloc(_len_src0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              int _len_src__i0__raw0 = 1;
          src[_i0].raw = (long *) malloc(_len_src__i0__raw0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_src__i0__raw0; _j0++) {
            src[_i0].raw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        src[_i0].cooked.ex_magic = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].cooked.ex_bn = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].cooked.ex_length = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].cooked.ex_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          struct TYPE_6__ * dst = (struct TYPE_6__ *) malloc(_len_dst0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              int _len_dst__i0__raw0 = 1;
          dst[_i0].raw = (long *) malloc(_len_dst__i0__raw0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dst__i0__raw0; _j0++) {
            dst[_i0].raw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dst[_i0].cooked.ex_magic = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].cooked.ex_bn = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].cooked.ex_length = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].cooked.ex_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          extent_copy(src,dst);
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(src[_aux].raw);
          }
          free(src);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(dst[_aux].raw);
          }
          free(dst);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_src0 = 65025;
          struct TYPE_6__ * src = (struct TYPE_6__ *) malloc(_len_src0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              int _len_src__i0__raw0 = 1;
          src[_i0].raw = (long *) malloc(_len_src__i0__raw0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_src__i0__raw0; _j0++) {
            src[_i0].raw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        src[_i0].cooked.ex_magic = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].cooked.ex_bn = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].cooked.ex_length = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].cooked.ex_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 65025;
          struct TYPE_6__ * dst = (struct TYPE_6__ *) malloc(_len_dst0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              int _len_dst__i0__raw0 = 1;
          dst[_i0].raw = (long *) malloc(_len_dst__i0__raw0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dst__i0__raw0; _j0++) {
            dst[_i0].raw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dst[_i0].cooked.ex_magic = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].cooked.ex_bn = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].cooked.ex_length = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].cooked.ex_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          extent_copy(src,dst);
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(src[_aux].raw);
          }
          free(src);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(dst[_aux].raw);
          }
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_src0 = 100;
          struct TYPE_6__ * src = (struct TYPE_6__ *) malloc(_len_src0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              int _len_src__i0__raw0 = 1;
          src[_i0].raw = (long *) malloc(_len_src__i0__raw0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_src__i0__raw0; _j0++) {
            src[_i0].raw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        src[_i0].cooked.ex_magic = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].cooked.ex_bn = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].cooked.ex_length = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].cooked.ex_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 100;
          struct TYPE_6__ * dst = (struct TYPE_6__ *) malloc(_len_dst0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              int _len_dst__i0__raw0 = 1;
          dst[_i0].raw = (long *) malloc(_len_dst__i0__raw0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dst__i0__raw0; _j0++) {
            dst[_i0].raw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dst[_i0].cooked.ex_magic = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].cooked.ex_bn = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].cooked.ex_length = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].cooked.ex_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          extent_copy(src,dst);
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(src[_aux].raw);
          }
          free(src);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(dst[_aux].raw);
          }
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
