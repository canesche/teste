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
struct mlme_ext_info {TYPE_1__* FW_sta_info; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;
struct TYPE_2__ {int status; scalar_t__ retry; } ;

/* Variables and functions */
 unsigned int IBSS_START_MAC_ID ; 
 unsigned int NUM_STA ; 

int allocate_fw_sta_entry(struct adapter *padapter)
{
	unsigned int mac_id;
	struct mlme_ext_priv	*pmlmeext = &padapter->mlmeextpriv;
	struct mlme_ext_info	*pmlmeinfo = &(pmlmeext->mlmext_info);

	for (mac_id = IBSS_START_MAC_ID; mac_id < NUM_STA; mac_id++) {
		if (pmlmeinfo->FW_sta_info[mac_id].status == 0) {
			pmlmeinfo->FW_sta_info[mac_id].status = 1;
			pmlmeinfo->FW_sta_info[mac_id].retry = 0;
			break;
		}
	}

	return mac_id;
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
          int _len_padapter0 = 1;
          struct adapter * padapter = (struct adapter *) malloc(_len_padapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
              int _len_padapter__i0__mlmeextpriv_mlmext_info_FW_sta_info0 = 1;
          padapter[_i0].mlmeextpriv.mlmext_info.FW_sta_info = (struct TYPE_2__ *) malloc(_len_padapter__i0__mlmeextpriv_mlmext_info_FW_sta_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_padapter__i0__mlmeextpriv_mlmext_info_FW_sta_info0; _j0++) {
            padapter[_i0].mlmeextpriv.mlmext_info.FW_sta_info->status = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.mlmext_info.FW_sta_info->retry = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = allocate_fw_sta_entry(padapter);
          printf("%d\n", benchRet); 
          free(padapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_padapter0 = 65025;
          struct adapter * padapter = (struct adapter *) malloc(_len_padapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
              int _len_padapter__i0__mlmeextpriv_mlmext_info_FW_sta_info0 = 1;
          padapter[_i0].mlmeextpriv.mlmext_info.FW_sta_info = (struct TYPE_2__ *) malloc(_len_padapter__i0__mlmeextpriv_mlmext_info_FW_sta_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_padapter__i0__mlmeextpriv_mlmext_info_FW_sta_info0; _j0++) {
            padapter[_i0].mlmeextpriv.mlmext_info.FW_sta_info->status = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.mlmext_info.FW_sta_info->retry = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = allocate_fw_sta_entry(padapter);
          printf("%d\n", benchRet); 
          free(padapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_padapter0 = 100;
          struct adapter * padapter = (struct adapter *) malloc(_len_padapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
              int _len_padapter__i0__mlmeextpriv_mlmext_info_FW_sta_info0 = 1;
          padapter[_i0].mlmeextpriv.mlmext_info.FW_sta_info = (struct TYPE_2__ *) malloc(_len_padapter__i0__mlmeextpriv_mlmext_info_FW_sta_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_padapter__i0__mlmeextpriv_mlmext_info_FW_sta_info0; _j0++) {
            padapter[_i0].mlmeextpriv.mlmext_info.FW_sta_info->status = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.mlmext_info.FW_sta_info->retry = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = allocate_fw_sta_entry(padapter);
          printf("%d\n", benchRet); 
          free(padapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
