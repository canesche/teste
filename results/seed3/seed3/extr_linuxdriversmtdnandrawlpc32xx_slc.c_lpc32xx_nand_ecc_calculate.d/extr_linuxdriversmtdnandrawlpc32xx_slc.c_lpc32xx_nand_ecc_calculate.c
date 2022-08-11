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
struct mtd_info {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int lpc32xx_nand_ecc_calculate(struct mtd_info *mtd,
				      const unsigned char *buf,
				      unsigned char *code)
{
	/*
	 * ECC is calculated automatically in hardware during syndrome read
	 * and write operations, so it doesn't need to be calculated here.
	 */
	return 0;
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
            mtd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          const unsigned char * buf = (const unsigned char *) malloc(_len_buf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_code0 = 1;
          unsigned char * code = (unsigned char *) malloc(_len_code0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lpc32xx_nand_ecc_calculate(mtd,buf,code);
          printf("%d\n", benchRet); 
          free(mtd);
          free(buf);
          free(code);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mtd0 = 65025;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          const unsigned char * buf = (const unsigned char *) malloc(_len_buf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_code0 = 65025;
          unsigned char * code = (unsigned char *) malloc(_len_code0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lpc32xx_nand_ecc_calculate(mtd,buf,code);
          printf("%d\n", benchRet); 
          free(mtd);
          free(buf);
          free(code);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mtd0 = 100;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          const unsigned char * buf = (const unsigned char *) malloc(_len_buf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_code0 = 100;
          unsigned char * code = (unsigned char *) malloc(_len_code0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lpc32xx_nand_ecc_calculate(mtd,buf,code);
          printf("%d\n", benchRet); 
          free(mtd);
          free(buf);
          free(code);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
