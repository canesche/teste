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
       3            linked\n\
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
struct bnxt_msix_entry {int ring_idx; int db_offset; int /*<<< orphan*/  vector; } ;
struct bnxt_en_dev {TYPE_1__* ulp_tbl; } ;
struct bnxt {TYPE_2__* irq_tbl; struct bnxt_en_dev* edev; } ;
struct TYPE_4__ {int /*<<< orphan*/  vector; } ;
struct TYPE_3__ {int msix_requested; int msix_base; } ;

/* Variables and functions */
 size_t BNXT_ROCE_ULP ; 

__attribute__((used)) static void bnxt_fill_msix_vecs(struct bnxt *bp, struct bnxt_msix_entry *ent)
{
	struct bnxt_en_dev *edev = bp->edev;
	int num_msix, idx, i;

	num_msix = edev->ulp_tbl[BNXT_ROCE_ULP].msix_requested;
	idx = edev->ulp_tbl[BNXT_ROCE_ULP].msix_base;
	for (i = 0; i < num_msix; i++) {
		ent[i].vector = bp->irq_tbl[idx + i].vector;
		ent[i].ring_idx = idx + i;
		ent[i].db_offset = (idx + i) * 0x80;
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
          int _len_bp0 = 1;
          struct bnxt * bp = (struct bnxt *) malloc(_len_bp0*sizeof(struct bnxt));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
              int _len_bp__i0__irq_tbl0 = 1;
          bp[_i0].irq_tbl = (struct TYPE_4__ *) malloc(_len_bp__i0__irq_tbl0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bp__i0__irq_tbl0; _j0++) {
            bp[_i0].irq_tbl->vector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp__i0__edev0 = 1;
          bp[_i0].edev = (struct bnxt_en_dev *) malloc(_len_bp__i0__edev0*sizeof(struct bnxt_en_dev));
          for(int _j0 = 0; _j0 < _len_bp__i0__edev0; _j0++) {
              int _len_bp__i0__edev_ulp_tbl0 = 1;
          bp[_i0].edev->ulp_tbl = (struct TYPE_3__ *) malloc(_len_bp__i0__edev_ulp_tbl0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_bp__i0__edev_ulp_tbl0; _j0++) {
            bp[_i0].edev->ulp_tbl->msix_requested = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].edev->ulp_tbl->msix_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ent0 = 1;
          struct bnxt_msix_entry * ent = (struct bnxt_msix_entry *) malloc(_len_ent0*sizeof(struct bnxt_msix_entry));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
            ent[_i0].ring_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].db_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].vector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnxt_fill_msix_vecs(bp,ent);
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(bp[_aux].irq_tbl);
          }
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(bp[_aux].edev);
          }
          free(bp);
          free(ent);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bp0 = 65025;
          struct bnxt * bp = (struct bnxt *) malloc(_len_bp0*sizeof(struct bnxt));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
              int _len_bp__i0__irq_tbl0 = 1;
          bp[_i0].irq_tbl = (struct TYPE_4__ *) malloc(_len_bp__i0__irq_tbl0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bp__i0__irq_tbl0; _j0++) {
            bp[_i0].irq_tbl->vector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp__i0__edev0 = 1;
          bp[_i0].edev = (struct bnxt_en_dev *) malloc(_len_bp__i0__edev0*sizeof(struct bnxt_en_dev));
          for(int _j0 = 0; _j0 < _len_bp__i0__edev0; _j0++) {
              int _len_bp__i0__edev_ulp_tbl0 = 1;
          bp[_i0].edev->ulp_tbl = (struct TYPE_3__ *) malloc(_len_bp__i0__edev_ulp_tbl0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_bp__i0__edev_ulp_tbl0; _j0++) {
            bp[_i0].edev->ulp_tbl->msix_requested = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].edev->ulp_tbl->msix_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ent0 = 65025;
          struct bnxt_msix_entry * ent = (struct bnxt_msix_entry *) malloc(_len_ent0*sizeof(struct bnxt_msix_entry));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
            ent[_i0].ring_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].db_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].vector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnxt_fill_msix_vecs(bp,ent);
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(bp[_aux].irq_tbl);
          }
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(bp[_aux].edev);
          }
          free(bp);
          free(ent);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bp0 = 100;
          struct bnxt * bp = (struct bnxt *) malloc(_len_bp0*sizeof(struct bnxt));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
              int _len_bp__i0__irq_tbl0 = 1;
          bp[_i0].irq_tbl = (struct TYPE_4__ *) malloc(_len_bp__i0__irq_tbl0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bp__i0__irq_tbl0; _j0++) {
            bp[_i0].irq_tbl->vector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp__i0__edev0 = 1;
          bp[_i0].edev = (struct bnxt_en_dev *) malloc(_len_bp__i0__edev0*sizeof(struct bnxt_en_dev));
          for(int _j0 = 0; _j0 < _len_bp__i0__edev0; _j0++) {
              int _len_bp__i0__edev_ulp_tbl0 = 1;
          bp[_i0].edev->ulp_tbl = (struct TYPE_3__ *) malloc(_len_bp__i0__edev_ulp_tbl0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_bp__i0__edev_ulp_tbl0; _j0++) {
            bp[_i0].edev->ulp_tbl->msix_requested = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].edev->ulp_tbl->msix_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ent0 = 100;
          struct bnxt_msix_entry * ent = (struct bnxt_msix_entry *) malloc(_len_ent0*sizeof(struct bnxt_msix_entry));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
            ent[_i0].ring_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].db_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].vector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnxt_fill_msix_vecs(bp,ent);
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(bp[_aux].irq_tbl);
          }
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(bp[_aux].edev);
          }
          free(bp);
          free(ent);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_bp0 = 1;
          struct bnxt * bp = (struct bnxt *) malloc(_len_bp0*sizeof(struct bnxt));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
              int _len_bp__i0__irq_tbl0 = 1;
          bp[_i0].irq_tbl = (struct TYPE_4__ *) malloc(_len_bp__i0__irq_tbl0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bp__i0__irq_tbl0; _j0++) {
            bp[_i0].irq_tbl->vector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp__i0__edev0 = 1;
          bp[_i0].edev = (struct bnxt_en_dev *) malloc(_len_bp__i0__edev0*sizeof(struct bnxt_en_dev));
          for(int _j0 = 0; _j0 < _len_bp__i0__edev0; _j0++) {
              int _len_bp__i0__edev_ulp_tbl0 = 1;
          bp[_i0].edev->ulp_tbl = (struct TYPE_3__ *) malloc(_len_bp__i0__edev_ulp_tbl0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_bp__i0__edev_ulp_tbl0; _j0++) {
            bp[_i0].edev->ulp_tbl->msix_requested = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].edev->ulp_tbl->msix_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ent0 = 1;
          struct bnxt_msix_entry * ent = (struct bnxt_msix_entry *) malloc(_len_ent0*sizeof(struct bnxt_msix_entry));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
            ent[_i0].ring_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].db_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].vector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnxt_fill_msix_vecs(bp,ent);
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(bp[_aux].irq_tbl);
          }
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(bp[_aux].edev);
          }
          free(bp);
          free(ent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
