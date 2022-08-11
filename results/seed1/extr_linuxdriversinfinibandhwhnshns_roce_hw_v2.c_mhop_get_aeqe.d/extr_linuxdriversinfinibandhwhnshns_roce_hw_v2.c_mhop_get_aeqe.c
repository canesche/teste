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
typedef  int /*<<< orphan*/  u8 ;
typedef  int u32 ;
struct hns_roce_eq {int eqe_buf_pg_sz; int entries; scalar_t__ hop_num; scalar_t__* buf; scalar_t__ bt_l0; } ;
struct hns_roce_aeqe {int dummy; } ;

/* Variables and functions */
 int HNS_ROCE_AEQ_ENTRY_SIZE ; 
 scalar_t__ HNS_ROCE_HOP_NUM_0 ; 
 int PAGE_SHIFT ; 

__attribute__((used)) static struct hns_roce_aeqe *mhop_get_aeqe(struct hns_roce_eq *eq, u32 entry)
{
	u32 buf_chk_sz;
	unsigned long off;

	buf_chk_sz = 1 << (eq->eqe_buf_pg_sz + PAGE_SHIFT);

	off = (entry & (eq->entries - 1)) * HNS_ROCE_AEQ_ENTRY_SIZE;

	if (eq->hop_num == HNS_ROCE_HOP_NUM_0)
		return (struct hns_roce_aeqe *)((u8 *)(eq->bt_l0) +
			off % buf_chk_sz);
	else
		return (struct hns_roce_aeqe *)((u8 *)
			(eq->buf[off / buf_chk_sz]) + off % buf_chk_sz);
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
          int entry = 100;
          int _len_eq0 = 1;
          struct hns_roce_eq * eq = (struct hns_roce_eq *) malloc(_len_eq0*sizeof(struct hns_roce_eq));
          for(int _i0 = 0; _i0 < _len_eq0; _i0++) {
            eq[_i0].eqe_buf_pg_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        eq[_i0].entries = ((-2 * (next_i()%2)) + 1) * next_i();
        eq[_i0].hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eq__i0__buf0 = 1;
          eq[_i0].buf = (long *) malloc(_len_eq__i0__buf0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_eq__i0__buf0; _j0++) {
            eq[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        eq[_i0].bt_l0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct hns_roce_aeqe * benchRet = mhop_get_aeqe(eq,entry);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_eq0; _aux++) {
          free(eq[_aux].buf);
          }
          free(eq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int entry = 255;
          int _len_eq0 = 65025;
          struct hns_roce_eq * eq = (struct hns_roce_eq *) malloc(_len_eq0*sizeof(struct hns_roce_eq));
          for(int _i0 = 0; _i0 < _len_eq0; _i0++) {
            eq[_i0].eqe_buf_pg_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        eq[_i0].entries = ((-2 * (next_i()%2)) + 1) * next_i();
        eq[_i0].hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eq__i0__buf0 = 1;
          eq[_i0].buf = (long *) malloc(_len_eq__i0__buf0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_eq__i0__buf0; _j0++) {
            eq[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        eq[_i0].bt_l0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct hns_roce_aeqe * benchRet = mhop_get_aeqe(eq,entry);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_eq0; _aux++) {
          free(eq[_aux].buf);
          }
          free(eq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int entry = 10;
          int _len_eq0 = 100;
          struct hns_roce_eq * eq = (struct hns_roce_eq *) malloc(_len_eq0*sizeof(struct hns_roce_eq));
          for(int _i0 = 0; _i0 < _len_eq0; _i0++) {
            eq[_i0].eqe_buf_pg_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        eq[_i0].entries = ((-2 * (next_i()%2)) + 1) * next_i();
        eq[_i0].hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eq__i0__buf0 = 1;
          eq[_i0].buf = (long *) malloc(_len_eq__i0__buf0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_eq__i0__buf0; _j0++) {
            eq[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        eq[_i0].bt_l0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct hns_roce_aeqe * benchRet = mhop_get_aeqe(eq,entry);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_eq0; _aux++) {
          free(eq[_aux].buf);
          }
          free(eq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
