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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct sym_tcb {int usrtags; int usr_width; int /*<<< orphan*/  usr_period; int /*<<< orphan*/  usrflags; } ;
struct Tekram_target {int flags; int sync_index; } ;
struct TYPE_3__ {int max_tags_index; struct Tekram_target* target; } ;
typedef  TYPE_1__ Tekram_nvram ;

/* Variables and functions */
 int /*<<< orphan*/  SYM_DISC_ENABLED ; 
 int TEKRAM_DISCONNECT_ENABLE ; 
 int TEKRAM_SYNC_NEGO ; 
 int TEKRAM_TAGGED_COMMANDS ; 
 int TEKRAM_WIDE_NEGO ; 
 int /*<<< orphan*/ * Tekram_sync ; 

__attribute__((used)) static void
sym_Tekram_setup_target(struct sym_tcb *tp, int target, Tekram_nvram *nvram)
{
	struct Tekram_target *tn = &nvram->target[target];

	if (tn->flags & TEKRAM_TAGGED_COMMANDS) {
		tp->usrtags = 2 << nvram->max_tags_index;
	}

	if (tn->flags & TEKRAM_DISCONNECT_ENABLE)
		tp->usrflags |= SYM_DISC_ENABLED;
 
	if (tn->flags & TEKRAM_SYNC_NEGO)
		tp->usr_period = Tekram_sync[tn->sync_index & 0xf];
	tp->usr_width = (tn->flags & TEKRAM_WIDE_NEGO) ? 1 : 0;
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
          int target = 100;
          int _len_tp0 = 1;
          struct sym_tcb * tp = (struct sym_tcb *) malloc(_len_tp0*sizeof(struct sym_tcb));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].usrtags = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usr_width = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usr_period = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usrflags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nvram0 = 1;
          struct TYPE_3__ * nvram = (struct TYPE_3__ *) malloc(_len_nvram0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_nvram0; _i0++) {
            nvram[_i0].max_tags_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_nvram__i0__target0 = 1;
          nvram[_i0].target = (struct Tekram_target *) malloc(_len_nvram__i0__target0*sizeof(struct Tekram_target));
          for(int _j0 = 0; _j0 < _len_nvram__i0__target0; _j0++) {
            nvram[_i0].target->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        nvram[_i0].target->sync_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sym_Tekram_setup_target(tp,target,nvram);
          free(tp);
          for(int _aux = 0; _aux < _len_nvram0; _aux++) {
          free(nvram[_aux].target);
          }
          free(nvram);
        
        break;
    }
    // big-arr
    case 1:
    {
          int target = 255;
          int _len_tp0 = 65025;
          struct sym_tcb * tp = (struct sym_tcb *) malloc(_len_tp0*sizeof(struct sym_tcb));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].usrtags = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usr_width = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usr_period = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usrflags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nvram0 = 65025;
          struct TYPE_3__ * nvram = (struct TYPE_3__ *) malloc(_len_nvram0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_nvram0; _i0++) {
            nvram[_i0].max_tags_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_nvram__i0__target0 = 1;
          nvram[_i0].target = (struct Tekram_target *) malloc(_len_nvram__i0__target0*sizeof(struct Tekram_target));
          for(int _j0 = 0; _j0 < _len_nvram__i0__target0; _j0++) {
            nvram[_i0].target->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        nvram[_i0].target->sync_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sym_Tekram_setup_target(tp,target,nvram);
          free(tp);
          for(int _aux = 0; _aux < _len_nvram0; _aux++) {
          free(nvram[_aux].target);
          }
          free(nvram);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int target = 10;
          int _len_tp0 = 100;
          struct sym_tcb * tp = (struct sym_tcb *) malloc(_len_tp0*sizeof(struct sym_tcb));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].usrtags = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usr_width = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usr_period = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usrflags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nvram0 = 100;
          struct TYPE_3__ * nvram = (struct TYPE_3__ *) malloc(_len_nvram0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_nvram0; _i0++) {
            nvram[_i0].max_tags_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_nvram__i0__target0 = 1;
          nvram[_i0].target = (struct Tekram_target *) malloc(_len_nvram__i0__target0*sizeof(struct Tekram_target));
          for(int _j0 = 0; _j0 < _len_nvram__i0__target0; _j0++) {
            nvram[_i0].target->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        nvram[_i0].target->sync_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sym_Tekram_setup_target(tp,target,nvram);
          free(tp);
          for(int _aux = 0; _aux < _len_nvram0; _aux++) {
          free(nvram[_aux].target);
          }
          free(nvram);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
