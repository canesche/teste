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
typedef  int uint64_t ;
struct TYPE_3__ {int* gp_regs; } ;
struct TYPE_4__ {TYPE_1__ uc_mcontext; } ;
typedef  TYPE_2__ ucontext_t ;
typedef  int /*<<< orphan*/  siginfo_t ;

/* Variables and functions */
 int LE ; 
 int MSR_LE ; 
 size_t PT_MSR ; 
 size_t PT_NIP ; 
 scalar_t__ le ; 
 int trap_event ; 

void trap_signal_handler(int signo, siginfo_t *si, void *uc)
{
	ucontext_t *ucp = uc;
	uint64_t thread_endianness;

	/* Get thread endianness: extract bit LE from MSR */
	thread_endianness = MSR_LE & ucp->uc_mcontext.gp_regs[PT_MSR];

	/***
	 * Little-Endian Machine
	 */

	if (le) {
		/* First trap event */
		if (trap_event == 0) {
			/* Do nothing. Since it is returning from this trap
			 * event that endianness is flipped by the bug, so just
			 * let the process return from the signal handler and
			 * check on the second trap event if endianness is
			 * flipped or not.
			 */
		}
		/* Second trap event */
		else if (trap_event == 1) {
			/*
			 * Since trap was caught in TM on first trap event, if
			 * endianness was still LE (not flipped inadvertently)
			 * after returning from the signal handler instruction
			 * (1) is executed (basically a 'nop'), as it's located
			 * at address of tbegin. +4 (rollback addr). As (1) on
			 * LE endianness does in effect nothing, instruction (2)
			 * is then executed again as 'trap', generating a second
			 * trap event (note that in that case 'trap' is caught
			 * not in transacional mode). On te other hand, if after
			 * the return from the signal handler the endianness in-
			 * advertently flipped, instruction (1) is tread as a
			 * branch instruction, i.e. b .+8, hence instruction (3)
			 * and (4) are executed (tbegin.; trap;) and we get sim-
			 * ilaly on the trap signal handler, but now in TM mode.
			 * Either way, it's now possible to check the MSR LE bit
			 * once in the trap handler to verify if endianness was
			 * flipped or not after the return from the second trap
			 * event. If endianness is flipped, the bug is present.
			 * Finally, getting a trap in TM mode or not is just
			 * worth noting because it affects the math to determine
			 * the offset added to the NIP on return: the NIP for a
			 * trap caught in TM is the rollback address, i.e. the
			 * next instruction after 'tbegin.', whilst the NIP for
			 * a trap caught in non-transactional mode is the very
			 * same address of the 'trap' instruction that generated
			 * the trap event.
			 */

			if (thread_endianness == LE) {
				/* Go to 'success', i.e. instruction (6) */
				ucp->uc_mcontext.gp_regs[PT_NIP] += 16;
			} else {
				/*
				 * Thread endianness is BE, so it flipped
				 * inadvertently. Thus we flip back to LE and
				 * set NIP to go to 'failure', instruction (5).
				 */
				ucp->uc_mcontext.gp_regs[PT_MSR] |= 1UL;
				ucp->uc_mcontext.gp_regs[PT_NIP] += 4;
			}
		}
	}

	/***
	 * Big-Endian Machine
	 */

	else {
		/* First trap event */
		if (trap_event == 0) {
			/*
			 * Force thread endianness to be LE. Instructions (1),
			 * (3), and (4) will be executed, generating a second
			 * trap in TM mode.
			 */
			ucp->uc_mcontext.gp_regs[PT_MSR] |= 1UL;
		}
		/* Second trap event */
		else if (trap_event == 1) {
			/*
			 * Do nothing. If bug is present on return from this
			 * second trap event endianness will flip back "automat-
			 * ically" to BE, otherwise thread endianness will
			 * continue to be LE, just as it was set above.
			 */
		}
		/* A third trap event */
		else {
			/*
			 * Once here it means that after returning from the sec-
			 * ond trap event instruction (4) (trap) was executed
			 * as LE, generating a third trap event. In that case
			 * endianness is still LE as set on return from the
			 * first trap event, hence no bug. Otherwise, bug
			 * flipped back to BE on return from the second trap
			 * event and instruction (4) was executed as 'tdi' (so
			 * basically a 'nop') and branch to 'failure' in
			 * instruction (5) was taken to indicate failure and we
			 * never get here.
			 */

			/*
			 * Flip back to BE and go to instruction (6), i.e. go to
			 * 'success'.
			 */
			ucp->uc_mcontext.gp_regs[PT_MSR] &= ~1UL;
			ucp->uc_mcontext.gp_regs[PT_NIP] += 8;
		}
	}

	trap_event++;
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
          int signo = 100;
          int _len_si0 = 1;
          int * si = (int *) malloc(_len_si0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_si0; _i0++) {
            si[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * uc;
          trap_signal_handler(signo,si,uc);
          free(si);
        
        break;
    }
    // big-arr
    case 1:
    {
          int signo = 255;
          int _len_si0 = 65025;
          int * si = (int *) malloc(_len_si0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_si0; _i0++) {
            si[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * uc;
          trap_signal_handler(signo,si,uc);
          free(si);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int signo = 10;
          int _len_si0 = 100;
          int * si = (int *) malloc(_len_si0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_si0; _i0++) {
            si[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * uc;
          trap_signal_handler(signo,si,uc);
          free(si);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
