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
struct intel_engine_cs {int /*<<< orphan*/ * unpark; int /*<<< orphan*/ * park; int /*<<< orphan*/  cancel_requests; int /*<<< orphan*/  submit_request; } ;

/* Variables and functions */
 int /*<<< orphan*/  cancel_requests ; 
 int /*<<< orphan*/  i9xx_submit_request ; 

__attribute__((used)) static void i9xx_set_default_submission(struct intel_engine_cs *engine)
{
	engine->submit_request = i9xx_submit_request;
	engine->cancel_requests = cancel_requests;

	engine->park = NULL;
	engine->unpark = NULL;
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
          int _len_engine0 = 1;
          struct intel_engine_cs * engine = (struct intel_engine_cs *) malloc(_len_engine0*sizeof(struct intel_engine_cs));
          for(int _i0 = 0; _i0 < _len_engine0; _i0++) {
              int _len_engine__i0__unpark0 = 1;
          engine[_i0].unpark = (int *) malloc(_len_engine__i0__unpark0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_engine__i0__unpark0; _j0++) {
            engine[_i0].unpark[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_engine__i0__park0 = 1;
          engine[_i0].park = (int *) malloc(_len_engine__i0__park0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_engine__i0__park0; _j0++) {
            engine[_i0].park[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        engine[_i0].cancel_requests = ((-2 * (next_i()%2)) + 1) * next_i();
        engine[_i0].submit_request = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i9xx_set_default_submission(engine);
          for(int _aux = 0; _aux < _len_engine0; _aux++) {
          free(engine[_aux].unpark);
          }
          for(int _aux = 0; _aux < _len_engine0; _aux++) {
          free(engine[_aux].park);
          }
          free(engine);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_engine0 = 65025;
          struct intel_engine_cs * engine = (struct intel_engine_cs *) malloc(_len_engine0*sizeof(struct intel_engine_cs));
          for(int _i0 = 0; _i0 < _len_engine0; _i0++) {
              int _len_engine__i0__unpark0 = 1;
          engine[_i0].unpark = (int *) malloc(_len_engine__i0__unpark0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_engine__i0__unpark0; _j0++) {
            engine[_i0].unpark[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_engine__i0__park0 = 1;
          engine[_i0].park = (int *) malloc(_len_engine__i0__park0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_engine__i0__park0; _j0++) {
            engine[_i0].park[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        engine[_i0].cancel_requests = ((-2 * (next_i()%2)) + 1) * next_i();
        engine[_i0].submit_request = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i9xx_set_default_submission(engine);
          for(int _aux = 0; _aux < _len_engine0; _aux++) {
          free(engine[_aux].unpark);
          }
          for(int _aux = 0; _aux < _len_engine0; _aux++) {
          free(engine[_aux].park);
          }
          free(engine);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_engine0 = 100;
          struct intel_engine_cs * engine = (struct intel_engine_cs *) malloc(_len_engine0*sizeof(struct intel_engine_cs));
          for(int _i0 = 0; _i0 < _len_engine0; _i0++) {
              int _len_engine__i0__unpark0 = 1;
          engine[_i0].unpark = (int *) malloc(_len_engine__i0__unpark0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_engine__i0__unpark0; _j0++) {
            engine[_i0].unpark[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_engine__i0__park0 = 1;
          engine[_i0].park = (int *) malloc(_len_engine__i0__park0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_engine__i0__park0; _j0++) {
            engine[_i0].park[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        engine[_i0].cancel_requests = ((-2 * (next_i()%2)) + 1) * next_i();
        engine[_i0].submit_request = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i9xx_set_default_submission(engine);
          for(int _aux = 0; _aux < _len_engine0; _aux++) {
          free(engine[_aux].unpark);
          }
          for(int _aux = 0; _aux < _len_engine0; _aux++) {
          free(engine[_aux].park);
          }
          free(engine);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
