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
struct il_scale_tbl_info {int /*<<< orphan*/ * expected_tpt; } ;
typedef  int /*<<< orphan*/  s32 ;

/* Variables and functions */

__attribute__((used)) static s32
il4965_get_expected_tpt(struct il_scale_tbl_info *tbl, int rs_idx)
{
	if (tbl->expected_tpt)
		return tbl->expected_tpt[rs_idx];
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
          int rs_idx = 100;
          int _len_tbl0 = 1;
          struct il_scale_tbl_info * tbl = (struct il_scale_tbl_info *) malloc(_len_tbl0*sizeof(struct il_scale_tbl_info));
          for(int _i0 = 0; _i0 < _len_tbl0; _i0++) {
              int _len_tbl__i0__expected_tpt0 = 1;
          tbl[_i0].expected_tpt = (int *) malloc(_len_tbl__i0__expected_tpt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tbl__i0__expected_tpt0; _j0++) {
            tbl[_i0].expected_tpt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = il4965_get_expected_tpt(tbl,rs_idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tbl0; _aux++) {
          free(tbl[_aux].expected_tpt);
          }
          free(tbl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int rs_idx = 255;
          int _len_tbl0 = 65025;
          struct il_scale_tbl_info * tbl = (struct il_scale_tbl_info *) malloc(_len_tbl0*sizeof(struct il_scale_tbl_info));
          for(int _i0 = 0; _i0 < _len_tbl0; _i0++) {
              int _len_tbl__i0__expected_tpt0 = 1;
          tbl[_i0].expected_tpt = (int *) malloc(_len_tbl__i0__expected_tpt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tbl__i0__expected_tpt0; _j0++) {
            tbl[_i0].expected_tpt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = il4965_get_expected_tpt(tbl,rs_idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tbl0; _aux++) {
          free(tbl[_aux].expected_tpt);
          }
          free(tbl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int rs_idx = 10;
          int _len_tbl0 = 100;
          struct il_scale_tbl_info * tbl = (struct il_scale_tbl_info *) malloc(_len_tbl0*sizeof(struct il_scale_tbl_info));
          for(int _i0 = 0; _i0 < _len_tbl0; _i0++) {
              int _len_tbl__i0__expected_tpt0 = 1;
          tbl[_i0].expected_tpt = (int *) malloc(_len_tbl__i0__expected_tpt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tbl__i0__expected_tpt0; _j0++) {
            tbl[_i0].expected_tpt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = il4965_get_expected_tpt(tbl,rs_idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tbl0; _aux++) {
          free(tbl[_aux].expected_tpt);
          }
          free(tbl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
