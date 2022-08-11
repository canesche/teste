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
struct TYPE_4__ {struct s_fpmc* table; } ;
struct TYPE_5__ {TYPE_1__ mc; scalar_t__ os_slots_used; } ;
struct TYPE_6__ {TYPE_2__ fp; } ;
struct s_smc {TYPE_3__ hw; } ;
struct s_fpmc {scalar_t__ n; int /*<<< orphan*/  perm; } ;

/* Variables and functions */
 int FPMAX_MULTICAST ; 

void mac_clear_multicast(struct s_smc *smc)
{
	struct s_fpmc	*tb ;
	int i ;

	smc->hw.fp.os_slots_used = 0 ;	/* note the SMT addresses */
					/* will not be deleted */
	for (i = 0, tb = smc->hw.fp.mc.table ; i < FPMAX_MULTICAST ; i++, tb++){
		if (!tb->perm) {
			tb->n = 0 ;
		}
	}
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
          int _len_smc0 = 1;
          struct s_smc * smc = (struct s_smc *) malloc(_len_smc0*sizeof(struct s_smc));
          for(int _i0 = 0; _i0 < _len_smc0; _i0++) {
              int _len_smc__i0__hw_fp_mc_table0 = 1;
          smc[_i0].hw.fp.mc.table = (struct s_fpmc *) malloc(_len_smc__i0__hw_fp_mc_table0*sizeof(struct s_fpmc));
          for(int _j0 = 0; _j0 < _len_smc__i0__hw_fp_mc_table0; _j0++) {
            smc[_i0].hw.fp.mc.table->n = ((-2 * (next_i()%2)) + 1) * next_i();
        smc[_i0].hw.fp.mc.table->perm = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        smc[_i0].hw.fp.os_slots_used = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mac_clear_multicast(smc);
          free(smc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_smc0 = 65025;
          struct s_smc * smc = (struct s_smc *) malloc(_len_smc0*sizeof(struct s_smc));
          for(int _i0 = 0; _i0 < _len_smc0; _i0++) {
              int _len_smc__i0__hw_fp_mc_table0 = 1;
          smc[_i0].hw.fp.mc.table = (struct s_fpmc *) malloc(_len_smc__i0__hw_fp_mc_table0*sizeof(struct s_fpmc));
          for(int _j0 = 0; _j0 < _len_smc__i0__hw_fp_mc_table0; _j0++) {
            smc[_i0].hw.fp.mc.table->n = ((-2 * (next_i()%2)) + 1) * next_i();
        smc[_i0].hw.fp.mc.table->perm = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        smc[_i0].hw.fp.os_slots_used = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mac_clear_multicast(smc);
          free(smc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_smc0 = 100;
          struct s_smc * smc = (struct s_smc *) malloc(_len_smc0*sizeof(struct s_smc));
          for(int _i0 = 0; _i0 < _len_smc0; _i0++) {
              int _len_smc__i0__hw_fp_mc_table0 = 1;
          smc[_i0].hw.fp.mc.table = (struct s_fpmc *) malloc(_len_smc__i0__hw_fp_mc_table0*sizeof(struct s_fpmc));
          for(int _j0 = 0; _j0 < _len_smc__i0__hw_fp_mc_table0; _j0++) {
            smc[_i0].hw.fp.mc.table->n = ((-2 * (next_i()%2)) + 1) * next_i();
        smc[_i0].hw.fp.mc.table->perm = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        smc[_i0].hw.fp.os_slots_used = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mac_clear_multicast(smc);
          free(smc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
