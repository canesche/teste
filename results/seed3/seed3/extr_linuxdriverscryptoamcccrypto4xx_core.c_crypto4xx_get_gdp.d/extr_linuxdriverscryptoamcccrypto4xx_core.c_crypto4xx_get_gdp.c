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
typedef  int u32 ;
struct crypto4xx_device {struct ce_gd* gdr; scalar_t__ gdr_pa; } ;
struct ce_gd {int dummy; } ;
typedef  scalar_t__ dma_addr_t ;

/* Variables and functions */

__attribute__((used)) static inline struct ce_gd *crypto4xx_get_gdp(struct crypto4xx_device *dev,
					      dma_addr_t *gd_dma, u32 idx)
{
	*gd_dma = dev->gdr_pa + sizeof(struct ce_gd) * idx;

	return &dev->gdr[idx];
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
          int idx = 100;
          int _len_dev0 = 1;
          struct crypto4xx_device * dev = (struct crypto4xx_device *) malloc(_len_dev0*sizeof(struct crypto4xx_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__gdr0 = 1;
          dev[_i0].gdr = (struct ce_gd *) malloc(_len_dev__i0__gdr0*sizeof(struct ce_gd));
          for(int _j0 = 0; _j0 < _len_dev__i0__gdr0; _j0++) {
            dev[_i0].gdr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].gdr_pa = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gd_dma0 = 1;
          long * gd_dma = (long *) malloc(_len_gd_dma0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_gd_dma0; _i0++) {
            gd_dma[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct ce_gd * benchRet = crypto4xx_get_gdp(dev,gd_dma,idx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].gdr);
          }
          free(dev);
          free(gd_dma);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int _len_dev0 = 65025;
          struct crypto4xx_device * dev = (struct crypto4xx_device *) malloc(_len_dev0*sizeof(struct crypto4xx_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__gdr0 = 1;
          dev[_i0].gdr = (struct ce_gd *) malloc(_len_dev__i0__gdr0*sizeof(struct ce_gd));
          for(int _j0 = 0; _j0 < _len_dev__i0__gdr0; _j0++) {
            dev[_i0].gdr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].gdr_pa = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gd_dma0 = 65025;
          long * gd_dma = (long *) malloc(_len_gd_dma0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_gd_dma0; _i0++) {
            gd_dma[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct ce_gd * benchRet = crypto4xx_get_gdp(dev,gd_dma,idx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].gdr);
          }
          free(dev);
          free(gd_dma);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int _len_dev0 = 100;
          struct crypto4xx_device * dev = (struct crypto4xx_device *) malloc(_len_dev0*sizeof(struct crypto4xx_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__gdr0 = 1;
          dev[_i0].gdr = (struct ce_gd *) malloc(_len_dev__i0__gdr0*sizeof(struct ce_gd));
          for(int _j0 = 0; _j0 < _len_dev__i0__gdr0; _j0++) {
            dev[_i0].gdr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].gdr_pa = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gd_dma0 = 100;
          long * gd_dma = (long *) malloc(_len_gd_dma0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_gd_dma0; _i0++) {
            gd_dma[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct ce_gd * benchRet = crypto4xx_get_gdp(dev,gd_dma,idx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].gdr);
          }
          free(dev);
          free(gd_dma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
