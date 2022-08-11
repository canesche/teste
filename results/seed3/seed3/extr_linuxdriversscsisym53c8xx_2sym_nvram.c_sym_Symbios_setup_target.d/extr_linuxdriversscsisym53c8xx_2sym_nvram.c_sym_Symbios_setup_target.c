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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct sym_tcb {int usr_period; int usr_width; int /*<<< orphan*/  usrflags; scalar_t__ usrtags; } ;
struct TYPE_5__ {TYPE_1__* target; } ;
struct TYPE_4__ {int flags; int sync_period; int bus_width; } ;
typedef  TYPE_1__ Symbios_target ;
typedef  TYPE_2__ Symbios_nvram ;

/* Variables and functions */
 int SYMBIOS_DISCONNECT_ENABLE ; 
 int SYMBIOS_QUEUE_TAGS_ENABLED ; 
 int SYMBIOS_SCAN_AT_BOOT_TIME ; 
 int SYMBIOS_SCAN_LUNS ; 
 int /*<<< orphan*/  SYM_DISC_ENABLED ; 
 int /*<<< orphan*/  SYM_SCAN_BOOT_DISABLED ; 
 int /*<<< orphan*/  SYM_SCAN_LUNS_DISABLED ; 

__attribute__((used)) static void
sym_Symbios_setup_target(struct sym_tcb *tp, int target, Symbios_nvram *nvram)
{
	Symbios_target *tn = &nvram->target[target];

	if (!(tn->flags & SYMBIOS_QUEUE_TAGS_ENABLED))
		tp->usrtags = 0;
	if (!(tn->flags & SYMBIOS_DISCONNECT_ENABLE))
		tp->usrflags &= ~SYM_DISC_ENABLED;
	if (!(tn->flags & SYMBIOS_SCAN_AT_BOOT_TIME))
		tp->usrflags |= SYM_SCAN_BOOT_DISABLED;
	if (!(tn->flags & SYMBIOS_SCAN_LUNS))
		tp->usrflags |= SYM_SCAN_LUNS_DISABLED;
	tp->usr_period = (tn->sync_period + 3) / 4;
	tp->usr_width = (tn->bus_width == 0x8) ? 0 : 1;
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
            tp[_i0].usr_period = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usr_width = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usrflags = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usrtags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nvram0 = 1;
          struct TYPE_5__ * nvram = (struct TYPE_5__ *) malloc(_len_nvram0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_nvram0; _i0++) {
              int _len_nvram__i0__target0 = 1;
          nvram[_i0].target = (struct TYPE_4__ *) malloc(_len_nvram__i0__target0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_nvram__i0__target0; _j0++) {
            nvram[_i0].target->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        nvram[_i0].target->sync_period = ((-2 * (next_i()%2)) + 1) * next_i();
        nvram[_i0].target->bus_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sym_Symbios_setup_target(tp,target,nvram);
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
            tp[_i0].usr_period = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usr_width = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usrflags = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usrtags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nvram0 = 65025;
          struct TYPE_5__ * nvram = (struct TYPE_5__ *) malloc(_len_nvram0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_nvram0; _i0++) {
              int _len_nvram__i0__target0 = 1;
          nvram[_i0].target = (struct TYPE_4__ *) malloc(_len_nvram__i0__target0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_nvram__i0__target0; _j0++) {
            nvram[_i0].target->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        nvram[_i0].target->sync_period = ((-2 * (next_i()%2)) + 1) * next_i();
        nvram[_i0].target->bus_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sym_Symbios_setup_target(tp,target,nvram);
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
            tp[_i0].usr_period = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usr_width = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usrflags = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].usrtags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nvram0 = 100;
          struct TYPE_5__ * nvram = (struct TYPE_5__ *) malloc(_len_nvram0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_nvram0; _i0++) {
              int _len_nvram__i0__target0 = 1;
          nvram[_i0].target = (struct TYPE_4__ *) malloc(_len_nvram__i0__target0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_nvram__i0__target0; _j0++) {
            nvram[_i0].target->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        nvram[_i0].target->sync_period = ((-2 * (next_i()%2)) + 1) * next_i();
        nvram[_i0].target->bus_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sym_Symbios_setup_target(tp,target,nvram);
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
