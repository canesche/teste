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

/* Type definitions */
struct marvell_nand_chip_sel {int dummy; } ;
struct marvell_nand_chip {size_t selected_die; struct marvell_nand_chip_sel* sels; } ;

/* Variables and functions */

__attribute__((used)) static inline struct marvell_nand_chip_sel *to_nand_sel(struct marvell_nand_chip
							*nand)
{
	return &nand->sels[nand->selected_die];
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
          int _len_nand0 = 1;
          struct marvell_nand_chip * nand = (struct marvell_nand_chip *) malloc(_len_nand0*sizeof(struct marvell_nand_chip));
          for(int _i0 = 0; _i0 < _len_nand0; _i0++) {
            nand[_i0].selected_die = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_nand__i0__sels0 = 1;
          nand[_i0].sels = (struct marvell_nand_chip_sel *) malloc(_len_nand__i0__sels0*sizeof(struct marvell_nand_chip_sel));
          for(int _j0 = 0; _j0 < _len_nand__i0__sels0; _j0++) {
            nand[_i0].sels->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct marvell_nand_chip_sel * benchRet = to_nand_sel(nand);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_nand0; _aux++) {
          free(nand[_aux].sels);
          }
          free(nand);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_nand0 = 65025;
          struct marvell_nand_chip * nand = (struct marvell_nand_chip *) malloc(_len_nand0*sizeof(struct marvell_nand_chip));
          for(int _i0 = 0; _i0 < _len_nand0; _i0++) {
            nand[_i0].selected_die = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_nand__i0__sels0 = 1;
          nand[_i0].sels = (struct marvell_nand_chip_sel *) malloc(_len_nand__i0__sels0*sizeof(struct marvell_nand_chip_sel));
          for(int _j0 = 0; _j0 < _len_nand__i0__sels0; _j0++) {
            nand[_i0].sels->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct marvell_nand_chip_sel * benchRet = to_nand_sel(nand);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_nand0; _aux++) {
          free(nand[_aux].sels);
          }
          free(nand);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_nand0 = 100;
          struct marvell_nand_chip * nand = (struct marvell_nand_chip *) malloc(_len_nand0*sizeof(struct marvell_nand_chip));
          for(int _i0 = 0; _i0 < _len_nand0; _i0++) {
            nand[_i0].selected_die = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_nand__i0__sels0 = 1;
          nand[_i0].sels = (struct marvell_nand_chip_sel *) malloc(_len_nand__i0__sels0*sizeof(struct marvell_nand_chip_sel));
          for(int _j0 = 0; _j0 < _len_nand__i0__sels0; _j0++) {
            nand[_i0].sels->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct marvell_nand_chip_sel * benchRet = to_nand_sel(nand);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_nand0; _aux++) {
          free(nand[_aux].sels);
          }
          free(nand);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_nand0 = 1;
          struct marvell_nand_chip * nand = (struct marvell_nand_chip *) malloc(_len_nand0*sizeof(struct marvell_nand_chip));
          for(int _i0 = 0; _i0 < _len_nand0; _i0++) {
            nand[_i0].selected_die = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_nand__i0__sels0 = 1;
          nand[_i0].sels = (struct marvell_nand_chip_sel *) malloc(_len_nand__i0__sels0*sizeof(struct marvell_nand_chip_sel));
          for(int _j0 = 0; _j0 < _len_nand__i0__sels0; _j0++) {
            nand[_i0].sels->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct marvell_nand_chip_sel * benchRet = to_nand_sel(nand);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_nand0; _aux++) {
          free(nand[_aux].sels);
          }
          free(nand);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
