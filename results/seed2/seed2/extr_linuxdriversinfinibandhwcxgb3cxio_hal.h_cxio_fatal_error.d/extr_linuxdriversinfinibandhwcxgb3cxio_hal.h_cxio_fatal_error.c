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
struct cxio_rdev {int flags; } ;

/* Variables and functions */
 int CXIO_ERROR_FATAL ; 

__attribute__((used)) static inline int cxio_fatal_error(struct cxio_rdev *rdev_p)
{
	return rdev_p->flags & CXIO_ERROR_FATAL;
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
          int _len_rdev_p0 = 1;
          struct cxio_rdev * rdev_p = (struct cxio_rdev *) malloc(_len_rdev_p0*sizeof(struct cxio_rdev));
          for(int _i0 = 0; _i0 < _len_rdev_p0; _i0++) {
            rdev_p[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cxio_fatal_error(rdev_p);
          printf("%d\n", benchRet); 
          free(rdev_p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rdev_p0 = 65025;
          struct cxio_rdev * rdev_p = (struct cxio_rdev *) malloc(_len_rdev_p0*sizeof(struct cxio_rdev));
          for(int _i0 = 0; _i0 < _len_rdev_p0; _i0++) {
            rdev_p[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cxio_fatal_error(rdev_p);
          printf("%d\n", benchRet); 
          free(rdev_p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rdev_p0 = 100;
          struct cxio_rdev * rdev_p = (struct cxio_rdev *) malloc(_len_rdev_p0*sizeof(struct cxio_rdev));
          for(int _i0 = 0; _i0 < _len_rdev_p0; _i0++) {
            rdev_p[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cxio_fatal_error(rdev_p);
          printf("%d\n", benchRet); 
          free(rdev_p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
