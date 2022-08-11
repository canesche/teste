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
struct spu_state {int* spu_chnlcnt_RW; int* spu_chnldata_RW; TYPE_2__* lscsa; } ;
struct spu {int dummy; } ;
struct TYPE_3__ {int* slot; } ;
struct TYPE_4__ {TYPE_1__ decr_status; } ;

/* Variables and functions */
 int SPU_DECR_STATUS_WRAPPED ; 

__attribute__((used)) static inline void restore_decr_wrapped(struct spu_state *csa, struct spu *spu)
{
	/* Restore, Step 58:
	 *     If the status of the CSA software decrementer
	 *     "wrapped" flag is set, OR in a '1' to
	 *     CSA.SPU_Event_Status[Tm].
	 */
	if (!(csa->lscsa->decr_status.slot[0] & SPU_DECR_STATUS_WRAPPED))
		return;

	if ((csa->spu_chnlcnt_RW[0] == 0) &&
	    (csa->spu_chnldata_RW[1] & 0x20) &&
	    !(csa->spu_chnldata_RW[0] & 0x20))
		csa->spu_chnlcnt_RW[0] = 1;

	csa->spu_chnldata_RW[0] |= 0x20;
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
          int _len_csa__i0__spu_chnldata_RW0 = 1;
          csa[_i0].spu_chnldata_RW = (int *) malloc(_len_csa__i0__spu_chnldata_RW0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_csa__i0__spu_chnldata_RW0; _j0++) {
            csa[_i0].spu_chnldata_RW[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_csa__i0__lscsa0 = 1;
          csa[_i0].lscsa = (struct TYPE_4__ *) malloc(_len_csa__i0__lscsa0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_csa__i0__lscsa0; _j0++) {
              int _len_csa__i0__lscsa_decr_status_slot0 = 1;
          csa[_i0].lscsa->decr_status.slot = (int *) malloc(_len_csa__i0__lscsa_decr_status_slot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_csa__i0__lscsa_decr_status_slot0; _j0++) {
            csa[_i0].lscsa->decr_status.slot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_spu0 = 1;
          struct spu * spu = (struct spu *) malloc(_len_spu0*sizeof(struct spu));
          for(int _i0 = 0; _i0 < _len_spu0; _i0++) {
            spu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          restore_decr_wrapped(csa,spu);
          for(int _aux = 0; _aux < _len_csa0; _aux++) {
          free(csa[_aux].spu_chnlcnt_RW);
          }
          for(int _aux = 0; _aux < _len_csa0; _aux++) {
          free(csa[_aux].spu_chnldata_RW);
          }
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
              int _len_csa__i0__spu_chnlcnt_RW0 = 1;
          csa[_i0].spu_chnlcnt_RW = (int *) malloc(_len_csa__i0__spu_chnlcnt_RW0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_csa__i0__spu_chnlcnt_RW0; _j0++) {
            csa[_i0].spu_chnlcnt_RW[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_csa__i0__spu_chnldata_RW0 = 1;
          csa[_i0].spu_chnldata_RW = (int *) malloc(_len_csa__i0__spu_chnldata_RW0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_csa__i0__spu_chnldata_RW0; _j0++) {
            csa[_i0].spu_chnldata_RW[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_csa__i0__lscsa0 = 1;
          csa[_i0].lscsa = (struct TYPE_4__ *) malloc(_len_csa__i0__lscsa0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_csa__i0__lscsa0; _j0++) {
              int _len_csa__i0__lscsa_decr_status_slot0 = 1;
          csa[_i0].lscsa->decr_status.slot = (int *) malloc(_len_csa__i0__lscsa_decr_status_slot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_csa__i0__lscsa_decr_status_slot0; _j0++) {
            csa[_i0].lscsa->decr_status.slot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_spu0 = 65025;
          struct spu * spu = (struct spu *) malloc(_len_spu0*sizeof(struct spu));
          for(int _i0 = 0; _i0 < _len_spu0; _i0++) {
            spu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          restore_decr_wrapped(csa,spu);
          for(int _aux = 0; _aux < _len_csa0; _aux++) {
          free(csa[_aux].spu_chnlcnt_RW);
          }
          for(int _aux = 0; _aux < _len_csa0; _aux++) {
          free(csa[_aux].spu_chnldata_RW);
          }
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
              int _len_csa__i0__spu_chnlcnt_RW0 = 1;
          csa[_i0].spu_chnlcnt_RW = (int *) malloc(_len_csa__i0__spu_chnlcnt_RW0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_csa__i0__spu_chnlcnt_RW0; _j0++) {
            csa[_i0].spu_chnlcnt_RW[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_csa__i0__spu_chnldata_RW0 = 1;
          csa[_i0].spu_chnldata_RW = (int *) malloc(_len_csa__i0__spu_chnldata_RW0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_csa__i0__spu_chnldata_RW0; _j0++) {
            csa[_i0].spu_chnldata_RW[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_csa__i0__lscsa0 = 1;
          csa[_i0].lscsa = (struct TYPE_4__ *) malloc(_len_csa__i0__lscsa0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_csa__i0__lscsa0; _j0++) {
              int _len_csa__i0__lscsa_decr_status_slot0 = 1;
          csa[_i0].lscsa->decr_status.slot = (int *) malloc(_len_csa__i0__lscsa_decr_status_slot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_csa__i0__lscsa_decr_status_slot0; _j0++) {
            csa[_i0].lscsa->decr_status.slot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_spu0 = 100;
          struct spu * spu = (struct spu *) malloc(_len_spu0*sizeof(struct spu));
          for(int _i0 = 0; _i0 < _len_spu0; _i0++) {
            spu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          restore_decr_wrapped(csa,spu);
          for(int _aux = 0; _aux < _len_csa0; _aux++) {
          free(csa[_aux].spu_chnlcnt_RW);
          }
          for(int _aux = 0; _aux < _len_csa0; _aux++) {
          free(csa[_aux].spu_chnldata_RW);
          }
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
