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
typedef  int u8 ;
struct TYPE_2__ {int* data; } ;
struct nand_chip {int bits_per_cell; int /*<<< orphan*/  options; TYPE_1__ id; } ;

/* Variables and functions */
 int /*<<< orphan*/  NAND_NEED_SCRAMBLING ; 

__attribute__((used)) static void hynix_nand_extract_scrambling_requirements(struct nand_chip *chip,
						       bool valid_jedecid)
{
	u8 nand_tech;

	/* We need scrambling on all TLC NANDs*/
	if (chip->bits_per_cell > 2)
		chip->options |= NAND_NEED_SCRAMBLING;

	/* And on MLC NANDs with sub-3xnm process */
	if (valid_jedecid) {
		nand_tech = chip->id.data[5] >> 4;

		/* < 3xnm */
		if (nand_tech > 0)
			chip->options |= NAND_NEED_SCRAMBLING;
	} else {
		nand_tech = chip->id.data[5] & 0x7;

		/* < 32nm */
		if (nand_tech > 2)
			chip->options |= NAND_NEED_SCRAMBLING;
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
          int valid_jedecid = 100;
          int _len_chip0 = 1;
          struct nand_chip * chip = (struct nand_chip *) malloc(_len_chip0*sizeof(struct nand_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].bits_per_cell = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].options = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__id_data0 = 1;
          chip[_i0].id.data = (int *) malloc(_len_chip__i0__id_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__id_data0; _j0++) {
            chip[_i0].id.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hynix_nand_extract_scrambling_requirements(chip,valid_jedecid);
          free(chip);
        
        break;
    }
    // big-arr
    case 1:
    {
          int valid_jedecid = 255;
          int _len_chip0 = 65025;
          struct nand_chip * chip = (struct nand_chip *) malloc(_len_chip0*sizeof(struct nand_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].bits_per_cell = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].options = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__id_data0 = 1;
          chip[_i0].id.data = (int *) malloc(_len_chip__i0__id_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__id_data0; _j0++) {
            chip[_i0].id.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hynix_nand_extract_scrambling_requirements(chip,valid_jedecid);
          free(chip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int valid_jedecid = 10;
          int _len_chip0 = 100;
          struct nand_chip * chip = (struct nand_chip *) malloc(_len_chip0*sizeof(struct nand_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].bits_per_cell = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].options = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__id_data0 = 1;
          chip[_i0].id.data = (int *) malloc(_len_chip__i0__id_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__id_data0; _j0++) {
            chip[_i0].id.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hynix_nand_extract_scrambling_requirements(chip,valid_jedecid);
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
