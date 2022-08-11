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
typedef  unsigned int u32 ;
struct ef4_nic {struct ef4_farch_filter_state* filter_state; } ;
struct ef4_farch_filter_state {TYPE_1__* table; } ;
typedef  enum ef4_farch_filter_table_id { ____Placeholder_ef4_farch_filter_table_id } ef4_farch_filter_table_id ;
struct TYPE_2__ {unsigned int size; } ;

/* Variables and functions */
 unsigned int EF4_FARCH_FILTER_INDEX_WIDTH ; 
 int EF4_FARCH_FILTER_MATCH_PRI_COUNT ; 
 int* ef4_farch_filter_range_table ; 

u32 ef4_farch_filter_get_rx_id_limit(struct ef4_nic *efx)
{
	struct ef4_farch_filter_state *state = efx->filter_state;
	unsigned int range = EF4_FARCH_FILTER_MATCH_PRI_COUNT - 1;
	enum ef4_farch_filter_table_id table_id;

	do {
		table_id = ef4_farch_filter_range_table[range];
		if (state->table[table_id].size != 0)
			return range << EF4_FARCH_FILTER_INDEX_WIDTH |
				state->table[table_id].size;
	} while (range--);

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
          int _len_efx0 = 1;
          struct ef4_nic * efx = (struct ef4_nic *) malloc(_len_efx0*sizeof(struct ef4_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
              int _len_efx__i0__filter_state0 = 1;
          efx[_i0].filter_state = (struct ef4_farch_filter_state *) malloc(_len_efx__i0__filter_state0*sizeof(struct ef4_farch_filter_state));
          for(int _j0 = 0; _j0 < _len_efx__i0__filter_state0; _j0++) {
              int _len_efx__i0__filter_state_table0 = 1;
          efx[_i0].filter_state->table = (struct TYPE_2__ *) malloc(_len_efx__i0__filter_state_table0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_efx__i0__filter_state_table0; _j0++) {
            efx[_i0].filter_state->table->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned int benchRet = ef4_farch_filter_get_rx_id_limit(efx);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_efx0; _aux++) {
          free(efx[_aux].filter_state);
          }
          free(efx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_efx0 = 65025;
          struct ef4_nic * efx = (struct ef4_nic *) malloc(_len_efx0*sizeof(struct ef4_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
              int _len_efx__i0__filter_state0 = 1;
          efx[_i0].filter_state = (struct ef4_farch_filter_state *) malloc(_len_efx__i0__filter_state0*sizeof(struct ef4_farch_filter_state));
          for(int _j0 = 0; _j0 < _len_efx__i0__filter_state0; _j0++) {
              int _len_efx__i0__filter_state_table0 = 1;
          efx[_i0].filter_state->table = (struct TYPE_2__ *) malloc(_len_efx__i0__filter_state_table0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_efx__i0__filter_state_table0; _j0++) {
            efx[_i0].filter_state->table->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned int benchRet = ef4_farch_filter_get_rx_id_limit(efx);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_efx0; _aux++) {
          free(efx[_aux].filter_state);
          }
          free(efx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_efx0 = 100;
          struct ef4_nic * efx = (struct ef4_nic *) malloc(_len_efx0*sizeof(struct ef4_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
              int _len_efx__i0__filter_state0 = 1;
          efx[_i0].filter_state = (struct ef4_farch_filter_state *) malloc(_len_efx__i0__filter_state0*sizeof(struct ef4_farch_filter_state));
          for(int _j0 = 0; _j0 < _len_efx__i0__filter_state0; _j0++) {
              int _len_efx__i0__filter_state_table0 = 1;
          efx[_i0].filter_state->table = (struct TYPE_2__ *) malloc(_len_efx__i0__filter_state_table0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_efx__i0__filter_state_table0; _j0++) {
            efx[_i0].filter_state->table->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned int benchRet = ef4_farch_filter_get_rx_id_limit(efx);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_efx0; _aux++) {
          free(efx[_aux].filter_state);
          }
          free(efx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
