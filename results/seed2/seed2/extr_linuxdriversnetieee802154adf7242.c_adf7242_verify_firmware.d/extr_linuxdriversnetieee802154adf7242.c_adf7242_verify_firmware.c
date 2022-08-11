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
struct adf7242_local {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int adf7242_verify_firmware(struct adf7242_local *lp,
				   const u8 *data, size_t len)
{
#ifdef DEBUG
	int i, j;
	unsigned int page;
	u8 *buf = kmalloc(PRAM_PAGESIZE, GFP_KERNEL);

	if (!buf)
		return -ENOMEM;

	for (page = 0, i = len; i >= 0; i -= PRAM_PAGESIZE, page++) {
		size_t nb = (i >= PRAM_PAGESIZE) ? PRAM_PAGESIZE : i;

		adf7242_write_reg(lp, REG_PRAMPG, page);
		adf7242_read_fbuf(lp, buf, nb, false);

		for (j = 0; j < nb; j++) {
			if (buf[j] != data[page * PRAM_PAGESIZE + j]) {
				kfree(buf);
				return -EIO;
			}
		}
	}
	kfree(buf);
#endif
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
          unsigned long len = 100;
          int _len_lp0 = 1;
          struct adf7242_local * lp = (struct adf7242_local *) malloc(_len_lp0*sizeof(struct adf7242_local));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = adf7242_verify_firmware(lp,data,len);
          printf("%d\n", benchRet); 
          free(lp);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int _len_lp0 = 65025;
          struct adf7242_local * lp = (struct adf7242_local *) malloc(_len_lp0*sizeof(struct adf7242_local));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = adf7242_verify_firmware(lp,data,len);
          printf("%d\n", benchRet); 
          free(lp);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int _len_lp0 = 100;
          struct adf7242_local * lp = (struct adf7242_local *) malloc(_len_lp0*sizeof(struct adf7242_local));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = adf7242_verify_firmware(lp,data,len);
          printf("%d\n", benchRet); 
          free(lp);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
