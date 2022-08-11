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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int pw; int ph; } ;
typedef  TYPE_2__ opj_pi_resolution_t ;
struct TYPE_6__ {long layno0; long layno1; size_t resno0; size_t resno1; size_t compno0; size_t compno1; int precno1; long precno0; } ;
struct TYPE_8__ {size_t compno; size_t resno; long layno; long precno; long step_l; long step_r; long step_c; long step_p; int* include; TYPE_1__ poc; int /*<<< orphan*/  tp_on; TYPE_4__* comps; scalar_t__ first; } ;
typedef  TYPE_3__ opj_pi_iterator_t ;
struct TYPE_9__ {size_t numresolutions; TYPE_2__* resolutions; } ;
typedef  TYPE_4__ opj_pi_comp_t ;

/* Variables and functions */

__attribute__((used)) static bool pi_next_lrcp(opj_pi_iterator_t * pi) {
	opj_pi_comp_t *comp = NULL;
	opj_pi_resolution_t *res = NULL;
	long index = 0;
	
	if (!pi->first) {
		comp = &pi->comps[pi->compno];
		res = &comp->resolutions[pi->resno];
		goto LABEL_SKIP;
	} else {
		pi->first = 0;
	}

	for (pi->layno = pi->poc.layno0; pi->layno < pi->poc.layno1; pi->layno++) {
		for (pi->resno = pi->poc.resno0; pi->resno < pi->poc.resno1;
		pi->resno++) {
			for (pi->compno = pi->poc.compno0; pi->compno < pi->poc.compno1; pi->compno++) {
				comp = &pi->comps[pi->compno];
				if (pi->resno >= comp->numresolutions) {
					continue;
				}
				res = &comp->resolutions[pi->resno];
				if (!pi->tp_on){
					pi->poc.precno1 = res->pw * res->ph;
				}
				for (pi->precno = pi->poc.precno0; pi->precno < pi->poc.precno1; pi->precno++) {
					index = pi->layno * pi->step_l + pi->resno * pi->step_r + pi->compno * pi->step_c + pi->precno * pi->step_p;
					if (!pi->include[index]) {
						pi->include[index] = 1;
						return true;
					}
LABEL_SKIP:;
				}
			}
		}
	}
	
	return false;
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
          int _len_pi0 = 1;
          struct TYPE_8__ * pi = (struct TYPE_8__ *) malloc(_len_pi0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
            pi[_i0].compno = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].resno = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].layno = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].precno = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].step_l = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].step_r = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].step_c = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].step_p = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pi__i0__include0 = 1;
          pi[_i0].include = (int *) malloc(_len_pi__i0__include0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pi__i0__include0; _j0++) {
            pi[_i0].include[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pi[_i0].poc.layno0 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.layno1 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.resno0 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.resno1 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.compno0 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.compno1 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.precno1 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.precno0 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].tp_on = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pi__i0__comps0 = 1;
          pi[_i0].comps = (struct TYPE_9__ *) malloc(_len_pi__i0__comps0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_pi__i0__comps0; _j0++) {
            pi[_i0].comps->numresolutions = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pi__i0__comps_resolutions0 = 1;
          pi[_i0].comps->resolutions = (struct TYPE_7__ *) malloc(_len_pi__i0__comps_resolutions0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_pi__i0__comps_resolutions0; _j0++) {
            pi[_i0].comps->resolutions->pw = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].comps->resolutions->ph = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        pi[_i0].first = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pi_next_lrcp(pi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pi0; _aux++) {
          free(pi[_aux].include);
          }
          for(int _aux = 0; _aux < _len_pi0; _aux++) {
          free(pi[_aux].comps);
          }
          free(pi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pi0 = 65025;
          struct TYPE_8__ * pi = (struct TYPE_8__ *) malloc(_len_pi0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
            pi[_i0].compno = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].resno = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].layno = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].precno = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].step_l = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].step_r = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].step_c = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].step_p = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pi__i0__include0 = 1;
          pi[_i0].include = (int *) malloc(_len_pi__i0__include0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pi__i0__include0; _j0++) {
            pi[_i0].include[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pi[_i0].poc.layno0 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.layno1 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.resno0 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.resno1 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.compno0 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.compno1 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.precno1 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.precno0 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].tp_on = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pi__i0__comps0 = 1;
          pi[_i0].comps = (struct TYPE_9__ *) malloc(_len_pi__i0__comps0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_pi__i0__comps0; _j0++) {
            pi[_i0].comps->numresolutions = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pi__i0__comps_resolutions0 = 1;
          pi[_i0].comps->resolutions = (struct TYPE_7__ *) malloc(_len_pi__i0__comps_resolutions0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_pi__i0__comps_resolutions0; _j0++) {
            pi[_i0].comps->resolutions->pw = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].comps->resolutions->ph = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        pi[_i0].first = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pi_next_lrcp(pi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pi0; _aux++) {
          free(pi[_aux].include);
          }
          for(int _aux = 0; _aux < _len_pi0; _aux++) {
          free(pi[_aux].comps);
          }
          free(pi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pi0 = 100;
          struct TYPE_8__ * pi = (struct TYPE_8__ *) malloc(_len_pi0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
            pi[_i0].compno = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].resno = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].layno = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].precno = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].step_l = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].step_r = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].step_c = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].step_p = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pi__i0__include0 = 1;
          pi[_i0].include = (int *) malloc(_len_pi__i0__include0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pi__i0__include0; _j0++) {
            pi[_i0].include[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pi[_i0].poc.layno0 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.layno1 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.resno0 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.resno1 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.compno0 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.compno1 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.precno1 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].poc.precno0 = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].tp_on = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pi__i0__comps0 = 1;
          pi[_i0].comps = (struct TYPE_9__ *) malloc(_len_pi__i0__comps0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_pi__i0__comps0; _j0++) {
            pi[_i0].comps->numresolutions = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pi__i0__comps_resolutions0 = 1;
          pi[_i0].comps->resolutions = (struct TYPE_7__ *) malloc(_len_pi__i0__comps_resolutions0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_pi__i0__comps_resolutions0; _j0++) {
            pi[_i0].comps->resolutions->pw = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].comps->resolutions->ph = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        pi[_i0].first = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pi_next_lrcp(pi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pi0; _aux++) {
          free(pi[_aux].include);
          }
          for(int _aux = 0; _aux < _len_pi0; _aux++) {
          free(pi[_aux].comps);
          }
          free(pi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
