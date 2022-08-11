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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int u64 ;
struct TYPE_8__ {int tcr; int* ttbr; int /*<<< orphan*/ * mair; } ;
struct TYPE_7__ {int tcr; int* ttbr; int /*<<< orphan*/  nmrr; int /*<<< orphan*/  prrr; } ;
struct TYPE_6__ {int vtcr; int vttbr; } ;
struct io_pgtable_cfg {TYPE_4__ arm_lpae_s1_cfg; TYPE_3__ arm_v7s_cfg; TYPE_2__ arm_lpae_s2_cfg; } ;
struct arm_smmu_cfg {size_t cbndx; scalar_t__ cbar; scalar_t__ fmt; scalar_t__ asid; } ;
struct arm_smmu_domain {TYPE_1__* smmu; struct arm_smmu_cfg cfg; } ;
struct arm_smmu_cb {int* tcr; int* ttbr; int /*<<< orphan*/ * mair; struct arm_smmu_cfg* cfg; } ;
struct TYPE_5__ {struct arm_smmu_cb* cbs; } ;

/* Variables and functions */
 scalar_t__ ARM_SMMU_CTX_FMT_AARCH32_S ; 
 scalar_t__ ARM_SMMU_CTX_FMT_AARCH64 ; 
 scalar_t__ CBAR_TYPE_S2_TRANS ; 
 int TTBCR2_AS ; 
 int TTBCR2_SEP_UPSTREAM ; 
 int TTBRn_ASID_SHIFT ; 

__attribute__((used)) static void arm_smmu_init_context_bank(struct arm_smmu_domain *smmu_domain,
				       struct io_pgtable_cfg *pgtbl_cfg)
{
	struct arm_smmu_cfg *cfg = &smmu_domain->cfg;
	struct arm_smmu_cb *cb = &smmu_domain->smmu->cbs[cfg->cbndx];
	bool stage1 = cfg->cbar != CBAR_TYPE_S2_TRANS;

	cb->cfg = cfg;

	/* TTBCR */
	if (stage1) {
		if (cfg->fmt == ARM_SMMU_CTX_FMT_AARCH32_S) {
			cb->tcr[0] = pgtbl_cfg->arm_v7s_cfg.tcr;
		} else {
			cb->tcr[0] = pgtbl_cfg->arm_lpae_s1_cfg.tcr;
			cb->tcr[1] = pgtbl_cfg->arm_lpae_s1_cfg.tcr >> 32;
			cb->tcr[1] |= TTBCR2_SEP_UPSTREAM;
			if (cfg->fmt == ARM_SMMU_CTX_FMT_AARCH64)
				cb->tcr[1] |= TTBCR2_AS;
		}
	} else {
		cb->tcr[0] = pgtbl_cfg->arm_lpae_s2_cfg.vtcr;
	}

	/* TTBRs */
	if (stage1) {
		if (cfg->fmt == ARM_SMMU_CTX_FMT_AARCH32_S) {
			cb->ttbr[0] = pgtbl_cfg->arm_v7s_cfg.ttbr[0];
			cb->ttbr[1] = pgtbl_cfg->arm_v7s_cfg.ttbr[1];
		} else {
			cb->ttbr[0] = pgtbl_cfg->arm_lpae_s1_cfg.ttbr[0];
			cb->ttbr[0] |= (u64)cfg->asid << TTBRn_ASID_SHIFT;
			cb->ttbr[1] = pgtbl_cfg->arm_lpae_s1_cfg.ttbr[1];
			cb->ttbr[1] |= (u64)cfg->asid << TTBRn_ASID_SHIFT;
		}
	} else {
		cb->ttbr[0] = pgtbl_cfg->arm_lpae_s2_cfg.vttbr;
	}

