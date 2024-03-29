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
typedef  int u64 ;
struct rproc {struct q6v5_wcss* priv; } ;
struct q6v5_wcss {int mem_reloc; int mem_size; void* mem_region; } ;

/* Variables and functions */

__attribute__((used)) static void *q6v5_wcss_da_to_va(struct rproc *rproc, u64 da, int len)
{
	struct q6v5_wcss *wcss = rproc->priv;
	int offset;

	offset = da - wcss->mem_reloc;
	if (offset < 0 || offset + len > wcss->mem_size)
		return NULL;

	return wcss->mem_region + offset;
}


// ------------------------------------------------------------------------- //




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
          int da = 100;
          int len = 100;
          int _len_rproc0 = 1;
          struct rproc * rproc = (struct rproc *) malloc(_len_rproc0*sizeof(struct rproc));
          for(int _i0 = 0; _i0 < _len_rproc0; _i0++) {
              int _len_rproc__i0__priv0 = 1;
          rproc[_i0].priv = (struct q6v5_wcss *) malloc(_len_rproc__i0__priv0*sizeof(struct q6v5_wcss));
          for(int _j0 = 0; _j0 < _len_rproc__i0__priv0; _j0++) {
            rproc[_i0].priv->mem_reloc = ((-2 * (next_i()%2)) + 1) * next_i();
        rproc[_i0].priv->mem_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * benchRet = q6v5_wcss_da_to_va(rproc,da,len);
          for(int _aux = 0; _aux < _len_rproc0; _aux++) {
          free(rproc[_aux].priv);
          }
          free(rproc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int da = 255;
          int len = 255;
          int _len_rproc0 = 65025;
          struct rproc * rproc = (struct rproc *) malloc(_len_rproc0*sizeof(struct rproc));
          for(int _i0 = 0; _i0 < _len_rproc0; _i0++) {
              int _len_rproc__i0__priv0 = 1;
          rproc[_i0].priv = (struct q6v5_wcss *) malloc(_len_rproc__i0__priv0*sizeof(struct q6v5_wcss));
          for(int _j0 = 0; _j0 < _len_rproc__i0__priv0; _j0++) {
            rproc[_i0].priv->mem_reloc = ((-2 * (next_i()%2)) + 1) * next_i();
        rproc[_i0].priv->mem_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * benchRet = q6v5_wcss_da_to_va(rproc,da,len);
          for(int _aux = 0; _aux < _len_rproc0; _aux++) {
          free(rproc[_aux].priv);
          }
          free(rproc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int da = 10;
          int len = 10;
          int _len_rproc0 = 100;
          struct rproc * rproc = (struct rproc *) malloc(_len_rproc0*sizeof(struct rproc));
          for(int _i0 = 0; _i0 < _len_rproc0; _i0++) {
              int _len_rproc__i0__priv0 = 1;
          rproc[_i0].priv = (struct q6v5_wcss *) malloc(_len_rproc__i0__priv0*sizeof(struct q6v5_wcss));
          for(int _j0 = 0; _j0 < _len_rproc__i0__priv0; _j0++) {
            rproc[_i0].priv->mem_reloc = ((-2 * (next_i()%2)) + 1) * next_i();
        rproc[_i0].priv->mem_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * benchRet = q6v5_wcss_da_to_va(rproc,da,len);
          for(int _aux = 0; _aux < _len_rproc0; _aux++) {
          free(rproc[_aux].priv);
          }
          free(rproc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
