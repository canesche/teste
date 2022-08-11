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
typedef  int /*<<< orphan*/  u8 ;
struct pt3_adapter {int num_bufs; scalar_t__ buf_ofs; scalar_t__ buf_idx; TYPE_1__* buffer; } ;
struct TYPE_2__ {int /*<<< orphan*/ * data; } ;

/* Variables and functions */
 int DATA_BUF_SZ ; 
 scalar_t__ PT3_ACCESS_UNIT ; 
 int /*<<< orphan*/  PT3_BUF_CANARY ; 

void pt3_init_dmabuf(struct pt3_adapter *adap)
{
	int idx, ofs;
	u8 *p;

	idx = 0;
	ofs = 0;
	p = adap->buffer[0].data;
	/* mark the whole buffers as "not written yet" */
	while (idx < adap->num_bufs) {
		p[ofs] = PT3_BUF_CANARY;
		ofs += PT3_ACCESS_UNIT;
		if (ofs >= DATA_BUF_SZ) {
			ofs -= DATA_BUF_SZ;
			idx++;
			p = adap->buffer[idx].data;
		}
	}
	adap->buf_idx = 0;
	adap->buf_ofs = 0;
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
          int _len_adap0 = 1;
          struct pt3_adapter * adap = (struct pt3_adapter *) malloc(_len_adap0*sizeof(struct pt3_adapter));
          for(int _i0 = 0; _i0 < _len_adap0; _i0++) {
            adap[_i0].num_bufs = ((-2 * (next_i()%2)) + 1) * next_i();
        adap[_i0].buf_ofs = ((-2 * (next_i()%2)) + 1) * next_i();
        adap[_i0].buf_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adap__i0__buffer0 = 1;
          adap[_i0].buffer = (struct TYPE_2__ *) malloc(_len_adap__i0__buffer0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adap__i0__buffer0; _j0++) {
              int _len_adap__i0__buffer_data0 = 1;
          adap[_i0].buffer->data = (int *) malloc(_len_adap__i0__buffer_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adap__i0__buffer_data0; _j0++) {
            adap[_i0].buffer->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          pt3_init_dmabuf(adap);
          for(int _aux = 0; _aux < _len_adap0; _aux++) {
          free(adap[_aux].buffer);
          }
          free(adap);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adap0 = 65025;
          struct pt3_adapter * adap = (struct pt3_adapter *) malloc(_len_adap0*sizeof(struct pt3_adapter));
          for(int _i0 = 0; _i0 < _len_adap0; _i0++) {
            adap[_i0].num_bufs = ((-2 * (next_i()%2)) + 1) * next_i();
        adap[_i0].buf_ofs = ((-2 * (next_i()%2)) + 1) * next_i();
        adap[_i0].buf_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adap__i0__buffer0 = 1;
          adap[_i0].buffer = (struct TYPE_2__ *) malloc(_len_adap__i0__buffer0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adap__i0__buffer0; _j0++) {
              int _len_adap__i0__buffer_data0 = 1;
          adap[_i0].buffer->data = (int *) malloc(_len_adap__i0__buffer_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adap__i0__buffer_data0; _j0++) {
            adap[_i0].buffer->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          pt3_init_dmabuf(adap);
          for(int _aux = 0; _aux < _len_adap0; _aux++) {
          free(adap[_aux].buffer);
          }
          free(adap);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adap0 = 100;
          struct pt3_adapter * adap = (struct pt3_adapter *) malloc(_len_adap0*sizeof(struct pt3_adapter));
          for(int _i0 = 0; _i0 < _len_adap0; _i0++) {
            adap[_i0].num_bufs = ((-2 * (next_i()%2)) + 1) * next_i();
        adap[_i0].buf_ofs = ((-2 * (next_i()%2)) + 1) * next_i();
        adap[_i0].buf_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adap__i0__buffer0 = 1;
          adap[_i0].buffer = (struct TYPE_2__ *) malloc(_len_adap__i0__buffer0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adap__i0__buffer0; _j0++) {
              int _len_adap__i0__buffer_data0 = 1;
          adap[_i0].buffer->data = (int *) malloc(_len_adap__i0__buffer_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adap__i0__buffer_data0; _j0++) {
            adap[_i0].buffer->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          pt3_init_dmabuf(adap);
          for(int _aux = 0; _aux < _len_adap0; _aux++) {
          free(adap[_aux].buffer);
          }
          free(adap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
