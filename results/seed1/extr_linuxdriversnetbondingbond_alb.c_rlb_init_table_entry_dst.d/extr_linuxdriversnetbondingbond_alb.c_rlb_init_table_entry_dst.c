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
struct rlb_client_info {scalar_t__ vlan_id; int /*<<< orphan*/ * slave; scalar_t__ assigned; void* used_prev; void* used_next; } ;

/* Variables and functions */
 void* RLB_NULL_INDEX ; 

__attribute__((used)) static void rlb_init_table_entry_dst(struct rlb_client_info *entry)
{
	entry->used_next = RLB_NULL_INDEX;
	entry->used_prev = RLB_NULL_INDEX;
	entry->assigned = 0;
	entry->slave = NULL;
	entry->vlan_id = 0;
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
          int _len_entry0 = 1;
          struct rlb_client_info * entry = (struct rlb_client_info *) malloc(_len_entry0*sizeof(struct rlb_client_info));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].vlan_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_entry__i0__slave0 = 1;
          entry[_i0].slave = (int *) malloc(_len_entry__i0__slave0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_entry__i0__slave0; _j0++) {
            entry[_i0].slave[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        entry[_i0].assigned = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rlb_init_table_entry_dst(entry);
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].slave);
          }
          free(entry);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_entry0 = 65025;
          struct rlb_client_info * entry = (struct rlb_client_info *) malloc(_len_entry0*sizeof(struct rlb_client_info));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].vlan_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_entry__i0__slave0 = 1;
          entry[_i0].slave = (int *) malloc(_len_entry__i0__slave0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_entry__i0__slave0; _j0++) {
            entry[_i0].slave[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        entry[_i0].assigned = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rlb_init_table_entry_dst(entry);
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].slave);
          }
          free(entry);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_entry0 = 100;
          struct rlb_client_info * entry = (struct rlb_client_info *) malloc(_len_entry0*sizeof(struct rlb_client_info));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].vlan_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_entry__i0__slave0 = 1;
          entry[_i0].slave = (int *) malloc(_len_entry__i0__slave0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_entry__i0__slave0; _j0++) {
            entry[_i0].slave[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        entry[_i0].assigned = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rlb_init_table_entry_dst(entry);
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].slave);
          }
          free(entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
