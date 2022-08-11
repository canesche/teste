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
struct TYPE_2__ {int /*<<< orphan*/ * next; } ;
struct fuse_iqueue {TYPE_1__ forget_list_head; } ;

/* Variables and functions */

__attribute__((used)) static int forget_pending(struct fuse_iqueue *fiq)
{
	return fiq->forget_list_head.next != NULL;
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
          int _len_fiq0 = 1;
          struct fuse_iqueue * fiq = (struct fuse_iqueue *) malloc(_len_fiq0*sizeof(struct fuse_iqueue));
          for(int _i0 = 0; _i0 < _len_fiq0; _i0++) {
              int _len_fiq__i0__forget_list_head_next0 = 1;
          fiq[_i0].forget_list_head.next = (int *) malloc(_len_fiq__i0__forget_list_head_next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fiq__i0__forget_list_head_next0; _j0++) {
            fiq[_i0].forget_list_head.next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = forget_pending(fiq);
          printf("%d\n", benchRet); 
          free(fiq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fiq0 = 65025;
          struct fuse_iqueue * fiq = (struct fuse_iqueue *) malloc(_len_fiq0*sizeof(struct fuse_iqueue));
          for(int _i0 = 0; _i0 < _len_fiq0; _i0++) {
              int _len_fiq__i0__forget_list_head_next0 = 1;
          fiq[_i0].forget_list_head.next = (int *) malloc(_len_fiq__i0__forget_list_head_next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fiq__i0__forget_list_head_next0; _j0++) {
            fiq[_i0].forget_list_head.next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = forget_pending(fiq);
          printf("%d\n", benchRet); 
          free(fiq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fiq0 = 100;
          struct fuse_iqueue * fiq = (struct fuse_iqueue *) malloc(_len_fiq0*sizeof(struct fuse_iqueue));
          for(int _i0 = 0; _i0 < _len_fiq0; _i0++) {
              int _len_fiq__i0__forget_list_head_next0 = 1;
          fiq[_i0].forget_list_head.next = (int *) malloc(_len_fiq__i0__forget_list_head_next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fiq__i0__forget_list_head_next0; _j0++) {
            fiq[_i0].forget_list_head.next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = forget_pending(fiq);
          printf("%d\n", benchRet); 
          free(fiq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
