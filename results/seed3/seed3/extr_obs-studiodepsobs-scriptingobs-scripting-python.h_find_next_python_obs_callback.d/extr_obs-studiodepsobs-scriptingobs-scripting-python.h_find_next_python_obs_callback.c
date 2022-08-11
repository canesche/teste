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
struct TYPE_2__ {scalar_t__ next; } ;
struct python_obs_callback {TYPE_1__ base; int /*<<< orphan*/ * func; } ;
struct obs_python_script {scalar_t__ first_callback; } ;
typedef  int /*<<< orphan*/  PyObject ;

/* Variables and functions */

__attribute__((used)) static inline struct python_obs_callback *find_next_python_obs_callback(
		struct obs_python_script *script,
		struct python_obs_callback *cb, PyObject *func)
{
	cb = cb ? (struct python_obs_callback *)cb->base.next
		: (struct python_obs_callback *)script->first_callback;

	while (cb) {
		if (cb->func == func)
			break;
		cb = (struct python_obs_callback *)cb->base.next;
	}

	return cb;
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
          int _len_script0 = 1;
          struct obs_python_script * script = (struct obs_python_script *) malloc(_len_script0*sizeof(struct obs_python_script));
          for(int _i0 = 0; _i0 < _len_script0; _i0++) {
            script[_i0].first_callback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0 = 1;
          struct python_obs_callback * cb = (struct python_obs_callback *) malloc(_len_cb0*sizeof(struct python_obs_callback));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0].base.next = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cb__i0__func0 = 1;
          cb[_i0].func = (int *) malloc(_len_cb__i0__func0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__func0; _j0++) {
            cb[_i0].func[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_func0 = 1;
          int * func = (int *) malloc(_len_func0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
            func[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct python_obs_callback * benchRet = find_next_python_obs_callback(script,cb,func);
          free(script);
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].func);
          }
          free(cb);
          free(func);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_script0 = 65025;
          struct obs_python_script * script = (struct obs_python_script *) malloc(_len_script0*sizeof(struct obs_python_script));
          for(int _i0 = 0; _i0 < _len_script0; _i0++) {
            script[_i0].first_callback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0 = 65025;
          struct python_obs_callback * cb = (struct python_obs_callback *) malloc(_len_cb0*sizeof(struct python_obs_callback));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0].base.next = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cb__i0__func0 = 1;
          cb[_i0].func = (int *) malloc(_len_cb__i0__func0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__func0; _j0++) {
            cb[_i0].func[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_func0 = 65025;
          int * func = (int *) malloc(_len_func0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
            func[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct python_obs_callback * benchRet = find_next_python_obs_callback(script,cb,func);
          free(script);
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].func);
          }
          free(cb);
          free(func);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_script0 = 100;
          struct obs_python_script * script = (struct obs_python_script *) malloc(_len_script0*sizeof(struct obs_python_script));
          for(int _i0 = 0; _i0 < _len_script0; _i0++) {
            script[_i0].first_callback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0 = 100;
          struct python_obs_callback * cb = (struct python_obs_callback *) malloc(_len_cb0*sizeof(struct python_obs_callback));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0].base.next = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cb__i0__func0 = 1;
          cb[_i0].func = (int *) malloc(_len_cb__i0__func0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__func0; _j0++) {
            cb[_i0].func[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_func0 = 100;
          int * func = (int *) malloc(_len_func0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_func0; _i0++) {
            func[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct python_obs_callback * benchRet = find_next_python_obs_callback(script,cb,func);
          free(script);
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].func);
          }
          free(cb);
          free(func);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
