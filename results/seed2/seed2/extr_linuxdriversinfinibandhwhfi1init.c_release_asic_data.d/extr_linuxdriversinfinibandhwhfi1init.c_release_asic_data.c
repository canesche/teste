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
struct hfi1_devdata {size_t hfi1_id; struct hfi1_asic_data* asic_data; } ;
struct hfi1_asic_data {int /*<<< orphan*/ ** dds; } ;

/* Variables and functions */

__attribute__((used)) static struct hfi1_asic_data *release_asic_data(struct hfi1_devdata *dd)
{
	struct hfi1_asic_data *ad;
	int other;

	if (!dd->asic_data)
		return NULL;
	dd->asic_data->dds[dd->hfi1_id] = NULL;
	other = dd->hfi1_id ? 0 : 1;
	ad = dd->asic_data;
	dd->asic_data = NULL;
	/* return NULL if the other dd still has a link */
	return ad->dds[other] ? NULL : ad;
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
          int _len_dd0 = 1;
          struct hfi1_devdata * dd = (struct hfi1_devdata *) malloc(_len_dd0*sizeof(struct hfi1_devdata));
          for(int _i0 = 0; _i0 < _len_dd0; _i0++) {
            dd[_i0].hfi1_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dd__i0__asic_data0 = 1;
          dd[_i0].asic_data = (struct hfi1_asic_data *) malloc(_len_dd__i0__asic_data0*sizeof(struct hfi1_asic_data));
          for(int _j0 = 0; _j0 < _len_dd__i0__asic_data0; _j0++) {
              int _len_dd__i0__asic_data_dds0 = 1;
          dd[_i0].asic_data->dds = (int **) malloc(_len_dd__i0__asic_data_dds0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_dd__i0__asic_data_dds0; _j0++) {
            int _len_dd__i0__asic_data_dds1 = 1;
            dd[_i0].asic_data->dds[_j0] = (int *) malloc(_len_dd__i0__asic_data_dds1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_dd__i0__asic_data_dds1; _j1++) {
              dd[_i0].asic_data->dds[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct hfi1_asic_data * benchRet = release_asic_data(dd);
          for(int _aux = 0; _aux < _len_dd0; _aux++) {
          free(dd[_aux].asic_data);
          }
          free(dd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dd0 = 65025;
          struct hfi1_devdata * dd = (struct hfi1_devdata *) malloc(_len_dd0*sizeof(struct hfi1_devdata));
          for(int _i0 = 0; _i0 < _len_dd0; _i0++) {
            dd[_i0].hfi1_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dd__i0__asic_data0 = 1;
          dd[_i0].asic_data = (struct hfi1_asic_data *) malloc(_len_dd__i0__asic_data0*sizeof(struct hfi1_asic_data));
          for(int _j0 = 0; _j0 < _len_dd__i0__asic_data0; _j0++) {
              int _len_dd__i0__asic_data_dds0 = 1;
          dd[_i0].asic_data->dds = (int **) malloc(_len_dd__i0__asic_data_dds0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_dd__i0__asic_data_dds0; _j0++) {
            int _len_dd__i0__asic_data_dds1 = 1;
            dd[_i0].asic_data->dds[_j0] = (int *) malloc(_len_dd__i0__asic_data_dds1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_dd__i0__asic_data_dds1; _j1++) {
              dd[_i0].asic_data->dds[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct hfi1_asic_data * benchRet = release_asic_data(dd);
          for(int _aux = 0; _aux < _len_dd0; _aux++) {
          free(dd[_aux].asic_data);
          }
          free(dd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dd0 = 100;
          struct hfi1_devdata * dd = (struct hfi1_devdata *) malloc(_len_dd0*sizeof(struct hfi1_devdata));
          for(int _i0 = 0; _i0 < _len_dd0; _i0++) {
            dd[_i0].hfi1_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dd__i0__asic_data0 = 1;
          dd[_i0].asic_data = (struct hfi1_asic_data *) malloc(_len_dd__i0__asic_data0*sizeof(struct hfi1_asic_data));
          for(int _j0 = 0; _j0 < _len_dd__i0__asic_data0; _j0++) {
              int _len_dd__i0__asic_data_dds0 = 1;
          dd[_i0].asic_data->dds = (int **) malloc(_len_dd__i0__asic_data_dds0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_dd__i0__asic_data_dds0; _j0++) {
            int _len_dd__i0__asic_data_dds1 = 1;
            dd[_i0].asic_data->dds[_j0] = (int *) malloc(_len_dd__i0__asic_data_dds1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_dd__i0__asic_data_dds1; _j1++) {
              dd[_i0].asic_data->dds[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct hfi1_asic_data * benchRet = release_asic_data(dd);
          for(int _aux = 0; _aux < _len_dd0; _aux++) {
          free(dd[_aux].asic_data);
          }
          free(dd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
