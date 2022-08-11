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
typedef  struct TYPE_15__   TYPE_6__ ;
typedef  struct TYPE_14__   TYPE_5__ ;
typedef  struct TYPE_13__   TYPE_4__ ;
typedef  struct TYPE_12__   TYPE_3__ ;
typedef  struct TYPE_11__   TYPE_2__ ;
typedef  struct TYPE_10__   TYPE_1__ ;

/* Type definitions */
struct TYPE_12__ {int /*<<< orphan*/ * pdrv_state; } ;
struct TYPE_11__ {int /*<<< orphan*/ * ldrv_state; int /*<<< orphan*/ * ldrv_prop; int /*<<< orphan*/ * ldrv_size; int /*<<< orphan*/  num_ldrv; } ;
struct TYPE_10__ {int /*<<< orphan*/  dram_size; int /*<<< orphan*/  cache_flush_interval; int /*<<< orphan*/ * bios_version; int /*<<< orphan*/ * fw_version; int /*<<< orphan*/  nchannels; int /*<<< orphan*/  rebuild_rate; int /*<<< orphan*/  max_commands; } ;
struct TYPE_13__ {TYPE_3__ pdrv_info; TYPE_2__ logdrv_info; TYPE_1__ adapter_info; } ;
typedef  TYPE_4__ mraid_inquiry ;
struct TYPE_14__ {int /*<<< orphan*/  dram_size; int /*<<< orphan*/ * bios_version; int /*<<< orphan*/ * fw_version; int /*<<< orphan*/  nchannels; int /*<<< orphan*/  max_commands; } ;
typedef  TYPE_5__ mega_product_info ;
struct TYPE_15__ {int /*<<< orphan*/ * pdrv_state; int /*<<< orphan*/ * ldrv_state; int /*<<< orphan*/ * ldrv_prop; int /*<<< orphan*/ * ldrv_size; int /*<<< orphan*/  num_ldrv; int /*<<< orphan*/  cache_flush_interval; int /*<<< orphan*/  rebuild_rate; } ;
typedef  TYPE_6__ mega_inquiry3 ;

/* Variables and functions */
 int MAX_LOGICAL_DRIVES_8LD ; 
 int MAX_PHYSICAL_DRIVES ; 

