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
struct TYPE_2__ {int /*<<< orphan*/  commit_txn; int /*<<< orphan*/  cancel_txn; int /*<<< orphan*/  start_txn; void* del; int /*<<< orphan*/  add; int /*<<< orphan*/  event_init; int /*<<< orphan*/ ** attr_groups; int /*<<< orphan*/  read; void* stop; int /*<<< orphan*/  start; int /*<<< orphan*/  task_ctx_nr; } ;
struct imc_pmu {int domain; TYPE_1__ pmu; int /*<<< orphan*/ ** attr_groups; } ;

/* Variables and functions */
 size_t IMC_CPUMASK_ATTR ; 
#define  IMC_DOMAIN_CORE 130 
#define  IMC_DOMAIN_NEST 129 
#define  IMC_DOMAIN_THREAD 128 
 size_t IMC_FORMAT_ATTR ; 
 int /*<<< orphan*/  core_imc_event_init ; 
 int /*<<< orphan*/  imc_event_add ; 
 int /*<<< orphan*/  imc_event_start ; 
 void* imc_event_stop ; 
 int /*<<< orphan*/  imc_event_update ; 
 int /*<<< orphan*/  imc_format_group ; 
 int /*<<< orphan*/  imc_pmu_cpumask_attr_group ; 
 int /*<<< orphan*/  nest_imc_event_init ; 
 int /*<<< orphan*/  perf_invalid_context ; 
 int /*<<< orphan*/  thread_imc_event_add ; 
 void* thread_imc_event_del ; 
 int /*<<< orphan*/  thread_imc_event_init ; 
 int /*<<< orphan*/  thread_imc_pmu_cancel_txn ; 
 int /*<<< orphan*/  thread_imc_pmu_commit_txn ; 
 int /*<<< orphan*/  thread_imc_pmu_start_txn ; 

