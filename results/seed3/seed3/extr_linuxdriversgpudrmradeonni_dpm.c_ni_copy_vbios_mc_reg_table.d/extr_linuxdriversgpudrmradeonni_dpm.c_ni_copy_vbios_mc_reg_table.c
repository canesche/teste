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
typedef  size_t u8 ;
struct ni_mc_reg_table {size_t last; size_t num_entries; TYPE_3__* mc_reg_table_entry; TYPE_1__* mc_reg_address; } ;
struct atom_mc_reg_table {scalar_t__ last; size_t num_entries; TYPE_4__* mc_reg_table_entry; TYPE_2__* mc_reg_address; } ;
struct TYPE_8__ {int /*<<< orphan*/ * mc_data; int /*<<< orphan*/  mclk_max; } ;
struct TYPE_7__ {int /*<<< orphan*/ * mc_data; int /*<<< orphan*/  mclk_max; } ;
struct TYPE_6__ {int /*<<< orphan*/  s1; } ;
struct TYPE_5__ {int /*<<< orphan*/  s1; } ;

/* Variables and functions */
 int EINVAL ; 
 size_t MAX_AC_TIMING_ENTRIES ; 
 scalar_t__ SMC_NISLANDS_MC_REGISTER_ARRAY_SIZE ; 

__attribute__((used)) static int ni_copy_vbios_mc_reg_table(struct atom_mc_reg_table *table,
				      struct ni_mc_reg_table *ni_table)
{
	u8 i, j;

	if (table->last > SMC_NISLANDS_MC_REGISTER_ARRAY_SIZE)
		return -EINVAL;
	if (table->num_entries > MAX_AC_TIMING_ENTRIES)
		return -EINVAL;

	for (i = 0; i < table->last; i++)
		ni_table->mc_reg_address[i].s1 = table->mc_reg_address[i].s1;
	ni_table->last = table->last;

