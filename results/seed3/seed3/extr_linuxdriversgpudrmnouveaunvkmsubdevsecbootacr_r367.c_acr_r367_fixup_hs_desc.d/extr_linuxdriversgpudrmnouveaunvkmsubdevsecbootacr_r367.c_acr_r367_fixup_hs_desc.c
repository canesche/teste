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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int u64 ;
struct nvkm_secboot {scalar_t__ wpr_size; } ;
struct nvkm_gpuobj {int addr; int size; } ;
struct TYPE_6__ {int no_regions; TYPE_2__* region_props; } ;
struct acr_r367_hsflcn_desc {int wpr_region_id; int ucode_blob_base; int ucode_blob_size; TYPE_3__ regions; } ;
struct acr_r352 {TYPE_1__* func; struct nvkm_gpuobj* ls_blob; } ;
struct TYPE_5__ {int start_addr; int end_addr; int region_id; int read_mask; int write_mask; int client_mask; int shadow_mem_start_addr; } ;
struct TYPE_4__ {scalar_t__ shadow_blob; } ;

/* Variables and functions */

void
acr_r367_fixup_hs_desc(struct acr_r352 *acr, struct nvkm_secboot *sb,
		       void *_desc)
{
	struct acr_r367_hsflcn_desc *desc = _desc;
	struct nvkm_gpuobj *ls_blob = acr->ls_blob;

	/* WPR region information if WPR is not fixed */
	if (sb->wpr_size == 0) {
		u64 wpr_start = ls_blob->addr;
		u64 wpr_end = ls_blob->addr + ls_blob->size;

		if (acr->func->shadow_blob)
			wpr_start += ls_blob->size / 2;

		desc->wpr_region_id = 1;
		desc->regions.no_regions = 2;
		desc->regions.region_props[0].start_addr = wpr_start >> 8;
		desc->regions.region_props[0].end_addr = wpr_end >> 8;
		desc->regions.region_props[0].region_id = 1;
		desc->regions.region_props[0].read_mask = 0xf;
		desc->regions.region_props[0].write_mask = 0xc;
		desc->regions.region_props[0].client_mask = 0x2;
		if (acr->func->shadow_blob)
			desc->regions.region_props[0].shadow_mem_start_addr =
							     ls_blob->addr >> 8;
		else
			desc->regions.region_props[0].shadow_mem_start_addr = 0;
	} else {
		desc->ucode_blob_base = ls_blob->addr;
		desc->ucode_blob_size = ls_blob->size;
	}
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
          int _len_acr0 = 1;
          struct acr_r352 * acr = (struct acr_r352 *) malloc(_len_acr0*sizeof(struct acr_r352));
          for(int _i0 = 0; _i0 < _len_acr0; _i0++) {
              int _len_acr__i0__func0 = 1;
          acr[_i0].func = (struct TYPE_4__ *) malloc(_len_acr__i0__func0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_acr__i0__func0; _j0++) {
            acr[_i0].func->shadow_blob = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_acr__i0__ls_blob0 = 1;
          acr[_i0].ls_blob = (struct nvkm_gpuobj *) malloc(_len_acr__i0__ls_blob0*sizeof(struct nvkm_gpuobj));
          for(int _j0 = 0; _j0 < _len_acr__i0__ls_blob0; _j0++) {
            acr[_i0].ls_blob->addr = ((-2 * (next_i()%2)) + 1) * next_i();
        acr[_i0].ls_blob->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sb0 = 1;
          struct nvkm_secboot * sb = (struct nvkm_secboot *) malloc(_len_sb0*sizeof(struct nvkm_secboot));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].wpr_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * _desc;
          acr_r367_fixup_hs_desc(acr,sb,_desc);
          for(int _aux = 0; _aux < _len_acr0; _aux++) {
          free(acr[_aux].func);
          }
          for(int _aux = 0; _aux < _len_acr0; _aux++) {
          free(acr[_aux].ls_blob);
          }
          free(acr);
          free(sb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_acr0 = 65025;
          struct acr_r352 * acr = (struct acr_r352 *) malloc(_len_acr0*sizeof(struct acr_r352));
          for(int _i0 = 0; _i0 < _len_acr0; _i0++) {
              int _len_acr__i0__func0 = 1;
          acr[_i0].func = (struct TYPE_4__ *) malloc(_len_acr__i0__func0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_acr__i0__func0; _j0++) {
            acr[_i0].func->shadow_blob = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_acr__i0__ls_blob0 = 1;
          acr[_i0].ls_blob = (struct nvkm_gpuobj *) malloc(_len_acr__i0__ls_blob0*sizeof(struct nvkm_gpuobj));
          for(int _j0 = 0; _j0 < _len_acr__i0__ls_blob0; _j0++) {
            acr[_i0].ls_blob->addr = ((-2 * (next_i()%2)) + 1) * next_i();
        acr[_i0].ls_blob->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sb0 = 65025;
          struct nvkm_secboot * sb = (struct nvkm_secboot *) malloc(_len_sb0*sizeof(struct nvkm_secboot));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].wpr_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * _desc;
          acr_r367_fixup_hs_desc(acr,sb,_desc);
          for(int _aux = 0; _aux < _len_acr0; _aux++) {
          free(acr[_aux].func);
          }
          for(int _aux = 0; _aux < _len_acr0; _aux++) {
          free(acr[_aux].ls_blob);
          }
          free(acr);
          free(sb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_acr0 = 100;
          struct acr_r352 * acr = (struct acr_r352 *) malloc(_len_acr0*sizeof(struct acr_r352));
          for(int _i0 = 0; _i0 < _len_acr0; _i0++) {
              int _len_acr__i0__func0 = 1;
          acr[_i0].func = (struct TYPE_4__ *) malloc(_len_acr__i0__func0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_acr__i0__func0; _j0++) {
            acr[_i0].func->shadow_blob = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_acr__i0__ls_blob0 = 1;
          acr[_i0].ls_blob = (struct nvkm_gpuobj *) malloc(_len_acr__i0__ls_blob0*sizeof(struct nvkm_gpuobj));
          for(int _j0 = 0; _j0 < _len_acr__i0__ls_blob0; _j0++) {
            acr[_i0].ls_blob->addr = ((-2 * (next_i()%2)) + 1) * next_i();
        acr[_i0].ls_blob->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sb0 = 100;
          struct nvkm_secboot * sb = (struct nvkm_secboot *) malloc(_len_sb0*sizeof(struct nvkm_secboot));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].wpr_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * _desc;
          acr_r367_fixup_hs_desc(acr,sb,_desc);
          for(int _aux = 0; _aux < _len_acr0; _aux++) {
          free(acr[_aux].func);
          }
          for(int _aux = 0; _aux < _len_acr0; _aux++) {
          free(acr[_aux].ls_blob);
          }
          free(acr);
          free(sb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