__attribute__((used)) static void
mega_8_to_40ld(mraid_inquiry *inquiry, mega_inquiry3 *enquiry3,
		mega_product_info *product_info)
{
	int i;

	product_info->max_commands = inquiry->adapter_info.max_commands;
	enquiry3->rebuild_rate = inquiry->adapter_info.rebuild_rate;
	product_info->nchannels = inquiry->adapter_info.nchannels;

	for (i = 0; i < 4; i++) {
		product_info->fw_version[i] =
			inquiry->adapter_info.fw_version[i];

		product_info->bios_version[i] =
			inquiry->adapter_info.bios_version[i];
	}
	enquiry3->cache_flush_interval =
		inquiry->adapter_info.cache_flush_interval;

	product_info->dram_size = inquiry->adapter_info.dram_size;

	enquiry3->num_ldrv = inquiry->logdrv_info.num_ldrv;

	for (i = 0; i < MAX_LOGICAL_DRIVES_8LD; i++) {
		enquiry3->ldrv_size[i] = inquiry->logdrv_info.ldrv_size[i];
		enquiry3->ldrv_prop[i] = inquiry->logdrv_info.ldrv_prop[i];
		enquiry3->ldrv_state[i] = inquiry->logdrv_info.ldrv_state[i];
	}

	for (i = 0; i < (MAX_PHYSICAL_DRIVES); i++)
		enquiry3->pdrv_state[i] = inquiry->pdrv_info.pdrv_state[i];
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
          int _len_inquiry0 = 1;
          struct TYPE_13__ * inquiry = (struct TYPE_13__ *) malloc(_len_inquiry0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_inquiry0; _i0++) {
              int _len_inquiry__i0__pdrv_info_pdrv_state0 = 1;
          inquiry[_i0].pdrv_info.pdrv_state = (int *) malloc(_len_inquiry__i0__pdrv_info_pdrv_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__pdrv_info_pdrv_state0; _j0++) {
            inquiry[_i0].pdrv_info.pdrv_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inquiry__i0__logdrv_info_ldrv_state0 = 1;
          inquiry[_i0].logdrv_info.ldrv_state = (int *) malloc(_len_inquiry__i0__logdrv_info_ldrv_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__logdrv_info_ldrv_state0; _j0++) {
            inquiry[_i0].logdrv_info.ldrv_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inquiry__i0__logdrv_info_ldrv_prop0 = 1;
          inquiry[_i0].logdrv_info.ldrv_prop = (int *) malloc(_len_inquiry__i0__logdrv_info_ldrv_prop0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__logdrv_info_ldrv_prop0; _j0++) {
            inquiry[_i0].logdrv_info.ldrv_prop[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inquiry__i0__logdrv_info_ldrv_size0 = 1;
          inquiry[_i0].logdrv_info.ldrv_size = (int *) malloc(_len_inquiry__i0__logdrv_info_ldrv_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__logdrv_info_ldrv_size0; _j0++) {
            inquiry[_i0].logdrv_info.ldrv_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        inquiry[_i0].logdrv_info.num_ldrv = ((-2 * (next_i()%2)) + 1) * next_i();
        inquiry[_i0].adapter_info.dram_size = ((-2 * (next_i()%2)) + 1) * next_i();
        inquiry[_i0].adapter_info.cache_flush_interval = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inquiry__i0__adapter_info_bios_version0 = 1;
          inquiry[_i0].adapter_info.bios_version = (int *) malloc(_len_inquiry__i0__adapter_info_bios_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__adapter_info_bios_version0; _j0++) {
            inquiry[_i0].adapter_info.bios_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inquiry__i0__adapter_info_fw_version0 = 1;
          inquiry[_i0].adapter_info.fw_version = (int *) malloc(_len_inquiry__i0__adapter_info_fw_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__adapter_info_fw_version0; _j0++) {
            inquiry[_i0].adapter_info.fw_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        inquiry[_i0].adapter_info.nchannels = ((-2 * (next_i()%2)) + 1) * next_i();
        inquiry[_i0].adapter_info.rebuild_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        inquiry[_i0].adapter_info.max_commands = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enquiry30 = 1;
          struct TYPE_15__ * enquiry3 = (struct TYPE_15__ *) malloc(_len_enquiry30*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_enquiry30; _i0++) {
              int _len_enquiry3__i0__pdrv_state0 = 1;
          enquiry3[_i0].pdrv_state = (int *) malloc(_len_enquiry3__i0__pdrv_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enquiry3__i0__pdrv_state0; _j0++) {
            enquiry3[_i0].pdrv_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enquiry3__i0__ldrv_state0 = 1;
          enquiry3[_i0].ldrv_state = (int *) malloc(_len_enquiry3__i0__ldrv_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enquiry3__i0__ldrv_state0; _j0++) {
            enquiry3[_i0].ldrv_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enquiry3__i0__ldrv_prop0 = 1;
          enquiry3[_i0].ldrv_prop = (int *) malloc(_len_enquiry3__i0__ldrv_prop0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enquiry3__i0__ldrv_prop0; _j0++) {
            enquiry3[_i0].ldrv_prop[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enquiry3__i0__ldrv_size0 = 1;
          enquiry3[_i0].ldrv_size = (int *) malloc(_len_enquiry3__i0__ldrv_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enquiry3__i0__ldrv_size0; _j0++) {
            enquiry3[_i0].ldrv_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        enquiry3[_i0].num_ldrv = ((-2 * (next_i()%2)) + 1) * next_i();
        enquiry3[_i0].cache_flush_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        enquiry3[_i0].rebuild_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_product_info0 = 1;
          struct TYPE_14__ * product_info = (struct TYPE_14__ *) malloc(_len_product_info0*sizeof(struct TYPE_14__));
          for(int _i0 = 0; _i0 < _len_product_info0; _i0++) {
            product_info[_i0].dram_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_product_info__i0__bios_version0 = 1;
          product_info[_i0].bios_version = (int *) malloc(_len_product_info__i0__bios_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_product_info__i0__bios_version0; _j0++) {
            product_info[_i0].bios_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_product_info__i0__fw_version0 = 1;
          product_info[_i0].fw_version = (int *) malloc(_len_product_info__i0__fw_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_product_info__i0__fw_version0; _j0++) {
            product_info[_i0].fw_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        product_info[_i0].nchannels = ((-2 * (next_i()%2)) + 1) * next_i();
        product_info[_i0].max_commands = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mega_8_to_40ld(inquiry,enquiry3,product_info);
          free(inquiry);
          for(int _aux = 0; _aux < _len_enquiry30; _aux++) {
          free(enquiry3[_aux].pdrv_state);
          }
          for(int _aux = 0; _aux < _len_enquiry30; _aux++) {
          free(enquiry3[_aux].ldrv_state);
          }
          for(int _aux = 0; _aux < _len_enquiry30; _aux++) {
          free(enquiry3[_aux].ldrv_prop);
          }
          for(int _aux = 0; _aux < _len_enquiry30; _aux++) {
          free(enquiry3[_aux].ldrv_size);
          }
          free(enquiry3);
          for(int _aux = 0; _aux < _len_product_info0; _aux++) {
          free(product_info[_aux].bios_version);
          }
          for(int _aux = 0; _aux < _len_product_info0; _aux++) {
          free(product_info[_aux].fw_version);
          }
          free(product_info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_inquiry0 = 65025;
          struct TYPE_13__ * inquiry = (struct TYPE_13__ *) malloc(_len_inquiry0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_inquiry0; _i0++) {
              int _len_inquiry__i0__pdrv_info_pdrv_state0 = 1;
          inquiry[_i0].pdrv_info.pdrv_state = (int *) malloc(_len_inquiry__i0__pdrv_info_pdrv_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__pdrv_info_pdrv_state0; _j0++) {
            inquiry[_i0].pdrv_info.pdrv_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inquiry__i0__logdrv_info_ldrv_state0 = 1;
          inquiry[_i0].logdrv_info.ldrv_state = (int *) malloc(_len_inquiry__i0__logdrv_info_ldrv_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__logdrv_info_ldrv_state0; _j0++) {
            inquiry[_i0].logdrv_info.ldrv_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inquiry__i0__logdrv_info_ldrv_prop0 = 1;
          inquiry[_i0].logdrv_info.ldrv_prop = (int *) malloc(_len_inquiry__i0__logdrv_info_ldrv_prop0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__logdrv_info_ldrv_prop0; _j0++) {
            inquiry[_i0].logdrv_info.ldrv_prop[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inquiry__i0__logdrv_info_ldrv_size0 = 1;
          inquiry[_i0].logdrv_info.ldrv_size = (int *) malloc(_len_inquiry__i0__logdrv_info_ldrv_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__logdrv_info_ldrv_size0; _j0++) {
            inquiry[_i0].logdrv_info.ldrv_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        inquiry[_i0].logdrv_info.num_ldrv = ((-2 * (next_i()%2)) + 1) * next_i();
        inquiry[_i0].adapter_info.dram_size = ((-2 * (next_i()%2)) + 1) * next_i();
        inquiry[_i0].adapter_info.cache_flush_interval = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inquiry__i0__adapter_info_bios_version0 = 1;
          inquiry[_i0].adapter_info.bios_version = (int *) malloc(_len_inquiry__i0__adapter_info_bios_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__adapter_info_bios_version0; _j0++) {
            inquiry[_i0].adapter_info.bios_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inquiry__i0__adapter_info_fw_version0 = 1;
          inquiry[_i0].adapter_info.fw_version = (int *) malloc(_len_inquiry__i0__adapter_info_fw_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__adapter_info_fw_version0; _j0++) {
            inquiry[_i0].adapter_info.fw_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        inquiry[_i0].adapter_info.nchannels = ((-2 * (next_i()%2)) + 1) * next_i();
        inquiry[_i0].adapter_info.rebuild_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        inquiry[_i0].adapter_info.max_commands = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enquiry30 = 65025;
          struct TYPE_15__ * enquiry3 = (struct TYPE_15__ *) malloc(_len_enquiry30*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_enquiry30; _i0++) {
              int _len_enquiry3__i0__pdrv_state0 = 1;
          enquiry3[_i0].pdrv_state = (int *) malloc(_len_enquiry3__i0__pdrv_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enquiry3__i0__pdrv_state0; _j0++) {
            enquiry3[_i0].pdrv_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enquiry3__i0__ldrv_state0 = 1;
          enquiry3[_i0].ldrv_state = (int *) malloc(_len_enquiry3__i0__ldrv_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enquiry3__i0__ldrv_state0; _j0++) {
            enquiry3[_i0].ldrv_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enquiry3__i0__ldrv_prop0 = 1;
          enquiry3[_i0].ldrv_prop = (int *) malloc(_len_enquiry3__i0__ldrv_prop0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enquiry3__i0__ldrv_prop0; _j0++) {
            enquiry3[_i0].ldrv_prop[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enquiry3__i0__ldrv_size0 = 1;
          enquiry3[_i0].ldrv_size = (int *) malloc(_len_enquiry3__i0__ldrv_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enquiry3__i0__ldrv_size0; _j0++) {
            enquiry3[_i0].ldrv_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        enquiry3[_i0].num_ldrv = ((-2 * (next_i()%2)) + 1) * next_i();
        enquiry3[_i0].cache_flush_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        enquiry3[_i0].rebuild_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_product_info0 = 65025;
          struct TYPE_14__ * product_info = (struct TYPE_14__ *) malloc(_len_product_info0*sizeof(struct TYPE_14__));
          for(int _i0 = 0; _i0 < _len_product_info0; _i0++) {
            product_info[_i0].dram_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_product_info__i0__bios_version0 = 1;
          product_info[_i0].bios_version = (int *) malloc(_len_product_info__i0__bios_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_product_info__i0__bios_version0; _j0++) {
            product_info[_i0].bios_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_product_info__i0__fw_version0 = 1;
          product_info[_i0].fw_version = (int *) malloc(_len_product_info__i0__fw_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_product_info__i0__fw_version0; _j0++) {
            product_info[_i0].fw_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        product_info[_i0].nchannels = ((-2 * (next_i()%2)) + 1) * next_i();
        product_info[_i0].max_commands = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mega_8_to_40ld(inquiry,enquiry3,product_info);
          free(inquiry);
          for(int _aux = 0; _aux < _len_enquiry30; _aux++) {
          free(enquiry3[_aux].pdrv_state);
          }
          for(int _aux = 0; _aux < _len_enquiry30; _aux++) {
          free(enquiry3[_aux].ldrv_state);
          }
          for(int _aux = 0; _aux < _len_enquiry30; _aux++) {
          free(enquiry3[_aux].ldrv_prop);
          }
          for(int _aux = 0; _aux < _len_enquiry30; _aux++) {
          free(enquiry3[_aux].ldrv_size);
          }
          free(enquiry3);
          for(int _aux = 0; _aux < _len_product_info0; _aux++) {
          free(product_info[_aux].bios_version);
          }
          for(int _aux = 0; _aux < _len_product_info0; _aux++) {
          free(product_info[_aux].fw_version);
          }
          free(product_info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_inquiry0 = 100;
          struct TYPE_13__ * inquiry = (struct TYPE_13__ *) malloc(_len_inquiry0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_inquiry0; _i0++) {
              int _len_inquiry__i0__pdrv_info_pdrv_state0 = 1;
          inquiry[_i0].pdrv_info.pdrv_state = (int *) malloc(_len_inquiry__i0__pdrv_info_pdrv_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__pdrv_info_pdrv_state0; _j0++) {
            inquiry[_i0].pdrv_info.pdrv_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inquiry__i0__logdrv_info_ldrv_state0 = 1;
          inquiry[_i0].logdrv_info.ldrv_state = (int *) malloc(_len_inquiry__i0__logdrv_info_ldrv_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__logdrv_info_ldrv_state0; _j0++) {
            inquiry[_i0].logdrv_info.ldrv_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inquiry__i0__logdrv_info_ldrv_prop0 = 1;
          inquiry[_i0].logdrv_info.ldrv_prop = (int *) malloc(_len_inquiry__i0__logdrv_info_ldrv_prop0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__logdrv_info_ldrv_prop0; _j0++) {
            inquiry[_i0].logdrv_info.ldrv_prop[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inquiry__i0__logdrv_info_ldrv_size0 = 1;
          inquiry[_i0].logdrv_info.ldrv_size = (int *) malloc(_len_inquiry__i0__logdrv_info_ldrv_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__logdrv_info_ldrv_size0; _j0++) {
            inquiry[_i0].logdrv_info.ldrv_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        inquiry[_i0].logdrv_info.num_ldrv = ((-2 * (next_i()%2)) + 1) * next_i();
        inquiry[_i0].adapter_info.dram_size = ((-2 * (next_i()%2)) + 1) * next_i();
        inquiry[_i0].adapter_info.cache_flush_interval = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inquiry__i0__adapter_info_bios_version0 = 1;
          inquiry[_i0].adapter_info.bios_version = (int *) malloc(_len_inquiry__i0__adapter_info_bios_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__adapter_info_bios_version0; _j0++) {
            inquiry[_i0].adapter_info.bios_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inquiry__i0__adapter_info_fw_version0 = 1;
          inquiry[_i0].adapter_info.fw_version = (int *) malloc(_len_inquiry__i0__adapter_info_fw_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inquiry__i0__adapter_info_fw_version0; _j0++) {
            inquiry[_i0].adapter_info.fw_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        inquiry[_i0].adapter_info.nchannels = ((-2 * (next_i()%2)) + 1) * next_i();
        inquiry[_i0].adapter_info.rebuild_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        inquiry[_i0].adapter_info.max_commands = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enquiry30 = 100;
          struct TYPE_15__ * enquiry3 = (struct TYPE_15__ *) malloc(_len_enquiry30*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_enquiry30; _i0++) {
              int _len_enquiry3__i0__pdrv_state0 = 1;
          enquiry3[_i0].pdrv_state = (int *) malloc(_len_enquiry3__i0__pdrv_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enquiry3__i0__pdrv_state0; _j0++) {
            enquiry3[_i0].pdrv_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enquiry3__i0__ldrv_state0 = 1;
          enquiry3[_i0].ldrv_state = (int *) malloc(_len_enquiry3__i0__ldrv_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enquiry3__i0__ldrv_state0; _j0++) {
            enquiry3[_i0].ldrv_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enquiry3__i0__ldrv_prop0 = 1;
          enquiry3[_i0].ldrv_prop = (int *) malloc(_len_enquiry3__i0__ldrv_prop0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enquiry3__i0__ldrv_prop0; _j0++) {
            enquiry3[_i0].ldrv_prop[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enquiry3__i0__ldrv_size0 = 1;
          enquiry3[_i0].ldrv_size = (int *) malloc(_len_enquiry3__i0__ldrv_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enquiry3__i0__ldrv_size0; _j0++) {
            enquiry3[_i0].ldrv_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        enquiry3[_i0].num_ldrv = ((-2 * (next_i()%2)) + 1) * next_i();
        enquiry3[_i0].cache_flush_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        enquiry3[_i0].rebuild_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_product_info0 = 100;
          struct TYPE_14__ * product_info = (struct TYPE_14__ *) malloc(_len_product_info0*sizeof(struct TYPE_14__));
          for(int _i0 = 0; _i0 < _len_product_info0; _i0++) {
            product_info[_i0].dram_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_product_info__i0__bios_version0 = 1;
          product_info[_i0].bios_version = (int *) malloc(_len_product_info__i0__bios_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_product_info__i0__bios_version0; _j0++) {
            product_info[_i0].bios_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_product_info__i0__fw_version0 = 1;
          product_info[_i0].fw_version = (int *) malloc(_len_product_info__i0__fw_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_product_info__i0__fw_version0; _j0++) {
            product_info[_i0].fw_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        product_info[_i0].nchannels = ((-2 * (next_i()%2)) + 1) * next_i();
        product_info[_i0].max_commands = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mega_8_to_40ld(inquiry,enquiry3,product_info);
          free(inquiry);
          for(int _aux = 0; _aux < _len_enquiry30; _aux++) {
          free(enquiry3[_aux].pdrv_state);
          }
          for(int _aux = 0; _aux < _len_enquiry30; _aux++) {
          free(enquiry3[_aux].ldrv_state);
          }
          for(int _aux = 0; _aux < _len_enquiry30; _aux++) {
          free(enquiry3[_aux].ldrv_prop);
          }
          for(int _aux = 0; _aux < _len_enquiry30; _aux++) {
          free(enquiry3[_aux].ldrv_size);
          }
          free(enquiry3);
          for(int _aux = 0; _aux < _len_product_info0; _aux++) {
          free(product_info[_aux].bios_version);
          }
          for(int _aux = 0; _aux < _len_product_info0; _aux++) {
          free(product_info[_aux].fw_version);
          }
          free(product_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