__attribute__((used)) static int update_pmu_ops(struct imc_pmu *pmu)
{
	pmu->pmu.task_ctx_nr = perf_invalid_context;
	pmu->pmu.add = imc_event_add;
	pmu->pmu.del = imc_event_stop;
	pmu->pmu.start = imc_event_start;
	pmu->pmu.stop = imc_event_stop;
	pmu->pmu.read = imc_event_update;
	pmu->pmu.attr_groups = pmu->attr_groups;
	pmu->attr_groups[IMC_FORMAT_ATTR] = &imc_format_group;

	switch (pmu->domain) {
	case IMC_DOMAIN_NEST:
		pmu->pmu.event_init = nest_imc_event_init;
		pmu->attr_groups[IMC_CPUMASK_ATTR] = &imc_pmu_cpumask_attr_group;
		break;
	case IMC_DOMAIN_CORE:
		pmu->pmu.event_init = core_imc_event_init;
		pmu->attr_groups[IMC_CPUMASK_ATTR] = &imc_pmu_cpumask_attr_group;
		break;
	case IMC_DOMAIN_THREAD:
		pmu->pmu.event_init = thread_imc_event_init;
		pmu->pmu.add = thread_imc_event_add;
		pmu->pmu.del = thread_imc_event_del;
		pmu->pmu.start_txn = thread_imc_pmu_start_txn;
		pmu->pmu.cancel_txn = thread_imc_pmu_cancel_txn;
		pmu->pmu.commit_txn = thread_imc_pmu_commit_txn;
		break;
	default:
		break;
	}

	return 0;
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
          int _len_pmu0 = 1;
          struct imc_pmu * pmu = (struct imc_pmu *) malloc(_len_pmu0*sizeof(struct imc_pmu));
          for(int _i0 = 0; _i0 < _len_pmu0; _i0++) {
            pmu[_i0].domain = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.commit_txn = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.cancel_txn = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.start_txn = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.add = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.event_init = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmu__i0__pmu_attr_groups0 = 1;
          pmu[_i0].pmu.attr_groups = (int **) malloc(_len_pmu__i0__pmu_attr_groups0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_pmu__i0__pmu_attr_groups0; _j0++) {
            int _len_pmu__i0__pmu_attr_groups1 = 1;
            pmu[_i0].pmu.attr_groups[_j0] = (int *) malloc(_len_pmu__i0__pmu_attr_groups1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_pmu__i0__pmu_attr_groups1; _j1++) {
              pmu[_i0].pmu.attr_groups[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        pmu[_i0].pmu.read = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.start = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.task_ctx_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmu__i0__attr_groups0 = 1;
          pmu[_i0].attr_groups = (int **) malloc(_len_pmu__i0__attr_groups0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_pmu__i0__attr_groups0; _j0++) {
            int _len_pmu__i0__attr_groups1 = 1;
            pmu[_i0].attr_groups[_j0] = (int *) malloc(_len_pmu__i0__attr_groups1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_pmu__i0__attr_groups1; _j1++) {
              pmu[_i0].attr_groups[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = update_pmu_ops(pmu);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pmu0; _aux++) {
          free(*(pmu[_aux].attr_groups));
        free(pmu[_aux].attr_groups);
          }
          free(pmu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pmu0 = 65025;
          struct imc_pmu * pmu = (struct imc_pmu *) malloc(_len_pmu0*sizeof(struct imc_pmu));
          for(int _i0 = 0; _i0 < _len_pmu0; _i0++) {
            pmu[_i0].domain = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.commit_txn = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.cancel_txn = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.start_txn = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.add = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.event_init = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmu__i0__pmu_attr_groups0 = 1;
          pmu[_i0].pmu.attr_groups = (int **) malloc(_len_pmu__i0__pmu_attr_groups0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_pmu__i0__pmu_attr_groups0; _j0++) {
            int _len_pmu__i0__pmu_attr_groups1 = 1;
            pmu[_i0].pmu.attr_groups[_j0] = (int *) malloc(_len_pmu__i0__pmu_attr_groups1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_pmu__i0__pmu_attr_groups1; _j1++) {
              pmu[_i0].pmu.attr_groups[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        pmu[_i0].pmu.read = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.start = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.task_ctx_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmu__i0__attr_groups0 = 1;
          pmu[_i0].attr_groups = (int **) malloc(_len_pmu__i0__attr_groups0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_pmu__i0__attr_groups0; _j0++) {
            int _len_pmu__i0__attr_groups1 = 1;
            pmu[_i0].attr_groups[_j0] = (int *) malloc(_len_pmu__i0__attr_groups1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_pmu__i0__attr_groups1; _j1++) {
              pmu[_i0].attr_groups[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = update_pmu_ops(pmu);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pmu0; _aux++) {
          free(*(pmu[_aux].attr_groups));
        free(pmu[_aux].attr_groups);
          }
          free(pmu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pmu0 = 100;
          struct imc_pmu * pmu = (struct imc_pmu *) malloc(_len_pmu0*sizeof(struct imc_pmu));
          for(int _i0 = 0; _i0 < _len_pmu0; _i0++) {
            pmu[_i0].domain = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.commit_txn = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.cancel_txn = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.start_txn = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.add = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.event_init = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmu__i0__pmu_attr_groups0 = 1;
          pmu[_i0].pmu.attr_groups = (int **) malloc(_len_pmu__i0__pmu_attr_groups0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_pmu__i0__pmu_attr_groups0; _j0++) {
            int _len_pmu__i0__pmu_attr_groups1 = 1;
            pmu[_i0].pmu.attr_groups[_j0] = (int *) malloc(_len_pmu__i0__pmu_attr_groups1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_pmu__i0__pmu_attr_groups1; _j1++) {
              pmu[_i0].pmu.attr_groups[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        pmu[_i0].pmu.read = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.start = ((-2 * (next_i()%2)) + 1) * next_i();
        pmu[_i0].pmu.task_ctx_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmu__i0__attr_groups0 = 1;
          pmu[_i0].attr_groups = (int **) malloc(_len_pmu__i0__attr_groups0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_pmu__i0__attr_groups0; _j0++) {
            int _len_pmu__i0__attr_groups1 = 1;
            pmu[_i0].attr_groups[_j0] = (int *) malloc(_len_pmu__i0__attr_groups1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_pmu__i0__attr_groups1; _j1++) {
              pmu[_i0].attr_groups[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = update_pmu_ops(pmu);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pmu0; _aux++) {
          free(*(pmu[_aux].attr_groups));
        free(pmu[_aux].attr_groups);
          }
          free(pmu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
