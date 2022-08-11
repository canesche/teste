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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {struct pt_regs* regs; } ;
struct TYPE_6__ {TYPE_1__ uc_mcontext; } ;
typedef  TYPE_2__ ucontext_t ;
struct pt_regs {int nip; } ;
struct TYPE_7__ {int /*<<< orphan*/  si_code; } ;
typedef  TYPE_3__ siginfo_t ;

/* Variables and functions */
 int faulted ; 
 int /*<<< orphan*/  si_code ; 

__attribute__((used)) static void segv_handler(int n, siginfo_t *info, void *ctxt_v)
{
	ucontext_t *ctxt = (ucontext_t *)ctxt_v;
	struct pt_regs *regs = ctxt->uc_mcontext.regs;

	faulted = true;
	si_code = info->si_code;
	regs->nip += 4;
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
          int n = 100;
          int _len_info0 = 1;
          struct TYPE_7__ * info = (struct TYPE_7__ *) malloc(_len_info0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].si_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ctxt_v;
          segv_handler(n,info,ctxt_v);
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int _len_info0 = 65025;
          struct TYPE_7__ * info = (struct TYPE_7__ *) malloc(_len_info0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].si_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ctxt_v;
          segv_handler(n,info,ctxt_v);
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int _len_info0 = 100;
          struct TYPE_7__ * info = (struct TYPE_7__ *) malloc(_len_info0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].si_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ctxt_v;
          segv_handler(n,info,ctxt_v);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
