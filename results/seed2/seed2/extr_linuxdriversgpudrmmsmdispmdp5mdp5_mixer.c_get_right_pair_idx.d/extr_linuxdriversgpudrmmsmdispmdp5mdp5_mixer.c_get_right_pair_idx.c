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
struct mdp5_kms {int num_hwmixers; struct mdp5_hw_mixer** hwmixers; } ;
struct mdp5_hw_mixer {int lm; int idx; } ;

/* Variables and functions */
 int EINVAL ; 
 int* lm_right_pair ; 

__attribute__((used)) static int get_right_pair_idx(struct mdp5_kms *mdp5_kms, int lm)
{
	int i;
	int pair_lm;

	pair_lm = lm_right_pair[lm];
	if (pair_lm < 0)
		return -EINVAL;

	for (i = 0; i < mdp5_kms->num_hwmixers; i++) {
		struct mdp5_hw_mixer *mixer = mdp5_kms->hwmixers[i];

		if (mixer->lm == pair_lm)
			return mixer->idx;
	}

	return -1;
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
          int lm = 100;
          int _len_mdp5_kms0 = 1;
          struct mdp5_kms * mdp5_kms = (struct mdp5_kms *) malloc(_len_mdp5_kms0*sizeof(struct mdp5_kms));
          for(int _i0 = 0; _i0 < _len_mdp5_kms0; _i0++) {
            mdp5_kms[_i0].num_hwmixers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mdp5_kms__i0__hwmixers0 = 1;
          mdp5_kms[_i0].hwmixers = (struct mdp5_hw_mixer **) malloc(_len_mdp5_kms__i0__hwmixers0*sizeof(struct mdp5_hw_mixer *));
          for(int _j0 = 0; _j0 < _len_mdp5_kms__i0__hwmixers0; _j0++) {
            int _len_mdp5_kms__i0__hwmixers1 = 1;
            mdp5_kms[_i0].hwmixers[_j0] = (struct mdp5_hw_mixer *) malloc(_len_mdp5_kms__i0__hwmixers1*sizeof(struct mdp5_hw_mixer));
            for(int _j1 = 0; _j1 < _len_mdp5_kms__i0__hwmixers1; _j1++) {
              mdp5_kms[_i0].hwmixers[_j0]->lm = ((-2 * (next_i()%2)) + 1) * next_i();
        mdp5_kms[_i0].hwmixers[_j0]->idx = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = get_right_pair_idx(mdp5_kms,lm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mdp5_kms0; _aux++) {
          free(*(mdp5_kms[_aux].hwmixers));
        free(mdp5_kms[_aux].hwmixers);
          }
          free(mdp5_kms);
        
        break;
    }
    // big-arr
    case 1:
    {
          int lm = 255;
          int _len_mdp5_kms0 = 65025;
          struct mdp5_kms * mdp5_kms = (struct mdp5_kms *) malloc(_len_mdp5_kms0*sizeof(struct mdp5_kms));
          for(int _i0 = 0; _i0 < _len_mdp5_kms0; _i0++) {
            mdp5_kms[_i0].num_hwmixers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mdp5_kms__i0__hwmixers0 = 1;
          mdp5_kms[_i0].hwmixers = (struct mdp5_hw_mixer **) malloc(_len_mdp5_kms__i0__hwmixers0*sizeof(struct mdp5_hw_mixer *));
          for(int _j0 = 0; _j0 < _len_mdp5_kms__i0__hwmixers0; _j0++) {
            int _len_mdp5_kms__i0__hwmixers1 = 1;
            mdp5_kms[_i0].hwmixers[_j0] = (struct mdp5_hw_mixer *) malloc(_len_mdp5_kms__i0__hwmixers1*sizeof(struct mdp5_hw_mixer));
            for(int _j1 = 0; _j1 < _len_mdp5_kms__i0__hwmixers1; _j1++) {
              mdp5_kms[_i0].hwmixers[_j0]->lm = ((-2 * (next_i()%2)) + 1) * next_i();
        mdp5_kms[_i0].hwmixers[_j0]->idx = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = get_right_pair_idx(mdp5_kms,lm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mdp5_kms0; _aux++) {
          free(*(mdp5_kms[_aux].hwmixers));
        free(mdp5_kms[_aux].hwmixers);
          }
          free(mdp5_kms);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int lm = 10;
          int _len_mdp5_kms0 = 100;
          struct mdp5_kms * mdp5_kms = (struct mdp5_kms *) malloc(_len_mdp5_kms0*sizeof(struct mdp5_kms));
          for(int _i0 = 0; _i0 < _len_mdp5_kms0; _i0++) {
            mdp5_kms[_i0].num_hwmixers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mdp5_kms__i0__hwmixers0 = 1;
          mdp5_kms[_i0].hwmixers = (struct mdp5_hw_mixer **) malloc(_len_mdp5_kms__i0__hwmixers0*sizeof(struct mdp5_hw_mixer *));
          for(int _j0 = 0; _j0 < _len_mdp5_kms__i0__hwmixers0; _j0++) {
            int _len_mdp5_kms__i0__hwmixers1 = 1;
            mdp5_kms[_i0].hwmixers[_j0] = (struct mdp5_hw_mixer *) malloc(_len_mdp5_kms__i0__hwmixers1*sizeof(struct mdp5_hw_mixer));
            for(int _j1 = 0; _j1 < _len_mdp5_kms__i0__hwmixers1; _j1++) {
              mdp5_kms[_i0].hwmixers[_j0]->lm = ((-2 * (next_i()%2)) + 1) * next_i();
        mdp5_kms[_i0].hwmixers[_j0]->idx = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = get_right_pair_idx(mdp5_kms,lm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mdp5_kms0; _aux++) {
          free(*(mdp5_kms[_aux].hwmixers));
        free(mdp5_kms[_aux].hwmixers);
          }
          free(mdp5_kms);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
