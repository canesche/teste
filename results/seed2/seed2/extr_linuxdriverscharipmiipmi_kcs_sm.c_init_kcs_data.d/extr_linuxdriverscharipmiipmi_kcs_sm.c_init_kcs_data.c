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
struct si_sm_io {int dummy; } ;
struct si_sm_data {int /*<<< orphan*/  obf_timeout; int /*<<< orphan*/  ibf_timeout; scalar_t__ truncated; scalar_t__ error_retries; scalar_t__ read_pos; scalar_t__ orig_write_count; scalar_t__ write_count; scalar_t__ write_pos; struct si_sm_io* io; int /*<<< orphan*/  state; } ;

/* Variables and functions */
 int /*<<< orphan*/  IBF_RETRY_TIMEOUT ; 
 int /*<<< orphan*/  KCS_IDLE ; 
 int /*<<< orphan*/  OBF_RETRY_TIMEOUT ; 

__attribute__((used)) static unsigned int init_kcs_data(struct si_sm_data *kcs,
				  struct si_sm_io *io)
{
	kcs->state = KCS_IDLE;
	kcs->io = io;
	kcs->write_pos = 0;
	kcs->write_count = 0;
	kcs->orig_write_count = 0;
	kcs->read_pos = 0;
	kcs->error_retries = 0;
	kcs->truncated = 0;
	kcs->ibf_timeout = IBF_RETRY_TIMEOUT;
	kcs->obf_timeout = OBF_RETRY_TIMEOUT;

	/* Reserve 2 I/O bytes. */
	return 2;
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
          int _len_kcs0 = 1;
          struct si_sm_data * kcs = (struct si_sm_data *) malloc(_len_kcs0*sizeof(struct si_sm_data));
          for(int _i0 = 0; _i0 < _len_kcs0; _i0++) {
            kcs[_i0].obf_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].ibf_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].truncated = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].error_retries = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].read_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].orig_write_count = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].write_count = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].write_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_kcs__i0__io0 = 1;
          kcs[_i0].io = (struct si_sm_io *) malloc(_len_kcs__i0__io0*sizeof(struct si_sm_io));
          for(int _j0 = 0; _j0 < _len_kcs__i0__io0; _j0++) {
            kcs[_i0].io->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        kcs[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_io0 = 1;
          struct si_sm_io * io = (struct si_sm_io *) malloc(_len_io0*sizeof(struct si_sm_io));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
            io[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = init_kcs_data(kcs,io);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_kcs0; _aux++) {
          free(kcs[_aux].io);
          }
          free(kcs);
          free(io);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_kcs0 = 65025;
          struct si_sm_data * kcs = (struct si_sm_data *) malloc(_len_kcs0*sizeof(struct si_sm_data));
          for(int _i0 = 0; _i0 < _len_kcs0; _i0++) {
            kcs[_i0].obf_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].ibf_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].truncated = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].error_retries = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].read_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].orig_write_count = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].write_count = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].write_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_kcs__i0__io0 = 1;
          kcs[_i0].io = (struct si_sm_io *) malloc(_len_kcs__i0__io0*sizeof(struct si_sm_io));
          for(int _j0 = 0; _j0 < _len_kcs__i0__io0; _j0++) {
            kcs[_i0].io->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        kcs[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_io0 = 65025;
          struct si_sm_io * io = (struct si_sm_io *) malloc(_len_io0*sizeof(struct si_sm_io));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
            io[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = init_kcs_data(kcs,io);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_kcs0; _aux++) {
          free(kcs[_aux].io);
          }
          free(kcs);
          free(io);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_kcs0 = 100;
          struct si_sm_data * kcs = (struct si_sm_data *) malloc(_len_kcs0*sizeof(struct si_sm_data));
          for(int _i0 = 0; _i0 < _len_kcs0; _i0++) {
            kcs[_i0].obf_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].ibf_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].truncated = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].error_retries = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].read_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].orig_write_count = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].write_count = ((-2 * (next_i()%2)) + 1) * next_i();
        kcs[_i0].write_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_kcs__i0__io0 = 1;
          kcs[_i0].io = (struct si_sm_io *) malloc(_len_kcs__i0__io0*sizeof(struct si_sm_io));
          for(int _j0 = 0; _j0 < _len_kcs__i0__io0; _j0++) {
            kcs[_i0].io->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        kcs[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_io0 = 100;
          struct si_sm_io * io = (struct si_sm_io *) malloc(_len_io0*sizeof(struct si_sm_io));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
            io[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = init_kcs_data(kcs,io);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_kcs0; _aux++) {
          free(kcs[_aux].io);
          }
          free(kcs);
          free(io);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
