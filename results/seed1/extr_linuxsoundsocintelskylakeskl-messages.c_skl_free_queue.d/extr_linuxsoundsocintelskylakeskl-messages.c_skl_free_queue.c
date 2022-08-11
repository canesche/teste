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
struct TYPE_2__ {scalar_t__ pvt_id; scalar_t__ instance_id; scalar_t__ module_id; } ;
struct skl_module_pin {int in_use; int /*<<< orphan*/ * tgt_mcfg; int /*<<< orphan*/  pin_state; TYPE_1__ id; scalar_t__ is_dynamic; } ;

/* Variables and functions */
 int /*<<< orphan*/  SKL_PIN_UNBIND ; 

__attribute__((used)) static void skl_free_queue(struct skl_module_pin *mpin, int q_index)
{
	if (mpin[q_index].is_dynamic) {
		mpin[q_index].in_use = false;
		mpin[q_index].id.module_id = 0;
		mpin[q_index].id.instance_id = 0;
		mpin[q_index].id.pvt_id = 0;
	}
	mpin[q_index].pin_state = SKL_PIN_UNBIND;
	mpin[q_index].tgt_mcfg = NULL;
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
          int q_index = 100;
          int _len_mpin0 = 1;
          struct skl_module_pin * mpin = (struct skl_module_pin *) malloc(_len_mpin0*sizeof(struct skl_module_pin));
          for(int _i0 = 0; _i0 < _len_mpin0; _i0++) {
            mpin[_i0].in_use = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mpin__i0__tgt_mcfg0 = 1;
          mpin[_i0].tgt_mcfg = (int *) malloc(_len_mpin__i0__tgt_mcfg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mpin__i0__tgt_mcfg0; _j0++) {
            mpin[_i0].tgt_mcfg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mpin[_i0].pin_state = ((-2 * (next_i()%2)) + 1) * next_i();
        mpin[_i0].id.pvt_id = ((-2 * (next_i()%2)) + 1) * next_i();
        mpin[_i0].id.instance_id = ((-2 * (next_i()%2)) + 1) * next_i();
        mpin[_i0].id.module_id = ((-2 * (next_i()%2)) + 1) * next_i();
        mpin[_i0].is_dynamic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          skl_free_queue(mpin,q_index);
          for(int _aux = 0; _aux < _len_mpin0; _aux++) {
          free(mpin[_aux].tgt_mcfg);
          }
          free(mpin);
        
        break;
    }
    // big-arr
    case 1:
    {
          int q_index = 255;
          int _len_mpin0 = 65025;
          struct skl_module_pin * mpin = (struct skl_module_pin *) malloc(_len_mpin0*sizeof(struct skl_module_pin));
          for(int _i0 = 0; _i0 < _len_mpin0; _i0++) {
            mpin[_i0].in_use = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mpin__i0__tgt_mcfg0 = 1;
          mpin[_i0].tgt_mcfg = (int *) malloc(_len_mpin__i0__tgt_mcfg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mpin__i0__tgt_mcfg0; _j0++) {
            mpin[_i0].tgt_mcfg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mpin[_i0].pin_state = ((-2 * (next_i()%2)) + 1) * next_i();
        mpin[_i0].id.pvt_id = ((-2 * (next_i()%2)) + 1) * next_i();
        mpin[_i0].id.instance_id = ((-2 * (next_i()%2)) + 1) * next_i();
        mpin[_i0].id.module_id = ((-2 * (next_i()%2)) + 1) * next_i();
        mpin[_i0].is_dynamic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          skl_free_queue(mpin,q_index);
          for(int _aux = 0; _aux < _len_mpin0; _aux++) {
          free(mpin[_aux].tgt_mcfg);
          }
          free(mpin);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int q_index = 10;
          int _len_mpin0 = 100;
          struct skl_module_pin * mpin = (struct skl_module_pin *) malloc(_len_mpin0*sizeof(struct skl_module_pin));
          for(int _i0 = 0; _i0 < _len_mpin0; _i0++) {
            mpin[_i0].in_use = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mpin__i0__tgt_mcfg0 = 1;
          mpin[_i0].tgt_mcfg = (int *) malloc(_len_mpin__i0__tgt_mcfg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mpin__i0__tgt_mcfg0; _j0++) {
            mpin[_i0].tgt_mcfg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mpin[_i0].pin_state = ((-2 * (next_i()%2)) + 1) * next_i();
        mpin[_i0].id.pvt_id = ((-2 * (next_i()%2)) + 1) * next_i();
        mpin[_i0].id.instance_id = ((-2 * (next_i()%2)) + 1) * next_i();
        mpin[_i0].id.module_id = ((-2 * (next_i()%2)) + 1) * next_i();
        mpin[_i0].is_dynamic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          skl_free_queue(mpin,q_index);
          for(int _aux = 0; _aux < _len_mpin0; _aux++) {
          free(mpin[_aux].tgt_mcfg);
          }
          free(mpin);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
