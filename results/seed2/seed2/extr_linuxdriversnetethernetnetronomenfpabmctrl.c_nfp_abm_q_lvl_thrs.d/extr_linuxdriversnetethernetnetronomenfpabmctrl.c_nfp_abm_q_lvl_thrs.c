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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct nfp_abm_link {unsigned int queue_base; TYPE_2__* abm; } ;
struct TYPE_4__ {TYPE_1__* q_lvls; } ;
struct TYPE_3__ {unsigned long long addr; } ;

/* Variables and functions */
 unsigned int NFP_QLVL_STRIDE ; 
 unsigned long long NFP_QLVL_THRS ; 

__attribute__((used)) static unsigned long long
nfp_abm_q_lvl_thrs(struct nfp_abm_link *alink, unsigned int queue)
{
	return alink->abm->q_lvls->addr +
		(alink->queue_base + queue) * NFP_QLVL_STRIDE + NFP_QLVL_THRS;
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
          unsigned int queue = 100;
          int _len_alink0 = 1;
          struct nfp_abm_link * alink = (struct nfp_abm_link *) malloc(_len_alink0*sizeof(struct nfp_abm_link));
          for(int _i0 = 0; _i0 < _len_alink0; _i0++) {
            alink[_i0].queue_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alink__i0__abm0 = 1;
          alink[_i0].abm = (struct TYPE_4__ *) malloc(_len_alink__i0__abm0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_alink__i0__abm0; _j0++) {
              int _len_alink__i0__abm_q_lvls0 = 1;
          alink[_i0].abm->q_lvls = (struct TYPE_3__ *) malloc(_len_alink__i0__abm_q_lvls0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_alink__i0__abm_q_lvls0; _j0++) {
            alink[_i0].abm->q_lvls->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned long long benchRet = nfp_abm_q_lvl_thrs(alink,queue);
          printf("%llu\n", benchRet); 
          for(int _aux = 0; _aux < _len_alink0; _aux++) {
          free(alink[_aux].abm);
          }
          free(alink);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int queue = 255;
          int _len_alink0 = 65025;
          struct nfp_abm_link * alink = (struct nfp_abm_link *) malloc(_len_alink0*sizeof(struct nfp_abm_link));
          for(int _i0 = 0; _i0 < _len_alink0; _i0++) {
            alink[_i0].queue_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alink__i0__abm0 = 1;
          alink[_i0].abm = (struct TYPE_4__ *) malloc(_len_alink__i0__abm0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_alink__i0__abm0; _j0++) {
              int _len_alink__i0__abm_q_lvls0 = 1;
          alink[_i0].abm->q_lvls = (struct TYPE_3__ *) malloc(_len_alink__i0__abm_q_lvls0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_alink__i0__abm_q_lvls0; _j0++) {
            alink[_i0].abm->q_lvls->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned long long benchRet = nfp_abm_q_lvl_thrs(alink,queue);
          printf("%llu\n", benchRet); 
          for(int _aux = 0; _aux < _len_alink0; _aux++) {
          free(alink[_aux].abm);
          }
          free(alink);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int queue = 10;
          int _len_alink0 = 100;
          struct nfp_abm_link * alink = (struct nfp_abm_link *) malloc(_len_alink0*sizeof(struct nfp_abm_link));
          for(int _i0 = 0; _i0 < _len_alink0; _i0++) {
            alink[_i0].queue_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alink__i0__abm0 = 1;
          alink[_i0].abm = (struct TYPE_4__ *) malloc(_len_alink__i0__abm0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_alink__i0__abm0; _j0++) {
              int _len_alink__i0__abm_q_lvls0 = 1;
          alink[_i0].abm->q_lvls = (struct TYPE_3__ *) malloc(_len_alink__i0__abm_q_lvls0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_alink__i0__abm_q_lvls0; _j0++) {
            alink[_i0].abm->q_lvls->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned long long benchRet = nfp_abm_q_lvl_thrs(alink,queue);
          printf("%llu\n", benchRet); 
          for(int _aux = 0; _aux < _len_alink0; _aux++) {
          free(alink[_aux].abm);
          }
          free(alink);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
