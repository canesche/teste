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
typedef  void* u8 ;
typedef  int /*<<< orphan*/  u32 ;
struct bnx2x_raw_obj {int state; unsigned long* pstate; int /*<<< orphan*/  wait_comp; int /*<<< orphan*/  set_pending; int /*<<< orphan*/  clear_pending; int /*<<< orphan*/  check_pending; int /*<<< orphan*/  obj_type; int /*<<< orphan*/  rdata_mapping; void* rdata; void* cl_id; int /*<<< orphan*/  cid; void* func_id; } ;
typedef  int /*<<< orphan*/  dma_addr_t ;
typedef  int /*<<< orphan*/  bnx2x_obj_type ;

/* Variables and functions */
 int /*<<< orphan*/  bnx2x_raw_check_pending ; 
 int /*<<< orphan*/  bnx2x_raw_clear_pending ; 
 int /*<<< orphan*/  bnx2x_raw_set_pending ; 
 int /*<<< orphan*/  bnx2x_raw_wait ; 

__attribute__((used)) static inline void bnx2x_init_raw_obj(struct bnx2x_raw_obj *raw, u8 cl_id,
	u32 cid, u8 func_id, void *rdata, dma_addr_t rdata_mapping, int state,
	unsigned long *pstate, bnx2x_obj_type type)
{
	raw->func_id = func_id;
	raw->cid = cid;
	raw->cl_id = cl_id;
	raw->rdata = rdata;
	raw->rdata_mapping = rdata_mapping;
	raw->state = state;
	raw->pstate = pstate;
	raw->obj_type = type;
	raw->check_pending = bnx2x_raw_check_pending;
	raw->clear_pending = bnx2x_raw_clear_pending;
	raw->set_pending = bnx2x_raw_set_pending;
	raw->wait_comp = bnx2x_raw_wait;
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
          int cid = 100;
          int rdata_mapping = 100;
          int state = 100;
          int type = 100;
          int _len_raw0 = 1;
          struct bnx2x_raw_obj * raw = (struct bnx2x_raw_obj *) malloc(_len_raw0*sizeof(struct bnx2x_raw_obj));
          for(int _i0 = 0; _i0 < _len_raw0; _i0++) {
            raw[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_raw__i0__pstate0 = 1;
          raw[_i0].pstate = (unsigned long *) malloc(_len_raw__i0__pstate0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_raw__i0__pstate0; _j0++) {
            raw[_i0].pstate[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        raw[_i0].wait_comp = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].set_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].clear_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].check_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].obj_type = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].rdata_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].cid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * cl_id;
          void * func_id;
          void * rdata;
          int _len_pstate0 = 1;
          unsigned long * pstate = (unsigned long *) malloc(_len_pstate0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pstate0; _i0++) {
            pstate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2x_init_raw_obj(raw,cl_id,cid,func_id,rdata,rdata_mapping,state,pstate,type);
          for(int _aux = 0; _aux < _len_raw0; _aux++) {
          free(raw[_aux].pstate);
          }
          free(raw);
          free(pstate);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cid = 255;
          int rdata_mapping = 255;
          int state = 255;
          int type = 255;
          int _len_raw0 = 65025;
          struct bnx2x_raw_obj * raw = (struct bnx2x_raw_obj *) malloc(_len_raw0*sizeof(struct bnx2x_raw_obj));
          for(int _i0 = 0; _i0 < _len_raw0; _i0++) {
            raw[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_raw__i0__pstate0 = 1;
          raw[_i0].pstate = (unsigned long *) malloc(_len_raw__i0__pstate0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_raw__i0__pstate0; _j0++) {
            raw[_i0].pstate[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        raw[_i0].wait_comp = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].set_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].clear_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].check_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].obj_type = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].rdata_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].cid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * cl_id;
          void * func_id;
          void * rdata;
          int _len_pstate0 = 65025;
          unsigned long * pstate = (unsigned long *) malloc(_len_pstate0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pstate0; _i0++) {
            pstate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2x_init_raw_obj(raw,cl_id,cid,func_id,rdata,rdata_mapping,state,pstate,type);
          for(int _aux = 0; _aux < _len_raw0; _aux++) {
          free(raw[_aux].pstate);
          }
          free(raw);
          free(pstate);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cid = 10;
          int rdata_mapping = 10;
          int state = 10;
          int type = 10;
          int _len_raw0 = 100;
          struct bnx2x_raw_obj * raw = (struct bnx2x_raw_obj *) malloc(_len_raw0*sizeof(struct bnx2x_raw_obj));
          for(int _i0 = 0; _i0 < _len_raw0; _i0++) {
            raw[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_raw__i0__pstate0 = 1;
          raw[_i0].pstate = (unsigned long *) malloc(_len_raw__i0__pstate0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_raw__i0__pstate0; _j0++) {
            raw[_i0].pstate[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        raw[_i0].wait_comp = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].set_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].clear_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].check_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].obj_type = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].rdata_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].cid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * cl_id;
          void * func_id;
          void * rdata;
          int _len_pstate0 = 100;
          unsigned long * pstate = (unsigned long *) malloc(_len_pstate0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pstate0; _i0++) {
            pstate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2x_init_raw_obj(raw,cl_id,cid,func_id,rdata,rdata_mapping,state,pstate,type);
          for(int _aux = 0; _aux < _len_raw0; _aux++) {
          free(raw[_aux].pstate);
          }
          free(raw);
          free(pstate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
