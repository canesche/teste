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
typedef  int u32 ;
struct TYPE_4__ {int spu_status_R; } ;
struct spu_state {TYPE_3__* lscsa; TYPE_1__ prob; } ;
struct spu {int dummy; } ;
struct TYPE_5__ {int /*<<< orphan*/ * slot; } ;
struct TYPE_6__ {TYPE_2__ stopped_status; } ;

/* Variables and functions */
 int SPU_STATUS_INVALID_INSTR ; 
 int SPU_STATUS_RUNNING ; 
 int SPU_STATUS_SINGLE_STEP ; 
 int SPU_STATUS_STOPPED_BY_HALT ; 
 int SPU_STATUS_STOPPED_BY_STOP ; 
 int /*<<< orphan*/  SPU_STOPPED_STATUS_R ; 

__attribute__((used)) static inline void setup_spu_status_part2(struct spu_state *csa,
					  struct spu *spu)
{
	u32 mask;

	/* Restore, Step 28:
	 *     If the CSA.SPU_Status[I,S,H,P,R]=0 then
	 *     add a 'br *' instruction to the end of
	 *     the SPU based restore code.
	 *
	 *     NOTE: Rather than modifying the SPU executable, we
	 *     instead add a new 'stopped_status' field to the
	 *     LSCSA.  The SPU-side restore reads this field and
	 *     takes the appropriate action when exiting.
	 */
	mask = SPU_STATUS_INVALID_INSTR |
	    SPU_STATUS_SINGLE_STEP |
	    SPU_STATUS_STOPPED_BY_HALT |
	    SPU_STATUS_STOPPED_BY_STOP | SPU_STATUS_RUNNING;
	if (!(csa->prob.spu_status_R & mask)) {
		csa->lscsa->stopped_status.slot[0] = SPU_STOPPED_STATUS_R;
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
          int _len_csa0 = 1;
          struct spu_state * csa = (struct spu_state *) malloc(_len_csa0*sizeof(struct spu_state));
          for(int _i0 = 0; _i0 < _len_csa0; _i0++) {
              int _len_csa__i0__lscsa0 = 1;
          csa[_i0].lscsa = (struct TYPE_6__ *) malloc(_len_csa__i0__lscsa0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_csa__i0__lscsa0; _j0++) {
              int _len_csa__i0__lscsa_stopped_status_slot0 = 1;
          csa[_i0].lscsa->stopped_status.slot = (int *) malloc(_len_csa__i0__lscsa_stopped_status_slot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_csa__i0__lscsa_stopped_status_slot0; _j0++) {
            csa[_i0].lscsa->stopped_status.slot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        csa[_i0].prob.spu_status_R = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_spu0 = 1;
          struct spu * spu = (struct spu *) malloc(_len_spu0*sizeof(struct spu));
          for(int _i0 = 0; _i0 < _len_spu0; _i0++) {
            spu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_spu_status_part2(csa,spu);
          for(int _aux = 0; _aux < _len_csa0; _aux++) {
          free(csa[_aux].lscsa);
          }
          free(csa);
          free(spu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_csa0 = 65025;
          struct spu_state * csa = (struct spu_state *) malloc(_len_csa0*sizeof(struct spu_state));
          for(int _i0 = 0; _i0 < _len_csa0; _i0++) {
              int _len_csa__i0__lscsa0 = 1;
          csa[_i0].lscsa = (struct TYPE_6__ *) malloc(_len_csa__i0__lscsa0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_csa__i0__lscsa0; _j0++) {
              int _len_csa__i0__lscsa_stopped_status_slot0 = 1;
          csa[_i0].lscsa->stopped_status.slot = (int *) malloc(_len_csa__i0__lscsa_stopped_status_slot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_csa__i0__lscsa_stopped_status_slot0; _j0++) {
            csa[_i0].lscsa->stopped_status.slot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        csa[_i0].prob.spu_status_R = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_spu0 = 65025;
          struct spu * spu = (struct spu *) malloc(_len_spu0*sizeof(struct spu));
          for(int _i0 = 0; _i0 < _len_spu0; _i0++) {
            spu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_spu_status_part2(csa,spu);
          for(int _aux = 0; _aux < _len_csa0; _aux++) {
          free(csa[_aux].lscsa);
          }
          free(csa);
          free(spu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_csa0 = 100;
          struct spu_state * csa = (struct spu_state *) malloc(_len_csa0*sizeof(struct spu_state));
          for(int _i0 = 0; _i0 < _len_csa0; _i0++) {
              int _len_csa__i0__lscsa0 = 1;
          csa[_i0].lscsa = (struct TYPE_6__ *) malloc(_len_csa__i0__lscsa0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_csa__i0__lscsa0; _j0++) {
              int _len_csa__i0__lscsa_stopped_status_slot0 = 1;
          csa[_i0].lscsa->stopped_status.slot = (int *) malloc(_len_csa__i0__lscsa_stopped_status_slot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_csa__i0__lscsa_stopped_status_slot0; _j0++) {
            csa[_i0].lscsa->stopped_status.slot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        csa[_i0].prob.spu_status_R = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_spu0 = 100;
          struct spu * spu = (struct spu *) malloc(_len_spu0*sizeof(struct spu));
          for(int _i0 = 0; _i0 < _len_spu0; _i0++) {
            spu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_spu_status_part2(csa,spu);
          for(int _aux = 0; _aux < _len_csa0; _aux++) {
          free(csa[_aux].lscsa);
          }
          free(csa);
          free(spu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
