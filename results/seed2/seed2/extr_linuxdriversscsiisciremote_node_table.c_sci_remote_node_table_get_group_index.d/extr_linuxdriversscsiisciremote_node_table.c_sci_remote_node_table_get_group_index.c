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
typedef  size_t u32 ;
struct sci_remote_node_table {size_t** remote_node_groups; size_t group_array_size; } ;

/* Variables and functions */
 size_t SCIC_SDS_REMOTE_NODE_TABLE_INVALID_INDEX ; 

__attribute__((used)) static u32 sci_remote_node_table_get_group_index(
	struct sci_remote_node_table *remote_node_table,
	u32 group_table_index)
{
	u32 dword_index;
	u32 *group_table;
	u32 bit_index;

	group_table = remote_node_table->remote_node_groups[group_table_index];

	for (dword_index = 0; dword_index < remote_node_table->group_array_size; dword_index++) {
		if (group_table[dword_index] != 0) {
			for (bit_index = 0; bit_index < 32; bit_index++) {
				if ((group_table[dword_index] & (1 << bit_index)) != 0) {
					return (dword_index * 32) + bit_index;
				}
			}
		}
	}

	return SCIC_SDS_REMOTE_NODE_TABLE_INVALID_INDEX;
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
          unsigned long group_table_index = 100;
          int _len_remote_node_table0 = 1;
          struct sci_remote_node_table * remote_node_table = (struct sci_remote_node_table *) malloc(_len_remote_node_table0*sizeof(struct sci_remote_node_table));
          for(int _i0 = 0; _i0 < _len_remote_node_table0; _i0++) {
              int _len_remote_node_table__i0__remote_node_groups0 = 1;
          remote_node_table[_i0].remote_node_groups = (unsigned long **) malloc(_len_remote_node_table__i0__remote_node_groups0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_remote_node_table__i0__remote_node_groups0; _j0++) {
            int _len_remote_node_table__i0__remote_node_groups1 = 1;
            remote_node_table[_i0].remote_node_groups[_j0] = (unsigned long *) malloc(_len_remote_node_table__i0__remote_node_groups1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_remote_node_table__i0__remote_node_groups1; _j1++) {
              remote_node_table[_i0].remote_node_groups[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        remote_node_table[_i0].group_array_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = sci_remote_node_table_get_group_index(remote_node_table,group_table_index);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_remote_node_table0; _aux++) {
          free(*(remote_node_table[_aux].remote_node_groups));
        free(remote_node_table[_aux].remote_node_groups);
          }
          free(remote_node_table);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long group_table_index = 255;
          int _len_remote_node_table0 = 65025;
          struct sci_remote_node_table * remote_node_table = (struct sci_remote_node_table *) malloc(_len_remote_node_table0*sizeof(struct sci_remote_node_table));
          for(int _i0 = 0; _i0 < _len_remote_node_table0; _i0++) {
              int _len_remote_node_table__i0__remote_node_groups0 = 1;
          remote_node_table[_i0].remote_node_groups = (unsigned long **) malloc(_len_remote_node_table__i0__remote_node_groups0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_remote_node_table__i0__remote_node_groups0; _j0++) {
            int _len_remote_node_table__i0__remote_node_groups1 = 1;
            remote_node_table[_i0].remote_node_groups[_j0] = (unsigned long *) malloc(_len_remote_node_table__i0__remote_node_groups1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_remote_node_table__i0__remote_node_groups1; _j1++) {
              remote_node_table[_i0].remote_node_groups[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        remote_node_table[_i0].group_array_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = sci_remote_node_table_get_group_index(remote_node_table,group_table_index);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_remote_node_table0; _aux++) {
          free(*(remote_node_table[_aux].remote_node_groups));
        free(remote_node_table[_aux].remote_node_groups);
          }
          free(remote_node_table);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long group_table_index = 10;
          int _len_remote_node_table0 = 100;
          struct sci_remote_node_table * remote_node_table = (struct sci_remote_node_table *) malloc(_len_remote_node_table0*sizeof(struct sci_remote_node_table));
          for(int _i0 = 0; _i0 < _len_remote_node_table0; _i0++) {
              int _len_remote_node_table__i0__remote_node_groups0 = 1;
          remote_node_table[_i0].remote_node_groups = (unsigned long **) malloc(_len_remote_node_table__i0__remote_node_groups0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_remote_node_table__i0__remote_node_groups0; _j0++) {
            int _len_remote_node_table__i0__remote_node_groups1 = 1;
            remote_node_table[_i0].remote_node_groups[_j0] = (unsigned long *) malloc(_len_remote_node_table__i0__remote_node_groups1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_remote_node_table__i0__remote_node_groups1; _j1++) {
              remote_node_table[_i0].remote_node_groups[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        remote_node_table[_i0].group_array_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = sci_remote_node_table_get_group_index(remote_node_table,group_table_index);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_remote_node_table0; _aux++) {
          free(*(remote_node_table[_aux].remote_node_groups));
        free(remote_node_table[_aux].remote_node_groups);
          }
          free(remote_node_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
