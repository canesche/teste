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
typedef  size_t u32 ;
struct TYPE_2__ {size_t* init_val; int* b_valid; } ;
struct qed_hwfn {TYPE_1__ rt_data; } ;

/* Variables and functions */

void qed_init_store_rt_agg(struct qed_hwfn *p_hwfn,
			   u32 rt_offset, u32 *p_val, size_t size)
{
	size_t i;

	for (i = 0; i < size / sizeof(u32); i++) {
		p_hwfn->rt_data.init_val[rt_offset + i] = p_val[i];
		p_hwfn->rt_data.b_valid[rt_offset + i]	= true;
	}
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
          unsigned long rt_offset = 100;
          unsigned long size = 100;
          int _len_p_hwfn0 = 1;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__rt_data_init_val0 = 1;
          p_hwfn[_i0].rt_data.init_val = (unsigned long *) malloc(_len_p_hwfn__i0__rt_data_init_val0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__rt_data_init_val0; _j0++) {
            p_hwfn[_i0].rt_data.init_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_hwfn__i0__rt_data_b_valid0 = 1;
          p_hwfn[_i0].rt_data.b_valid = (int *) malloc(_len_p_hwfn__i0__rt_data_b_valid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__rt_data_b_valid0; _j0++) {
            p_hwfn[_i0].rt_data.b_valid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_p_val0 = 1;
          unsigned long * p_val = (unsigned long *) malloc(_len_p_val0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_p_val0; _i0++) {
            p_val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_init_store_rt_agg(p_hwfn,rt_offset,p_val,size);
          free(p_hwfn);
          free(p_val);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long rt_offset = 255;
          unsigned long size = 255;
          int _len_p_hwfn0 = 65025;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__rt_data_init_val0 = 1;
          p_hwfn[_i0].rt_data.init_val = (unsigned long *) malloc(_len_p_hwfn__i0__rt_data_init_val0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__rt_data_init_val0; _j0++) {
            p_hwfn[_i0].rt_data.init_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_hwfn__i0__rt_data_b_valid0 = 1;
          p_hwfn[_i0].rt_data.b_valid = (int *) malloc(_len_p_hwfn__i0__rt_data_b_valid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__rt_data_b_valid0; _j0++) {
            p_hwfn[_i0].rt_data.b_valid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_p_val0 = 65025;
          unsigned long * p_val = (unsigned long *) malloc(_len_p_val0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_p_val0; _i0++) {
            p_val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_init_store_rt_agg(p_hwfn,rt_offset,p_val,size);
          free(p_hwfn);
          free(p_val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long rt_offset = 10;
          unsigned long size = 10;
          int _len_p_hwfn0 = 100;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__rt_data_init_val0 = 1;
          p_hwfn[_i0].rt_data.init_val = (unsigned long *) malloc(_len_p_hwfn__i0__rt_data_init_val0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__rt_data_init_val0; _j0++) {
            p_hwfn[_i0].rt_data.init_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_hwfn__i0__rt_data_b_valid0 = 1;
          p_hwfn[_i0].rt_data.b_valid = (int *) malloc(_len_p_hwfn__i0__rt_data_b_valid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__rt_data_b_valid0; _j0++) {
            p_hwfn[_i0].rt_data.b_valid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_p_val0 = 100;
          unsigned long * p_val = (unsigned long *) malloc(_len_p_val0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_p_val0; _i0++) {
            p_val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_init_store_rt_agg(p_hwfn,rt_offset,p_val,size);
          free(p_hwfn);
          free(p_val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
