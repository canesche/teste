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
typedef  int /*<<< orphan*/  u64 ;
struct pci_dev {struct aer_stats* aer_stats; } ;
struct aer_stats {int /*<<< orphan*/ * dev_fatal_errs; int /*<<< orphan*/  dev_total_fatal_errs; int /*<<< orphan*/ * dev_nonfatal_errs; int /*<<< orphan*/  dev_total_nonfatal_errs; int /*<<< orphan*/ * dev_cor_errs; int /*<<< orphan*/  dev_total_cor_errs; } ;
struct aer_err_info {int severity; int status; int mask; } ;

/* Variables and functions */
#define  AER_CORRECTABLE 130 
#define  AER_FATAL 129 
 int AER_MAX_TYPEOF_COR_ERRS ; 
 int AER_MAX_TYPEOF_UNCOR_ERRS ; 
#define  AER_NONFATAL 128 

__attribute__((used)) static void pci_dev_aer_stats_incr(struct pci_dev *pdev,
				   struct aer_err_info *info)
{
	int status, i, max = -1;
	u64 *counter = NULL;
	struct aer_stats *aer_stats = pdev->aer_stats;

	if (!aer_stats)
		return;

	switch (info->severity) {
	case AER_CORRECTABLE:
		aer_stats->dev_total_cor_errs++;
		counter = &aer_stats->dev_cor_errs[0];
		max = AER_MAX_TYPEOF_COR_ERRS;
		break;
	case AER_NONFATAL:
		aer_stats->dev_total_nonfatal_errs++;
		counter = &aer_stats->dev_nonfatal_errs[0];
		max = AER_MAX_TYPEOF_UNCOR_ERRS;
		break;
	case AER_FATAL:
		aer_stats->dev_total_fatal_errs++;
		counter = &aer_stats->dev_fatal_errs[0];
		max = AER_MAX_TYPEOF_UNCOR_ERRS;
		break;
	}

