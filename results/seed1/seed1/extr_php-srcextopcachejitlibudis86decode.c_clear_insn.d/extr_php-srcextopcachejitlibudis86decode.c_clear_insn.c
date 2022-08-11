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
struct ud {TYPE_1__* operand; scalar_t__ _rex; scalar_t__ vex_op; scalar_t__ br_far; scalar_t__ have_modrm; int /*<<< orphan*/ * itab_entry; int /*<<< orphan*/  mnemonic; scalar_t__ pfx_str; scalar_t__ pfx_rex; scalar_t__ pfx_repe; scalar_t__ pfx_rep; scalar_t__ pfx_repne; scalar_t__ pfx_lock; scalar_t__ pfx_adr; scalar_t__ pfx_opr; scalar_t__ pfx_seg; scalar_t__ error; } ;
struct TYPE_2__ {void* type; } ;

/* Variables and functions */
 int /*<<< orphan*/  UD_Inone ; 
 void* UD_NONE ; 

__attribute__((used)) static void
clear_insn(register struct ud* u)
{
  u->error     = 0;
  u->pfx_seg   = 0;
  u->pfx_opr   = 0;
  u->pfx_adr   = 0;
  u->pfx_lock  = 0;
  u->pfx_repne = 0;
  u->pfx_rep   = 0;
  u->pfx_repe  = 0;
  u->pfx_rex   = 0;
  u->pfx_str   = 0;
  u->mnemonic  = UD_Inone;
  u->itab_entry = NULL;
  u->have_modrm = 0;
  u->br_far    = 0;
  u->vex_op    = 0;
  u->_rex      = 0;
  u->operand[0].type = UD_NONE;
  u->operand[1].type = UD_NONE;
  u->operand[2].type = UD_NONE;
  u->operand[3].type = UD_NONE;
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
          int _len_u0 = 1;
          struct ud * u = (struct ud *) malloc(_len_u0*sizeof(struct ud));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
              int _len_u__i0__operand0 = 1;
          u[_i0].operand = (struct TYPE_2__ *) malloc(_len_u__i0__operand0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_u__i0__operand0; _j0++) {
              }
        u[_i0]._rex = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].vex_op = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].br_far = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].have_modrm = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_u__i0__itab_entry0 = 1;
          u[_i0].itab_entry = (int *) malloc(_len_u__i0__itab_entry0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_u__i0__itab_entry0; _j0++) {
            u[_i0].itab_entry[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        u[_i0].mnemonic = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_str = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_rex = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_repe = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_rep = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_repne = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_lock = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_adr = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_opr = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_seg = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          clear_insn(u);
          for(int _aux = 0; _aux < _len_u0; _aux++) {
          free(u[_aux].operand);
          }
          for(int _aux = 0; _aux < _len_u0; _aux++) {
          free(u[_aux].itab_entry);
          }
          free(u);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_u0 = 65025;
          struct ud * u = (struct ud *) malloc(_len_u0*sizeof(struct ud));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
              int _len_u__i0__operand0 = 1;
          u[_i0].operand = (struct TYPE_2__ *) malloc(_len_u__i0__operand0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_u__i0__operand0; _j0++) {
              }
        u[_i0]._rex = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].vex_op = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].br_far = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].have_modrm = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_u__i0__itab_entry0 = 1;
          u[_i0].itab_entry = (int *) malloc(_len_u__i0__itab_entry0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_u__i0__itab_entry0; _j0++) {
            u[_i0].itab_entry[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        u[_i0].mnemonic = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_str = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_rex = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_repe = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_rep = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_repne = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_lock = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_adr = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_opr = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_seg = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          clear_insn(u);
          for(int _aux = 0; _aux < _len_u0; _aux++) {
          free(u[_aux].operand);
          }
          for(int _aux = 0; _aux < _len_u0; _aux++) {
          free(u[_aux].itab_entry);
          }
          free(u);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_u0 = 100;
          struct ud * u = (struct ud *) malloc(_len_u0*sizeof(struct ud));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
              int _len_u__i0__operand0 = 1;
          u[_i0].operand = (struct TYPE_2__ *) malloc(_len_u__i0__operand0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_u__i0__operand0; _j0++) {
              }
        u[_i0]._rex = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].vex_op = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].br_far = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].have_modrm = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_u__i0__itab_entry0 = 1;
          u[_i0].itab_entry = (int *) malloc(_len_u__i0__itab_entry0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_u__i0__itab_entry0; _j0++) {
            u[_i0].itab_entry[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        u[_i0].mnemonic = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_str = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_rex = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_repe = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_rep = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_repne = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_lock = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_adr = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_opr = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].pfx_seg = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          clear_insn(u);
          for(int _aux = 0; _aux < _len_u0; _aux++) {
          free(u[_aux].operand);
          }
          for(int _aux = 0; _aux < _len_u0; _aux++) {
          free(u[_aux].itab_entry);
          }
          free(u);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
