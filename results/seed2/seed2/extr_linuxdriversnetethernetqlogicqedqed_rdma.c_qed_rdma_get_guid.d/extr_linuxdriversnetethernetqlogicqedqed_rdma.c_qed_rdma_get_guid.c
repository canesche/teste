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
typedef  int u8 ;
struct TYPE_2__ {int* hw_mac_addr; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;

/* Variables and functions */

__attribute__((used)) static void qed_rdma_get_guid(struct qed_hwfn *p_hwfn, u8 *guid)
{
	guid[0] = p_hwfn->hw_info.hw_mac_addr[0] ^ 2;
	guid[1] = p_hwfn->hw_info.hw_mac_addr[1];
	guid[2] = p_hwfn->hw_info.hw_mac_addr[2];
	guid[3] = 0xff;
	guid[4] = 0xfe;
	guid[5] = p_hwfn->hw_info.hw_mac_addr[3];
	guid[6] = p_hwfn->hw_info.hw_mac_addr[4];
	guid[7] = p_hwfn->hw_info.hw_mac_addr[5];
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
          int _len_p_hwfn0 = 1;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__hw_info_hw_mac_addr0 = 1;
          p_hwfn[_i0].hw_info.hw_mac_addr = (int *) malloc(_len_p_hwfn__i0__hw_info_hw_mac_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__hw_info_hw_mac_addr0; _j0++) {
            p_hwfn[_i0].hw_info.hw_mac_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_guid0 = 1;
          int * guid = (int *) malloc(_len_guid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_guid0; _i0++) {
            guid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_rdma_get_guid(p_hwfn,guid);
          free(p_hwfn);
          free(guid);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p_hwfn0 = 65025;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__hw_info_hw_mac_addr0 = 1;
          p_hwfn[_i0].hw_info.hw_mac_addr = (int *) malloc(_len_p_hwfn__i0__hw_info_hw_mac_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__hw_info_hw_mac_addr0; _j0++) {
            p_hwfn[_i0].hw_info.hw_mac_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_guid0 = 65025;
          int * guid = (int *) malloc(_len_guid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_guid0; _i0++) {
            guid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_rdma_get_guid(p_hwfn,guid);
          free(p_hwfn);
          free(guid);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p_hwfn0 = 100;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__hw_info_hw_mac_addr0 = 1;
          p_hwfn[_i0].hw_info.hw_mac_addr = (int *) malloc(_len_p_hwfn__i0__hw_info_hw_mac_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__hw_info_hw_mac_addr0; _j0++) {
            p_hwfn[_i0].hw_info.hw_mac_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_guid0 = 100;
          int * guid = (int *) malloc(_len_guid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_guid0; _i0++) {
            guid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_rdma_get_guid(p_hwfn,guid);
          free(p_hwfn);
          free(guid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
