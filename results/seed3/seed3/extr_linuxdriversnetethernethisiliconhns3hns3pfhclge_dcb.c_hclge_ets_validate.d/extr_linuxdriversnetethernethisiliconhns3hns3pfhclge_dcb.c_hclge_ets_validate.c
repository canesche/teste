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
typedef  scalar_t__ u32 ;
struct ieee_ets {scalar_t__* prio_tc; int* tc_tsa; int /*<<< orphan*/ * tc_tx_bw; } ;
struct TYPE_4__ {scalar_t__* prio_tc; size_t num_tc; TYPE_1__* tc_info; } ;
struct hclge_dev {scalar_t__ tc_max; TYPE_2__ tm_info; } ;
struct TYPE_3__ {int /*<<< orphan*/  tc_sch_mode; } ;

/* Variables and functions */
 scalar_t__ BW_PERCENT ; 
 int EINVAL ; 
 int /*<<< orphan*/  HCLGE_SCH_MODE_DWRR ; 
 int /*<<< orphan*/  HCLGE_SCH_MODE_SP ; 
 size_t HNAE3_MAX_TC ; 
#define  IEEE_8021QAZ_TSA_ETS 129 
#define  IEEE_8021QAZ_TSA_STRICT 128 

__attribute__((used)) static int hclge_ets_validate(struct hclge_dev *hdev, struct ieee_ets *ets,
			      u8 *tc, bool *changed)
{
	bool has_ets_tc = false;
	u32 total_ets_bw = 0;
	u8 max_tc = 0;
	u8 i;

	for (i = 0; i < HNAE3_MAX_TC; i++) {
		if (ets->prio_tc[i] >= hdev->tc_max ||
		    i >= hdev->tc_max)
			return -EINVAL;

		if (ets->prio_tc[i] != hdev->tm_info.prio_tc[i])
			*changed = true;

		if (ets->prio_tc[i] > max_tc)
			max_tc = ets->prio_tc[i];

		switch (ets->tc_tsa[i]) {
		case IEEE_8021QAZ_TSA_STRICT:
			if (hdev->tm_info.tc_info[i].tc_sch_mode !=
				HCLGE_SCH_MODE_SP)
				*changed = true;
			break;
		case IEEE_8021QAZ_TSA_ETS:
			if (hdev->tm_info.tc_info[i].tc_sch_mode !=
				HCLGE_SCH_MODE_DWRR)
				*changed = true;

			total_ets_bw += ets->tc_tx_bw[i];
			has_ets_tc = true;
			break;
		default:
			return -EINVAL;
		}
	}

	if (has_ets_tc && total_ets_bw != BW_PERCENT)
		return -EINVAL;

	*tc = max_tc + 1;
	if (*tc != hdev->tm_info.num_tc)
		*changed = true;

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
            hdev[_i0].tc_max = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_prio_tc0 = 1;
          hdev[_i0].tm_info.prio_tc = (long *) malloc(_len_hdev__i0__tm_info_prio_tc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_prio_tc0; _j0++) {
            hdev[_i0].tm_info.prio_tc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].tm_info.num_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_tc_info0 = 1;
          hdev[_i0].tm_info.tc_info = (struct TYPE_3__ *) malloc(_len_hdev__i0__tm_info_tc_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_tc_info0; _j0++) {
            hdev[_i0].tm_info.tc_info->tc_sch_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ets0 = 1;
          struct ieee_ets * ets = (struct ieee_ets *) malloc(_len_ets0*sizeof(struct ieee_ets));
          for(int _i0 = 0; _i0 < _len_ets0; _i0++) {
              int _len_ets__i0__prio_tc0 = 1;
          ets[_i0].prio_tc = (long *) malloc(_len_ets__i0__prio_tc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ets__i0__prio_tc0; _j0++) {
            ets[_i0].prio_tc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ets__i0__tc_tsa0 = 1;
          ets[_i0].tc_tsa = (int *) malloc(_len_ets__i0__tc_tsa0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ets__i0__tc_tsa0; _j0++) {
            ets[_i0].tc_tsa[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ets__i0__tc_tx_bw0 = 1;
          ets[_i0].tc_tx_bw = (int *) malloc(_len_ets__i0__tc_tx_bw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ets__i0__tc_tx_bw0; _j0++) {
            ets[_i0].tc_tx_bw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tc0 = 1;
          unsigned long * tc = (unsigned long *) malloc(_len_tc0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_tc0; _i0++) {
            tc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_changed0 = 1;
          int * changed = (int *) malloc(_len_changed0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_changed0; _i0++) {
            changed[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclge_ets_validate(hdev,ets,tc,changed);
          printf("%d\n", benchRet); 
          free(hdev);
          for(int _aux = 0; _aux < _len_ets0; _aux++) {
          free(ets[_aux].prio_tc);
          }
          for(int _aux = 0; _aux < _len_ets0; _aux++) {
          free(ets[_aux].tc_tsa);
          }
          for(int _aux = 0; _aux < _len_ets0; _aux++) {
          free(ets[_aux].tc_tx_bw);
          }
          free(ets);
          free(tc);
          free(changed);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hdev0 = 65025;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].tc_max = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_prio_tc0 = 1;
          hdev[_i0].tm_info.prio_tc = (long *) malloc(_len_hdev__i0__tm_info_prio_tc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_prio_tc0; _j0++) {
            hdev[_i0].tm_info.prio_tc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].tm_info.num_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_tc_info0 = 1;
          hdev[_i0].tm_info.tc_info = (struct TYPE_3__ *) malloc(_len_hdev__i0__tm_info_tc_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_tc_info0; _j0++) {
            hdev[_i0].tm_info.tc_info->tc_sch_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ets0 = 65025;
          struct ieee_ets * ets = (struct ieee_ets *) malloc(_len_ets0*sizeof(struct ieee_ets));
          for(int _i0 = 0; _i0 < _len_ets0; _i0++) {
              int _len_ets__i0__prio_tc0 = 1;
          ets[_i0].prio_tc = (long *) malloc(_len_ets__i0__prio_tc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ets__i0__prio_tc0; _j0++) {
            ets[_i0].prio_tc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ets__i0__tc_tsa0 = 1;
          ets[_i0].tc_tsa = (int *) malloc(_len_ets__i0__tc_tsa0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ets__i0__tc_tsa0; _j0++) {
            ets[_i0].tc_tsa[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ets__i0__tc_tx_bw0 = 1;
          ets[_i0].tc_tx_bw = (int *) malloc(_len_ets__i0__tc_tx_bw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ets__i0__tc_tx_bw0; _j0++) {
            ets[_i0].tc_tx_bw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tc0 = 65025;
          unsigned long * tc = (unsigned long *) malloc(_len_tc0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_tc0; _i0++) {
            tc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_changed0 = 65025;
          int * changed = (int *) malloc(_len_changed0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_changed0; _i0++) {
            changed[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclge_ets_validate(hdev,ets,tc,changed);
          printf("%d\n", benchRet); 
          free(hdev);
          for(int _aux = 0; _aux < _len_ets0; _aux++) {
          free(ets[_aux].prio_tc);
          }
          for(int _aux = 0; _aux < _len_ets0; _aux++) {
          free(ets[_aux].tc_tsa);
          }
          for(int _aux = 0; _aux < _len_ets0; _aux++) {
          free(ets[_aux].tc_tx_bw);
          }
          free(ets);
          free(tc);
          free(changed);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hdev0 = 100;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].tc_max = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_prio_tc0 = 1;
          hdev[_i0].tm_info.prio_tc = (long *) malloc(_len_hdev__i0__tm_info_prio_tc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_prio_tc0; _j0++) {
            hdev[_i0].tm_info.prio_tc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdev[_i0].tm_info.num_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__tm_info_tc_info0 = 1;
          hdev[_i0].tm_info.tc_info = (struct TYPE_3__ *) malloc(_len_hdev__i0__tm_info_tc_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_hdev__i0__tm_info_tc_info0; _j0++) {
            hdev[_i0].tm_info.tc_info->tc_sch_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ets0 = 100;
          struct ieee_ets * ets = (struct ieee_ets *) malloc(_len_ets0*sizeof(struct ieee_ets));
          for(int _i0 = 0; _i0 < _len_ets0; _i0++) {
              int _len_ets__i0__prio_tc0 = 1;
          ets[_i0].prio_tc = (long *) malloc(_len_ets__i0__prio_tc0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ets__i0__prio_tc0; _j0++) {
            ets[_i0].prio_tc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ets__i0__tc_tsa0 = 1;
          ets[_i0].tc_tsa = (int *) malloc(_len_ets__i0__tc_tsa0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ets__i0__tc_tsa0; _j0++) {
            ets[_i0].tc_tsa[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ets__i0__tc_tx_bw0 = 1;
          ets[_i0].tc_tx_bw = (int *) malloc(_len_ets__i0__tc_tx_bw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ets__i0__tc_tx_bw0; _j0++) {
            ets[_i0].tc_tx_bw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tc0 = 100;
          unsigned long * tc = (unsigned long *) malloc(_len_tc0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_tc0; _i0++) {
            tc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_changed0 = 100;
          int * changed = (int *) malloc(_len_changed0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_changed0; _i0++) {
            changed[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclge_ets_validate(hdev,ets,tc,changed);
          printf("%d\n", benchRet); 
          free(hdev);
          for(int _aux = 0; _aux < _len_ets0; _aux++) {
          free(ets[_aux].prio_tc);
          }
          for(int _aux = 0; _aux < _len_ets0; _aux++) {
          free(ets[_aux].tc_tsa);
          }
          for(int _aux = 0; _aux < _len_ets0; _aux++) {
          free(ets[_aux].tc_tx_bw);
          }
          free(ets);
          free(tc);
          free(changed);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
