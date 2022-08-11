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
struct mtd_info {int /*<<< orphan*/  _erase; struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {TYPE_1__* cfiq; } ;
struct TYPE_2__ {int NumEraseRegions; int* EraseRegionInfo; } ;

/* Variables and functions */
 int /*<<< orphan*/  cfi_amdstd_erase_chip ; 

__attribute__((used)) static void fixup_use_erase_chip(struct mtd_info *mtd)
{
	struct map_info *map = mtd->priv;
	struct cfi_private *cfi = map->fldrv_priv;
	if ((cfi->cfiq->NumEraseRegions == 1) &&
		((cfi->cfiq->EraseRegionInfo[0] & 0xffff) == 0)) {
		mtd->_erase = cfi_amdstd_erase_chip;
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
          int _len_mtd0 = 1;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0]._erase = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mtd__i0__priv0 = 1;
          mtd[_i0].priv = (struct map_info *) malloc(_len_mtd__i0__priv0*sizeof(struct map_info));
          for(int _j0 = 0; _j0 < _len_mtd__i0__priv0; _j0++) {
              int _len_mtd__i0__priv_fldrv_priv0 = 1;
          mtd[_i0].priv->fldrv_priv = (struct cfi_private *) malloc(_len_mtd__i0__priv_fldrv_priv0*sizeof(struct cfi_private));
          for(int _j0 = 0; _j0 < _len_mtd__i0__priv_fldrv_priv0; _j0++) {
              int _len_mtd__i0__priv_fldrv_priv_cfiq0 = 1;
          mtd[_i0].priv->fldrv_priv->cfiq = (struct TYPE_2__ *) malloc(_len_mtd__i0__priv_fldrv_priv_cfiq0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mtd__i0__priv_fldrv_priv_cfiq0; _j0++) {
            mtd[_i0].priv->fldrv_priv->cfiq->NumEraseRegions = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mtd__i0__priv_fldrv_priv_cfiq_EraseRegionInfo0 = 1;
          mtd[_i0].priv->fldrv_priv->cfiq->EraseRegionInfo = (int *) malloc(_len_mtd__i0__priv_fldrv_priv_cfiq_EraseRegionInfo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mtd__i0__priv_fldrv_priv_cfiq_EraseRegionInfo0; _j0++) {
            mtd[_i0].priv->fldrv_priv->cfiq->EraseRegionInfo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          fixup_use_erase_chip(mtd);
          for(int _aux = 0; _aux < _len_mtd0; _aux++) {
          free(mtd[_aux].priv);
          }
          free(mtd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mtd0 = 65025;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0]._erase = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mtd__i0__priv0 = 1;
          mtd[_i0].priv = (struct map_info *) malloc(_len_mtd__i0__priv0*sizeof(struct map_info));
          for(int _j0 = 0; _j0 < _len_mtd__i0__priv0; _j0++) {
              int _len_mtd__i0__priv_fldrv_priv0 = 1;
          mtd[_i0].priv->fldrv_priv = (struct cfi_private *) malloc(_len_mtd__i0__priv_fldrv_priv0*sizeof(struct cfi_private));
          for(int _j0 = 0; _j0 < _len_mtd__i0__priv_fldrv_priv0; _j0++) {
              int _len_mtd__i0__priv_fldrv_priv_cfiq0 = 1;
          mtd[_i0].priv->fldrv_priv->cfiq = (struct TYPE_2__ *) malloc(_len_mtd__i0__priv_fldrv_priv_cfiq0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mtd__i0__priv_fldrv_priv_cfiq0; _j0++) {
            mtd[_i0].priv->fldrv_priv->cfiq->NumEraseRegions = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mtd__i0__priv_fldrv_priv_cfiq_EraseRegionInfo0 = 1;
          mtd[_i0].priv->fldrv_priv->cfiq->EraseRegionInfo = (int *) malloc(_len_mtd__i0__priv_fldrv_priv_cfiq_EraseRegionInfo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mtd__i0__priv_fldrv_priv_cfiq_EraseRegionInfo0; _j0++) {
            mtd[_i0].priv->fldrv_priv->cfiq->EraseRegionInfo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          fixup_use_erase_chip(mtd);
          for(int _aux = 0; _aux < _len_mtd0; _aux++) {
          free(mtd[_aux].priv);
          }
          free(mtd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mtd0 = 100;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0]._erase = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mtd__i0__priv0 = 1;
          mtd[_i0].priv = (struct map_info *) malloc(_len_mtd__i0__priv0*sizeof(struct map_info));
          for(int _j0 = 0; _j0 < _len_mtd__i0__priv0; _j0++) {
              int _len_mtd__i0__priv_fldrv_priv0 = 1;
          mtd[_i0].priv->fldrv_priv = (struct cfi_private *) malloc(_len_mtd__i0__priv_fldrv_priv0*sizeof(struct cfi_private));
          for(int _j0 = 0; _j0 < _len_mtd__i0__priv_fldrv_priv0; _j0++) {
              int _len_mtd__i0__priv_fldrv_priv_cfiq0 = 1;
          mtd[_i0].priv->fldrv_priv->cfiq = (struct TYPE_2__ *) malloc(_len_mtd__i0__priv_fldrv_priv_cfiq0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mtd__i0__priv_fldrv_priv_cfiq0; _j0++) {
            mtd[_i0].priv->fldrv_priv->cfiq->NumEraseRegions = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mtd__i0__priv_fldrv_priv_cfiq_EraseRegionInfo0 = 1;
          mtd[_i0].priv->fldrv_priv->cfiq->EraseRegionInfo = (int *) malloc(_len_mtd__i0__priv_fldrv_priv_cfiq_EraseRegionInfo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mtd__i0__priv_fldrv_priv_cfiq_EraseRegionInfo0; _j0++) {
            mtd[_i0].priv->fldrv_priv->cfiq->EraseRegionInfo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          fixup_use_erase_chip(mtd);
          for(int _aux = 0; _aux < _len_mtd0; _aux++) {
          free(mtd[_aux].priv);
          }
          free(mtd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
