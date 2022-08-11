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
struct tps62360_chip {int* lru_index; int* curr_vset_vsel; } ;

/* Variables and functions */

__attribute__((used)) static bool find_voltage_set_register(struct tps62360_chip *tps,
		int req_vsel, int *vset_reg_id)
{
	int i;
	bool found = false;
	int new_vset_reg = tps->lru_index[3];
	int found_index = 3;

	for (i = 0; i < 4; ++i) {
		if (tps->curr_vset_vsel[tps->lru_index[i]] == req_vsel) {
			new_vset_reg = tps->lru_index[i];
			found_index = i;
			found = true;
			goto update_lru_index;
		}
	}

update_lru_index:
	for (i = found_index; i > 0; i--)
		tps->lru_index[i] = tps->lru_index[i - 1];

	tps->lru_index[0] = new_vset_reg;
	*vset_reg_id = new_vset_reg;
	return found;
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
          int req_vsel = 100;
          int _len_tps0 = 1;
          struct tps62360_chip * tps = (struct tps62360_chip *) malloc(_len_tps0*sizeof(struct tps62360_chip));
          for(int _i0 = 0; _i0 < _len_tps0; _i0++) {
              int _len_tps__i0__lru_index0 = 1;
          tps[_i0].lru_index = (int *) malloc(_len_tps__i0__lru_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tps__i0__lru_index0; _j0++) {
            tps[_i0].lru_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tps__i0__curr_vset_vsel0 = 1;
          tps[_i0].curr_vset_vsel = (int *) malloc(_len_tps__i0__curr_vset_vsel0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tps__i0__curr_vset_vsel0; _j0++) {
            tps[_i0].curr_vset_vsel[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vset_reg_id0 = 1;
          int * vset_reg_id = (int *) malloc(_len_vset_reg_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vset_reg_id0; _i0++) {
            vset_reg_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_voltage_set_register(tps,req_vsel,vset_reg_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tps0; _aux++) {
          free(tps[_aux].lru_index);
          }
          for(int _aux = 0; _aux < _len_tps0; _aux++) {
          free(tps[_aux].curr_vset_vsel);
          }
          free(tps);
          free(vset_reg_id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int req_vsel = 255;
          int _len_tps0 = 65025;
          struct tps62360_chip * tps = (struct tps62360_chip *) malloc(_len_tps0*sizeof(struct tps62360_chip));
          for(int _i0 = 0; _i0 < _len_tps0; _i0++) {
              int _len_tps__i0__lru_index0 = 1;
          tps[_i0].lru_index = (int *) malloc(_len_tps__i0__lru_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tps__i0__lru_index0; _j0++) {
            tps[_i0].lru_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tps__i0__curr_vset_vsel0 = 1;
          tps[_i0].curr_vset_vsel = (int *) malloc(_len_tps__i0__curr_vset_vsel0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tps__i0__curr_vset_vsel0; _j0++) {
            tps[_i0].curr_vset_vsel[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vset_reg_id0 = 65025;
          int * vset_reg_id = (int *) malloc(_len_vset_reg_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vset_reg_id0; _i0++) {
            vset_reg_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_voltage_set_register(tps,req_vsel,vset_reg_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tps0; _aux++) {
          free(tps[_aux].lru_index);
          }
          for(int _aux = 0; _aux < _len_tps0; _aux++) {
          free(tps[_aux].curr_vset_vsel);
          }
          free(tps);
          free(vset_reg_id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int req_vsel = 10;
          int _len_tps0 = 100;
          struct tps62360_chip * tps = (struct tps62360_chip *) malloc(_len_tps0*sizeof(struct tps62360_chip));
          for(int _i0 = 0; _i0 < _len_tps0; _i0++) {
              int _len_tps__i0__lru_index0 = 1;
          tps[_i0].lru_index = (int *) malloc(_len_tps__i0__lru_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tps__i0__lru_index0; _j0++) {
            tps[_i0].lru_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tps__i0__curr_vset_vsel0 = 1;
          tps[_i0].curr_vset_vsel = (int *) malloc(_len_tps__i0__curr_vset_vsel0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tps__i0__curr_vset_vsel0; _j0++) {
            tps[_i0].curr_vset_vsel[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vset_reg_id0 = 100;
          int * vset_reg_id = (int *) malloc(_len_vset_reg_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vset_reg_id0; _i0++) {
            vset_reg_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_voltage_set_register(tps,req_vsel,vset_reg_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tps0; _aux++) {
          free(tps[_aux].lru_index);
          }
          for(int _aux = 0; _aux < _len_tps0; _aux++) {
          free(tps[_aux].curr_vset_vsel);
          }
          free(tps);
          free(vset_reg_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
