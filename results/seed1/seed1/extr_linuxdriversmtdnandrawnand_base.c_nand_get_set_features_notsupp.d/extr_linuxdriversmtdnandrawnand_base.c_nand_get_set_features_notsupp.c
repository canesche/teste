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
typedef  int /*<<< orphan*/  u8 ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;

/* Variables and functions */
 int ENOTSUPP ; 

int nand_get_set_features_notsupp(struct mtd_info *mtd, struct nand_chip *chip,
				  int addr, u8 *subfeature_param)
{
	return -ENOTSUPP;
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
          int addr = 100;
          int _len_mtd0 = 1;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chip0 = 1;
          struct nand_chip * chip = (struct nand_chip *) malloc(_len_chip0*sizeof(struct nand_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_subfeature_param0 = 1;
          int * subfeature_param = (int *) malloc(_len_subfeature_param0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_subfeature_param0; _i0++) {
            subfeature_param[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nand_get_set_features_notsupp(mtd,chip,addr,subfeature_param);
          printf("%d\n", benchRet); 
          free(mtd);
          free(chip);
          free(subfeature_param);
        
        break;
    }
    // big-arr
    case 1:
    {
          int addr = 255;
          int _len_mtd0 = 65025;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chip0 = 65025;
          struct nand_chip * chip = (struct nand_chip *) malloc(_len_chip0*sizeof(struct nand_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_subfeature_param0 = 65025;
          int * subfeature_param = (int *) malloc(_len_subfeature_param0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_subfeature_param0; _i0++) {
            subfeature_param[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nand_get_set_features_notsupp(mtd,chip,addr,subfeature_param);
          printf("%d\n", benchRet); 
          free(mtd);
          free(chip);
          free(subfeature_param);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int addr = 10;
          int _len_mtd0 = 100;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chip0 = 100;
          struct nand_chip * chip = (struct nand_chip *) malloc(_len_chip0*sizeof(struct nand_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_subfeature_param0 = 100;
          int * subfeature_param = (int *) malloc(_len_subfeature_param0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_subfeature_param0; _i0++) {
            subfeature_param[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nand_get_set_features_notsupp(mtd,chip,addr,subfeature_param);
          printf("%d\n", benchRet); 
          free(mtd);
          free(chip);
          free(subfeature_param);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
