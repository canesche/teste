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
struct pfi_kif {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ptr; } ;
struct pf_state {scalar_t__ timeout; struct pfi_kif* rt_kif; TYPE_2__ rule; } ;
struct TYPE_3__ {scalar_t__ rt; int direction; } ;

/* Variables and functions */
 scalar_t__ PFTM_PURGE ; 
 int PF_DROP ; 
 int PF_IN ; 
 int PF_OUT ; 
 int PF_PASS ; 
 scalar_t__ PF_REPLYTO ; 
 scalar_t__ PF_ROUTETO ; 

__attribute__((used)) static const int *
pf_state_lookup_aux(struct pf_state **state, struct pfi_kif *kif,
	int direction, int *action)
{
	if (*state == NULL || (*state)->timeout == PFTM_PURGE) {
		*action = PF_DROP;
		return (action);
	}

	if (direction == PF_OUT &&
	    (((*state)->rule.ptr->rt == PF_ROUTETO &&
	    (*state)->rule.ptr->direction == PF_OUT) ||
	    ((*state)->rule.ptr->rt == PF_REPLYTO &&
	    (*state)->rule.ptr->direction == PF_IN)) &&
	    (*state)->rt_kif != NULL && (*state)->rt_kif != kif) {
		*action = PF_PASS;
		return (action);
	}

	return (0);
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
          int direction = 100;
          int _len_state0 = 1;
          struct pf_state ** state = (struct pf_state **) malloc(_len_state0*sizeof(struct pf_state *));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            int _len_state1 = 1;
            state[_i0] = (struct pf_state *) malloc(_len_state1*sizeof(struct pf_state));
            for(int _i1 = 0; _i1 < _len_state1; _i1++) {
              state[_i0][_i1].timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0___i1__rt_kif0 = 1;
          state[_i0][_i1].rt_kif = (struct pfi_kif *) malloc(_len_state__i0___i1__rt_kif0*sizeof(struct pfi_kif));
          for(int _j0 = 0; _j0 < _len_state__i0___i1__rt_kif0; _j0++) {
            state[_i0][_i1].rt_kif->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state__i0___i1__rule_ptr0 = 1;
          state[_i0][_i1].rule.ptr = (struct TYPE_3__ *) malloc(_len_state__i0___i1__rule_ptr0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_state__i0___i1__rule_ptr0; _j0++) {
            state[_i0][_i1].rule.ptr->rt = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0][_i1].rule.ptr->direction = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_kif0 = 1;
          struct pfi_kif * kif = (struct pfi_kif *) malloc(_len_kif0*sizeof(struct pfi_kif));
          for(int _i0 = 0; _i0 < _len_kif0; _i0++) {
            kif[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_action0 = 1;
          int * action = (int *) malloc(_len_action0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_action0; _i0++) {
            action[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = pf_state_lookup_aux(state,kif,direction,action);
          printf("%d\n", (*benchRet)); 
          for(int i1 = 0; i1 < _len_state0; i1++) {
            int _len_state1 = 1;
              for(int _aux = 0; _aux < _len_state1; _aux++) {
          free(state[_aux].rt_kif);
          }
          free(state[i1]);
          }
          free(state);
          free(kif);
          free(action);
        
        break;
    }
    // big-arr
    case 1:
    {
          int direction = 255;
          int _len_state0 = 65025;
          struct pf_state ** state = (struct pf_state **) malloc(_len_state0*sizeof(struct pf_state *));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            int _len_state1 = 1;
            state[_i0] = (struct pf_state *) malloc(_len_state1*sizeof(struct pf_state));
            for(int _i1 = 0; _i1 < _len_state1; _i1++) {
              state[_i0][_i1].timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0___i1__rt_kif0 = 1;
          state[_i0][_i1].rt_kif = (struct pfi_kif *) malloc(_len_state__i0___i1__rt_kif0*sizeof(struct pfi_kif));
          for(int _j0 = 0; _j0 < _len_state__i0___i1__rt_kif0; _j0++) {
            state[_i0][_i1].rt_kif->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state__i0___i1__rule_ptr0 = 1;
          state[_i0][_i1].rule.ptr = (struct TYPE_3__ *) malloc(_len_state__i0___i1__rule_ptr0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_state__i0___i1__rule_ptr0; _j0++) {
            state[_i0][_i1].rule.ptr->rt = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0][_i1].rule.ptr->direction = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_kif0 = 65025;
          struct pfi_kif * kif = (struct pfi_kif *) malloc(_len_kif0*sizeof(struct pfi_kif));
          for(int _i0 = 0; _i0 < _len_kif0; _i0++) {
            kif[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_action0 = 65025;
          int * action = (int *) malloc(_len_action0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_action0; _i0++) {
            action[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = pf_state_lookup_aux(state,kif,direction,action);
          printf("%d\n", (*benchRet)); 
          for(int i1 = 0; i1 < _len_state0; i1++) {
            int _len_state1 = 1;
              for(int _aux = 0; _aux < _len_state1; _aux++) {
          free(state[_aux].rt_kif);
          }
          free(state[i1]);
          }
          free(state);
          free(kif);
          free(action);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int direction = 10;
          int _len_state0 = 100;
          struct pf_state ** state = (struct pf_state **) malloc(_len_state0*sizeof(struct pf_state *));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            int _len_state1 = 1;
            state[_i0] = (struct pf_state *) malloc(_len_state1*sizeof(struct pf_state));
            for(int _i1 = 0; _i1 < _len_state1; _i1++) {
              state[_i0][_i1].timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0___i1__rt_kif0 = 1;
          state[_i0][_i1].rt_kif = (struct pfi_kif *) malloc(_len_state__i0___i1__rt_kif0*sizeof(struct pfi_kif));
          for(int _j0 = 0; _j0 < _len_state__i0___i1__rt_kif0; _j0++) {
            state[_i0][_i1].rt_kif->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state__i0___i1__rule_ptr0 = 1;
          state[_i0][_i1].rule.ptr = (struct TYPE_3__ *) malloc(_len_state__i0___i1__rule_ptr0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_state__i0___i1__rule_ptr0; _j0++) {
            state[_i0][_i1].rule.ptr->rt = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0][_i1].rule.ptr->direction = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_kif0 = 100;
          struct pfi_kif * kif = (struct pfi_kif *) malloc(_len_kif0*sizeof(struct pfi_kif));
          for(int _i0 = 0; _i0 < _len_kif0; _i0++) {
            kif[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_action0 = 100;
          int * action = (int *) malloc(_len_action0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_action0; _i0++) {
            action[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = pf_state_lookup_aux(state,kif,direction,action);
          printf("%d\n", (*benchRet)); 
          for(int i1 = 0; i1 < _len_state0; i1++) {
            int _len_state1 = 1;
              for(int _aux = 0; _aux < _len_state1; _aux++) {
          free(state[_aux].rt_kif);
          }
          free(state[i1]);
          }
          free(state);
          free(kif);
          free(action);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
