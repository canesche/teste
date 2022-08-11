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
struct TYPE_4__ {scalar_t__ sas; } ;
struct s_smc {TYPE_3__* y; TYPE_1__ s; } ;
struct TYPE_6__ {TYPE_2__* mib; scalar_t__ twisted; } ;
struct TYPE_5__ {scalar_t__ fddiPORTPCMState; } ;

/* Variables and functions */
 size_t PA ; 
 size_t PB ; 
 scalar_t__ PC8_ACTIVE ; 
 scalar_t__ SMT_DAS ; 

int pcm_status_twisted(struct s_smc *smc)
{
	int	twist = 0 ;
	if (smc->s.sas != SMT_DAS)
		return 0;
	if (smc->y[PA].twisted && (smc->y[PA].mib->fddiPORTPCMState == PC8_ACTIVE))
		twist |= 1 ;
	if (smc->y[PB].twisted && (smc->y[PB].mib->fddiPORTPCMState == PC8_ACTIVE))
		twist |= 2 ;
	return twist;
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
              int _len_smc__i0__y0 = 1;
          smc[_i0].y = (struct TYPE_6__ *) malloc(_len_smc__i0__y0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_smc__i0__y0; _j0++) {
              int _len_smc__i0__y_mib0 = 1;
          smc[_i0].y->mib = (struct TYPE_5__ *) malloc(_len_smc__i0__y_mib0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_smc__i0__y_mib0; _j0++) {
            smc[_i0].y->mib->fddiPORTPCMState = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        smc[_i0].y->twisted = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        smc[_i0].s.sas = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pcm_status_twisted(smc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_smc0; _aux++) {
          free(smc[_aux].y);
          }
          free(smc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_smc0 = 65025;
          struct s_smc * smc = (struct s_smc *) malloc(_len_smc0*sizeof(struct s_smc));
          for(int _i0 = 0; _i0 < _len_smc0; _i0++) {
              int _len_smc__i0__y0 = 1;
          smc[_i0].y = (struct TYPE_6__ *) malloc(_len_smc__i0__y0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_smc__i0__y0; _j0++) {
              int _len_smc__i0__y_mib0 = 1;
          smc[_i0].y->mib = (struct TYPE_5__ *) malloc(_len_smc__i0__y_mib0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_smc__i0__y_mib0; _j0++) {
            smc[_i0].y->mib->fddiPORTPCMState = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        smc[_i0].y->twisted = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        smc[_i0].s.sas = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pcm_status_twisted(smc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_smc0; _aux++) {
          free(smc[_aux].y);
          }
          free(smc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_smc0 = 100;
          struct s_smc * smc = (struct s_smc *) malloc(_len_smc0*sizeof(struct s_smc));
          for(int _i0 = 0; _i0 < _len_smc0; _i0++) {
              int _len_smc__i0__y0 = 1;
          smc[_i0].y = (struct TYPE_6__ *) malloc(_len_smc__i0__y0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_smc__i0__y0; _j0++) {
              int _len_smc__i0__y_mib0 = 1;
          smc[_i0].y->mib = (struct TYPE_5__ *) malloc(_len_smc__i0__y_mib0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_smc__i0__y_mib0; _j0++) {
            smc[_i0].y->mib->fddiPORTPCMState = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        smc[_i0].y->twisted = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        smc[_i0].s.sas = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pcm_status_twisted(smc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_smc0; _aux++) {
          free(smc[_aux].y);
          }
          free(smc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
