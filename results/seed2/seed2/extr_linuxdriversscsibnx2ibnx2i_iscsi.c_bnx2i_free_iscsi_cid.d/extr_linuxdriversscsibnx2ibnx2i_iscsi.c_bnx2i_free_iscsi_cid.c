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
typedef  size_t u16 ;
struct TYPE_2__ {int cid_q_prod_idx; size_t* cid_que; int cid_q_max_idx; int /*<<< orphan*/ ** conn_cid_tbl; int /*<<< orphan*/  cid_free_cnt; } ;
struct bnx2i_hba {TYPE_1__ cid_que; } ;

/* Variables and functions */

__attribute__((used)) static void bnx2i_free_iscsi_cid(struct bnx2i_hba *hba, u16 iscsi_cid)
{
	int idx;

	if (iscsi_cid == (u16) -1)
		return;

	hba->cid_que.cid_free_cnt++;

	idx = hba->cid_que.cid_q_prod_idx;
	hba->cid_que.cid_que[idx] = iscsi_cid;
	hba->cid_que.conn_cid_tbl[iscsi_cid] = NULL;
	hba->cid_que.cid_q_prod_idx++;
	if (hba->cid_que.cid_q_prod_idx == hba->cid_que.cid_q_max_idx)
		hba->cid_que.cid_q_prod_idx = 0;
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
          unsigned long iscsi_cid = 100;
          int _len_hba0 = 1;
          struct bnx2i_hba * hba = (struct bnx2i_hba *) malloc(_len_hba0*sizeof(struct bnx2i_hba));
          for(int _i0 = 0; _i0 < _len_hba0; _i0++) {
            hba[_i0].cid_que.cid_q_prod_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hba__i0__cid_que_cid_que0 = 1;
          hba[_i0].cid_que.cid_que = (unsigned long *) malloc(_len_hba__i0__cid_que_cid_que0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_hba__i0__cid_que_cid_que0; _j0++) {
            hba[_i0].cid_que.cid_que[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hba[_i0].cid_que.cid_q_max_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hba__i0__cid_que_conn_cid_tbl0 = 1;
          hba[_i0].cid_que.conn_cid_tbl = (int **) malloc(_len_hba__i0__cid_que_conn_cid_tbl0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_hba__i0__cid_que_conn_cid_tbl0; _j0++) {
            int _len_hba__i0__cid_que_conn_cid_tbl1 = 1;
            hba[_i0].cid_que.conn_cid_tbl[_j0] = (int *) malloc(_len_hba__i0__cid_que_conn_cid_tbl1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_hba__i0__cid_que_conn_cid_tbl1; _j1++) {
              hba[_i0].cid_que.conn_cid_tbl[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        hba[_i0].cid_que.cid_free_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2i_free_iscsi_cid(hba,iscsi_cid);
          free(hba);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long iscsi_cid = 255;
          int _len_hba0 = 65025;
          struct bnx2i_hba * hba = (struct bnx2i_hba *) malloc(_len_hba0*sizeof(struct bnx2i_hba));
          for(int _i0 = 0; _i0 < _len_hba0; _i0++) {
            hba[_i0].cid_que.cid_q_prod_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hba__i0__cid_que_cid_que0 = 1;
          hba[_i0].cid_que.cid_que = (unsigned long *) malloc(_len_hba__i0__cid_que_cid_que0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_hba__i0__cid_que_cid_que0; _j0++) {
            hba[_i0].cid_que.cid_que[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hba[_i0].cid_que.cid_q_max_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hba__i0__cid_que_conn_cid_tbl0 = 1;
          hba[_i0].cid_que.conn_cid_tbl = (int **) malloc(_len_hba__i0__cid_que_conn_cid_tbl0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_hba__i0__cid_que_conn_cid_tbl0; _j0++) {
            int _len_hba__i0__cid_que_conn_cid_tbl1 = 1;
            hba[_i0].cid_que.conn_cid_tbl[_j0] = (int *) malloc(_len_hba__i0__cid_que_conn_cid_tbl1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_hba__i0__cid_que_conn_cid_tbl1; _j1++) {
              hba[_i0].cid_que.conn_cid_tbl[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        hba[_i0].cid_que.cid_free_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2i_free_iscsi_cid(hba,iscsi_cid);
          free(hba);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long iscsi_cid = 10;
          int _len_hba0 = 100;
          struct bnx2i_hba * hba = (struct bnx2i_hba *) malloc(_len_hba0*sizeof(struct bnx2i_hba));
          for(int _i0 = 0; _i0 < _len_hba0; _i0++) {
            hba[_i0].cid_que.cid_q_prod_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hba__i0__cid_que_cid_que0 = 1;
          hba[_i0].cid_que.cid_que = (unsigned long *) malloc(_len_hba__i0__cid_que_cid_que0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_hba__i0__cid_que_cid_que0; _j0++) {
            hba[_i0].cid_que.cid_que[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hba[_i0].cid_que.cid_q_max_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hba__i0__cid_que_conn_cid_tbl0 = 1;
          hba[_i0].cid_que.conn_cid_tbl = (int **) malloc(_len_hba__i0__cid_que_conn_cid_tbl0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_hba__i0__cid_que_conn_cid_tbl0; _j0++) {
            int _len_hba__i0__cid_que_conn_cid_tbl1 = 1;
            hba[_i0].cid_que.conn_cid_tbl[_j0] = (int *) malloc(_len_hba__i0__cid_que_conn_cid_tbl1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_hba__i0__cid_que_conn_cid_tbl1; _j1++) {
              hba[_i0].cid_que.conn_cid_tbl[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        hba[_i0].cid_que.cid_free_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2i_free_iscsi_cid(hba,iscsi_cid);
          free(hba);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
