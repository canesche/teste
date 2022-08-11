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
typedef  int /*<<< orphan*/  u8 ;
typedef  int u32 ;
struct hns_roce_eq {int entries; TYPE_1__* buf_list; } ;
struct hns_roce_ceqe {int dummy; } ;
struct TYPE_2__ {scalar_t__ buf; } ;

/* Variables and functions */
 unsigned long HNS_ROCE_BA_SIZE ; 
 int HNS_ROCE_CEQ_ENTRY_SIZE ; 

__attribute__((used)) static struct hns_roce_ceqe *get_ceqe_v1(struct hns_roce_eq *eq, u32 entry)
{
	unsigned long off = (entry & (eq->entries - 1)) *
			     HNS_ROCE_CEQ_ENTRY_SIZE;

	return (struct hns_roce_ceqe *)((u8 *)
			(eq->buf_list[off / HNS_ROCE_BA_SIZE].buf) +
			off % HNS_ROCE_BA_SIZE);
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
            eq[_i0].entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eq__i0__buf_list0 = 1;
          eq[_i0].buf_list = (struct TYPE_2__ *) malloc(_len_eq__i0__buf_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_eq__i0__buf_list0; _j0++) {
            eq[_i0].buf_list->buf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct hns_roce_ceqe * benchRet = get_ceqe_v1(eq,entry);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_eq0; _aux++) {
          free(eq[_aux].buf_list);
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
            eq[_i0].entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eq__i0__buf_list0 = 1;
          eq[_i0].buf_list = (struct TYPE_2__ *) malloc(_len_eq__i0__buf_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_eq__i0__buf_list0; _j0++) {
            eq[_i0].buf_list->buf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct hns_roce_ceqe * benchRet = get_ceqe_v1(eq,entry);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_eq0; _aux++) {
          free(eq[_aux].buf_list);
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
            eq[_i0].entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eq__i0__buf_list0 = 1;
          eq[_i0].buf_list = (struct TYPE_2__ *) malloc(_len_eq__i0__buf_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_eq__i0__buf_list0; _j0++) {
            eq[_i0].buf_list->buf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct hns_roce_ceqe * benchRet = get_ceqe_v1(eq,entry);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_eq0; _aux++) {
          free(eq[_aux].buf_list);
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
