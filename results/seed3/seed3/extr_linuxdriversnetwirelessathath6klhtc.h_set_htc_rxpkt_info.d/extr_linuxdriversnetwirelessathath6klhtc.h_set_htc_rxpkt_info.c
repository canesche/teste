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
typedef  int /*<<< orphan*/  u8 ;
struct htc_packet {unsigned long buf_len; int endpoint; int /*<<< orphan*/ * buf_start; int /*<<< orphan*/ * buf; void* pkt_cntxt; } ;
typedef  enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;

/* Variables and functions */

__attribute__((used)) static inline void set_htc_rxpkt_info(struct htc_packet *packet, void *context,
				      u8 *buf, unsigned long len,
				      enum htc_endpoint_id eid)
{
	packet->pkt_cntxt = context;
	packet->buf = buf;
	packet->buf_start = buf;
	packet->buf_len = len;
	packet->endpoint = eid;
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
          unsigned long len = 100;
          enum htc_endpoint_id eid = 100;
          int _len_packet0 = 1;
          struct htc_packet * packet = (struct htc_packet *) malloc(_len_packet0*sizeof(struct htc_packet));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].endpoint = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_packet__i0__buf_start0 = 1;
          packet[_i0].buf_start = (int *) malloc(_len_packet__i0__buf_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_packet__i0__buf_start0; _j0++) {
            packet[_i0].buf_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_packet__i0__buf0 = 1;
          packet[_i0].buf = (int *) malloc(_len_packet__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_packet__i0__buf0; _j0++) {
            packet[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * context;
          int _len_buf0 = 1;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_htc_rxpkt_info(packet,context,buf,len,eid);
          for(int _aux = 0; _aux < _len_packet0; _aux++) {
          free(packet[_aux].buf_start);
          }
          for(int _aux = 0; _aux < _len_packet0; _aux++) {
          free(packet[_aux].buf);
          }
          free(packet);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          enum htc_endpoint_id eid = 255;
          int _len_packet0 = 65025;
          struct htc_packet * packet = (struct htc_packet *) malloc(_len_packet0*sizeof(struct htc_packet));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].endpoint = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_packet__i0__buf_start0 = 1;
          packet[_i0].buf_start = (int *) malloc(_len_packet__i0__buf_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_packet__i0__buf_start0; _j0++) {
            packet[_i0].buf_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_packet__i0__buf0 = 1;
          packet[_i0].buf = (int *) malloc(_len_packet__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_packet__i0__buf0; _j0++) {
            packet[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * context;
          int _len_buf0 = 65025;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_htc_rxpkt_info(packet,context,buf,len,eid);
          for(int _aux = 0; _aux < _len_packet0; _aux++) {
          free(packet[_aux].buf_start);
          }
          for(int _aux = 0; _aux < _len_packet0; _aux++) {
          free(packet[_aux].buf);
          }
          free(packet);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          enum htc_endpoint_id eid = 10;
          int _len_packet0 = 100;
          struct htc_packet * packet = (struct htc_packet *) malloc(_len_packet0*sizeof(struct htc_packet));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].endpoint = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_packet__i0__buf_start0 = 1;
          packet[_i0].buf_start = (int *) malloc(_len_packet__i0__buf_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_packet__i0__buf_start0; _j0++) {
            packet[_i0].buf_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_packet__i0__buf0 = 1;
          packet[_i0].buf = (int *) malloc(_len_packet__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_packet__i0__buf0; _j0++) {
            packet[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * context;
          int _len_buf0 = 100;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_htc_rxpkt_info(packet,context,buf,len,eid);
          for(int _aux = 0; _aux < _len_packet0; _aux++) {
          free(packet[_aux].buf_start);
          }
          for(int _aux = 0; _aux < _len_packet0; _aux++) {
          free(packet[_aux].buf);
          }
          free(packet);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
