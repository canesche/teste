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
typedef  int /*<<< orphan*/ * xt_panic_widget_func ;
typedef  int /*<<< orphan*/  kern_return_t ;
struct TYPE_2__ {char const* xtp_func_name; void** xtp_outval_p; int /*<<< orphan*/ * xtp_func; int /*<<< orphan*/ * xtp_context_p; } ;

/* Variables and functions */
 int /*<<< orphan*/  KERN_RESOURCE_SHORTAGE ; 
 int /*<<< orphan*/  KERN_SUCCESS ; 
 TYPE_1__ xt_panic_widgets ; 

kern_return_t
xnupost_register_panic_widget(xt_panic_widget_func funcp, const char * funcname, void * context, void ** outval)
{
	if (xt_panic_widgets.xtp_context_p != NULL || xt_panic_widgets.xtp_func != NULL)
		return KERN_RESOURCE_SHORTAGE;

	xt_panic_widgets.xtp_context_p = context;
	xt_panic_widgets.xtp_func      = funcp;
	xt_panic_widgets.xtp_func_name = funcname;
	xt_panic_widgets.xtp_outval_p  = outval;

	return KERN_SUCCESS;
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
          int _len_funcp0 = 1;
          int * funcp = (int *) malloc(_len_funcp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_funcp0; _i0++) {
            funcp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_funcname0 = 1;
          const char * funcname = (const char *) malloc(_len_funcname0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_funcname0; _i0++) {
            funcname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * context;
          int _len_outval0 = 1;
          void ** outval = (void **) malloc(_len_outval0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_outval0; _i0++) {
          }
          int benchRet = xnupost_register_panic_widget(funcp,funcname,context,outval);
          printf("%d\n", benchRet); 
          free(funcp);
          free(funcname);
          for(int i1 = 0; i1 < _len_outval0; i1++) {
            int _len_outval1 = 1;
              }
          free(outval);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_funcp0 = 65025;
          int * funcp = (int *) malloc(_len_funcp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_funcp0; _i0++) {
            funcp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_funcname0 = 65025;
          const char * funcname = (const char *) malloc(_len_funcname0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_funcname0; _i0++) {
            funcname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * context;
          int _len_outval0 = 65025;
          void ** outval = (void **) malloc(_len_outval0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_outval0; _i0++) {
          }
          int benchRet = xnupost_register_panic_widget(funcp,funcname,context,outval);
          printf("%d\n", benchRet); 
          free(funcp);
          free(funcname);
          for(int i1 = 0; i1 < _len_outval0; i1++) {
            int _len_outval1 = 1;
              }
          free(outval);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_funcp0 = 100;
          int * funcp = (int *) malloc(_len_funcp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_funcp0; _i0++) {
            funcp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_funcname0 = 100;
          const char * funcname = (const char *) malloc(_len_funcname0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_funcname0; _i0++) {
            funcname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * context;
          int _len_outval0 = 100;
          void ** outval = (void **) malloc(_len_outval0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_outval0; _i0++) {
          }
          int benchRet = xnupost_register_panic_widget(funcp,funcname,context,outval);
          printf("%d\n", benchRet); 
          free(funcp);
          free(funcname);
          for(int i1 = 0; i1 < _len_outval0; i1++) {
            int _len_outval1 = 1;
              }
          free(outval);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
