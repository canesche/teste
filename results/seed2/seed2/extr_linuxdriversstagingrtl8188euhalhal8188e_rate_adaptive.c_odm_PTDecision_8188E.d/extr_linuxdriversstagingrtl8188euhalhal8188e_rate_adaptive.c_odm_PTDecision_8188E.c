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
typedef  int u8 ;
typedef  int u32 ;
struct odm_ra_info {int TOTAL; int* RTY; int PTStage; int PTSmoothFactor; int DROP; } ;

/* Variables and functions */
 int* PT_PENALTY ; 

__attribute__((used)) static void odm_PTDecision_8188E(struct odm_ra_info *pRaInfo)
{
	u8 j;
	u8 temp_stage;
	u32 numsc;
	u32 num_total;
	u8 stage_id;

	numsc  = 0;
	num_total = pRaInfo->TOTAL * PT_PENALTY[5];
	for (j = 0; j <= 4; j++) {
		numsc += pRaInfo->RTY[j] * PT_PENALTY[j];
		if (numsc > num_total)
			break;
	}

	j >>= 1;
	temp_stage = (pRaInfo->PTStage + 1) >> 1;
	if (temp_stage > j)
		stage_id = temp_stage-j;
	else
		stage_id = 0;

	pRaInfo->PTSmoothFactor = (pRaInfo->PTSmoothFactor>>1) + (pRaInfo->PTSmoothFactor>>2) + stage_id*16+2;
	if (pRaInfo->PTSmoothFactor > 192)
		pRaInfo->PTSmoothFactor = 192;
	stage_id = pRaInfo->PTSmoothFactor >> 6;
	temp_stage = stage_id*2;
	if (temp_stage != 0)
		temp_stage -= 1;
	if (pRaInfo->DROP > 3)
		temp_stage = 0;
	pRaInfo->PTStage = temp_stage;
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
          int _len_pRaInfo0 = 1;
          struct odm_ra_info * pRaInfo = (struct odm_ra_info *) malloc(_len_pRaInfo0*sizeof(struct odm_ra_info));
          for(int _i0 = 0; _i0 < _len_pRaInfo0; _i0++) {
            pRaInfo[_i0].TOTAL = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pRaInfo__i0__RTY0 = 1;
          pRaInfo[_i0].RTY = (int *) malloc(_len_pRaInfo__i0__RTY0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pRaInfo__i0__RTY0; _j0++) {
            pRaInfo[_i0].RTY[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pRaInfo[_i0].PTStage = ((-2 * (next_i()%2)) + 1) * next_i();
        pRaInfo[_i0].PTSmoothFactor = ((-2 * (next_i()%2)) + 1) * next_i();
        pRaInfo[_i0].DROP = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          odm_PTDecision_8188E(pRaInfo);
          for(int _aux = 0; _aux < _len_pRaInfo0; _aux++) {
          free(pRaInfo[_aux].RTY);
          }
          free(pRaInfo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pRaInfo0 = 65025;
          struct odm_ra_info * pRaInfo = (struct odm_ra_info *) malloc(_len_pRaInfo0*sizeof(struct odm_ra_info));
          for(int _i0 = 0; _i0 < _len_pRaInfo0; _i0++) {
            pRaInfo[_i0].TOTAL = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pRaInfo__i0__RTY0 = 1;
          pRaInfo[_i0].RTY = (int *) malloc(_len_pRaInfo__i0__RTY0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pRaInfo__i0__RTY0; _j0++) {
            pRaInfo[_i0].RTY[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pRaInfo[_i0].PTStage = ((-2 * (next_i()%2)) + 1) * next_i();
        pRaInfo[_i0].PTSmoothFactor = ((-2 * (next_i()%2)) + 1) * next_i();
        pRaInfo[_i0].DROP = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          odm_PTDecision_8188E(pRaInfo);
          for(int _aux = 0; _aux < _len_pRaInfo0; _aux++) {
          free(pRaInfo[_aux].RTY);
          }
          free(pRaInfo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pRaInfo0 = 100;
          struct odm_ra_info * pRaInfo = (struct odm_ra_info *) malloc(_len_pRaInfo0*sizeof(struct odm_ra_info));
          for(int _i0 = 0; _i0 < _len_pRaInfo0; _i0++) {
            pRaInfo[_i0].TOTAL = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pRaInfo__i0__RTY0 = 1;
          pRaInfo[_i0].RTY = (int *) malloc(_len_pRaInfo__i0__RTY0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pRaInfo__i0__RTY0; _j0++) {
            pRaInfo[_i0].RTY[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pRaInfo[_i0].PTStage = ((-2 * (next_i()%2)) + 1) * next_i();
        pRaInfo[_i0].PTSmoothFactor = ((-2 * (next_i()%2)) + 1) * next_i();
        pRaInfo[_i0].DROP = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          odm_PTDecision_8188E(pRaInfo);
          for(int _aux = 0; _aux < _len_pRaInfo0; _aux++) {
          free(pRaInfo[_aux].RTY);
          }
          free(pRaInfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
