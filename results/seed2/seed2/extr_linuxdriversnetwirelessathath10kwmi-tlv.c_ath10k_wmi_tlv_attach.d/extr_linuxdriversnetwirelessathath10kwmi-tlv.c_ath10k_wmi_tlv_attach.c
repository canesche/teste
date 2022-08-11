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
struct TYPE_2__ {int /*<<< orphan*/ * peer_flags; int /*<<< orphan*/ * ops; int /*<<< orphan*/ * pdev_param; int /*<<< orphan*/ * vdev_param; int /*<<< orphan*/ * cmd; } ;
struct ath10k {TYPE_1__ wmi; } ;

/* Variables and functions */
 int /*<<< orphan*/  wmi_tlv_cmd_map ; 
 int /*<<< orphan*/  wmi_tlv_ops ; 
 int /*<<< orphan*/  wmi_tlv_pdev_param_map ; 
 int /*<<< orphan*/  wmi_tlv_peer_flags_map ; 
 int /*<<< orphan*/  wmi_tlv_vdev_param_map ; 

void ath10k_wmi_tlv_attach(struct ath10k *ar)
{
	ar->wmi.cmd = &wmi_tlv_cmd_map;
	ar->wmi.vdev_param = &wmi_tlv_vdev_param_map;
	ar->wmi.pdev_param = &wmi_tlv_pdev_param_map;
	ar->wmi.ops = &wmi_tlv_ops;
	ar->wmi.peer_flags = &wmi_tlv_peer_flags_map;
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
          int _len_ar0 = 1;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
              int _len_ar__i0__wmi_peer_flags0 = 1;
          ar[_i0].wmi.peer_flags = (int *) malloc(_len_ar__i0__wmi_peer_flags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ar__i0__wmi_peer_flags0; _j0++) {
            ar[_i0].wmi.peer_flags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar__i0__wmi_ops0 = 1;
          ar[_i0].wmi.ops = (int *) malloc(_len_ar__i0__wmi_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ar__i0__wmi_ops0; _j0++) {
            ar[_i0].wmi.ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar__i0__wmi_pdev_param0 = 1;
          ar[_i0].wmi.pdev_param = (int *) malloc(_len_ar__i0__wmi_pdev_param0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ar__i0__wmi_pdev_param0; _j0++) {
            ar[_i0].wmi.pdev_param[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar__i0__wmi_vdev_param0 = 1;
          ar[_i0].wmi.vdev_param = (int *) malloc(_len_ar__i0__wmi_vdev_param0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ar__i0__wmi_vdev_param0; _j0++) {
            ar[_i0].wmi.vdev_param[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar__i0__wmi_cmd0 = 1;
          ar[_i0].wmi.cmd = (int *) malloc(_len_ar__i0__wmi_cmd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ar__i0__wmi_cmd0; _j0++) {
            ar[_i0].wmi.cmd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ath10k_wmi_tlv_attach(ar);
          free(ar);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ar0 = 65025;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
              int _len_ar__i0__wmi_peer_flags0 = 1;
          ar[_i0].wmi.peer_flags = (int *) malloc(_len_ar__i0__wmi_peer_flags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ar__i0__wmi_peer_flags0; _j0++) {
            ar[_i0].wmi.peer_flags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar__i0__wmi_ops0 = 1;
          ar[_i0].wmi.ops = (int *) malloc(_len_ar__i0__wmi_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ar__i0__wmi_ops0; _j0++) {
            ar[_i0].wmi.ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar__i0__wmi_pdev_param0 = 1;
          ar[_i0].wmi.pdev_param = (int *) malloc(_len_ar__i0__wmi_pdev_param0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ar__i0__wmi_pdev_param0; _j0++) {
            ar[_i0].wmi.pdev_param[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar__i0__wmi_vdev_param0 = 1;
          ar[_i0].wmi.vdev_param = (int *) malloc(_len_ar__i0__wmi_vdev_param0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ar__i0__wmi_vdev_param0; _j0++) {
            ar[_i0].wmi.vdev_param[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar__i0__wmi_cmd0 = 1;
          ar[_i0].wmi.cmd = (int *) malloc(_len_ar__i0__wmi_cmd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ar__i0__wmi_cmd0; _j0++) {
            ar[_i0].wmi.cmd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ath10k_wmi_tlv_attach(ar);
          free(ar);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ar0 = 100;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
              int _len_ar__i0__wmi_peer_flags0 = 1;
          ar[_i0].wmi.peer_flags = (int *) malloc(_len_ar__i0__wmi_peer_flags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ar__i0__wmi_peer_flags0; _j0++) {
            ar[_i0].wmi.peer_flags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar__i0__wmi_ops0 = 1;
          ar[_i0].wmi.ops = (int *) malloc(_len_ar__i0__wmi_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ar__i0__wmi_ops0; _j0++) {
            ar[_i0].wmi.ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar__i0__wmi_pdev_param0 = 1;
          ar[_i0].wmi.pdev_param = (int *) malloc(_len_ar__i0__wmi_pdev_param0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ar__i0__wmi_pdev_param0; _j0++) {
            ar[_i0].wmi.pdev_param[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar__i0__wmi_vdev_param0 = 1;
          ar[_i0].wmi.vdev_param = (int *) malloc(_len_ar__i0__wmi_vdev_param0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ar__i0__wmi_vdev_param0; _j0++) {
            ar[_i0].wmi.vdev_param[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar__i0__wmi_cmd0 = 1;
          ar[_i0].wmi.cmd = (int *) malloc(_len_ar__i0__wmi_cmd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ar__i0__wmi_cmd0; _j0++) {
            ar[_i0].wmi.cmd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ath10k_wmi_tlv_attach(ar);
          free(ar);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
