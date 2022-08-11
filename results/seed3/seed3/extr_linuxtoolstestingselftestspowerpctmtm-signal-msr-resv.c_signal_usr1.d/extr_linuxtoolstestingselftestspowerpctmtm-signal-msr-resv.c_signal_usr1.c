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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {TYPE_1__* uc_regs; } ;
struct TYPE_6__ {TYPE_2__ uc_mcontext; struct TYPE_6__* uc_link; } ;
typedef  TYPE_3__ ucontext_t ;
typedef  int /*<<< orphan*/  siginfo_t ;
struct TYPE_4__ {unsigned long long* gregs; } ;

/* Variables and functions */
 size_t PT_MSR ; 
 int segv_expected ; 

void signal_usr1(int signum, siginfo_t *info, void *uc)
{
	ucontext_t *ucp = uc;

	/* Link tm checkpointed context to normal context */
	ucp->uc_link = ucp;
	/* Set all TM bits so that the context is now invalid */
#ifdef __powerpc64__
	ucp->uc_mcontext.gp_regs[PT_MSR] |= (7ULL << 32);
#else
	ucp->uc_mcontext.uc_regs->gregs[PT_MSR] |= (7ULL);
#endif
	/* Should segv on return becuase of invalid context */
	segv_expected = 1;
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
          int signum = 100;
          int _len_info0 = 1;
          int * info = (int *) malloc(_len_info0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * uc;
          signal_usr1(signum,info,uc);
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int signum = 255;
          int _len_info0 = 65025;
          int * info = (int *) malloc(_len_info0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * uc;
          signal_usr1(signum,info,uc);
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int signum = 10;
          int _len_info0 = 100;
          int * info = (int *) malloc(_len_info0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * uc;
          signal_usr1(signum,info,uc);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
