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
typedef  size_t u8 ;
struct TYPE_4__ {size_t num_pg; int* pg_dwrr; int num_tc; TYPE_1__* pg_info; } ;
struct hclge_dev {TYPE_2__ tm_info; int /*<<< orphan*/  hw_tc_map; } ;
struct TYPE_3__ {size_t pg_id; int* tc_dwrr; int /*<<< orphan*/  tc_bit_map; int /*<<< orphan*/  bw_limit; int /*<<< orphan*/  pg_sch_mode; } ;

/* Variables and functions */
 int /*<<< orphan*/  HCLGE_ETHER_MAX_RATE ; 
 int /*<<< orphan*/  HCLGE_SCH_MODE_DWRR ; 

__attribute__((used)) static void hclge_tm_pg_info_init(struct hclge_dev *hdev)
{
	u8 i;

	for (i = 0; i < hdev->tm_info.num_pg; i++) {
		int k;

		hdev->tm_info.pg_dwrr[i] = i ? 0 : 100;

		hdev->tm_info.pg_info[i].pg_id = i;
		hdev->tm_info.pg_info[i].pg_sch_mode = HCLGE_SCH_MODE_DWRR;

		hdev->tm_info.pg_info[i].bw_limit = HCLGE_ETHER_MAX_RATE;

		if (i != 0)
			continue;

		hdev->tm_info.pg_info[i].tc_bit_map = hdev->hw_tc_map;
		for (k = 0; k < hdev->tm_info.num_tc; k++)
			hdev->tm_info.pg_info[i].tc_dwrr[k] = 100;
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
          int _len_hdev0 = 1;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].tm_info.num_pg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_pg_dwrr0 = 1;
          hdev[_i0].tm_info.pg_dwrr = (int *) malloc(_len_hdev__i0__tm_info_pg_dwrr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_pg_dwrr0; _j0++) {
            hdev[_i0].tm_info.pg_dwrr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].tm_info.num_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_pg_info0 = 1;
          hdev[_i0].tm_info.pg_info = (struct TYPE_3__ *) malloc(_len_hdev__i0__tm_info_pg_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_pg_info0; _j0++) {
            hdev[_i0].tm_info.pg_info->pg_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_pg_info_tc_dwrr0 = 1;
          hdev[_i0].tm_info.pg_info->tc_dwrr = (int *) malloc(_len_hdev__i0__tm_info_pg_info_tc_dwrr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_pg_info_tc_dwrr0; _j0++) {
            hdev[_i0].tm_info.pg_info->tc_dwrr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].tm_info.pg_info->tc_bit_map = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev[_i0].tm_info.pg_info->bw_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev[_i0].tm_info.pg_info->pg_sch_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].hw_tc_map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hclge_tm_pg_info_init(hdev);
          free(hdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hdev0 = 65025;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].tm_info.num_pg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_pg_dwrr0 = 1;
          hdev[_i0].tm_info.pg_dwrr = (int *) malloc(_len_hdev__i0__tm_info_pg_dwrr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_pg_dwrr0; _j0++) {
            hdev[_i0].tm_info.pg_dwrr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].tm_info.num_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_pg_info0 = 1;
          hdev[_i0].tm_info.pg_info = (struct TYPE_3__ *) malloc(_len_hdev__i0__tm_info_pg_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_pg_info0; _j0++) {
            hdev[_i0].tm_info.pg_info->pg_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_pg_info_tc_dwrr0 = 1;
          hdev[_i0].tm_info.pg_info->tc_dwrr = (int *) malloc(_len_hdev__i0__tm_info_pg_info_tc_dwrr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_pg_info_tc_dwrr0; _j0++) {
            hdev[_i0].tm_info.pg_info->tc_dwrr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].tm_info.pg_info->tc_bit_map = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev[_i0].tm_info.pg_info->bw_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev[_i0].tm_info.pg_info->pg_sch_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].hw_tc_map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hclge_tm_pg_info_init(hdev);
          free(hdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hdev0 = 100;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].tm_info.num_pg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_pg_dwrr0 = 1;
          hdev[_i0].tm_info.pg_dwrr = (int *) malloc(_len_hdev__i0__tm_info_pg_dwrr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_pg_dwrr0; _j0++) {
            hdev[_i0].tm_info.pg_dwrr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].tm_info.num_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_pg_info0 = 1;
          hdev[_i0].tm_info.pg_info = (struct TYPE_3__ *) malloc(_len_hdev__i0__tm_info_pg_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_pg_info0; _j0++) {
            hdev[_i0].tm_info.pg_info->pg_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_pg_info_tc_dwrr0 = 1;
          hdev[_i0].tm_info.pg_info->tc_dwrr = (int *) malloc(_len_hdev__i0__tm_info_pg_info_tc_dwrr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_pg_info_tc_dwrr0; _j0++) {
            hdev[_i0].tm_info.pg_info->tc_dwrr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].tm_info.pg_info->tc_bit_map = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev[_i0].tm_info.pg_info->bw_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev[_i0].tm_info.pg_info->pg_sch_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].hw_tc_map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hclge_tm_pg_info_init(hdev);
          free(hdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
