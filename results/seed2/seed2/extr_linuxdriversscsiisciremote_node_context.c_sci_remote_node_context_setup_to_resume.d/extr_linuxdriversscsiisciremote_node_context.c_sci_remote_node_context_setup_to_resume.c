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
struct sci_remote_node_context {scalar_t__ destination_state; void* user_cookie; int /*<<< orphan*/ * user_callback; } ;
typedef  int /*<<< orphan*/ * scics_sds_remote_node_context_callback ;
typedef  enum sci_remote_node_context_destination_state { ____Placeholder_sci_remote_node_context_destination_state } sci_remote_node_context_destination_state ;

/* Variables and functions */
 scalar_t__ RNC_DEST_FINAL ; 

__attribute__((used)) static void sci_remote_node_context_setup_to_resume(
	struct sci_remote_node_context *sci_rnc,
	scics_sds_remote_node_context_callback callback,
	void *callback_parameter,
	enum sci_remote_node_context_destination_state dest_param)
{
	if (sci_rnc->destination_state != RNC_DEST_FINAL) {
		sci_rnc->destination_state = dest_param;
		if (callback != NULL) {
			sci_rnc->user_callback = callback;
			sci_rnc->user_cookie   = callback_parameter;
		}
	}
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
          enum sci_remote_node_context_destination_state dest_param = 0;
          int _len_sci_rnc0 = 1;
          struct sci_remote_node_context * sci_rnc = (struct sci_remote_node_context *) malloc(_len_sci_rnc0*sizeof(struct sci_remote_node_context));
          for(int _i0 = 0; _i0 < _len_sci_rnc0; _i0++) {
            sci_rnc[_i0].destination_state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sci_rnc__i0__user_callback0 = 1;
          sci_rnc[_i0].user_callback = (int *) malloc(_len_sci_rnc__i0__user_callback0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sci_rnc__i0__user_callback0; _j0++) {
            sci_rnc[_i0].user_callback[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_callback0 = 1;
          int * callback = (int *) malloc(_len_callback0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_callback0; _i0++) {
            callback[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * callback_parameter;
          sci_remote_node_context_setup_to_resume(sci_rnc,callback,callback_parameter,dest_param);
          for(int _aux = 0; _aux < _len_sci_rnc0; _aux++) {
          free(sci_rnc[_aux].user_callback);
          }
          free(sci_rnc);
          free(callback);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum sci_remote_node_context_destination_state dest_param = 0;
          int _len_sci_rnc0 = 65025;
          struct sci_remote_node_context * sci_rnc = (struct sci_remote_node_context *) malloc(_len_sci_rnc0*sizeof(struct sci_remote_node_context));
          for(int _i0 = 0; _i0 < _len_sci_rnc0; _i0++) {
            sci_rnc[_i0].destination_state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sci_rnc__i0__user_callback0 = 1;
          sci_rnc[_i0].user_callback = (int *) malloc(_len_sci_rnc__i0__user_callback0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sci_rnc__i0__user_callback0; _j0++) {
            sci_rnc[_i0].user_callback[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_callback0 = 65025;
          int * callback = (int *) malloc(_len_callback0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_callback0; _i0++) {
            callback[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * callback_parameter;
          sci_remote_node_context_setup_to_resume(sci_rnc,callback,callback_parameter,dest_param);
          for(int _aux = 0; _aux < _len_sci_rnc0; _aux++) {
          free(sci_rnc[_aux].user_callback);
          }
          free(sci_rnc);
          free(callback);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum sci_remote_node_context_destination_state dest_param = 0;
          int _len_sci_rnc0 = 100;
          struct sci_remote_node_context * sci_rnc = (struct sci_remote_node_context *) malloc(_len_sci_rnc0*sizeof(struct sci_remote_node_context));
          for(int _i0 = 0; _i0 < _len_sci_rnc0; _i0++) {
            sci_rnc[_i0].destination_state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sci_rnc__i0__user_callback0 = 1;
          sci_rnc[_i0].user_callback = (int *) malloc(_len_sci_rnc__i0__user_callback0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sci_rnc__i0__user_callback0; _j0++) {
            sci_rnc[_i0].user_callback[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_callback0 = 100;
          int * callback = (int *) malloc(_len_callback0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_callback0; _i0++) {
            callback[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * callback_parameter;
          sci_remote_node_context_setup_to_resume(sci_rnc,callback,callback_parameter,dest_param);
          for(int _aux = 0; _aux < _len_sci_rnc0; _aux++) {
          free(sci_rnc[_aux].user_callback);
          }
          free(sci_rnc);
          free(callback);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
