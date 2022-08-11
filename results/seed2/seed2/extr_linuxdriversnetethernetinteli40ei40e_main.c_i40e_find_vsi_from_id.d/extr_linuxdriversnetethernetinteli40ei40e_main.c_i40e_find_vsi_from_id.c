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
typedef  scalar_t__ u16 ;
struct i40e_vsi {scalar_t__ id; } ;
struct i40e_pf {int num_alloc_vsi; struct i40e_vsi** vsi; } ;

/* Variables and functions */

struct i40e_vsi *i40e_find_vsi_from_id(struct i40e_pf *pf, u16 id)
{
	int i;

	for (i = 0; i < pf->num_alloc_vsi; i++)
		if (pf->vsi[i] && (pf->vsi[i]->id == id))
			return pf->vsi[i];

	return NULL;
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
          long id = 100;
          int _len_pf0 = 1;
          struct i40e_pf * pf = (struct i40e_pf *) malloc(_len_pf0*sizeof(struct i40e_pf));
          for(int _i0 = 0; _i0 < _len_pf0; _i0++) {
            pf[_i0].num_alloc_vsi = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pf__i0__vsi0 = 1;
          pf[_i0].vsi = (struct i40e_vsi **) malloc(_len_pf__i0__vsi0*sizeof(struct i40e_vsi *));
          for(int _j0 = 0; _j0 < _len_pf__i0__vsi0; _j0++) {
            int _len_pf__i0__vsi1 = 1;
            pf[_i0].vsi[_j0] = (struct i40e_vsi *) malloc(_len_pf__i0__vsi1*sizeof(struct i40e_vsi));
            for(int _j1 = 0; _j1 < _len_pf__i0__vsi1; _j1++) {
              pf[_i0].vsi[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct i40e_vsi * benchRet = i40e_find_vsi_from_id(pf,id);
          printf("%ld\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_pf0; _aux++) {
          free(*(pf[_aux].vsi));
        free(pf[_aux].vsi);
          }
          free(pf);
        
        break;
    }
    // big-arr
    case 1:
    {
          long id = 255;
          int _len_pf0 = 65025;
          struct i40e_pf * pf = (struct i40e_pf *) malloc(_len_pf0*sizeof(struct i40e_pf));
          for(int _i0 = 0; _i0 < _len_pf0; _i0++) {
            pf[_i0].num_alloc_vsi = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pf__i0__vsi0 = 1;
          pf[_i0].vsi = (struct i40e_vsi **) malloc(_len_pf__i0__vsi0*sizeof(struct i40e_vsi *));
          for(int _j0 = 0; _j0 < _len_pf__i0__vsi0; _j0++) {
            int _len_pf__i0__vsi1 = 1;
            pf[_i0].vsi[_j0] = (struct i40e_vsi *) malloc(_len_pf__i0__vsi1*sizeof(struct i40e_vsi));
            for(int _j1 = 0; _j1 < _len_pf__i0__vsi1; _j1++) {
              pf[_i0].vsi[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct i40e_vsi * benchRet = i40e_find_vsi_from_id(pf,id);
          printf("%ld\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_pf0; _aux++) {
          free(*(pf[_aux].vsi));
        free(pf[_aux].vsi);
          }
          free(pf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long id = 10;
          int _len_pf0 = 100;
          struct i40e_pf * pf = (struct i40e_pf *) malloc(_len_pf0*sizeof(struct i40e_pf));
          for(int _i0 = 0; _i0 < _len_pf0; _i0++) {
            pf[_i0].num_alloc_vsi = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pf__i0__vsi0 = 1;
          pf[_i0].vsi = (struct i40e_vsi **) malloc(_len_pf__i0__vsi0*sizeof(struct i40e_vsi *));
          for(int _j0 = 0; _j0 < _len_pf__i0__vsi0; _j0++) {
            int _len_pf__i0__vsi1 = 1;
            pf[_i0].vsi[_j0] = (struct i40e_vsi *) malloc(_len_pf__i0__vsi1*sizeof(struct i40e_vsi));
            for(int _j1 = 0; _j1 < _len_pf__i0__vsi1; _j1++) {
              pf[_i0].vsi[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct i40e_vsi * benchRet = i40e_find_vsi_from_id(pf,id);
          printf("%ld\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_pf0; _aux++) {
          free(*(pf[_aux].vsi));
        free(pf[_aux].vsi);
          }
          free(pf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
