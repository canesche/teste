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
struct sdio_func {int dummy; } ;
struct TYPE_2__ {unsigned char blksize; int max_dtr; } ;
struct mmc_card {TYPE_1__ cis; } ;

/* Variables and functions */
 int EINVAL ; 
 int* speed_unit ; 
 int* speed_val ; 

__attribute__((used)) static int cistpl_funce_common(struct mmc_card *card, struct sdio_func *func,
			       const unsigned char *buf, unsigned size)
{
	/* Only valid for the common CIS (function 0) */
	if (func)
		return -EINVAL;

	/* TPLFE_FN0_BLK_SIZE */
	card->cis.blksize = buf[1] | (buf[2] << 8);

	/* TPLFE_MAX_TRAN_SPEED */
	card->cis.max_dtr = speed_val[(buf[3] >> 3) & 15] *
			    speed_unit[buf[3] & 7];

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
          unsigned int size = 100;
          int _len_card0 = 1;
          struct mmc_card * card = (struct mmc_card *) malloc(_len_card0*sizeof(struct mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].cis.blksize = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].cis.max_dtr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_func0 = 1;
          struct sdio_func * func = (struct sdio_func *) malloc(_len_func0*sizeof(struct sdio_func));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
            func[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          const unsigned char * buf = (const unsigned char *) malloc(_len_buf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cistpl_funce_common(card,func,buf,size);
          printf("%d\n", benchRet); 
          free(card);
          free(func);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int size = 255;
          int _len_card0 = 65025;
          struct mmc_card * card = (struct mmc_card *) malloc(_len_card0*sizeof(struct mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].cis.blksize = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].cis.max_dtr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_func0 = 65025;
          struct sdio_func * func = (struct sdio_func *) malloc(_len_func0*sizeof(struct sdio_func));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
            func[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          const unsigned char * buf = (const unsigned char *) malloc(_len_buf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cistpl_funce_common(card,func,buf,size);
          printf("%d\n", benchRet); 
          free(card);
          free(func);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int size = 10;
          int _len_card0 = 100;
          struct mmc_card * card = (struct mmc_card *) malloc(_len_card0*sizeof(struct mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].cis.blksize = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].cis.max_dtr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_func0 = 100;
          struct sdio_func * func = (struct sdio_func *) malloc(_len_func0*sizeof(struct sdio_func));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
            func[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          const unsigned char * buf = (const unsigned char *) malloc(_len_buf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cistpl_funce_common(card,func,buf,size);
          printf("%d\n", benchRet); 
          free(card);
          free(func);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