	/* MAIRs (stage-1 only) */
	if (stage1) {
		if (cfg->fmt == ARM_SMMU_CTX_FMT_AARCH32_S) {
			cb->mair[0] = pgtbl_cfg->arm_v7s_cfg.prrr;
			cb->mair[1] = pgtbl_cfg->arm_v7s_cfg.nmrr;
		} else {
			cb->mair[0] = pgtbl_cfg->arm_lpae_s1_cfg.mair[0];
			cb->mair[1] = pgtbl_cfg->arm_lpae_s1_cfg.mair[1];
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
          int _len_smmu_domain0 = 1;
          struct arm_smmu_domain * smmu_domain = (struct arm_smmu_domain *) malloc(_len_smmu_domain0*sizeof(struct arm_smmu_domain));
          for(int _i0 = 0; _i0 < _len_smmu_domain0; _i0++) {
              int _len_smmu_domain__i0__smmu0 = 1;
          smmu_domain[_i0].smmu = (struct TYPE_5__ *) malloc(_len_smmu_domain__i0__smmu0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu0; _j0++) {
              int _len_smmu_domain__i0__smmu_cbs0 = 1;
          smmu_domain[_i0].smmu->cbs = (struct arm_smmu_cb *) malloc(_len_smmu_domain__i0__smmu_cbs0*sizeof(struct arm_smmu_cb));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu_cbs0; _j0++) {
              int _len_smmu_domain__i0__smmu_cbs_tcr0 = 1;
          smmu_domain[_i0].smmu->cbs->tcr = (int *) malloc(_len_smmu_domain__i0__smmu_cbs_tcr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu_cbs_tcr0; _j0++) {
            smmu_domain[_i0].smmu->cbs->tcr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smmu_domain__i0__smmu_cbs_ttbr0 = 1;
          smmu_domain[_i0].smmu->cbs->ttbr = (int *) malloc(_len_smmu_domain__i0__smmu_cbs_ttbr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu_cbs_ttbr0; _j0++) {
            smmu_domain[_i0].smmu->cbs->ttbr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smmu_domain__i0__smmu_cbs_mair0 = 1;
          smmu_domain[_i0].smmu->cbs->mair = (int *) malloc(_len_smmu_domain__i0__smmu_cbs_mair0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu_cbs_mair0; _j0++) {
            smmu_domain[_i0].smmu->cbs->mair[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smmu_domain__i0__smmu_cbs_cfg0 = 1;
          smmu_domain[_i0].smmu->cbs->cfg = (struct arm_smmu_cfg *) malloc(_len_smmu_domain__i0__smmu_cbs_cfg0*sizeof(struct arm_smmu_cfg));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu_cbs_cfg0; _j0++) {
            smmu_domain[_i0].smmu->cbs->cfg->cbndx = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].smmu->cbs->cfg->cbar = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].smmu->cbs->cfg->fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].smmu->cbs->cfg->asid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
        smmu_domain[_i0].cfg.cbndx = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].cfg.cbar = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].cfg.fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].cfg.asid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pgtbl_cfg0 = 1;
          struct io_pgtable_cfg * pgtbl_cfg = (struct io_pgtable_cfg *) malloc(_len_pgtbl_cfg0*sizeof(struct io_pgtable_cfg));
          for(int _i0 = 0; _i0 < _len_pgtbl_cfg0; _i0++) {
            pgtbl_cfg[_i0].arm_lpae_s1_cfg.tcr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pgtbl_cfg__i0__arm_lpae_s1_cfg_ttbr0 = 1;
          pgtbl_cfg[_i0].arm_lpae_s1_cfg.ttbr = (int *) malloc(_len_pgtbl_cfg__i0__arm_lpae_s1_cfg_ttbr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pgtbl_cfg__i0__arm_lpae_s1_cfg_ttbr0; _j0++) {
            pgtbl_cfg[_i0].arm_lpae_s1_cfg.ttbr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pgtbl_cfg__i0__arm_lpae_s1_cfg_mair0 = 1;
          pgtbl_cfg[_i0].arm_lpae_s1_cfg.mair = (int *) malloc(_len_pgtbl_cfg__i0__arm_lpae_s1_cfg_mair0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pgtbl_cfg__i0__arm_lpae_s1_cfg_mair0; _j0++) {
            pgtbl_cfg[_i0].arm_lpae_s1_cfg.mair[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pgtbl_cfg[_i0].arm_v7s_cfg.tcr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pgtbl_cfg__i0__arm_v7s_cfg_ttbr0 = 1;
          pgtbl_cfg[_i0].arm_v7s_cfg.ttbr = (int *) malloc(_len_pgtbl_cfg__i0__arm_v7s_cfg_ttbr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pgtbl_cfg__i0__arm_v7s_cfg_ttbr0; _j0++) {
            pgtbl_cfg[_i0].arm_v7s_cfg.ttbr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pgtbl_cfg[_i0].arm_v7s_cfg.nmrr = ((-2 * (next_i()%2)) + 1) * next_i();
        pgtbl_cfg[_i0].arm_v7s_cfg.prrr = ((-2 * (next_i()%2)) + 1) * next_i();
        pgtbl_cfg[_i0].arm_lpae_s2_cfg.vtcr = ((-2 * (next_i()%2)) + 1) * next_i();
        pgtbl_cfg[_i0].arm_lpae_s2_cfg.vttbr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          arm_smmu_init_context_bank(smmu_domain,pgtbl_cfg);
          for(int _aux = 0; _aux < _len_smmu_domain0; _aux++) {
          free(smmu_domain[_aux].smmu);
          }
          free(smmu_domain);
          free(pgtbl_cfg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_smmu_domain0 = 65025;
          struct arm_smmu_domain * smmu_domain = (struct arm_smmu_domain *) malloc(_len_smmu_domain0*sizeof(struct arm_smmu_domain));
          for(int _i0 = 0; _i0 < _len_smmu_domain0; _i0++) {
              int _len_smmu_domain__i0__smmu0 = 1;
          smmu_domain[_i0].smmu = (struct TYPE_5__ *) malloc(_len_smmu_domain__i0__smmu0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu0; _j0++) {
              int _len_smmu_domain__i0__smmu_cbs0 = 1;
          smmu_domain[_i0].smmu->cbs = (struct arm_smmu_cb *) malloc(_len_smmu_domain__i0__smmu_cbs0*sizeof(struct arm_smmu_cb));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu_cbs0; _j0++) {
              int _len_smmu_domain__i0__smmu_cbs_tcr0 = 1;
          smmu_domain[_i0].smmu->cbs->tcr = (int *) malloc(_len_smmu_domain__i0__smmu_cbs_tcr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu_cbs_tcr0; _j0++) {
            smmu_domain[_i0].smmu->cbs->tcr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smmu_domain__i0__smmu_cbs_ttbr0 = 1;
          smmu_domain[_i0].smmu->cbs->ttbr = (int *) malloc(_len_smmu_domain__i0__smmu_cbs_ttbr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu_cbs_ttbr0; _j0++) {
            smmu_domain[_i0].smmu->cbs->ttbr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smmu_domain__i0__smmu_cbs_mair0 = 1;
          smmu_domain[_i0].smmu->cbs->mair = (int *) malloc(_len_smmu_domain__i0__smmu_cbs_mair0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu_cbs_mair0; _j0++) {
            smmu_domain[_i0].smmu->cbs->mair[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smmu_domain__i0__smmu_cbs_cfg0 = 1;
          smmu_domain[_i0].smmu->cbs->cfg = (struct arm_smmu_cfg *) malloc(_len_smmu_domain__i0__smmu_cbs_cfg0*sizeof(struct arm_smmu_cfg));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu_cbs_cfg0; _j0++) {
            smmu_domain[_i0].smmu->cbs->cfg->cbndx = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].smmu->cbs->cfg->cbar = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].smmu->cbs->cfg->fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].smmu->cbs->cfg->asid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
        smmu_domain[_i0].cfg.cbndx = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].cfg.cbar = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].cfg.fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].cfg.asid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pgtbl_cfg0 = 65025;
          struct io_pgtable_cfg * pgtbl_cfg = (struct io_pgtable_cfg *) malloc(_len_pgtbl_cfg0*sizeof(struct io_pgtable_cfg));
          for(int _i0 = 0; _i0 < _len_pgtbl_cfg0; _i0++) {
            pgtbl_cfg[_i0].arm_lpae_s1_cfg.tcr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pgtbl_cfg__i0__arm_lpae_s1_cfg_ttbr0 = 1;
          pgtbl_cfg[_i0].arm_lpae_s1_cfg.ttbr = (int *) malloc(_len_pgtbl_cfg__i0__arm_lpae_s1_cfg_ttbr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pgtbl_cfg__i0__arm_lpae_s1_cfg_ttbr0; _j0++) {
            pgtbl_cfg[_i0].arm_lpae_s1_cfg.ttbr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pgtbl_cfg__i0__arm_lpae_s1_cfg_mair0 = 1;
          pgtbl_cfg[_i0].arm_lpae_s1_cfg.mair = (int *) malloc(_len_pgtbl_cfg__i0__arm_lpae_s1_cfg_mair0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pgtbl_cfg__i0__arm_lpae_s1_cfg_mair0; _j0++) {
            pgtbl_cfg[_i0].arm_lpae_s1_cfg.mair[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pgtbl_cfg[_i0].arm_v7s_cfg.tcr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pgtbl_cfg__i0__arm_v7s_cfg_ttbr0 = 1;
          pgtbl_cfg[_i0].arm_v7s_cfg.ttbr = (int *) malloc(_len_pgtbl_cfg__i0__arm_v7s_cfg_ttbr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pgtbl_cfg__i0__arm_v7s_cfg_ttbr0; _j0++) {
            pgtbl_cfg[_i0].arm_v7s_cfg.ttbr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pgtbl_cfg[_i0].arm_v7s_cfg.nmrr = ((-2 * (next_i()%2)) + 1) * next_i();
        pgtbl_cfg[_i0].arm_v7s_cfg.prrr = ((-2 * (next_i()%2)) + 1) * next_i();
        pgtbl_cfg[_i0].arm_lpae_s2_cfg.vtcr = ((-2 * (next_i()%2)) + 1) * next_i();
        pgtbl_cfg[_i0].arm_lpae_s2_cfg.vttbr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          arm_smmu_init_context_bank(smmu_domain,pgtbl_cfg);
          for(int _aux = 0; _aux < _len_smmu_domain0; _aux++) {
          free(smmu_domain[_aux].smmu);
          }
          free(smmu_domain);
          free(pgtbl_cfg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_smmu_domain0 = 100;
          struct arm_smmu_domain * smmu_domain = (struct arm_smmu_domain *) malloc(_len_smmu_domain0*sizeof(struct arm_smmu_domain));
          for(int _i0 = 0; _i0 < _len_smmu_domain0; _i0++) {
              int _len_smmu_domain__i0__smmu0 = 1;
          smmu_domain[_i0].smmu = (struct TYPE_5__ *) malloc(_len_smmu_domain__i0__smmu0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu0; _j0++) {
              int _len_smmu_domain__i0__smmu_cbs0 = 1;
          smmu_domain[_i0].smmu->cbs = (struct arm_smmu_cb *) malloc(_len_smmu_domain__i0__smmu_cbs0*sizeof(struct arm_smmu_cb));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu_cbs0; _j0++) {
              int _len_smmu_domain__i0__smmu_cbs_tcr0 = 1;
          smmu_domain[_i0].smmu->cbs->tcr = (int *) malloc(_len_smmu_domain__i0__smmu_cbs_tcr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu_cbs_tcr0; _j0++) {
            smmu_domain[_i0].smmu->cbs->tcr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smmu_domain__i0__smmu_cbs_ttbr0 = 1;
          smmu_domain[_i0].smmu->cbs->ttbr = (int *) malloc(_len_smmu_domain__i0__smmu_cbs_ttbr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu_cbs_ttbr0; _j0++) {
            smmu_domain[_i0].smmu->cbs->ttbr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smmu_domain__i0__smmu_cbs_mair0 = 1;
          smmu_domain[_i0].smmu->cbs->mair = (int *) malloc(_len_smmu_domain__i0__smmu_cbs_mair0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu_cbs_mair0; _j0++) {
            smmu_domain[_i0].smmu->cbs->mair[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smmu_domain__i0__smmu_cbs_cfg0 = 1;
          smmu_domain[_i0].smmu->cbs->cfg = (struct arm_smmu_cfg *) malloc(_len_smmu_domain__i0__smmu_cbs_cfg0*sizeof(struct arm_smmu_cfg));
          for(int _j0 = 0; _j0 < _len_smmu_domain__i0__smmu_cbs_cfg0; _j0++) {
            smmu_domain[_i0].smmu->cbs->cfg->cbndx = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].smmu->cbs->cfg->cbar = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].smmu->cbs->cfg->fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].smmu->cbs->cfg->asid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
        smmu_domain[_i0].cfg.cbndx = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].cfg.cbar = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].cfg.fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        smmu_domain[_i0].cfg.asid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pgtbl_cfg0 = 100;
          struct io_pgtable_cfg * pgtbl_cfg = (struct io_pgtable_cfg *) malloc(_len_pgtbl_cfg0*sizeof(struct io_pgtable_cfg));
          for(int _i0 = 0; _i0 < _len_pgtbl_cfg0; _i0++) {
            pgtbl_cfg[_i0].arm_lpae_s1_cfg.tcr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pgtbl_cfg__i0__arm_lpae_s1_cfg_ttbr0 = 1;
          pgtbl_cfg[_i0].arm_lpae_s1_cfg.ttbr = (int *) malloc(_len_pgtbl_cfg__i0__arm_lpae_s1_cfg_ttbr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pgtbl_cfg__i0__arm_lpae_s1_cfg_ttbr0; _j0++) {
            pgtbl_cfg[_i0].arm_lpae_s1_cfg.ttbr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pgtbl_cfg__i0__arm_lpae_s1_cfg_mair0 = 1;
          pgtbl_cfg[_i0].arm_lpae_s1_cfg.mair = (int *) malloc(_len_pgtbl_cfg__i0__arm_lpae_s1_cfg_mair0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pgtbl_cfg__i0__arm_lpae_s1_cfg_mair0; _j0++) {
            pgtbl_cfg[_i0].arm_lpae_s1_cfg.mair[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pgtbl_cfg[_i0].arm_v7s_cfg.tcr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pgtbl_cfg__i0__arm_v7s_cfg_ttbr0 = 1;
          pgtbl_cfg[_i0].arm_v7s_cfg.ttbr = (int *) malloc(_len_pgtbl_cfg__i0__arm_v7s_cfg_ttbr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pgtbl_cfg__i0__arm_v7s_cfg_ttbr0; _j0++) {
            pgtbl_cfg[_i0].arm_v7s_cfg.ttbr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pgtbl_cfg[_i0].arm_v7s_cfg.nmrr = ((-2 * (next_i()%2)) + 1) * next_i();
        pgtbl_cfg[_i0].arm_v7s_cfg.prrr = ((-2 * (next_i()%2)) + 1) * next_i();
        pgtbl_cfg[_i0].arm_lpae_s2_cfg.vtcr = ((-2 * (next_i()%2)) + 1) * next_i();
        pgtbl_cfg[_i0].arm_lpae_s2_cfg.vttbr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          arm_smmu_init_context_bank(smmu_domain,pgtbl_cfg);
          for(int _aux = 0; _aux < _len_smmu_domain0; _aux++) {
          free(smmu_domain[_aux].smmu);
          }
          free(smmu_domain);
          free(pgtbl_cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
