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
struct TYPE_2__ {int lo; int hi; } ;
union l5cm_specific_data {TYPE_1__ phy_address; } ;
typedef  int u64 ;
typedef  size_t u32 ;
struct cnic_local {struct cnic_context* ctx_tbl; } ;
struct cnic_context {void* kwqe_data; scalar_t__ kwqe_data_mapping; } ;
typedef  scalar_t__ dma_addr_t ;

/* Variables and functions */

__attribute__((used)) static void *cnic_get_kwqe_16_data(struct cnic_local *cp, u32 l5_cid,
				   union l5cm_specific_data *l5_data)
{
	struct cnic_context *ctx = &cp->ctx_tbl[l5_cid];
	dma_addr_t map;

	map = ctx->kwqe_data_mapping;
	l5_data->phy_address.lo = (u64) map & 0xffffffff;
	l5_data->phy_address.hi = (u64) map >> 32;
	return ctx->kwqe_data;
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
          unsigned long l5_cid = 100;
          int _len_cp0 = 1;
          struct cnic_local * cp = (struct cnic_local *) malloc(_len_cp0*sizeof(struct cnic_local));
          for(int _i0 = 0; _i0 < _len_cp0; _i0++) {
              int _len_cp__i0__ctx_tbl0 = 1;
          cp[_i0].ctx_tbl = (struct cnic_context *) malloc(_len_cp__i0__ctx_tbl0*sizeof(struct cnic_context));
          for(int _j0 = 0; _j0 < _len_cp__i0__ctx_tbl0; _j0++) {
            cp[_i0].ctx_tbl->kwqe_data_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_l5_data0 = 1;
          union l5cm_specific_data * l5_data = (union l5cm_specific_data *) malloc(_len_l5_data0*sizeof(union l5cm_specific_data));
          for(int _i0 = 0; _i0 < _len_l5_data0; _i0++) {
            l5_data[_i0] = 0;
          }
          void * benchRet = cnic_get_kwqe_16_data(cp,l5_cid,l5_data);
          for(int _aux = 0; _aux < _len_cp0; _aux++) {
          free(cp[_aux].ctx_tbl);
          }
          free(cp);
          free(l5_data);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long l5_cid = 255;
          int _len_cp0 = 65025;
          struct cnic_local * cp = (struct cnic_local *) malloc(_len_cp0*sizeof(struct cnic_local));
          for(int _i0 = 0; _i0 < _len_cp0; _i0++) {
              int _len_cp__i0__ctx_tbl0 = 1;
          cp[_i0].ctx_tbl = (struct cnic_context *) malloc(_len_cp__i0__ctx_tbl0*sizeof(struct cnic_context));
          for(int _j0 = 0; _j0 < _len_cp__i0__ctx_tbl0; _j0++) {
            cp[_i0].ctx_tbl->kwqe_data_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_l5_data0 = 65025;
          union l5cm_specific_data * l5_data = (union l5cm_specific_data *) malloc(_len_l5_data0*sizeof(union l5cm_specific_data));
          for(int _i0 = 0; _i0 < _len_l5_data0; _i0++) {
            l5_data[_i0] = 0;
          }
          void * benchRet = cnic_get_kwqe_16_data(cp,l5_cid,l5_data);
          for(int _aux = 0; _aux < _len_cp0; _aux++) {
          free(cp[_aux].ctx_tbl);
          }
          free(cp);
          free(l5_data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long l5_cid = 10;
          int _len_cp0 = 100;
          struct cnic_local * cp = (struct cnic_local *) malloc(_len_cp0*sizeof(struct cnic_local));
          for(int _i0 = 0; _i0 < _len_cp0; _i0++) {
              int _len_cp__i0__ctx_tbl0 = 1;
          cp[_i0].ctx_tbl = (struct cnic_context *) malloc(_len_cp__i0__ctx_tbl0*sizeof(struct cnic_context));
          for(int _j0 = 0; _j0 < _len_cp__i0__ctx_tbl0; _j0++) {
            cp[_i0].ctx_tbl->kwqe_data_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_l5_data0 = 100;
          union l5cm_specific_data * l5_data = (union l5cm_specific_data *) malloc(_len_l5_data0*sizeof(union l5cm_specific_data));
          for(int _i0 = 0; _i0 < _len_l5_data0; _i0++) {
            l5_data[_i0] = 0;
          }
          void * benchRet = cnic_get_kwqe_16_data(cp,l5_cid,l5_data);
          for(int _aux = 0; _aux < _len_cp0; _aux++) {
          free(cp[_aux].ctx_tbl);
          }
          free(cp);
          free(l5_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
