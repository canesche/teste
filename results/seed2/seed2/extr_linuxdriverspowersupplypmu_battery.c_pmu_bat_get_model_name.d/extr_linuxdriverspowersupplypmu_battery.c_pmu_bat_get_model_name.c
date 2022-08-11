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
struct pmu_battery_info {int flags; } ;

/* Variables and functions */
#define  PMU_BATT_TYPE_COMET 130 
#define  PMU_BATT_TYPE_HOOPER 129 
 int PMU_BATT_TYPE_MASK ; 
#define  PMU_BATT_TYPE_SMART 128 
 char** pmu_batt_types ; 

__attribute__((used)) static char *pmu_bat_get_model_name(struct pmu_battery_info *pbi)
{
	switch (pbi->flags & PMU_BATT_TYPE_MASK) {
	case PMU_BATT_TYPE_SMART:
		return pmu_batt_types[0];
	case PMU_BATT_TYPE_COMET:
		return pmu_batt_types[1];
	case PMU_BATT_TYPE_HOOPER:
		return pmu_batt_types[2];
	default: break;
	}
	return pmu_batt_types[3];
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
          int _len_pbi0 = 1;
          struct pmu_battery_info * pbi = (struct pmu_battery_info *) malloc(_len_pbi0*sizeof(struct pmu_battery_info));
          for(int _i0 = 0; _i0 < _len_pbi0; _i0++) {
            pbi[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = pmu_bat_get_model_name(pbi);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(pbi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pbi0 = 65025;
          struct pmu_battery_info * pbi = (struct pmu_battery_info *) malloc(_len_pbi0*sizeof(struct pmu_battery_info));
          for(int _i0 = 0; _i0 < _len_pbi0; _i0++) {
            pbi[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = pmu_bat_get_model_name(pbi);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(pbi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pbi0 = 100;
          struct pmu_battery_info * pbi = (struct pmu_battery_info *) malloc(_len_pbi0*sizeof(struct pmu_battery_info));
          for(int _i0 = 0; _i0 < _len_pbi0; _i0++) {
            pbi[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = pmu_bat_get_model_name(pbi);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(pbi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