	for (i = 0; i < table->num_entries; i++) {
		ni_table->mc_reg_table_entry[i].mclk_max =
			table->mc_reg_table_entry[i].mclk_max;
		for (j = 0; j < table->last; j++)
			ni_table->mc_reg_table_entry[i].mc_data[j] =
				table->mc_reg_table_entry[i].mc_data[j];
	}
	ni_table->num_entries = table->num_entries;

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
          int _len_table0 = 1;
          struct atom_mc_reg_table * table = (struct atom_mc_reg_table *) malloc(_len_table0*sizeof(struct atom_mc_reg_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table__i0__mc_reg_table_entry0 = 1;
          table[_i0].mc_reg_table_entry = (struct TYPE_8__ *) malloc(_len_table__i0__mc_reg_table_entry0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_table__i0__mc_reg_table_entry0; _j0++) {
              int _len_table__i0__mc_reg_table_entry_mc_data0 = 1;
          table[_i0].mc_reg_table_entry->mc_data = (int *) malloc(_len_table__i0__mc_reg_table_entry_mc_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_table__i0__mc_reg_table_entry_mc_data0; _j0++) {
            table[_i0].mc_reg_table_entry->mc_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        table[_i0].mc_reg_table_entry->mclk_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table__i0__mc_reg_address0 = 1;
          table[_i0].mc_reg_address = (struct TYPE_6__ *) malloc(_len_table__i0__mc_reg_address0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_table__i0__mc_reg_address0; _j0++) {
            table[_i0].mc_reg_address->s1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ni_table0 = 1;
          struct ni_mc_reg_table * ni_table = (struct ni_mc_reg_table *) malloc(_len_ni_table0*sizeof(struct ni_mc_reg_table));
          for(int _i0 = 0; _i0 < _len_ni_table0; _i0++) {
            ni_table[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
        ni_table[_i0].num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ni_table__i0__mc_reg_table_entry0 = 1;
          ni_table[_i0].mc_reg_table_entry = (struct TYPE_7__ *) malloc(_len_ni_table__i0__mc_reg_table_entry0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ni_table__i0__mc_reg_table_entry0; _j0++) {
              int _len_ni_table__i0__mc_reg_table_entry_mc_data0 = 1;
          ni_table[_i0].mc_reg_table_entry->mc_data = (int *) malloc(_len_ni_table__i0__mc_reg_table_entry_mc_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ni_table__i0__mc_reg_table_entry_mc_data0; _j0++) {
            ni_table[_i0].mc_reg_table_entry->mc_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ni_table[_i0].mc_reg_table_entry->mclk_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ni_table__i0__mc_reg_address0 = 1;
          ni_table[_i0].mc_reg_address = (struct TYPE_5__ *) malloc(_len_ni_table__i0__mc_reg_address0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ni_table__i0__mc_reg_address0; _j0++) {
            ni_table[_i0].mc_reg_address->s1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ni_copy_vbios_mc_reg_table(table,ni_table);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].mc_reg_table_entry);
          }
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].mc_reg_address);
          }
          free(table);
          for(int _aux = 0; _aux < _len_ni_table0; _aux++) {
          free(ni_table[_aux].mc_reg_table_entry);
          }
          for(int _aux = 0; _aux < _len_ni_table0; _aux++) {
          free(ni_table[_aux].mc_reg_address);
          }
          free(ni_table);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_table0 = 65025;
          struct atom_mc_reg_table * table = (struct atom_mc_reg_table *) malloc(_len_table0*sizeof(struct atom_mc_reg_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table__i0__mc_reg_table_entry0 = 1;
          table[_i0].mc_reg_table_entry = (struct TYPE_8__ *) malloc(_len_table__i0__mc_reg_table_entry0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_table__i0__mc_reg_table_entry0; _j0++) {
              int _len_table__i0__mc_reg_table_entry_mc_data0 = 1;
          table[_i0].mc_reg_table_entry->mc_data = (int *) malloc(_len_table__i0__mc_reg_table_entry_mc_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_table__i0__mc_reg_table_entry_mc_data0; _j0++) {
            table[_i0].mc_reg_table_entry->mc_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        table[_i0].mc_reg_table_entry->mclk_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table__i0__mc_reg_address0 = 1;
          table[_i0].mc_reg_address = (struct TYPE_6__ *) malloc(_len_table__i0__mc_reg_address0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_table__i0__mc_reg_address0; _j0++) {
            table[_i0].mc_reg_address->s1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ni_table0 = 65025;
          struct ni_mc_reg_table * ni_table = (struct ni_mc_reg_table *) malloc(_len_ni_table0*sizeof(struct ni_mc_reg_table));
          for(int _i0 = 0; _i0 < _len_ni_table0; _i0++) {
            ni_table[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
        ni_table[_i0].num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ni_table__i0__mc_reg_table_entry0 = 1;
          ni_table[_i0].mc_reg_table_entry = (struct TYPE_7__ *) malloc(_len_ni_table__i0__mc_reg_table_entry0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ni_table__i0__mc_reg_table_entry0; _j0++) {
              int _len_ni_table__i0__mc_reg_table_entry_mc_data0 = 1;
          ni_table[_i0].mc_reg_table_entry->mc_data = (int *) malloc(_len_ni_table__i0__mc_reg_table_entry_mc_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ni_table__i0__mc_reg_table_entry_mc_data0; _j0++) {
            ni_table[_i0].mc_reg_table_entry->mc_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ni_table[_i0].mc_reg_table_entry->mclk_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ni_table__i0__mc_reg_address0 = 1;
          ni_table[_i0].mc_reg_address = (struct TYPE_5__ *) malloc(_len_ni_table__i0__mc_reg_address0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ni_table__i0__mc_reg_address0; _j0++) {
            ni_table[_i0].mc_reg_address->s1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ni_copy_vbios_mc_reg_table(table,ni_table);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].mc_reg_table_entry);
          }
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].mc_reg_address);
          }
          free(table);
          for(int _aux = 0; _aux < _len_ni_table0; _aux++) {
          free(ni_table[_aux].mc_reg_table_entry);
          }
          for(int _aux = 0; _aux < _len_ni_table0; _aux++) {
          free(ni_table[_aux].mc_reg_address);
          }
          free(ni_table);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_table0 = 100;
          struct atom_mc_reg_table * table = (struct atom_mc_reg_table *) malloc(_len_table0*sizeof(struct atom_mc_reg_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table__i0__mc_reg_table_entry0 = 1;
          table[_i0].mc_reg_table_entry = (struct TYPE_8__ *) malloc(_len_table__i0__mc_reg_table_entry0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_table__i0__mc_reg_table_entry0; _j0++) {
              int _len_table__i0__mc_reg_table_entry_mc_data0 = 1;
          table[_i0].mc_reg_table_entry->mc_data = (int *) malloc(_len_table__i0__mc_reg_table_entry_mc_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_table__i0__mc_reg_table_entry_mc_data0; _j0++) {
            table[_i0].mc_reg_table_entry->mc_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        table[_i0].mc_reg_table_entry->mclk_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table__i0__mc_reg_address0 = 1;
          table[_i0].mc_reg_address = (struct TYPE_6__ *) malloc(_len_table__i0__mc_reg_address0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_table__i0__mc_reg_address0; _j0++) {
            table[_i0].mc_reg_address->s1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ni_table0 = 100;
          struct ni_mc_reg_table * ni_table = (struct ni_mc_reg_table *) malloc(_len_ni_table0*sizeof(struct ni_mc_reg_table));
          for(int _i0 = 0; _i0 < _len_ni_table0; _i0++) {
            ni_table[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
        ni_table[_i0].num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ni_table__i0__mc_reg_table_entry0 = 1;
          ni_table[_i0].mc_reg_table_entry = (struct TYPE_7__ *) malloc(_len_ni_table__i0__mc_reg_table_entry0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ni_table__i0__mc_reg_table_entry0; _j0++) {
              int _len_ni_table__i0__mc_reg_table_entry_mc_data0 = 1;
          ni_table[_i0].mc_reg_table_entry->mc_data = (int *) malloc(_len_ni_table__i0__mc_reg_table_entry_mc_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ni_table__i0__mc_reg_table_entry_mc_data0; _j0++) {
            ni_table[_i0].mc_reg_table_entry->mc_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ni_table[_i0].mc_reg_table_entry->mclk_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ni_table__i0__mc_reg_address0 = 1;
          ni_table[_i0].mc_reg_address = (struct TYPE_5__ *) malloc(_len_ni_table__i0__mc_reg_address0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ni_table__i0__mc_reg_address0; _j0++) {
            ni_table[_i0].mc_reg_address->s1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ni_copy_vbios_mc_reg_table(table,ni_table);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].mc_reg_table_entry);
          }
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].mc_reg_address);
          }
          free(table);
          for(int _aux = 0; _aux < _len_ni_table0; _aux++) {
          free(ni_table[_aux].mc_reg_table_entry);
          }
          for(int _aux = 0; _aux < _len_ni_table0; _aux++) {
          free(ni_table[_aux].mc_reg_address);
          }
          free(ni_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
