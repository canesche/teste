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
struct mtd_info {TYPE_1__* priv; } ;
struct TYPE_2__ {void* start; } ;
typedef  TYPE_1__ slram_priv_t ;
typedef  int /*<<< orphan*/  resource_size_t ;
typedef  int loff_t ;

/* Variables and functions */

__attribute__((used)) static int slram_point(struct mtd_info *mtd, loff_t from, size_t len,
		size_t *retlen, void **virt, resource_size_t *phys)
{
	slram_priv_t *priv = mtd->priv;

	*virt = priv->start + from;
	*retlen = len;
	return(0);
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
          int from = 100;
          unsigned long len = 100;
          int _len_mtd0 = 1;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
              int _len_mtd__i0__priv0 = 1;
          mtd[_i0].priv = (struct TYPE_2__ *) malloc(_len_mtd__i0__priv0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mtd__i0__priv0; _j0++) {
              }
          }
          int _len_retlen0 = 1;
          unsigned long * retlen = (unsigned long *) malloc(_len_retlen0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_retlen0; _i0++) {
            retlen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_virt0 = 1;
          void ** virt = (void **) malloc(_len_virt0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_virt0; _i0++) {
          }
          int _len_phys0 = 1;
          int * phys = (int *) malloc(_len_phys0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phys0; _i0++) {
            phys[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = slram_point(mtd,from,len,retlen,virt,phys);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mtd0; _aux++) {
          free(mtd[_aux].priv);
          }
          free(mtd);
          free(retlen);
          for(int i1 = 0; i1 < _len_virt0; i1++) {
            int _len_virt1 = 1;
              }
          free(virt);
          free(phys);
        
        break;
    }
    // big-arr
    case 1:
    {
          int from = 255;
          unsigned long len = 255;
          int _len_mtd0 = 65025;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
              int _len_mtd__i0__priv0 = 1;
          mtd[_i0].priv = (struct TYPE_2__ *) malloc(_len_mtd__i0__priv0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mtd__i0__priv0; _j0++) {
              }
          }
          int _len_retlen0 = 65025;
          unsigned long * retlen = (unsigned long *) malloc(_len_retlen0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_retlen0; _i0++) {
            retlen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_virt0 = 65025;
          void ** virt = (void **) malloc(_len_virt0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_virt0; _i0++) {
          }
          int _len_phys0 = 65025;
          int * phys = (int *) malloc(_len_phys0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phys0; _i0++) {
            phys[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = slram_point(mtd,from,len,retlen,virt,phys);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mtd0; _aux++) {
          free(mtd[_aux].priv);
          }
          free(mtd);
          free(retlen);
          for(int i1 = 0; i1 < _len_virt0; i1++) {
            int _len_virt1 = 1;
              }
          free(virt);
          free(phys);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int from = 10;
          unsigned long len = 10;
          int _len_mtd0 = 100;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
              int _len_mtd__i0__priv0 = 1;
          mtd[_i0].priv = (struct TYPE_2__ *) malloc(_len_mtd__i0__priv0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mtd__i0__priv0; _j0++) {
              }
          }
          int _len_retlen0 = 100;
          unsigned long * retlen = (unsigned long *) malloc(_len_retlen0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_retlen0; _i0++) {
            retlen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_virt0 = 100;
          void ** virt = (void **) malloc(_len_virt0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_virt0; _i0++) {
          }
          int _len_phys0 = 100;
          int * phys = (int *) malloc(_len_phys0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phys0; _i0++) {
            phys[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = slram_point(mtd,from,len,retlen,virt,phys);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mtd0; _aux++) {
          free(mtd[_aux].priv);
          }
          free(mtd);
          free(retlen);
          for(int i1 = 0; i1 < _len_virt0; i1++) {
            int _len_virt1 = 1;
              }
          free(virt);
          free(phys);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
