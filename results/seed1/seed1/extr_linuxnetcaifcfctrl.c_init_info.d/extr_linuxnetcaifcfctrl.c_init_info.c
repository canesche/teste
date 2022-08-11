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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  id; } ;
struct TYPE_4__ {int /*<<< orphan*/  dev_info; TYPE_1__ layer; } ;
struct cfctrl {TYPE_2__ serv; } ;
struct caif_payload_info {int /*<<< orphan*/ * dev_info; int /*<<< orphan*/  channel_id; scalar_t__ hdr_len; } ;

/* Variables and functions */

__attribute__((used)) static void init_info(struct caif_payload_info *info, struct cfctrl *cfctrl)
{
	info->hdr_len = 0;
	info->channel_id = cfctrl->serv.layer.id;
	info->dev_info = &cfctrl->serv.dev_info;
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
          int _len_info0 = 1;
          struct caif_payload_info * info = (struct caif_payload_info *) malloc(_len_info0*sizeof(struct caif_payload_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__dev_info0 = 1;
          info[_i0].dev_info = (int *) malloc(_len_info__i0__dev_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__dev_info0; _j0++) {
            info[_i0].dev_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        info[_i0].channel_id = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].hdr_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfctrl0 = 1;
          struct cfctrl * cfctrl = (struct cfctrl *) malloc(_len_cfctrl0*sizeof(struct cfctrl));
          for(int _i0 = 0; _i0 < _len_cfctrl0; _i0++) {
            cfctrl[_i0].serv.dev_info = ((-2 * (next_i()%2)) + 1) * next_i();
        cfctrl[_i0].serv.layer.id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_info(info,cfctrl);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].dev_info);
          }
          free(info);
          free(cfctrl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_info0 = 65025;
          struct caif_payload_info * info = (struct caif_payload_info *) malloc(_len_info0*sizeof(struct caif_payload_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__dev_info0 = 1;
          info[_i0].dev_info = (int *) malloc(_len_info__i0__dev_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__dev_info0; _j0++) {
            info[_i0].dev_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        info[_i0].channel_id = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].hdr_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfctrl0 = 65025;
          struct cfctrl * cfctrl = (struct cfctrl *) malloc(_len_cfctrl0*sizeof(struct cfctrl));
          for(int _i0 = 0; _i0 < _len_cfctrl0; _i0++) {
            cfctrl[_i0].serv.dev_info = ((-2 * (next_i()%2)) + 1) * next_i();
        cfctrl[_i0].serv.layer.id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_info(info,cfctrl);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].dev_info);
          }
          free(info);
          free(cfctrl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_info0 = 100;
          struct caif_payload_info * info = (struct caif_payload_info *) malloc(_len_info0*sizeof(struct caif_payload_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__dev_info0 = 1;
          info[_i0].dev_info = (int *) malloc(_len_info__i0__dev_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__dev_info0; _j0++) {
            info[_i0].dev_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        info[_i0].channel_id = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].hdr_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfctrl0 = 100;
          struct cfctrl * cfctrl = (struct cfctrl *) malloc(_len_cfctrl0*sizeof(struct cfctrl));
          for(int _i0 = 0; _i0 < _len_cfctrl0; _i0++) {
            cfctrl[_i0].serv.dev_info = ((-2 * (next_i()%2)) + 1) * next_i();
        cfctrl[_i0].serv.layer.id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_info(info,cfctrl);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].dev_info);
          }
          free(info);
          free(cfctrl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
