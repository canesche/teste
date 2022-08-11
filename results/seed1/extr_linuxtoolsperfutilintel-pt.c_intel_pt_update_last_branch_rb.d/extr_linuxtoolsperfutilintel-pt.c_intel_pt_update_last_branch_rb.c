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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct intel_pt_state {int flags; int /*<<< orphan*/  to_ip; int /*<<< orphan*/  from_ip; } ;
struct intel_pt_queue {int last_branch_pos; TYPE_3__* pt; struct branch_stack* last_branch_rb; struct intel_pt_state* state; } ;
struct branch_stack {scalar_t__ nr; struct branch_entry* entries; } ;
struct TYPE_4__ {int abort; int in_tx; int /*<<< orphan*/  mispred; } ;
struct branch_entry {TYPE_1__ flags; int /*<<< orphan*/  to; int /*<<< orphan*/  from; } ;
struct TYPE_5__ {int last_branch_sz; } ;
struct TYPE_6__ {TYPE_2__ synth_opts; int /*<<< orphan*/  mispred_all; } ;

/* Variables and functions */
 int INTEL_PT_ABORT_TX ; 
 int INTEL_PT_IN_TX ; 

__attribute__((used)) static void intel_pt_update_last_branch_rb(struct intel_pt_queue *ptq)
{
	const struct intel_pt_state *state = ptq->state;
	struct branch_stack *bs = ptq->last_branch_rb;
	struct branch_entry *be;

	if (!ptq->last_branch_pos)
		ptq->last_branch_pos = ptq->pt->synth_opts.last_branch_sz;

	ptq->last_branch_pos -= 1;

	be              = &bs->entries[ptq->last_branch_pos];
	be->from        = state->from_ip;
	be->to          = state->to_ip;
	be->flags.abort = !!(state->flags & INTEL_PT_ABORT_TX);
	be->flags.in_tx = !!(state->flags & INTEL_PT_IN_TX);
	/* No support for mispredict */
	be->flags.mispred = ptq->pt->mispred_all;

	if (bs->nr < ptq->pt->synth_opts.last_branch_sz)
		bs->nr += 1;
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
          int _len_ptq0 = 1;
          struct intel_pt_queue * ptq = (struct intel_pt_queue *) malloc(_len_ptq0*sizeof(struct intel_pt_queue));
          for(int _i0 = 0; _i0 < _len_ptq0; _i0++) {
            ptq[_i0].last_branch_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ptq__i0__pt0 = 1;
          ptq[_i0].pt = (struct TYPE_6__ *) malloc(_len_ptq__i0__pt0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ptq__i0__pt0; _j0++) {
            ptq[_i0].pt->synth_opts.last_branch_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].pt->mispred_all = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ptq__i0__last_branch_rb0 = 1;
          ptq[_i0].last_branch_rb = (struct branch_stack *) malloc(_len_ptq__i0__last_branch_rb0*sizeof(struct branch_stack));
          for(int _j0 = 0; _j0 < _len_ptq__i0__last_branch_rb0; _j0++) {
            ptq[_i0].last_branch_rb->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ptq__i0__last_branch_rb_entries0 = 1;
          ptq[_i0].last_branch_rb->entries = (struct branch_entry *) malloc(_len_ptq__i0__last_branch_rb_entries0*sizeof(struct branch_entry));
          for(int _j0 = 0; _j0 < _len_ptq__i0__last_branch_rb_entries0; _j0++) {
            ptq[_i0].last_branch_rb->entries->flags.abort = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].last_branch_rb->entries->flags.in_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].last_branch_rb->entries->flags.mispred = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].last_branch_rb->entries->to = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].last_branch_rb->entries->from = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ptq__i0__state0 = 1;
          ptq[_i0].state = (struct intel_pt_state *) malloc(_len_ptq__i0__state0*sizeof(struct intel_pt_state));
          for(int _j0 = 0; _j0 < _len_ptq__i0__state0; _j0++) {
            ptq[_i0].state->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].state->to_ip = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].state->from_ip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          intel_pt_update_last_branch_rb(ptq);
          for(int _aux = 0; _aux < _len_ptq0; _aux++) {
          free(ptq[_aux].pt);
          }
          for(int _aux = 0; _aux < _len_ptq0; _aux++) {
          free(ptq[_aux].last_branch_rb);
          }
          for(int _aux = 0; _aux < _len_ptq0; _aux++) {
          free(ptq[_aux].state);
          }
          free(ptq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ptq0 = 65025;
          struct intel_pt_queue * ptq = (struct intel_pt_queue *) malloc(_len_ptq0*sizeof(struct intel_pt_queue));
          for(int _i0 = 0; _i0 < _len_ptq0; _i0++) {
            ptq[_i0].last_branch_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ptq__i0__pt0 = 1;
          ptq[_i0].pt = (struct TYPE_6__ *) malloc(_len_ptq__i0__pt0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ptq__i0__pt0; _j0++) {
            ptq[_i0].pt->synth_opts.last_branch_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].pt->mispred_all = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ptq__i0__last_branch_rb0 = 1;
          ptq[_i0].last_branch_rb = (struct branch_stack *) malloc(_len_ptq__i0__last_branch_rb0*sizeof(struct branch_stack));
          for(int _j0 = 0; _j0 < _len_ptq__i0__last_branch_rb0; _j0++) {
            ptq[_i0].last_branch_rb->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ptq__i0__last_branch_rb_entries0 = 1;
          ptq[_i0].last_branch_rb->entries = (struct branch_entry *) malloc(_len_ptq__i0__last_branch_rb_entries0*sizeof(struct branch_entry));
          for(int _j0 = 0; _j0 < _len_ptq__i0__last_branch_rb_entries0; _j0++) {
            ptq[_i0].last_branch_rb->entries->flags.abort = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].last_branch_rb->entries->flags.in_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].last_branch_rb->entries->flags.mispred = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].last_branch_rb->entries->to = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].last_branch_rb->entries->from = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ptq__i0__state0 = 1;
          ptq[_i0].state = (struct intel_pt_state *) malloc(_len_ptq__i0__state0*sizeof(struct intel_pt_state));
          for(int _j0 = 0; _j0 < _len_ptq__i0__state0; _j0++) {
            ptq[_i0].state->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].state->to_ip = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].state->from_ip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          intel_pt_update_last_branch_rb(ptq);
          for(int _aux = 0; _aux < _len_ptq0; _aux++) {
          free(ptq[_aux].pt);
          }
          for(int _aux = 0; _aux < _len_ptq0; _aux++) {
          free(ptq[_aux].last_branch_rb);
          }
          for(int _aux = 0; _aux < _len_ptq0; _aux++) {
          free(ptq[_aux].state);
          }
          free(ptq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ptq0 = 100;
          struct intel_pt_queue * ptq = (struct intel_pt_queue *) malloc(_len_ptq0*sizeof(struct intel_pt_queue));
          for(int _i0 = 0; _i0 < _len_ptq0; _i0++) {
            ptq[_i0].last_branch_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ptq__i0__pt0 = 1;
          ptq[_i0].pt = (struct TYPE_6__ *) malloc(_len_ptq__i0__pt0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ptq__i0__pt0; _j0++) {
            ptq[_i0].pt->synth_opts.last_branch_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].pt->mispred_all = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ptq__i0__last_branch_rb0 = 1;
          ptq[_i0].last_branch_rb = (struct branch_stack *) malloc(_len_ptq__i0__last_branch_rb0*sizeof(struct branch_stack));
          for(int _j0 = 0; _j0 < _len_ptq__i0__last_branch_rb0; _j0++) {
            ptq[_i0].last_branch_rb->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ptq__i0__last_branch_rb_entries0 = 1;
          ptq[_i0].last_branch_rb->entries = (struct branch_entry *) malloc(_len_ptq__i0__last_branch_rb_entries0*sizeof(struct branch_entry));
          for(int _j0 = 0; _j0 < _len_ptq__i0__last_branch_rb_entries0; _j0++) {
            ptq[_i0].last_branch_rb->entries->flags.abort = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].last_branch_rb->entries->flags.in_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].last_branch_rb->entries->flags.mispred = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].last_branch_rb->entries->to = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].last_branch_rb->entries->from = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ptq__i0__state0 = 1;
          ptq[_i0].state = (struct intel_pt_state *) malloc(_len_ptq__i0__state0*sizeof(struct intel_pt_state));
          for(int _j0 = 0; _j0 < _len_ptq__i0__state0; _j0++) {
            ptq[_i0].state->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].state->to_ip = ((-2 * (next_i()%2)) + 1) * next_i();
        ptq[_i0].state->from_ip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          intel_pt_update_last_branch_rb(ptq);
          for(int _aux = 0; _aux < _len_ptq0; _aux++) {
          free(ptq[_aux].pt);
          }
          for(int _aux = 0; _aux < _len_ptq0; _aux++) {
          free(ptq[_aux].last_branch_rb);
          }
          for(int _aux = 0; _aux < _len_ptq0; _aux++) {
          free(ptq[_aux].state);
          }
          free(ptq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