	status = (info->status & ~info->mask);
	for (i = 0; i < max; i++)
		if (status & (1 << i))
			counter[i]++;
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
          int _len_pdev0 = 1;
          struct pci_dev * pdev = (struct pci_dev *) malloc(_len_pdev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
              int _len_pdev__i0__aer_stats0 = 1;
          pdev[_i0].aer_stats = (struct aer_stats *) malloc(_len_pdev__i0__aer_stats0*sizeof(struct aer_stats));
          for(int _j0 = 0; _j0 < _len_pdev__i0__aer_stats0; _j0++) {
              int _len_pdev__i0__aer_stats_dev_fatal_errs0 = 1;
          pdev[_i0].aer_stats->dev_fatal_errs = (int *) malloc(_len_pdev__i0__aer_stats_dev_fatal_errs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdev__i0__aer_stats_dev_fatal_errs0; _j0++) {
            pdev[_i0].aer_stats->dev_fatal_errs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pdev[_i0].aer_stats->dev_total_fatal_errs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdev__i0__aer_stats_dev_nonfatal_errs0 = 1;
          pdev[_i0].aer_stats->dev_nonfatal_errs = (int *) malloc(_len_pdev__i0__aer_stats_dev_nonfatal_errs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdev__i0__aer_stats_dev_nonfatal_errs0; _j0++) {
            pdev[_i0].aer_stats->dev_nonfatal_errs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pdev[_i0].aer_stats->dev_total_nonfatal_errs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdev__i0__aer_stats_dev_cor_errs0 = 1;
          pdev[_i0].aer_stats->dev_cor_errs = (int *) malloc(_len_pdev__i0__aer_stats_dev_cor_errs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdev__i0__aer_stats_dev_cor_errs0; _j0++) {
            pdev[_i0].aer_stats->dev_cor_errs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pdev[_i0].aer_stats->dev_total_cor_errs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_info0 = 1;
          struct aer_err_info * info = (struct aer_err_info *) malloc(_len_info0*sizeof(struct aer_err_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].severity = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pci_dev_aer_stats_incr(pdev,info);
          for(int _aux = 0; _aux < _len_pdev0; _aux++) {
          free(pdev[_aux].aer_stats);
          }
          free(pdev);
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pdev0 = 65025;
          struct pci_dev * pdev = (struct pci_dev *) malloc(_len_pdev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
              int _len_pdev__i0__aer_stats0 = 1;
          pdev[_i0].aer_stats = (struct aer_stats *) malloc(_len_pdev__i0__aer_stats0*sizeof(struct aer_stats));
          for(int _j0 = 0; _j0 < _len_pdev__i0__aer_stats0; _j0++) {
              int _len_pdev__i0__aer_stats_dev_fatal_errs0 = 1;
          pdev[_i0].aer_stats->dev_fatal_errs = (int *) malloc(_len_pdev__i0__aer_stats_dev_fatal_errs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdev__i0__aer_stats_dev_fatal_errs0; _j0++) {
            pdev[_i0].aer_stats->dev_fatal_errs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pdev[_i0].aer_stats->dev_total_fatal_errs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdev__i0__aer_stats_dev_nonfatal_errs0 = 1;
          pdev[_i0].aer_stats->dev_nonfatal_errs = (int *) malloc(_len_pdev__i0__aer_stats_dev_nonfatal_errs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdev__i0__aer_stats_dev_nonfatal_errs0; _j0++) {
            pdev[_i0].aer_stats->dev_nonfatal_errs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pdev[_i0].aer_stats->dev_total_nonfatal_errs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdev__i0__aer_stats_dev_cor_errs0 = 1;
          pdev[_i0].aer_stats->dev_cor_errs = (int *) malloc(_len_pdev__i0__aer_stats_dev_cor_errs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdev__i0__aer_stats_dev_cor_errs0; _j0++) {
            pdev[_i0].aer_stats->dev_cor_errs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pdev[_i0].aer_stats->dev_total_cor_errs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_info0 = 65025;
          struct aer_err_info * info = (struct aer_err_info *) malloc(_len_info0*sizeof(struct aer_err_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].severity = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pci_dev_aer_stats_incr(pdev,info);
          for(int _aux = 0; _aux < _len_pdev0; _aux++) {
          free(pdev[_aux].aer_stats);
          }
          free(pdev);
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pdev0 = 100;
          struct pci_dev * pdev = (struct pci_dev *) malloc(_len_pdev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
              int _len_pdev__i0__aer_stats0 = 1;
          pdev[_i0].aer_stats = (struct aer_stats *) malloc(_len_pdev__i0__aer_stats0*sizeof(struct aer_stats));
          for(int _j0 = 0; _j0 < _len_pdev__i0__aer_stats0; _j0++) {
              int _len_pdev__i0__aer_stats_dev_fatal_errs0 = 1;
          pdev[_i0].aer_stats->dev_fatal_errs = (int *) malloc(_len_pdev__i0__aer_stats_dev_fatal_errs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdev__i0__aer_stats_dev_fatal_errs0; _j0++) {
            pdev[_i0].aer_stats->dev_fatal_errs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pdev[_i0].aer_stats->dev_total_fatal_errs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdev__i0__aer_stats_dev_nonfatal_errs0 = 1;
          pdev[_i0].aer_stats->dev_nonfatal_errs = (int *) malloc(_len_pdev__i0__aer_stats_dev_nonfatal_errs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdev__i0__aer_stats_dev_nonfatal_errs0; _j0++) {
            pdev[_i0].aer_stats->dev_nonfatal_errs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pdev[_i0].aer_stats->dev_total_nonfatal_errs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdev__i0__aer_stats_dev_cor_errs0 = 1;
          pdev[_i0].aer_stats->dev_cor_errs = (int *) malloc(_len_pdev__i0__aer_stats_dev_cor_errs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pdev__i0__aer_stats_dev_cor_errs0; _j0++) {
            pdev[_i0].aer_stats->dev_cor_errs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pdev[_i0].aer_stats->dev_total_cor_errs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_info0 = 100;
          struct aer_err_info * info = (struct aer_err_info *) malloc(_len_info0*sizeof(struct aer_err_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].severity = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pci_dev_aer_stats_incr(pdev,info);
          for(int _aux = 0; _aux < _len_pdev0; _aux++) {
          free(pdev[_aux].aer_stats);
          }
          free(pdev);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
