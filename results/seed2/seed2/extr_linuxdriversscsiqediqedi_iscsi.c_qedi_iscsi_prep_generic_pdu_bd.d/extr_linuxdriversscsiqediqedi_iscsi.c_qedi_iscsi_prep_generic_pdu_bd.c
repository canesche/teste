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
typedef  int u64 ;
typedef  void* u32 ;
struct TYPE_3__ {void* lo; void* hi; } ;
struct scsi_sge {scalar_t__ sge_len; TYPE_1__ sge_addr; } ;
struct TYPE_4__ {scalar_t__ resp_dma_addr; scalar_t__ resp_bd_tbl; scalar_t__ req_buf; scalar_t__ req_wr_ptr; scalar_t__ req_dma_addr; scalar_t__ req_bd_tbl; } ;
struct qedi_conn {TYPE_2__ gen_pdu; } ;

/* Variables and functions */
 scalar_t__ ISCSI_DEF_MAX_RECV_SEG_LEN ; 

__attribute__((used)) static void qedi_iscsi_prep_generic_pdu_bd(struct qedi_conn *qedi_conn)
{
	struct scsi_sge *bd_tbl;

	bd_tbl = (struct scsi_sge *)qedi_conn->gen_pdu.req_bd_tbl;

	bd_tbl->sge_addr.hi =
		(u32)((u64)qedi_conn->gen_pdu.req_dma_addr >> 32);
	bd_tbl->sge_addr.lo = (u32)qedi_conn->gen_pdu.req_dma_addr;
	bd_tbl->sge_len = qedi_conn->gen_pdu.req_wr_ptr -
				qedi_conn->gen_pdu.req_buf;
	bd_tbl = (struct scsi_sge  *)qedi_conn->gen_pdu.resp_bd_tbl;
	bd_tbl->sge_addr.hi =
			(u32)((u64)qedi_conn->gen_pdu.resp_dma_addr >> 32);
	bd_tbl->sge_addr.lo = (u32)qedi_conn->gen_pdu.resp_dma_addr;
	bd_tbl->sge_len = ISCSI_DEF_MAX_RECV_SEG_LEN;
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
          int _len_qedi_conn0 = 1;
          struct qedi_conn * qedi_conn = (struct qedi_conn *) malloc(_len_qedi_conn0*sizeof(struct qedi_conn));
          for(int _i0 = 0; _i0 < _len_qedi_conn0; _i0++) {
            qedi_conn[_i0].gen_pdu.resp_dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        qedi_conn[_i0].gen_pdu.resp_bd_tbl = ((-2 * (next_i()%2)) + 1) * next_i();
        qedi_conn[_i0].gen_pdu.req_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        qedi_conn[_i0].gen_pdu.req_wr_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        qedi_conn[_i0].gen_pdu.req_dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        qedi_conn[_i0].gen_pdu.req_bd_tbl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qedi_iscsi_prep_generic_pdu_bd(qedi_conn);
          free(qedi_conn);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_qedi_conn0 = 65025;
          struct qedi_conn * qedi_conn = (struct qedi_conn *) malloc(_len_qedi_conn0*sizeof(struct qedi_conn));
          for(int _i0 = 0; _i0 < _len_qedi_conn0; _i0++) {
            qedi_conn[_i0].gen_pdu.resp_dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        qedi_conn[_i0].gen_pdu.resp_bd_tbl = ((-2 * (next_i()%2)) + 1) * next_i();
        qedi_conn[_i0].gen_pdu.req_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        qedi_conn[_i0].gen_pdu.req_wr_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        qedi_conn[_i0].gen_pdu.req_dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        qedi_conn[_i0].gen_pdu.req_bd_tbl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qedi_iscsi_prep_generic_pdu_bd(qedi_conn);
          free(qedi_conn);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_qedi_conn0 = 100;
          struct qedi_conn * qedi_conn = (struct qedi_conn *) malloc(_len_qedi_conn0*sizeof(struct qedi_conn));
          for(int _i0 = 0; _i0 < _len_qedi_conn0; _i0++) {
            qedi_conn[_i0].gen_pdu.resp_dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        qedi_conn[_i0].gen_pdu.resp_bd_tbl = ((-2 * (next_i()%2)) + 1) * next_i();
        qedi_conn[_i0].gen_pdu.req_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        qedi_conn[_i0].gen_pdu.req_wr_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        qedi_conn[_i0].gen_pdu.req_dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        qedi_conn[_i0].gen_pdu.req_bd_tbl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qedi_iscsi_prep_generic_pdu_bd(qedi_conn);
          free(qedi_conn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
