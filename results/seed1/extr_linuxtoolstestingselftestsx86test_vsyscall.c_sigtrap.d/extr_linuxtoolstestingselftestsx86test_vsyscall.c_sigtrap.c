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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned long* gregs; } ;
struct TYPE_4__ {TYPE_1__ uc_mcontext; } ;
typedef  TYPE_2__ ucontext_t ;
typedef  int /*<<< orphan*/  siginfo_t ;

/* Variables and functions */
 size_t REG_RIP ; 
 int /*<<< orphan*/  num_vsyscall_traps ; 

__attribute__((used)) static void sigtrap(int sig, siginfo_t *info, void *ctx_void)
{
	ucontext_t *ctx = (ucontext_t *)ctx_void;
	unsigned long ip = ctx->uc_mcontext.gregs[REG_RIP];

	if (((ip ^ 0xffffffffff600000UL) & ~0xfffUL) == 0)
		num_vsyscall_traps++;
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
          int sig = 100;
          int _len_info0 = 1;
          int * info = (int *) malloc(_len_info0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ctx_void;
          sigtrap(sig,info,ctx_void);
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sig = 255;
          int _len_info0 = 65025;
          int * info = (int *) malloc(_len_info0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ctx_void;
          sigtrap(sig,info,ctx_void);
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sig = 10;
          int _len_info0 = 100;
          int * info = (int *) malloc(_len_info0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ctx_void;
          sigtrap(sig,info,ctx_void);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
