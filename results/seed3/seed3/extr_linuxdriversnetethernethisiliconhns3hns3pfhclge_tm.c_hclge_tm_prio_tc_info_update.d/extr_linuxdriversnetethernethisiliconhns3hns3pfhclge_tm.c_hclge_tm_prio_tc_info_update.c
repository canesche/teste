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
typedef  scalar_t__ u8 ;
typedef  size_t u32 ;
struct hnae3_knic_private_info {scalar_t__* prio_tc; } ;
struct TYPE_4__ {struct hnae3_knic_private_info kinfo; } ;
struct hclge_vport {TYPE_2__ nic; } ;
struct TYPE_3__ {scalar_t__ num_tc; scalar_t__* prio_tc; } ;
struct hclge_dev {size_t num_alloc_vport; TYPE_1__ tm_info; struct hclge_vport* vport; } ;

/* Variables and functions */
 int EINVAL ; 
 size_t HNAE3_MAX_USER_PRIO ; 

int hclge_tm_prio_tc_info_update(struct hclge_dev *hdev, u8 *prio_tc)
{
	struct hclge_vport *vport = hdev->vport;
	struct hnae3_knic_private_info *kinfo;
	u32 i, k;

	for (i = 0; i < HNAE3_MAX_USER_PRIO; i++) {
		if (prio_tc[i] >= hdev->tm_info.num_tc)
			return -EINVAL;
		hdev->tm_info.prio_tc[i] = prio_tc[i];

		for (k = 0;  k < hdev->num_alloc_vport; k++) {
			kinfo = &vport[k].nic.kinfo;
			kinfo->prio_tc[i] = prio_tc[i];
		}
	}
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
          int _len_hdev0 = 1;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].num_alloc_vport = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev[_i0].tm_info.num_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_prio_tc0 = 1;
          hdev[_i0].tm_info.prio_tc = (long *) malloc(_len_hdev__i0__tm_info_prio_tc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_prio_tc0; _j0++) {
            hdev[_i0].tm_info.prio_tc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hdev__i0__vport0 = 1;
          hdev[_i0].vport = (struct hclge_vport *) malloc(_len_hdev__i0__vport0*sizeof(struct hclge_vport));
          for(int _j0 = 0; _j0 < _len_hdev__i0__vport0; _j0++) {
              int _len_hdev__i0__vport_nic_kinfo_prio_tc0 = 1;
          hdev[_i0].vport->nic.kinfo.prio_tc = (long *) malloc(_len_hdev__i0__vport_nic_kinfo_prio_tc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_hdev__i0__vport_nic_kinfo_prio_tc0; _j0++) {
            hdev[_i0].vport->nic.kinfo.prio_tc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_prio_tc0 = 1;
          long * prio_tc = (long *) malloc(_len_prio_tc0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_prio_tc0; _i0++) {
            prio_tc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclge_tm_prio_tc_info_update(hdev,prio_tc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdev0; _aux++) {
          free(hdev[_aux].vport);
          }
          free(hdev);
          free(prio_tc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hdev0 = 65025;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].num_alloc_vport = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev[_i0].tm_info.num_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_prio_tc0 = 1;
          hdev[_i0].tm_info.prio_tc = (long *) malloc(_len_hdev__i0__tm_info_prio_tc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_prio_tc0; _j0++) {
            hdev[_i0].tm_info.prio_tc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hdev__i0__vport0 = 1;
          hdev[_i0].vport = (struct hclge_vport *) malloc(_len_hdev__i0__vport0*sizeof(struct hclge_vport));
          for(int _j0 = 0; _j0 < _len_hdev__i0__vport0; _j0++) {
              int _len_hdev__i0__vport_nic_kinfo_prio_tc0 = 1;
          hdev[_i0].vport->nic.kinfo.prio_tc = (long *) malloc(_len_hdev__i0__vport_nic_kinfo_prio_tc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_hdev__i0__vport_nic_kinfo_prio_tc0; _j0++) {
            hdev[_i0].vport->nic.kinfo.prio_tc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_prio_tc0 = 65025;
          long * prio_tc = (long *) malloc(_len_prio_tc0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_prio_tc0; _i0++) {
            prio_tc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclge_tm_prio_tc_info_update(hdev,prio_tc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdev0; _aux++) {
          free(hdev[_aux].vport);
          }
          free(hdev);
          free(prio_tc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hdev0 = 100;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].num_alloc_vport = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev[_i0].tm_info.num_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_prio_tc0 = 1;
          hdev[_i0].tm_info.prio_tc = (long *) malloc(_len_hdev__i0__tm_info_prio_tc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_prio_tc0; _j0++) {
            hdev[_i0].tm_info.prio_tc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hdev__i0__vport0 = 1;
          hdev[_i0].vport = (struct hclge_vport *) malloc(_len_hdev__i0__vport0*sizeof(struct hclge_vport));
          for(int _j0 = 0; _j0 < _len_hdev__i0__vport0; _j0++) {
              int _len_hdev__i0__vport_nic_kinfo_prio_tc0 = 1;
          hdev[_i0].vport->nic.kinfo.prio_tc = (long *) malloc(_len_hdev__i0__vport_nic_kinfo_prio_tc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_hdev__i0__vport_nic_kinfo_prio_tc0; _j0++) {
            hdev[_i0].vport->nic.kinfo.prio_tc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_prio_tc0 = 100;
          long * prio_tc = (long *) malloc(_len_prio_tc0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_prio_tc0; _i0++) {
            prio_tc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclge_tm_prio_tc_info_update(hdev,prio_tc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdev0; _aux++) {
          free(hdev[_aux].vport);
          }
          free(hdev);
          free(prio_tc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
