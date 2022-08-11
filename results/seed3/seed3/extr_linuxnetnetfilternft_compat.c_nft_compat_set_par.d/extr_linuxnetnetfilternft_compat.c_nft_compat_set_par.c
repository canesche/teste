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
struct xt_action_param {int hotdrop; void const* targinfo; void* target; } ;

/* Variables and functions */

__attribute__((used)) static inline void
nft_compat_set_par(struct xt_action_param *par, void *xt, const void *xt_info)
{
	par->target	= xt;
	par->targinfo	= xt_info;
	par->hotdrop	= false;
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
          int _len_par0 = 1;
          struct xt_action_param * par = (struct xt_action_param *) malloc(_len_par0*sizeof(struct xt_action_param));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].hotdrop = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_par__i0__targinfo0 = 1;
          par[_i0].targinfo = (const void *) malloc(_len_par__i0__targinfo0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_par__i0__targinfo0; _j0++) {
            par[_i0].targinfo[_j0] = 0;
          }
          }
          void * xt;
          int _len_xt_info0 = 1;
          const void * xt_info = (const void *) malloc(_len_xt_info0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_xt_info0; _i0++) {
            xt_info[_i0] = 0;
          }
          nft_compat_set_par(par,xt,xt_info);
          free(par);
          free(xt_info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_par0 = 65025;
          struct xt_action_param * par = (struct xt_action_param *) malloc(_len_par0*sizeof(struct xt_action_param));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].hotdrop = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_par__i0__targinfo0 = 1;
          par[_i0].targinfo = (const void *) malloc(_len_par__i0__targinfo0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_par__i0__targinfo0; _j0++) {
            par[_i0].targinfo[_j0] = 0;
          }
          }
          void * xt;
          int _len_xt_info0 = 65025;
          const void * xt_info = (const void *) malloc(_len_xt_info0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_xt_info0; _i0++) {
            xt_info[_i0] = 0;
          }
          nft_compat_set_par(par,xt,xt_info);
          free(par);
          free(xt_info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_par0 = 100;
          struct xt_action_param * par = (struct xt_action_param *) malloc(_len_par0*sizeof(struct xt_action_param));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].hotdrop = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_par__i0__targinfo0 = 1;
          par[_i0].targinfo = (const void *) malloc(_len_par__i0__targinfo0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_par__i0__targinfo0; _j0++) {
            par[_i0].targinfo[_j0] = 0;
          }
          }
          void * xt;
          int _len_xt_info0 = 100;
          const void * xt_info = (const void *) malloc(_len_xt_info0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_xt_info0; _i0++) {
            xt_info[_i0] = 0;
          }
          nft_compat_set_par(par,xt,xt_info);
          free(par);
          free(xt_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
