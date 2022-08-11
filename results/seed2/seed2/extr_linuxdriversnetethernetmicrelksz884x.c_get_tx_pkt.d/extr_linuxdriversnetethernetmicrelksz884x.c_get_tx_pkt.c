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
struct ksz_desc_info {size_t next; size_t mask; int /*<<< orphan*/  avail; struct ksz_desc* ring; } ;
struct TYPE_3__ {int /*<<< orphan*/  data; } ;
struct TYPE_4__ {TYPE_1__ buf; } ;
struct ksz_desc {TYPE_2__ sw; } ;

/* Variables and functions */
 int /*<<< orphan*/  KS_DESC_TX_MASK ; 

__attribute__((used)) static inline void get_tx_pkt(struct ksz_desc_info *info,
	struct ksz_desc **desc)
{
	*desc = &info->ring[info->next];
	info->next++;
	info->next &= info->mask;
	info->avail--;
	(*desc)->sw.buf.data &= ~KS_DESC_TX_MASK;
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
          int _len_info0 = 1;
          struct ksz_desc_info * info = (struct ksz_desc_info *) malloc(_len_info0*sizeof(struct ksz_desc_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].avail = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__ring0 = 1;
          info[_i0].ring = (struct ksz_desc *) malloc(_len_info__i0__ring0*sizeof(struct ksz_desc));
          for(int _j0 = 0; _j0 < _len_info__i0__ring0; _j0++) {
            info[_i0].ring->sw.buf.data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_desc0 = 1;
          struct ksz_desc ** desc = (struct ksz_desc **) malloc(_len_desc0*sizeof(struct ksz_desc *));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            int _len_desc1 = 1;
            desc[_i0] = (struct ksz_desc *) malloc(_len_desc1*sizeof(struct ksz_desc));
            for(int _i1 = 0; _i1 < _len_desc1; _i1++) {
              desc[_i0][_i1].sw.buf.data = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          get_tx_pkt(info,desc);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].ring);
          }
          free(info);
          for(int i1 = 0; i1 < _len_desc0; i1++) {
            int _len_desc1 = 1;
              free(desc[i1]);
          }
          free(desc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_info0 = 65025;
          struct ksz_desc_info * info = (struct ksz_desc_info *) malloc(_len_info0*sizeof(struct ksz_desc_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].avail = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__ring0 = 1;
          info[_i0].ring = (struct ksz_desc *) malloc(_len_info__i0__ring0*sizeof(struct ksz_desc));
          for(int _j0 = 0; _j0 < _len_info__i0__ring0; _j0++) {
            info[_i0].ring->sw.buf.data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_desc0 = 65025;
          struct ksz_desc ** desc = (struct ksz_desc **) malloc(_len_desc0*sizeof(struct ksz_desc *));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            int _len_desc1 = 1;
            desc[_i0] = (struct ksz_desc *) malloc(_len_desc1*sizeof(struct ksz_desc));
            for(int _i1 = 0; _i1 < _len_desc1; _i1++) {
              desc[_i0][_i1].sw.buf.data = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          get_tx_pkt(info,desc);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].ring);
          }
          free(info);
          for(int i1 = 0; i1 < _len_desc0; i1++) {
            int _len_desc1 = 1;
              free(desc[i1]);
          }
          free(desc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_info0 = 100;
          struct ksz_desc_info * info = (struct ksz_desc_info *) malloc(_len_info0*sizeof(struct ksz_desc_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].avail = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__ring0 = 1;
          info[_i0].ring = (struct ksz_desc *) malloc(_len_info__i0__ring0*sizeof(struct ksz_desc));
          for(int _j0 = 0; _j0 < _len_info__i0__ring0; _j0++) {
            info[_i0].ring->sw.buf.data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_desc0 = 100;
          struct ksz_desc ** desc = (struct ksz_desc **) malloc(_len_desc0*sizeof(struct ksz_desc *));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            int _len_desc1 = 1;
            desc[_i0] = (struct ksz_desc *) malloc(_len_desc1*sizeof(struct ksz_desc));
            for(int _i1 = 0; _i1 < _len_desc1; _i1++) {
              desc[_i0][_i1].sw.buf.data = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          get_tx_pkt(info,desc);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].ring);
          }
          free(info);
          for(int i1 = 0; i1 < _len_desc0; i1++) {
            int _len_desc1 = 1;
              free(desc[i1]);
          }
          free(desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
