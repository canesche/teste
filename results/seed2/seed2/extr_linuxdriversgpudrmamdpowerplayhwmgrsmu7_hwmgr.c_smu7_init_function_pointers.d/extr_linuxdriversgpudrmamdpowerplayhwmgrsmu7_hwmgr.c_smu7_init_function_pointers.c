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
struct pp_hwmgr {scalar_t__ pp_table_version; int /*<<< orphan*/ * pptable_func; int /*<<< orphan*/ * hwmgr_func; } ;

/* Variables and functions */
 scalar_t__ PP_TABLE_V0 ; 
 scalar_t__ PP_TABLE_V1 ; 
 int /*<<< orphan*/  pptable_funcs ; 
 int /*<<< orphan*/  pptable_v1_0_funcs ; 
 int /*<<< orphan*/  smu7_hwmgr_funcs ; 

int smu7_init_function_pointers(struct pp_hwmgr *hwmgr)
{
	int ret = 0;

	hwmgr->hwmgr_func = &smu7_hwmgr_funcs;
	if (hwmgr->pp_table_version == PP_TABLE_V0)
		hwmgr->pptable_func = &pptable_funcs;
	else if (hwmgr->pp_table_version == PP_TABLE_V1)
		hwmgr->pptable_func = &pptable_v1_0_funcs;

	return ret;
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
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].pp_table_version = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__pptable_func0 = 1;
          hwmgr[_i0].pptable_func = (int *) malloc(_len_hwmgr__i0__pptable_func0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_func0; _j0++) {
            hwmgr[_i0].pptable_func[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hwmgr__i0__hwmgr_func0 = 1;
          hwmgr[_i0].hwmgr_func = (int *) malloc(_len_hwmgr__i0__hwmgr_func0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__hwmgr_func0; _j0++) {
            hwmgr[_i0].hwmgr_func[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = smu7_init_function_pointers(hwmgr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].pptable_func);
          }
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].hwmgr_func);
          }
          free(hwmgr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hwmgr0 = 65025;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].pp_table_version = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__pptable_func0 = 1;
          hwmgr[_i0].pptable_func = (int *) malloc(_len_hwmgr__i0__pptable_func0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_func0; _j0++) {
            hwmgr[_i0].pptable_func[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hwmgr__i0__hwmgr_func0 = 1;
          hwmgr[_i0].hwmgr_func = (int *) malloc(_len_hwmgr__i0__hwmgr_func0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__hwmgr_func0; _j0++) {
            hwmgr[_i0].hwmgr_func[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = smu7_init_function_pointers(hwmgr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].pptable_func);
          }
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].hwmgr_func);
          }
          free(hwmgr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hwmgr0 = 100;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].pp_table_version = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__pptable_func0 = 1;
          hwmgr[_i0].pptable_func = (int *) malloc(_len_hwmgr__i0__pptable_func0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_func0; _j0++) {
            hwmgr[_i0].pptable_func[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hwmgr__i0__hwmgr_func0 = 1;
          hwmgr[_i0].hwmgr_func = (int *) malloc(_len_hwmgr__i0__hwmgr_func0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__hwmgr_func0; _j0++) {
            hwmgr[_i0].hwmgr_func[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = smu7_init_function_pointers(hwmgr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].pptable_func);
          }
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].hwmgr_func);
          }
          free(hwmgr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
