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
typedef  int /*<<< orphan*/  atomic_t ;

/* Variables and functions */

int kgdb_nmicallin(int cpu, int trapnr, void *regs, int err_code,
							atomic_t *send_ready)
{
#ifdef CONFIG_SMP
	if (!kgdb_io_ready(0) || !send_ready)
		return 1;

	if (kgdb_info[cpu].enter_kgdb == 0) {
		struct kgdb_state kgdb_var;
		struct kgdb_state *ks = &kgdb_var;

		memset(ks, 0, sizeof(struct kgdb_state));
		ks->cpu			= cpu;
		ks->ex_vector		= trapnr;
		ks->signo		= SIGTRAP;
		ks->err_code		= err_code;
		ks->linux_regs		= regs;
		ks->send_ready		= send_ready;
		kgdb_cpu_enter(ks, regs, DCPU_WANT_MASTER);
		return 0;
	}
#endif
	return 1;
}


// ------------------------------------------------------------------------- //




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
          int cpu = 100;
          int trapnr = 100;
          int err_code = 100;
          void * regs;
          int _len_send_ready0 = 1;
          int * send_ready = (int *) malloc(_len_send_ready0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_send_ready0; _i0++) {
            send_ready[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kgdb_nmicallin(cpu,trapnr,regs,err_code,send_ready);
          printf("%d\n", benchRet); 
          free(send_ready);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cpu = 255;
          int trapnr = 255;
          int err_code = 255;
          void * regs;
          int _len_send_ready0 = 65025;
          int * send_ready = (int *) malloc(_len_send_ready0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_send_ready0; _i0++) {
            send_ready[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kgdb_nmicallin(cpu,trapnr,regs,err_code,send_ready);
          printf("%d\n", benchRet); 
          free(send_ready);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cpu = 10;
          int trapnr = 10;
          int err_code = 10;
          void * regs;
          int _len_send_ready0 = 100;
          int * send_ready = (int *) malloc(_len_send_ready0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_send_ready0; _i0++) {
            send_ready[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kgdb_nmicallin(cpu,trapnr,regs,err_code,send_ready);
          printf("%d\n", benchRet); 
          free(send_ready);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
