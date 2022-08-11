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
typedef  int u32 ;
struct arm_smmu_strtab_l1_desc {int /*<<< orphan*/ * l2ptr; } ;
struct arm_smmu_strtab_cfg {int /*<<< orphan*/ * strtab; struct arm_smmu_strtab_l1_desc* l1_desc; } ;
struct arm_smmu_device {int features; struct arm_smmu_strtab_cfg strtab_cfg; } ;
typedef  int /*<<< orphan*/  __le64 ;

/* Variables and functions */
 int ARM_SMMU_FEAT_2_LVL_STRTAB ; 
 int STRTAB_L1_DESC_DWORDS ; 
 int STRTAB_SPLIT ; 
 int STRTAB_STE_DWORDS ; 

__attribute__((used)) static __le64 *arm_smmu_get_step_for_sid(struct arm_smmu_device *smmu, u32 sid)
{
	__le64 *step;
	struct arm_smmu_strtab_cfg *cfg = &smmu->strtab_cfg;

	if (smmu->features & ARM_SMMU_FEAT_2_LVL_STRTAB) {
		struct arm_smmu_strtab_l1_desc *l1_desc;
		int idx;

		/* Two-level walk */
		idx = (sid >> STRTAB_SPLIT) * STRTAB_L1_DESC_DWORDS;
		l1_desc = &cfg->l1_desc[idx];
		idx = (sid & ((1 << STRTAB_SPLIT) - 1)) * STRTAB_STE_DWORDS;
		step = &l1_desc->l2ptr[idx];
	} else {
		/* Simple linear lookup */
		step = &cfg->strtab[sid * STRTAB_STE_DWORDS];
	}

	return step;
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
          int sid = 100;
          int _len_smmu0 = 1;
          struct arm_smmu_device * smmu = (struct arm_smmu_device *) malloc(_len_smmu0*sizeof(struct arm_smmu_device));
          for(int _i0 = 0; _i0 < _len_smmu0; _i0++) {
            smmu[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_smmu__i0__strtab_cfg_strtab0 = 1;
          smmu[_i0].strtab_cfg.strtab = (int *) malloc(_len_smmu__i0__strtab_cfg_strtab0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smmu__i0__strtab_cfg_strtab0; _j0++) {
            smmu[_i0].strtab_cfg.strtab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smmu__i0__strtab_cfg_l1_desc0 = 1;
          smmu[_i0].strtab_cfg.l1_desc = (struct arm_smmu_strtab_l1_desc *) malloc(_len_smmu__i0__strtab_cfg_l1_desc0*sizeof(struct arm_smmu_strtab_l1_desc));
          for(int _j0 = 0; _j0 < _len_smmu__i0__strtab_cfg_l1_desc0; _j0++) {
              int _len_smmu__i0__strtab_cfg_l1_desc_l2ptr0 = 1;
          smmu[_i0].strtab_cfg.l1_desc->l2ptr = (int *) malloc(_len_smmu__i0__strtab_cfg_l1_desc_l2ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smmu__i0__strtab_cfg_l1_desc_l2ptr0; _j0++) {
            smmu[_i0].strtab_cfg.l1_desc->l2ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int * benchRet = arm_smmu_get_step_for_sid(smmu,sid);
          printf("%d\n", (*benchRet)); 
          free(smmu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sid = 255;
          int _len_smmu0 = 65025;
          struct arm_smmu_device * smmu = (struct arm_smmu_device *) malloc(_len_smmu0*sizeof(struct arm_smmu_device));
          for(int _i0 = 0; _i0 < _len_smmu0; _i0++) {
            smmu[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_smmu__i0__strtab_cfg_strtab0 = 1;
          smmu[_i0].strtab_cfg.strtab = (int *) malloc(_len_smmu__i0__strtab_cfg_strtab0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smmu__i0__strtab_cfg_strtab0; _j0++) {
            smmu[_i0].strtab_cfg.strtab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smmu__i0__strtab_cfg_l1_desc0 = 1;
          smmu[_i0].strtab_cfg.l1_desc = (struct arm_smmu_strtab_l1_desc *) malloc(_len_smmu__i0__strtab_cfg_l1_desc0*sizeof(struct arm_smmu_strtab_l1_desc));
          for(int _j0 = 0; _j0 < _len_smmu__i0__strtab_cfg_l1_desc0; _j0++) {
              int _len_smmu__i0__strtab_cfg_l1_desc_l2ptr0 = 1;
          smmu[_i0].strtab_cfg.l1_desc->l2ptr = (int *) malloc(_len_smmu__i0__strtab_cfg_l1_desc_l2ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smmu__i0__strtab_cfg_l1_desc_l2ptr0; _j0++) {
            smmu[_i0].strtab_cfg.l1_desc->l2ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int * benchRet = arm_smmu_get_step_for_sid(smmu,sid);
          printf("%d\n", (*benchRet)); 
          free(smmu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sid = 10;
          int _len_smmu0 = 100;
          struct arm_smmu_device * smmu = (struct arm_smmu_device *) malloc(_len_smmu0*sizeof(struct arm_smmu_device));
          for(int _i0 = 0; _i0 < _len_smmu0; _i0++) {
            smmu[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_smmu__i0__strtab_cfg_strtab0 = 1;
          smmu[_i0].strtab_cfg.strtab = (int *) malloc(_len_smmu__i0__strtab_cfg_strtab0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smmu__i0__strtab_cfg_strtab0; _j0++) {
            smmu[_i0].strtab_cfg.strtab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smmu__i0__strtab_cfg_l1_desc0 = 1;
          smmu[_i0].strtab_cfg.l1_desc = (struct arm_smmu_strtab_l1_desc *) malloc(_len_smmu__i0__strtab_cfg_l1_desc0*sizeof(struct arm_smmu_strtab_l1_desc));
          for(int _j0 = 0; _j0 < _len_smmu__i0__strtab_cfg_l1_desc0; _j0++) {
              int _len_smmu__i0__strtab_cfg_l1_desc_l2ptr0 = 1;
          smmu[_i0].strtab_cfg.l1_desc->l2ptr = (int *) malloc(_len_smmu__i0__strtab_cfg_l1_desc_l2ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smmu__i0__strtab_cfg_l1_desc_l2ptr0; _j0++) {
            smmu[_i0].strtab_cfg.l1_desc->l2ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int * benchRet = arm_smmu_get_step_for_sid(smmu,sid);
          printf("%d\n", (*benchRet)); 
          free(smmu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
