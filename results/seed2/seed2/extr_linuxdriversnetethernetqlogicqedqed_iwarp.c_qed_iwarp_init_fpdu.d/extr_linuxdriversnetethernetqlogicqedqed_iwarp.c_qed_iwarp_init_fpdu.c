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
typedef  int u8 ;
typedef  int u16 ;
struct unaligned_opaque_data {int first_mpa_offset; int /*<<< orphan*/  tcp_payload_offset; } ;
struct qed_iwarp_ll2_buff {int data_phys_addr; scalar_t__ data; } ;
struct qed_iwarp_fpdu {int pkt_hdr; int mpa_frag; int* mpa_frag_virt; int incomplete_bytes; int fpdu_length; int mpa_frag_len; int /*<<< orphan*/  pkt_hdr_size; struct qed_iwarp_ll2_buff* mpa_buf; } ;

/* Variables and functions */
 int QED_IWARP_INVALID_FPDU_LENGTH ; 

__attribute__((used)) static void
qed_iwarp_init_fpdu(struct qed_iwarp_ll2_buff *buf,
		    struct qed_iwarp_fpdu *fpdu,
		    struct unaligned_opaque_data *pkt_data,
		    u16 tcp_payload_size, u8 placement_offset)
{
	fpdu->mpa_buf = buf;
	fpdu->pkt_hdr = buf->data_phys_addr + placement_offset;
	fpdu->pkt_hdr_size = pkt_data->tcp_payload_offset;
	fpdu->mpa_frag = buf->data_phys_addr + pkt_data->first_mpa_offset;
	fpdu->mpa_frag_virt = (u8 *)(buf->data) + pkt_data->first_mpa_offset;

	if (tcp_payload_size == 1)
		fpdu->incomplete_bytes = QED_IWARP_INVALID_FPDU_LENGTH;
	else if (tcp_payload_size < fpdu->fpdu_length)
		fpdu->incomplete_bytes = fpdu->fpdu_length - tcp_payload_size;
	else
		fpdu->incomplete_bytes = 0;	/* complete fpdu */

	fpdu->mpa_frag_len = fpdu->fpdu_length - fpdu->incomplete_bytes;
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
          int tcp_payload_size = 100;
          int placement_offset = 100;
          int _len_buf0 = 1;
          struct qed_iwarp_ll2_buff * buf = (struct qed_iwarp_ll2_buff *) malloc(_len_buf0*sizeof(struct qed_iwarp_ll2_buff));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].data_phys_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fpdu0 = 1;
          struct qed_iwarp_fpdu * fpdu = (struct qed_iwarp_fpdu *) malloc(_len_fpdu0*sizeof(struct qed_iwarp_fpdu));
          for(int _i0 = 0; _i0 < _len_fpdu0; _i0++) {
            fpdu[_i0].pkt_hdr = ((-2 * (next_i()%2)) + 1) * next_i();
        fpdu[_i0].mpa_frag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fpdu__i0__mpa_frag_virt0 = 1;
          fpdu[_i0].mpa_frag_virt = (int *) malloc(_len_fpdu__i0__mpa_frag_virt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fpdu__i0__mpa_frag_virt0; _j0++) {
            fpdu[_i0].mpa_frag_virt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fpdu[_i0].incomplete_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        fpdu[_i0].fpdu_length = ((-2 * (next_i()%2)) + 1) * next_i();
        fpdu[_i0].mpa_frag_len = ((-2 * (next_i()%2)) + 1) * next_i();
        fpdu[_i0].pkt_hdr_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fpdu__i0__mpa_buf0 = 1;
          fpdu[_i0].mpa_buf = (struct qed_iwarp_ll2_buff *) malloc(_len_fpdu__i0__mpa_buf0*sizeof(struct qed_iwarp_ll2_buff));
          for(int _j0 = 0; _j0 < _len_fpdu__i0__mpa_buf0; _j0++) {
            fpdu[_i0].mpa_buf->data_phys_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        fpdu[_i0].mpa_buf->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pkt_data0 = 1;
          struct unaligned_opaque_data * pkt_data = (struct unaligned_opaque_data *) malloc(_len_pkt_data0*sizeof(struct unaligned_opaque_data));
          for(int _i0 = 0; _i0 < _len_pkt_data0; _i0++) {
            pkt_data[_i0].first_mpa_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        pkt_data[_i0].tcp_payload_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_iwarp_init_fpdu(buf,fpdu,pkt_data,tcp_payload_size,placement_offset);
          free(buf);
          for(int _aux = 0; _aux < _len_fpdu0; _aux++) {
          free(fpdu[_aux].mpa_frag_virt);
          }
          for(int _aux = 0; _aux < _len_fpdu0; _aux++) {
          free(fpdu[_aux].mpa_buf);
          }
          free(fpdu);
          free(pkt_data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tcp_payload_size = 255;
          int placement_offset = 255;
          int _len_buf0 = 65025;
          struct qed_iwarp_ll2_buff * buf = (struct qed_iwarp_ll2_buff *) malloc(_len_buf0*sizeof(struct qed_iwarp_ll2_buff));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].data_phys_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fpdu0 = 65025;
          struct qed_iwarp_fpdu * fpdu = (struct qed_iwarp_fpdu *) malloc(_len_fpdu0*sizeof(struct qed_iwarp_fpdu));
          for(int _i0 = 0; _i0 < _len_fpdu0; _i0++) {
            fpdu[_i0].pkt_hdr = ((-2 * (next_i()%2)) + 1) * next_i();
        fpdu[_i0].mpa_frag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fpdu__i0__mpa_frag_virt0 = 1;
          fpdu[_i0].mpa_frag_virt = (int *) malloc(_len_fpdu__i0__mpa_frag_virt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fpdu__i0__mpa_frag_virt0; _j0++) {
            fpdu[_i0].mpa_frag_virt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fpdu[_i0].incomplete_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        fpdu[_i0].fpdu_length = ((-2 * (next_i()%2)) + 1) * next_i();
        fpdu[_i0].mpa_frag_len = ((-2 * (next_i()%2)) + 1) * next_i();
        fpdu[_i0].pkt_hdr_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fpdu__i0__mpa_buf0 = 1;
          fpdu[_i0].mpa_buf = (struct qed_iwarp_ll2_buff *) malloc(_len_fpdu__i0__mpa_buf0*sizeof(struct qed_iwarp_ll2_buff));
          for(int _j0 = 0; _j0 < _len_fpdu__i0__mpa_buf0; _j0++) {
            fpdu[_i0].mpa_buf->data_phys_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        fpdu[_i0].mpa_buf->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pkt_data0 = 65025;
          struct unaligned_opaque_data * pkt_data = (struct unaligned_opaque_data *) malloc(_len_pkt_data0*sizeof(struct unaligned_opaque_data));
          for(int _i0 = 0; _i0 < _len_pkt_data0; _i0++) {
            pkt_data[_i0].first_mpa_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        pkt_data[_i0].tcp_payload_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_iwarp_init_fpdu(buf,fpdu,pkt_data,tcp_payload_size,placement_offset);
          free(buf);
          for(int _aux = 0; _aux < _len_fpdu0; _aux++) {
          free(fpdu[_aux].mpa_frag_virt);
          }
          for(int _aux = 0; _aux < _len_fpdu0; _aux++) {
          free(fpdu[_aux].mpa_buf);
          }
          free(fpdu);
          free(pkt_data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tcp_payload_size = 10;
          int placement_offset = 10;
          int _len_buf0 = 100;
          struct qed_iwarp_ll2_buff * buf = (struct qed_iwarp_ll2_buff *) malloc(_len_buf0*sizeof(struct qed_iwarp_ll2_buff));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].data_phys_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fpdu0 = 100;
          struct qed_iwarp_fpdu * fpdu = (struct qed_iwarp_fpdu *) malloc(_len_fpdu0*sizeof(struct qed_iwarp_fpdu));
          for(int _i0 = 0; _i0 < _len_fpdu0; _i0++) {
            fpdu[_i0].pkt_hdr = ((-2 * (next_i()%2)) + 1) * next_i();
        fpdu[_i0].mpa_frag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fpdu__i0__mpa_frag_virt0 = 1;
          fpdu[_i0].mpa_frag_virt = (int *) malloc(_len_fpdu__i0__mpa_frag_virt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fpdu__i0__mpa_frag_virt0; _j0++) {
            fpdu[_i0].mpa_frag_virt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fpdu[_i0].incomplete_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        fpdu[_i0].fpdu_length = ((-2 * (next_i()%2)) + 1) * next_i();
        fpdu[_i0].mpa_frag_len = ((-2 * (next_i()%2)) + 1) * next_i();
        fpdu[_i0].pkt_hdr_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fpdu__i0__mpa_buf0 = 1;
          fpdu[_i0].mpa_buf = (struct qed_iwarp_ll2_buff *) malloc(_len_fpdu__i0__mpa_buf0*sizeof(struct qed_iwarp_ll2_buff));
          for(int _j0 = 0; _j0 < _len_fpdu__i0__mpa_buf0; _j0++) {
            fpdu[_i0].mpa_buf->data_phys_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        fpdu[_i0].mpa_buf->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pkt_data0 = 100;
          struct unaligned_opaque_data * pkt_data = (struct unaligned_opaque_data *) malloc(_len_pkt_data0*sizeof(struct unaligned_opaque_data));
          for(int _i0 = 0; _i0 < _len_pkt_data0; _i0++) {
            pkt_data[_i0].first_mpa_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        pkt_data[_i0].tcp_payload_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_iwarp_init_fpdu(buf,fpdu,pkt_data,tcp_payload_size,placement_offset);
          free(buf);
          for(int _aux = 0; _aux < _len_fpdu0; _aux++) {
          free(fpdu[_aux].mpa_frag_virt);
          }
          for(int _aux = 0; _aux < _len_fpdu0; _aux++) {
          free(fpdu[_aux].mpa_buf);
          }
          free(fpdu);
          free(pkt_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
