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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int mb_stat_R; int /*<<< orphan*/  spu_runcntl_RW; } ;
struct spu_state {int* spu_chnlcnt_RW; TYPE_1__ prob; } ;

/* Variables and functions */
 int /*<<< orphan*/  SPU_RUNCNTL_STOP ; 

__attribute__((used)) static void init_prob(struct spu_state *csa)
{
	csa->spu_chnlcnt_RW[9] = 1;
	csa->spu_chnlcnt_RW[21] = 16;
	csa->spu_chnlcnt_RW[23] = 1;
	csa->spu_chnlcnt_RW[28] = 1;
	csa->spu_chnlcnt_RW[30] = 1;
	csa->prob.spu_runcntl_RW = SPU_RUNCNTL_STOP;
	csa->prob.mb_stat_R = 0x000400;
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
          int _len_csa0 = 1;
          struct spu_state * csa = (struct spu_state *) malloc(_len_csa0*sizeof(struct spu_state));
          for(int _i0 = 0; _i0 < _len_csa0; _i0++) {
              int _len_csa__i0__spu_chnlcnt_RW0 = 1;
          csa[_i0].spu_chnlcnt_RW = (int *) malloc(_len_csa__i0__spu_chnlcnt_RW0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_csa__i0__spu_chnlcnt_RW0; _j0++) {
            csa[_i0].spu_chnlcnt_RW[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        csa[_i0].prob.mb_stat_R = ((-2 * (next_i()%2)) + 1) * next_i();
        csa[_i0].prob.spu_runcntl_RW = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_prob(csa);
          for(int _aux = 0; _aux < _len_csa0; _aux++) {
          free(csa[_aux].spu_chnlcnt_RW);
          }
          free(csa);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_csa0 = 65025;
          struct spu_state * csa = (struct spu_state *) malloc(_len_csa0*sizeof(struct spu_state));
          for(int _i0 = 0; _i0 < _len_csa0; _i0++) {
              int _len_csa__i0__spu_chnlcnt_RW0 = 1;
          csa[_i0].spu_chnlcnt_RW = (int *) malloc(_len_csa__i0__spu_chnlcnt_RW0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_csa__i0__spu_chnlcnt_RW0; _j0++) {
            csa[_i0].spu_chnlcnt_RW[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        csa[_i0].prob.mb_stat_R = ((-2 * (next_i()%2)) + 1) * next_i();
        csa[_i0].prob.spu_runcntl_RW = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_prob(csa);
          for(int _aux = 0; _aux < _len_csa0; _aux++) {
          free(csa[_aux].spu_chnlcnt_RW);
          }
          free(csa);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_csa0 = 100;
          struct spu_state * csa = (struct spu_state *) malloc(_len_csa0*sizeof(struct spu_state));
          for(int _i0 = 0; _i0 < _len_csa0; _i0++) {
              int _len_csa__i0__spu_chnlcnt_RW0 = 1;
          csa[_i0].spu_chnlcnt_RW = (int *) malloc(_len_csa__i0__spu_chnlcnt_RW0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_csa__i0__spu_chnlcnt_RW0; _j0++) {
            csa[_i0].spu_chnlcnt_RW[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        csa[_i0].prob.mb_stat_R = ((-2 * (next_i()%2)) + 1) * next_i();
        csa[_i0].prob.spu_runcntl_RW = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_prob(csa);
          for(int _aux = 0; _aux < _len_csa0; _aux++) {
          free(csa[_aux].spu_chnlcnt_RW);
          }
          free(csa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
