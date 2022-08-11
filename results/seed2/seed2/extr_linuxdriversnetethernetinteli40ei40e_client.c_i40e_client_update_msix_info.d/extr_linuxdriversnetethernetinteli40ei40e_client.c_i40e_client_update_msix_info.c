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
struct i40e_pf {size_t iwarp_base_vector; int /*<<< orphan*/ * msix_entries; int /*<<< orphan*/  num_iwarp_msix; struct i40e_client_instance* cinst; } ;
struct TYPE_2__ {int /*<<< orphan*/ * msix_entries; int /*<<< orphan*/  msix_count; } ;
struct i40e_client_instance {TYPE_1__ lan_info; int /*<<< orphan*/  client; } ;

/* Variables and functions */

void i40e_client_update_msix_info(struct i40e_pf *pf)
{
	struct i40e_client_instance *cdev = pf->cinst;

	if (!cdev || !cdev->client)
		return;

	cdev->lan_info.msix_count = pf->num_iwarp_msix;
	cdev->lan_info.msix_entries = &pf->msix_entries[pf->iwarp_base_vector];
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
          int _len_pf0 = 1;
          struct i40e_pf * pf = (struct i40e_pf *) malloc(_len_pf0*sizeof(struct i40e_pf));
          for(int _i0 = 0; _i0 < _len_pf0; _i0++) {
            pf[_i0].iwarp_base_vector = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pf__i0__msix_entries0 = 1;
          pf[_i0].msix_entries = (int *) malloc(_len_pf__i0__msix_entries0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__msix_entries0; _j0++) {
            pf[_i0].msix_entries[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pf[_i0].num_iwarp_msix = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pf__i0__cinst0 = 1;
          pf[_i0].cinst = (struct i40e_client_instance *) malloc(_len_pf__i0__cinst0*sizeof(struct i40e_client_instance));
          for(int _j0 = 0; _j0 < _len_pf__i0__cinst0; _j0++) {
              int _len_pf__i0__cinst_lan_info_msix_entries0 = 1;
          pf[_i0].cinst->lan_info.msix_entries = (int *) malloc(_len_pf__i0__cinst_lan_info_msix_entries0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__cinst_lan_info_msix_entries0; _j0++) {
            pf[_i0].cinst->lan_info.msix_entries[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pf[_i0].cinst->lan_info.msix_count = ((-2 * (next_i()%2)) + 1) * next_i();
        pf[_i0].cinst->client = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          i40e_client_update_msix_info(pf);
          for(int _aux = 0; _aux < _len_pf0; _aux++) {
          free(pf[_aux].msix_entries);
          }
          for(int _aux = 0; _aux < _len_pf0; _aux++) {
          free(pf[_aux].cinst);
          }
          free(pf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pf0 = 65025;
          struct i40e_pf * pf = (struct i40e_pf *) malloc(_len_pf0*sizeof(struct i40e_pf));
          for(int _i0 = 0; _i0 < _len_pf0; _i0++) {
            pf[_i0].iwarp_base_vector = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pf__i0__msix_entries0 = 1;
          pf[_i0].msix_entries = (int *) malloc(_len_pf__i0__msix_entries0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__msix_entries0; _j0++) {
            pf[_i0].msix_entries[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pf[_i0].num_iwarp_msix = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pf__i0__cinst0 = 1;
          pf[_i0].cinst = (struct i40e_client_instance *) malloc(_len_pf__i0__cinst0*sizeof(struct i40e_client_instance));
          for(int _j0 = 0; _j0 < _len_pf__i0__cinst0; _j0++) {
              int _len_pf__i0__cinst_lan_info_msix_entries0 = 1;
          pf[_i0].cinst->lan_info.msix_entries = (int *) malloc(_len_pf__i0__cinst_lan_info_msix_entries0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__cinst_lan_info_msix_entries0; _j0++) {
            pf[_i0].cinst->lan_info.msix_entries[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pf[_i0].cinst->lan_info.msix_count = ((-2 * (next_i()%2)) + 1) * next_i();
        pf[_i0].cinst->client = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          i40e_client_update_msix_info(pf);
          for(int _aux = 0; _aux < _len_pf0; _aux++) {
          free(pf[_aux].msix_entries);
          }
          for(int _aux = 0; _aux < _len_pf0; _aux++) {
          free(pf[_aux].cinst);
          }
          free(pf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pf0 = 100;
          struct i40e_pf * pf = (struct i40e_pf *) malloc(_len_pf0*sizeof(struct i40e_pf));
          for(int _i0 = 0; _i0 < _len_pf0; _i0++) {
            pf[_i0].iwarp_base_vector = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pf__i0__msix_entries0 = 1;
          pf[_i0].msix_entries = (int *) malloc(_len_pf__i0__msix_entries0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__msix_entries0; _j0++) {
            pf[_i0].msix_entries[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pf[_i0].num_iwarp_msix = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pf__i0__cinst0 = 1;
          pf[_i0].cinst = (struct i40e_client_instance *) malloc(_len_pf__i0__cinst0*sizeof(struct i40e_client_instance));
          for(int _j0 = 0; _j0 < _len_pf__i0__cinst0; _j0++) {
              int _len_pf__i0__cinst_lan_info_msix_entries0 = 1;
          pf[_i0].cinst->lan_info.msix_entries = (int *) malloc(_len_pf__i0__cinst_lan_info_msix_entries0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__cinst_lan_info_msix_entries0; _j0++) {
            pf[_i0].cinst->lan_info.msix_entries[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pf[_i0].cinst->lan_info.msix_count = ((-2 * (next_i()%2)) + 1) * next_i();
        pf[_i0].cinst->client = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          i40e_client_update_msix_info(pf);
          for(int _aux = 0; _aux < _len_pf0; _aux++) {
          free(pf[_aux].msix_entries);
          }
          for(int _aux = 0; _aux < _len_pf0; _aux++) {
          free(pf[_aux].cinst);
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
