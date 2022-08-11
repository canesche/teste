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
struct cper_sec_mem_err {int dummy; } ;

/* Variables and functions */

void arch_apei_report_mem_error(int sev, struct cper_sec_mem_err *mem_err)
{
#ifdef CONFIG_X86_MCE
	apei_mce_report_mem_error(sev, mem_err);
#endif
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
          int sev = 100;
          int _len_mem_err0 = 1;
          struct cper_sec_mem_err * mem_err = (struct cper_sec_mem_err *) malloc(_len_mem_err0*sizeof(struct cper_sec_mem_err));
          for(int _i0 = 0; _i0 < _len_mem_err0; _i0++) {
            mem_err[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          arch_apei_report_mem_error(sev,mem_err);
          free(mem_err);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sev = 255;
          int _len_mem_err0 = 65025;
          struct cper_sec_mem_err * mem_err = (struct cper_sec_mem_err *) malloc(_len_mem_err0*sizeof(struct cper_sec_mem_err));
          for(int _i0 = 0; _i0 < _len_mem_err0; _i0++) {
            mem_err[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          arch_apei_report_mem_error(sev,mem_err);
          free(mem_err);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sev = 10;
          int _len_mem_err0 = 100;
          struct cper_sec_mem_err * mem_err = (struct cper_sec_mem_err *) malloc(_len_mem_err0*sizeof(struct cper_sec_mem_err));
          for(int _i0 = 0; _i0 < _len_mem_err0; _i0++) {
            mem_err[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          arch_apei_report_mem_error(sev,mem_err);
          free(mem_err);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
