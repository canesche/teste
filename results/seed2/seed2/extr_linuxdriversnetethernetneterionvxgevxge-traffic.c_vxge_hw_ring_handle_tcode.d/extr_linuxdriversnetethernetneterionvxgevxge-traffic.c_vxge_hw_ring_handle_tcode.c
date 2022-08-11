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
struct __vxge_hw_ring {TYPE_1__* stats; } ;
typedef  enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_2__ {int /*<<< orphan*/ * rxd_t_code_err_cnt; } ;

/* Variables and functions */
 int VXGE_HW_ERR_INVALID_TCODE ; 
 int VXGE_HW_OK ; 
 size_t VXGE_HW_RING_T_CODE_L3_PKT_ERR ; 
 size_t VXGE_HW_RING_T_CODE_MULTI_ERR ; 
 size_t VXGE_HW_RING_T_CODE_OK ; 

enum vxge_hw_status vxge_hw_ring_handle_tcode(
	struct __vxge_hw_ring *ring, void *rxdh, u8 t_code)
{
	enum vxge_hw_status status = VXGE_HW_OK;

	/* If the t_code is not supported and if the
	 * t_code is other than 0x5 (unparseable packet
	 * such as unknown UPV6 header), Drop it !!!
	 */

	if (t_code ==  VXGE_HW_RING_T_CODE_OK ||
		t_code == VXGE_HW_RING_T_CODE_L3_PKT_ERR) {
		status = VXGE_HW_OK;
		goto exit;
	}

	if (t_code > VXGE_HW_RING_T_CODE_MULTI_ERR) {
		status = VXGE_HW_ERR_INVALID_TCODE;
		goto exit;
	}

	ring->stats->rxd_t_code_err_cnt[t_code]++;
exit:
	return status;
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
          unsigned long t_code = 100;
          int _len_ring0 = 1;
          struct __vxge_hw_ring * ring = (struct __vxge_hw_ring *) malloc(_len_ring0*sizeof(struct __vxge_hw_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              int _len_ring__i0__stats0 = 1;
          ring[_i0].stats = (struct TYPE_2__ *) malloc(_len_ring__i0__stats0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ring__i0__stats0; _j0++) {
              int _len_ring__i0__stats_rxd_t_code_err_cnt0 = 1;
          ring[_i0].stats->rxd_t_code_err_cnt = (int *) malloc(_len_ring__i0__stats_rxd_t_code_err_cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ring__i0__stats_rxd_t_code_err_cnt0; _j0++) {
            ring[_i0].stats->rxd_t_code_err_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * rxdh;
          enum vxge_hw_status benchRet = vxge_hw_ring_handle_tcode(ring,rxdh,t_code);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].stats);
          }
          free(ring);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long t_code = 255;
          int _len_ring0 = 65025;
          struct __vxge_hw_ring * ring = (struct __vxge_hw_ring *) malloc(_len_ring0*sizeof(struct __vxge_hw_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              int _len_ring__i0__stats0 = 1;
          ring[_i0].stats = (struct TYPE_2__ *) malloc(_len_ring__i0__stats0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ring__i0__stats0; _j0++) {
              int _len_ring__i0__stats_rxd_t_code_err_cnt0 = 1;
          ring[_i0].stats->rxd_t_code_err_cnt = (int *) malloc(_len_ring__i0__stats_rxd_t_code_err_cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ring__i0__stats_rxd_t_code_err_cnt0; _j0++) {
            ring[_i0].stats->rxd_t_code_err_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * rxdh;
          enum vxge_hw_status benchRet = vxge_hw_ring_handle_tcode(ring,rxdh,t_code);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].stats);
          }
          free(ring);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long t_code = 10;
          int _len_ring0 = 100;
          struct __vxge_hw_ring * ring = (struct __vxge_hw_ring *) malloc(_len_ring0*sizeof(struct __vxge_hw_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              int _len_ring__i0__stats0 = 1;
          ring[_i0].stats = (struct TYPE_2__ *) malloc(_len_ring__i0__stats0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ring__i0__stats0; _j0++) {
              int _len_ring__i0__stats_rxd_t_code_err_cnt0 = 1;
          ring[_i0].stats->rxd_t_code_err_cnt = (int *) malloc(_len_ring__i0__stats_rxd_t_code_err_cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ring__i0__stats_rxd_t_code_err_cnt0; _j0++) {
            ring[_i0].stats->rxd_t_code_err_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * rxdh;
          enum vxge_hw_status benchRet = vxge_hw_ring_handle_tcode(ring,rxdh,t_code);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].stats);
          }
          free(ring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
