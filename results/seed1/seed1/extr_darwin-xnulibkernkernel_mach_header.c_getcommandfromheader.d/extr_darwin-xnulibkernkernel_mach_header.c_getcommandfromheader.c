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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint32_t ;
struct load_command {scalar_t__ cmd; scalar_t__ cmdsize; } ;
struct TYPE_3__ {unsigned long ncmds; } ;
typedef  TYPE_1__ kernel_mach_header_t ;

/* Variables and functions */

void *
getcommandfromheader(kernel_mach_header_t *mhp, uint32_t cmd) {
	struct load_command *lcp;
	unsigned long i;

	lcp = (struct load_command *) (mhp + 1);
	for(i = 0; i < mhp->ncmds; i++){
		if(lcp->cmd == cmd) {
			return (void *)lcp;
		}

		lcp = (struct load_command *)((uintptr_t)lcp + lcp->cmdsize);
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
          long cmd = 100;
          int _len_mhp0 = 1;
          struct TYPE_3__ * mhp = (struct TYPE_3__ *) malloc(_len_mhp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mhp0; _i0++) {
            mhp[_i0].ncmds = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = getcommandfromheader(mhp,cmd);
          free(mhp);
        
        break;
    }
    // big-arr
    case 1:
    {
          long cmd = 255;
          int _len_mhp0 = 65025;
          struct TYPE_3__ * mhp = (struct TYPE_3__ *) malloc(_len_mhp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mhp0; _i0++) {
            mhp[_i0].ncmds = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = getcommandfromheader(mhp,cmd);
          free(mhp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long cmd = 10;
          int _len_mhp0 = 100;
          struct TYPE_3__ * mhp = (struct TYPE_3__ *) malloc(_len_mhp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mhp0; _i0++) {
            mhp[_i0].ncmds = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = getcommandfromheader(mhp,cmd);
          free(mhp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
