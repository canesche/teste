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
typedef  scalar_t__ u32 ;
struct hvsock {scalar_t__ recv_data_off; scalar_t__ recv_data_len; TYPE_2__* vsk; scalar_t__ recv_desc; } ;
struct TYPE_3__ {scalar_t__ data_size; } ;
struct hvs_recv_buf {TYPE_1__ hdr; } ;
struct TYPE_4__ {int /*<<< orphan*/  peer_shutdown; } ;

/* Variables and functions */
 int EIO ; 
 scalar_t__ HVS_MTU_SIZE ; 
 int /*<<< orphan*/  SEND_SHUTDOWN ; 

__attribute__((used)) static int hvs_update_recv_data(struct hvsock *hvs)
{
	struct hvs_recv_buf *recv_buf;
	u32 payload_len;

	recv_buf = (struct hvs_recv_buf *)(hvs->recv_desc + 1);
	payload_len = recv_buf->hdr.data_size;

	if (payload_len > HVS_MTU_SIZE)
		return -EIO;

	if (payload_len == 0)
		hvs->vsk->peer_shutdown |= SEND_SHUTDOWN;

	hvs->recv_data_len = payload_len;
	hvs->recv_data_off = 0;

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
          int _len_hvs0 = 1;
          struct hvsock * hvs = (struct hvsock *) malloc(_len_hvs0*sizeof(struct hvsock));
          for(int _i0 = 0; _i0 < _len_hvs0; _i0++) {
            hvs[_i0].recv_data_off = ((-2 * (next_i()%2)) + 1) * next_i();
        hvs[_i0].recv_data_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hvs__i0__vsk0 = 1;
          hvs[_i0].vsk = (struct TYPE_4__ *) malloc(_len_hvs__i0__vsk0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hvs__i0__vsk0; _j0++) {
            hvs[_i0].vsk->peer_shutdown = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hvs[_i0].recv_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hvs_update_recv_data(hvs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hvs0; _aux++) {
          free(hvs[_aux].vsk);
          }
          free(hvs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hvs0 = 65025;
          struct hvsock * hvs = (struct hvsock *) malloc(_len_hvs0*sizeof(struct hvsock));
          for(int _i0 = 0; _i0 < _len_hvs0; _i0++) {
            hvs[_i0].recv_data_off = ((-2 * (next_i()%2)) + 1) * next_i();
        hvs[_i0].recv_data_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hvs__i0__vsk0 = 1;
          hvs[_i0].vsk = (struct TYPE_4__ *) malloc(_len_hvs__i0__vsk0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hvs__i0__vsk0; _j0++) {
            hvs[_i0].vsk->peer_shutdown = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hvs[_i0].recv_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hvs_update_recv_data(hvs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hvs0; _aux++) {
          free(hvs[_aux].vsk);
          }
          free(hvs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hvs0 = 100;
          struct hvsock * hvs = (struct hvsock *) malloc(_len_hvs0*sizeof(struct hvsock));
          for(int _i0 = 0; _i0 < _len_hvs0; _i0++) {
            hvs[_i0].recv_data_off = ((-2 * (next_i()%2)) + 1) * next_i();
        hvs[_i0].recv_data_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hvs__i0__vsk0 = 1;
          hvs[_i0].vsk = (struct TYPE_4__ *) malloc(_len_hvs__i0__vsk0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hvs__i0__vsk0; _j0++) {
            hvs[_i0].vsk->peer_shutdown = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hvs[_i0].recv_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hvs_update_recv_data(hvs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hvs0; _aux++) {
          free(hvs[_aux].vsk);
          }
          free(hvs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
