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
struct TYPE_2__ {size_t* prio_tc; size_t num_tc; } ;
struct hclge_dev {TYPE_1__ tm_info; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int hclge_fill_pri_array(struct hclge_dev *hdev, u8 *pri, u8 pri_id)
{
	u8 tc;

	tc = hdev->tm_info.prio_tc[pri_id];

	if (tc >= hdev->tm_info.num_tc)
		return -EINVAL;

	/**
	 * the register for priority has four bytes, the first bytes includes
	 *  priority0 and priority1, the higher 4bit stands for priority1
	 *  while the lower 4bit stands for priority0, as below:
	 * first byte:	| pri_1 | pri_0 |
	 * second byte:	| pri_3 | pri_2 |
	 * third byte:	| pri_5 | pri_4 |
	 * fourth byte:	| pri_7 | pri_6 |
	 */
	pri[pri_id >> 1] |= tc << ((pri_id & 1) * 4);

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
          unsigned long pri_id = 100;
          int _len_hdev0 = 1;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
              int _len_hdev__i0__tm_info_prio_tc0 = 1;
          hdev[_i0].tm_info.prio_tc = (unsigned long *) malloc(_len_hdev__i0__tm_info_prio_tc0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_prio_tc0; _j0++) {
            hdev[_i0].tm_info.prio_tc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].tm_info.num_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pri0 = 1;
          unsigned long * pri = (unsigned long *) malloc(_len_pri0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pri0; _i0++) {
            pri[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclge_fill_pri_array(hdev,pri,pri_id);
          printf("%d\n", benchRet); 
          free(hdev);
          free(pri);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long pri_id = 255;
          int _len_hdev0 = 65025;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
              int _len_hdev__i0__tm_info_prio_tc0 = 1;
          hdev[_i0].tm_info.prio_tc = (unsigned long *) malloc(_len_hdev__i0__tm_info_prio_tc0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_prio_tc0; _j0++) {
            hdev[_i0].tm_info.prio_tc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].tm_info.num_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pri0 = 65025;
          unsigned long * pri = (unsigned long *) malloc(_len_pri0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pri0; _i0++) {
            pri[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclge_fill_pri_array(hdev,pri,pri_id);
          printf("%d\n", benchRet); 
          free(hdev);
          free(pri);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long pri_id = 10;
          int _len_hdev0 = 100;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
              int _len_hdev__i0__tm_info_prio_tc0 = 1;
          hdev[_i0].tm_info.prio_tc = (unsigned long *) malloc(_len_hdev__i0__tm_info_prio_tc0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_prio_tc0; _j0++) {
            hdev[_i0].tm_info.prio_tc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].tm_info.num_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pri0 = 100;
          unsigned long * pri = (unsigned long *) malloc(_len_pri0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pri0; _i0++) {
            pri[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclge_fill_pri_array(hdev,pri,pri_id);
          printf("%d\n", benchRet); 
          free(hdev);
          free(pri);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
