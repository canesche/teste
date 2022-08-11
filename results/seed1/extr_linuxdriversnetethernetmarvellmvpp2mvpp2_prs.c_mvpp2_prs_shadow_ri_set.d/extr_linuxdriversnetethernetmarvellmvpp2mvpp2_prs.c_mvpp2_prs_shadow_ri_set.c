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
struct mvpp2 {TYPE_1__* prs_shadow; } ;
struct TYPE_2__ {unsigned int ri_mask; unsigned int ri; } ;

/* Variables and functions */

__attribute__((used)) static void mvpp2_prs_shadow_ri_set(struct mvpp2 *priv, int index,
				    unsigned int ri, unsigned int ri_mask)
{
	priv->prs_shadow[index].ri_mask = ri_mask;
	priv->prs_shadow[index].ri = ri;
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
          int index = 100;
          unsigned int ri = 100;
          unsigned int ri_mask = 100;
          int _len_priv0 = 1;
          struct mvpp2 * priv = (struct mvpp2 *) malloc(_len_priv0*sizeof(struct mvpp2));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__prs_shadow0 = 1;
          priv[_i0].prs_shadow = (struct TYPE_2__ *) malloc(_len_priv__i0__prs_shadow0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__prs_shadow0; _j0++) {
            priv[_i0].prs_shadow->ri_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].prs_shadow->ri = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mvpp2_prs_shadow_ri_set(priv,index,ri,ri_mask);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].prs_shadow);
          }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          unsigned int ri = 255;
          unsigned int ri_mask = 255;
          int _len_priv0 = 65025;
          struct mvpp2 * priv = (struct mvpp2 *) malloc(_len_priv0*sizeof(struct mvpp2));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__prs_shadow0 = 1;
          priv[_i0].prs_shadow = (struct TYPE_2__ *) malloc(_len_priv__i0__prs_shadow0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__prs_shadow0; _j0++) {
            priv[_i0].prs_shadow->ri_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].prs_shadow->ri = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mvpp2_prs_shadow_ri_set(priv,index,ri,ri_mask);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].prs_shadow);
          }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          unsigned int ri = 10;
          unsigned int ri_mask = 10;
          int _len_priv0 = 100;
          struct mvpp2 * priv = (struct mvpp2 *) malloc(_len_priv0*sizeof(struct mvpp2));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__prs_shadow0 = 1;
          priv[_i0].prs_shadow = (struct TYPE_2__ *) malloc(_len_priv__i0__prs_shadow0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__prs_shadow0; _j0++) {
            priv[_i0].prs_shadow->ri_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].prs_shadow->ri = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mvpp2_prs_shadow_ri_set(priv,index,ri,ri_mask);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].prs_shadow);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
