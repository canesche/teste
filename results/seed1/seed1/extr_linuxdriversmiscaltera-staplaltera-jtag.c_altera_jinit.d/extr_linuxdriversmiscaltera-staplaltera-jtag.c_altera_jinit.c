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
struct altera_jtag {int /*<<< orphan*/ * ir_buffer; int /*<<< orphan*/ * dr_buffer; int /*<<< orphan*/ * ir_post_data; int /*<<< orphan*/ * ir_pre_data; int /*<<< orphan*/ * dr_post_data; int /*<<< orphan*/ * dr_pre_data; scalar_t__ ir_length; scalar_t__ dr_length; scalar_t__ ir_post; scalar_t__ ir_pre; scalar_t__ dr_post; scalar_t__ dr_pre; void* irstop_state; void* drstop_state; int /*<<< orphan*/  jtag_state; } ;
struct altera_state {struct altera_jtag js; } ;

/* Variables and functions */
 void* IDLE ; 
 int /*<<< orphan*/  ILLEGAL_JTAG_STATE ; 

int altera_jinit(struct altera_state *astate)
{
	struct altera_jtag *js = &astate->js;

	/* initial JTAG state is unknown */
	js->jtag_state = ILLEGAL_JTAG_STATE;

	/* initialize to default state */
	js->drstop_state = IDLE;
	js->irstop_state = IDLE;
	js->dr_pre  = 0;
	js->dr_post = 0;
	js->ir_pre  = 0;
	js->ir_post = 0;
	js->dr_length    = 0;
	js->ir_length    = 0;

	js->dr_pre_data  = NULL;
	js->dr_post_data = NULL;
	js->ir_pre_data  = NULL;
	js->ir_post_data = NULL;
	js->dr_buffer	 = NULL;
	js->ir_buffer	 = NULL;

	return 0;
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
          int _len_astate0 = 1;
          struct altera_state * astate = (struct altera_state *) malloc(_len_astate0*sizeof(struct altera_state));
          for(int _i0 = 0; _i0 < _len_astate0; _i0++) {
              int _len_astate__i0__js_ir_buffer0 = 1;
          astate[_i0].js.ir_buffer = (int *) malloc(_len_astate__i0__js_ir_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_ir_buffer0; _j0++) {
            astate[_i0].js.ir_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astate__i0__js_dr_buffer0 = 1;
          astate[_i0].js.dr_buffer = (int *) malloc(_len_astate__i0__js_dr_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_dr_buffer0; _j0++) {
            astate[_i0].js.dr_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astate__i0__js_ir_post_data0 = 1;
          astate[_i0].js.ir_post_data = (int *) malloc(_len_astate__i0__js_ir_post_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_ir_post_data0; _j0++) {
            astate[_i0].js.ir_post_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astate__i0__js_ir_pre_data0 = 1;
          astate[_i0].js.ir_pre_data = (int *) malloc(_len_astate__i0__js_ir_pre_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_ir_pre_data0; _j0++) {
            astate[_i0].js.ir_pre_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astate__i0__js_dr_post_data0 = 1;
          astate[_i0].js.dr_post_data = (int *) malloc(_len_astate__i0__js_dr_post_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_dr_post_data0; _j0++) {
            astate[_i0].js.dr_post_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astate__i0__js_dr_pre_data0 = 1;
          astate[_i0].js.dr_pre_data = (int *) malloc(_len_astate__i0__js_dr_pre_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_dr_pre_data0; _j0++) {
            astate[_i0].js.dr_pre_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        astate[_i0].js.ir_length = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.dr_length = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.ir_post = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.ir_pre = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.dr_post = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.dr_pre = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.jtag_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = altera_jinit(astate);
          printf("%d\n", benchRet); 
          free(astate);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_astate0 = 65025;
          struct altera_state * astate = (struct altera_state *) malloc(_len_astate0*sizeof(struct altera_state));
          for(int _i0 = 0; _i0 < _len_astate0; _i0++) {
              int _len_astate__i0__js_ir_buffer0 = 1;
          astate[_i0].js.ir_buffer = (int *) malloc(_len_astate__i0__js_ir_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_ir_buffer0; _j0++) {
            astate[_i0].js.ir_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astate__i0__js_dr_buffer0 = 1;
          astate[_i0].js.dr_buffer = (int *) malloc(_len_astate__i0__js_dr_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_dr_buffer0; _j0++) {
            astate[_i0].js.dr_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astate__i0__js_ir_post_data0 = 1;
          astate[_i0].js.ir_post_data = (int *) malloc(_len_astate__i0__js_ir_post_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_ir_post_data0; _j0++) {
            astate[_i0].js.ir_post_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astate__i0__js_ir_pre_data0 = 1;
          astate[_i0].js.ir_pre_data = (int *) malloc(_len_astate__i0__js_ir_pre_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_ir_pre_data0; _j0++) {
            astate[_i0].js.ir_pre_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astate__i0__js_dr_post_data0 = 1;
          astate[_i0].js.dr_post_data = (int *) malloc(_len_astate__i0__js_dr_post_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_dr_post_data0; _j0++) {
            astate[_i0].js.dr_post_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astate__i0__js_dr_pre_data0 = 1;
          astate[_i0].js.dr_pre_data = (int *) malloc(_len_astate__i0__js_dr_pre_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_dr_pre_data0; _j0++) {
            astate[_i0].js.dr_pre_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        astate[_i0].js.ir_length = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.dr_length = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.ir_post = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.ir_pre = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.dr_post = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.dr_pre = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.jtag_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = altera_jinit(astate);
          printf("%d\n", benchRet); 
          free(astate);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_astate0 = 100;
          struct altera_state * astate = (struct altera_state *) malloc(_len_astate0*sizeof(struct altera_state));
          for(int _i0 = 0; _i0 < _len_astate0; _i0++) {
              int _len_astate__i0__js_ir_buffer0 = 1;
          astate[_i0].js.ir_buffer = (int *) malloc(_len_astate__i0__js_ir_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_ir_buffer0; _j0++) {
            astate[_i0].js.ir_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astate__i0__js_dr_buffer0 = 1;
          astate[_i0].js.dr_buffer = (int *) malloc(_len_astate__i0__js_dr_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_dr_buffer0; _j0++) {
            astate[_i0].js.dr_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astate__i0__js_ir_post_data0 = 1;
          astate[_i0].js.ir_post_data = (int *) malloc(_len_astate__i0__js_ir_post_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_ir_post_data0; _j0++) {
            astate[_i0].js.ir_post_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astate__i0__js_ir_pre_data0 = 1;
          astate[_i0].js.ir_pre_data = (int *) malloc(_len_astate__i0__js_ir_pre_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_ir_pre_data0; _j0++) {
            astate[_i0].js.ir_pre_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astate__i0__js_dr_post_data0 = 1;
          astate[_i0].js.dr_post_data = (int *) malloc(_len_astate__i0__js_dr_post_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_dr_post_data0; _j0++) {
            astate[_i0].js.dr_post_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astate__i0__js_dr_pre_data0 = 1;
          astate[_i0].js.dr_pre_data = (int *) malloc(_len_astate__i0__js_dr_pre_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_astate__i0__js_dr_pre_data0; _j0++) {
            astate[_i0].js.dr_pre_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        astate[_i0].js.ir_length = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.dr_length = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.ir_post = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.ir_pre = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.dr_post = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.dr_pre = ((-2 * (next_i()%2)) + 1) * next_i();
        astate[_i0].js.jtag_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = altera_jinit(astate);
          printf("%d\n", benchRet); 
          free(astate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
