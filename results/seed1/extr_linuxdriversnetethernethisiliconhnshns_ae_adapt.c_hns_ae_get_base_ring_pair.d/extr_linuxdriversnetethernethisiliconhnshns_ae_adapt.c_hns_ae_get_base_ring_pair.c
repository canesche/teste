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

/* Type definitions */
struct ring_pair_cb {int dummy; } ;
struct rcb_common_cb {int max_q_per_vf; int max_vfn; struct ring_pair_cb* ring_pair_cb; } ;
struct dsaf_device {struct rcb_common_cb** rcb_common; } ;

/* Variables and functions */

__attribute__((used)) static struct ring_pair_cb *hns_ae_get_base_ring_pair(
	struct dsaf_device *dsaf_dev, int port)
{
	struct rcb_common_cb *rcb_comm = dsaf_dev->rcb_common[0];
	int q_num = rcb_comm->max_q_per_vf;
	int vf_num = rcb_comm->max_vfn;

	return &rcb_comm->ring_pair_cb[port * q_num * vf_num];
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
          int port = 100;
          int _len_dsaf_dev0 = 1;
          struct dsaf_device * dsaf_dev = (struct dsaf_device *) malloc(_len_dsaf_dev0*sizeof(struct dsaf_device));
          for(int _i0 = 0; _i0 < _len_dsaf_dev0; _i0++) {
              int _len_dsaf_dev__i0__rcb_common0 = 1;
          dsaf_dev[_i0].rcb_common = (struct rcb_common_cb **) malloc(_len_dsaf_dev__i0__rcb_common0*sizeof(struct rcb_common_cb *));
          for(int _j0 = 0; _j0 < _len_dsaf_dev__i0__rcb_common0; _j0++) {
            int _len_dsaf_dev__i0__rcb_common1 = 1;
            dsaf_dev[_i0].rcb_common[_j0] = (struct rcb_common_cb *) malloc(_len_dsaf_dev__i0__rcb_common1*sizeof(struct rcb_common_cb));
            for(int _j1 = 0; _j1 < _len_dsaf_dev__i0__rcb_common1; _j1++) {
              dsaf_dev[_i0].rcb_common[_j0]->max_q_per_vf = ((-2 * (next_i()%2)) + 1) * next_i();
        dsaf_dev[_i0].rcb_common[_j0]->max_vfn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dsaf_dev__i0__rcb_common__j0__ring_pair_cb0 = 1;
          dsaf_dev[_i0].rcb_common[_j0]->ring_pair_cb = (struct ring_pair_cb *) malloc(_len_dsaf_dev__i0__rcb_common__j0__ring_pair_cb0*sizeof(struct ring_pair_cb));
          for(int _j0 = 0; _j0 < _len_dsaf_dev__i0__rcb_common__j0__ring_pair_cb0; _j0++) {
            dsaf_dev[_i0].rcb_common[_j0]->ring_pair_cb->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          struct ring_pair_cb * benchRet = hns_ae_get_base_ring_pair(dsaf_dev,port);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dsaf_dev0; _aux++) {
          free(*(dsaf_dev[_aux].rcb_common));
        free(dsaf_dev[_aux].rcb_common);
          }
          free(dsaf_dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int port = 255;
          int _len_dsaf_dev0 = 65025;
          struct dsaf_device * dsaf_dev = (struct dsaf_device *) malloc(_len_dsaf_dev0*sizeof(struct dsaf_device));
          for(int _i0 = 0; _i0 < _len_dsaf_dev0; _i0++) {
              int _len_dsaf_dev__i0__rcb_common0 = 1;
          dsaf_dev[_i0].rcb_common = (struct rcb_common_cb **) malloc(_len_dsaf_dev__i0__rcb_common0*sizeof(struct rcb_common_cb *));
          for(int _j0 = 0; _j0 < _len_dsaf_dev__i0__rcb_common0; _j0++) {
            int _len_dsaf_dev__i0__rcb_common1 = 1;
            dsaf_dev[_i0].rcb_common[_j0] = (struct rcb_common_cb *) malloc(_len_dsaf_dev__i0__rcb_common1*sizeof(struct rcb_common_cb));
            for(int _j1 = 0; _j1 < _len_dsaf_dev__i0__rcb_common1; _j1++) {
              dsaf_dev[_i0].rcb_common[_j0]->max_q_per_vf = ((-2 * (next_i()%2)) + 1) * next_i();
        dsaf_dev[_i0].rcb_common[_j0]->max_vfn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dsaf_dev__i0__rcb_common__j0__ring_pair_cb0 = 1;
          dsaf_dev[_i0].rcb_common[_j0]->ring_pair_cb = (struct ring_pair_cb *) malloc(_len_dsaf_dev__i0__rcb_common__j0__ring_pair_cb0*sizeof(struct ring_pair_cb));
          for(int _j0 = 0; _j0 < _len_dsaf_dev__i0__rcb_common__j0__ring_pair_cb0; _j0++) {
            dsaf_dev[_i0].rcb_common[_j0]->ring_pair_cb->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          struct ring_pair_cb * benchRet = hns_ae_get_base_ring_pair(dsaf_dev,port);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dsaf_dev0; _aux++) {
          free(*(dsaf_dev[_aux].rcb_common));
        free(dsaf_dev[_aux].rcb_common);
          }
          free(dsaf_dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int port = 10;
          int _len_dsaf_dev0 = 100;
          struct dsaf_device * dsaf_dev = (struct dsaf_device *) malloc(_len_dsaf_dev0*sizeof(struct dsaf_device));
          for(int _i0 = 0; _i0 < _len_dsaf_dev0; _i0++) {
              int _len_dsaf_dev__i0__rcb_common0 = 1;
          dsaf_dev[_i0].rcb_common = (struct rcb_common_cb **) malloc(_len_dsaf_dev__i0__rcb_common0*sizeof(struct rcb_common_cb *));
          for(int _j0 = 0; _j0 < _len_dsaf_dev__i0__rcb_common0; _j0++) {
            int _len_dsaf_dev__i0__rcb_common1 = 1;
            dsaf_dev[_i0].rcb_common[_j0] = (struct rcb_common_cb *) malloc(_len_dsaf_dev__i0__rcb_common1*sizeof(struct rcb_common_cb));
            for(int _j1 = 0; _j1 < _len_dsaf_dev__i0__rcb_common1; _j1++) {
              dsaf_dev[_i0].rcb_common[_j0]->max_q_per_vf = ((-2 * (next_i()%2)) + 1) * next_i();
        dsaf_dev[_i0].rcb_common[_j0]->max_vfn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dsaf_dev__i0__rcb_common__j0__ring_pair_cb0 = 1;
          dsaf_dev[_i0].rcb_common[_j0]->ring_pair_cb = (struct ring_pair_cb *) malloc(_len_dsaf_dev__i0__rcb_common__j0__ring_pair_cb0*sizeof(struct ring_pair_cb));
          for(int _j0 = 0; _j0 < _len_dsaf_dev__i0__rcb_common__j0__ring_pair_cb0; _j0++) {
            dsaf_dev[_i0].rcb_common[_j0]->ring_pair_cb->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          struct ring_pair_cb * benchRet = hns_ae_get_base_ring_pair(dsaf_dev,port);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dsaf_dev0; _aux++) {
          free(*(dsaf_dev[_aux].rcb_common));
        free(dsaf_dev[_aux].rcb_common);
          }
          free(dsaf_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
