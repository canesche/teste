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
typedef  size_t u8 ;
struct qed_sb_sp_info {TYPE_1__* pi_info_arr; } ;
struct qed_hwfn {struct qed_sb_sp_info* p_sp_sb; } ;
struct TYPE_2__ {int /*<<< orphan*/ * cookie; int /*<<< orphan*/ * comp_cb; } ;

/* Variables and functions */
 int ENOMEM ; 

int qed_int_unregister_cb(struct qed_hwfn *p_hwfn, u8 pi)
{
	struct qed_sb_sp_info *p_sp_sb = p_hwfn->p_sp_sb;

	if (p_sp_sb->pi_info_arr[pi].comp_cb == NULL)
		return -ENOMEM;

	p_sp_sb->pi_info_arr[pi].comp_cb = NULL;
	p_sp_sb->pi_info_arr[pi].cookie = NULL;

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
          unsigned long pi = 100;
          int _len_p_hwfn0 = 1;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__p_sp_sb0 = 1;
          p_hwfn[_i0].p_sp_sb = (struct qed_sb_sp_info *) malloc(_len_p_hwfn__i0__p_sp_sb0*sizeof(struct qed_sb_sp_info));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_sp_sb0; _j0++) {
              int _len_p_hwfn__i0__p_sp_sb_pi_info_arr0 = 1;
          p_hwfn[_i0].p_sp_sb->pi_info_arr = (struct TYPE_2__ *) malloc(_len_p_hwfn__i0__p_sp_sb_pi_info_arr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_sp_sb_pi_info_arr0; _j0++) {
              int _len_p_hwfn__i0__p_sp_sb_pi_info_arr_cookie0 = 1;
          p_hwfn[_i0].p_sp_sb->pi_info_arr->cookie = (int *) malloc(_len_p_hwfn__i0__p_sp_sb_pi_info_arr_cookie0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_sp_sb_pi_info_arr_cookie0; _j0++) {
            p_hwfn[_i0].p_sp_sb->pi_info_arr->cookie[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_hwfn__i0__p_sp_sb_pi_info_arr_comp_cb0 = 1;
          p_hwfn[_i0].p_sp_sb->pi_info_arr->comp_cb = (int *) malloc(_len_p_hwfn__i0__p_sp_sb_pi_info_arr_comp_cb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_sp_sb_pi_info_arr_comp_cb0; _j0++) {
            p_hwfn[_i0].p_sp_sb->pi_info_arr->comp_cb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = qed_int_unregister_cb(p_hwfn,pi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p_hwfn0; _aux++) {
          free(p_hwfn[_aux].p_sp_sb);
          }
          free(p_hwfn);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long pi = 255;
          int _len_p_hwfn0 = 65025;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__p_sp_sb0 = 1;
          p_hwfn[_i0].p_sp_sb = (struct qed_sb_sp_info *) malloc(_len_p_hwfn__i0__p_sp_sb0*sizeof(struct qed_sb_sp_info));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_sp_sb0; _j0++) {
              int _len_p_hwfn__i0__p_sp_sb_pi_info_arr0 = 1;
          p_hwfn[_i0].p_sp_sb->pi_info_arr = (struct TYPE_2__ *) malloc(_len_p_hwfn__i0__p_sp_sb_pi_info_arr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_sp_sb_pi_info_arr0; _j0++) {
              int _len_p_hwfn__i0__p_sp_sb_pi_info_arr_cookie0 = 1;
          p_hwfn[_i0].p_sp_sb->pi_info_arr->cookie = (int *) malloc(_len_p_hwfn__i0__p_sp_sb_pi_info_arr_cookie0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_sp_sb_pi_info_arr_cookie0; _j0++) {
            p_hwfn[_i0].p_sp_sb->pi_info_arr->cookie[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_hwfn__i0__p_sp_sb_pi_info_arr_comp_cb0 = 1;
          p_hwfn[_i0].p_sp_sb->pi_info_arr->comp_cb = (int *) malloc(_len_p_hwfn__i0__p_sp_sb_pi_info_arr_comp_cb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_sp_sb_pi_info_arr_comp_cb0; _j0++) {
            p_hwfn[_i0].p_sp_sb->pi_info_arr->comp_cb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = qed_int_unregister_cb(p_hwfn,pi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p_hwfn0; _aux++) {
          free(p_hwfn[_aux].p_sp_sb);
          }
          free(p_hwfn);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long pi = 10;
          int _len_p_hwfn0 = 100;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__p_sp_sb0 = 1;
          p_hwfn[_i0].p_sp_sb = (struct qed_sb_sp_info *) malloc(_len_p_hwfn__i0__p_sp_sb0*sizeof(struct qed_sb_sp_info));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_sp_sb0; _j0++) {
              int _len_p_hwfn__i0__p_sp_sb_pi_info_arr0 = 1;
          p_hwfn[_i0].p_sp_sb->pi_info_arr = (struct TYPE_2__ *) malloc(_len_p_hwfn__i0__p_sp_sb_pi_info_arr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_sp_sb_pi_info_arr0; _j0++) {
              int _len_p_hwfn__i0__p_sp_sb_pi_info_arr_cookie0 = 1;
          p_hwfn[_i0].p_sp_sb->pi_info_arr->cookie = (int *) malloc(_len_p_hwfn__i0__p_sp_sb_pi_info_arr_cookie0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_sp_sb_pi_info_arr_cookie0; _j0++) {
            p_hwfn[_i0].p_sp_sb->pi_info_arr->cookie[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_hwfn__i0__p_sp_sb_pi_info_arr_comp_cb0 = 1;
          p_hwfn[_i0].p_sp_sb->pi_info_arr->comp_cb = (int *) malloc(_len_p_hwfn__i0__p_sp_sb_pi_info_arr_comp_cb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__p_sp_sb_pi_info_arr_comp_cb0; _j0++) {
            p_hwfn[_i0].p_sp_sb->pi_info_arr->comp_cb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = qed_int_unregister_cb(p_hwfn,pi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p_hwfn0; _aux++) {
          free(p_hwfn[_aux].p_sp_sb);
          }
          free(p_hwfn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
