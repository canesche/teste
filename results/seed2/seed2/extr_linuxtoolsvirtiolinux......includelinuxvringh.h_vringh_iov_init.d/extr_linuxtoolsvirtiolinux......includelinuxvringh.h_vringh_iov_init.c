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
struct vringh_iov {unsigned int max_num; struct iovec* iov; scalar_t__ consumed; scalar_t__ i; scalar_t__ used; } ;
struct iovec {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void vringh_iov_init(struct vringh_iov *iov,
				   struct iovec *iovec, unsigned num)
{
	iov->used = iov->i = 0;
	iov->consumed = 0;
	iov->max_num = num;
	iov->iov = iovec;
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
          unsigned int num = 100;
          int _len_iov0 = 1;
          struct vringh_iov * iov = (struct vringh_iov *) malloc(_len_iov0*sizeof(struct vringh_iov));
          for(int _i0 = 0; _i0 < _len_iov0; _i0++) {
            iov[_i0].max_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iov__i0__iov0 = 1;
          iov[_i0].iov = (struct iovec *) malloc(_len_iov__i0__iov0*sizeof(struct iovec));
          for(int _j0 = 0; _j0 < _len_iov__i0__iov0; _j0++) {
            iov[_i0].iov->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iov[_i0].consumed = ((-2 * (next_i()%2)) + 1) * next_i();
        iov[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        iov[_i0].used = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iovec0 = 1;
          struct iovec * iovec = (struct iovec *) malloc(_len_iovec0*sizeof(struct iovec));
          for(int _i0 = 0; _i0 < _len_iovec0; _i0++) {
            iovec[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vringh_iov_init(iov,iovec,num);
          for(int _aux = 0; _aux < _len_iov0; _aux++) {
          free(iov[_aux].iov);
          }
          free(iov);
          free(iovec);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int num = 255;
          int _len_iov0 = 65025;
          struct vringh_iov * iov = (struct vringh_iov *) malloc(_len_iov0*sizeof(struct vringh_iov));
          for(int _i0 = 0; _i0 < _len_iov0; _i0++) {
            iov[_i0].max_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iov__i0__iov0 = 1;
          iov[_i0].iov = (struct iovec *) malloc(_len_iov__i0__iov0*sizeof(struct iovec));
          for(int _j0 = 0; _j0 < _len_iov__i0__iov0; _j0++) {
            iov[_i0].iov->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iov[_i0].consumed = ((-2 * (next_i()%2)) + 1) * next_i();
        iov[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        iov[_i0].used = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iovec0 = 65025;
          struct iovec * iovec = (struct iovec *) malloc(_len_iovec0*sizeof(struct iovec));
          for(int _i0 = 0; _i0 < _len_iovec0; _i0++) {
            iovec[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vringh_iov_init(iov,iovec,num);
          for(int _aux = 0; _aux < _len_iov0; _aux++) {
          free(iov[_aux].iov);
          }
          free(iov);
          free(iovec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int num = 10;
          int _len_iov0 = 100;
          struct vringh_iov * iov = (struct vringh_iov *) malloc(_len_iov0*sizeof(struct vringh_iov));
          for(int _i0 = 0; _i0 < _len_iov0; _i0++) {
            iov[_i0].max_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iov__i0__iov0 = 1;
          iov[_i0].iov = (struct iovec *) malloc(_len_iov__i0__iov0*sizeof(struct iovec));
          for(int _j0 = 0; _j0 < _len_iov__i0__iov0; _j0++) {
            iov[_i0].iov->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iov[_i0].consumed = ((-2 * (next_i()%2)) + 1) * next_i();
        iov[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        iov[_i0].used = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iovec0 = 100;
          struct iovec * iovec = (struct iovec *) malloc(_len_iovec0*sizeof(struct iovec));
          for(int _i0 = 0; _i0 < _len_iovec0; _i0++) {
            iovec[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vringh_iov_init(iov,iovec,num);
          for(int _aux = 0; _aux < _len_iov0; _aux++) {
          free(iov[_aux].iov);
          }
          free(iov);
          free(iovec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
