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
typedef  size_t uint32_t ;
struct vi_dpm_table {TYPE_1__* dpm_level; } ;
struct TYPE_2__ {size_t value; size_t param1; int enabled; } ;

/* Variables and functions */

void phm_setup_pcie_table_entry(
	void *table,
	uint32_t index, uint32_t pcie_gen,
	uint32_t pcie_lanes)
{
	struct vi_dpm_table *dpm_table = (struct vi_dpm_table *)table;
	dpm_table->dpm_level[index].value = pcie_gen;
	dpm_table->dpm_level[index].param1 = pcie_lanes;
	dpm_table->dpm_level[index].enabled = 1;
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
          unsigned long index = 100;
          unsigned long pcie_gen = 100;
          unsigned long pcie_lanes = 100;
          void * table;
          phm_setup_pcie_table_entry(table,index,pcie_gen,pcie_lanes);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long index = 255;
          unsigned long pcie_gen = 255;
          unsigned long pcie_lanes = 255;
          void * table;
          phm_setup_pcie_table_entry(table,index,pcie_gen,pcie_lanes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long index = 10;
          unsigned long pcie_gen = 10;
          unsigned long pcie_lanes = 10;
          void * table;
          phm_setup_pcie_table_entry(table,index,pcie_gen,pcie_lanes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
