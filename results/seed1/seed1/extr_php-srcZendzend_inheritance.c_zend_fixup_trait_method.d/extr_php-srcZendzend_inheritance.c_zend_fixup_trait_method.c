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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {scalar_t__ static_variables; } ;
struct TYPE_8__ {int fn_flags; TYPE_4__* scope; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ op_array; TYPE_2__ common; } ;
typedef  TYPE_3__ zend_function ;
struct TYPE_10__ {int ce_flags; } ;
typedef  TYPE_4__ zend_class_entry ;

/* Variables and functions */
 int ZEND_ACC_ABSTRACT ; 
 int ZEND_ACC_IMPLICIT_ABSTRACT_CLASS ; 
 int ZEND_ACC_TRAIT ; 
 int ZEND_HAS_STATIC_IN_METHODS ; 
 scalar_t__ ZEND_USER_FUNCTION ; 

__attribute__((used)) static void zend_fixup_trait_method(zend_function *fn, zend_class_entry *ce) /* {{{ */
{
	if ((fn->common.scope->ce_flags & ZEND_ACC_TRAIT) == ZEND_ACC_TRAIT) {

		fn->common.scope = ce;

		if (fn->common.fn_flags & ZEND_ACC_ABSTRACT) {
			ce->ce_flags |= ZEND_ACC_IMPLICIT_ABSTRACT_CLASS;
		}
		if (fn->type == ZEND_USER_FUNCTION && fn->op_array.static_variables) {
			ce->ce_flags |= ZEND_HAS_STATIC_IN_METHODS;
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
          int _len_fn0 = 1;
          struct TYPE_9__ * fn = (struct TYPE_9__ *) malloc(_len_fn0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_fn0; _i0++) {
            fn[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        fn[_i0].op_array.static_variables = ((-2 * (next_i()%2)) + 1) * next_i();
        fn[_i0].common.fn_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fn__i0__common_scope0 = 1;
          fn[_i0].common.scope = (struct TYPE_10__ *) malloc(_len_fn__i0__common_scope0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_fn__i0__common_scope0; _j0++) {
            fn[_i0].common.scope->ce_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ce0 = 1;
          struct TYPE_10__ * ce = (struct TYPE_10__ *) malloc(_len_ce0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_ce0; _i0++) {
            ce[_i0].ce_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zend_fixup_trait_method(fn,ce);
          free(fn);
          free(ce);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fn0 = 65025;
          struct TYPE_9__ * fn = (struct TYPE_9__ *) malloc(_len_fn0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_fn0; _i0++) {
            fn[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        fn[_i0].op_array.static_variables = ((-2 * (next_i()%2)) + 1) * next_i();
        fn[_i0].common.fn_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fn__i0__common_scope0 = 1;
          fn[_i0].common.scope = (struct TYPE_10__ *) malloc(_len_fn__i0__common_scope0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_fn__i0__common_scope0; _j0++) {
            fn[_i0].common.scope->ce_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ce0 = 65025;
          struct TYPE_10__ * ce = (struct TYPE_10__ *) malloc(_len_ce0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_ce0; _i0++) {
            ce[_i0].ce_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zend_fixup_trait_method(fn,ce);
          free(fn);
          free(ce);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fn0 = 100;
          struct TYPE_9__ * fn = (struct TYPE_9__ *) malloc(_len_fn0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_fn0; _i0++) {
            fn[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        fn[_i0].op_array.static_variables = ((-2 * (next_i()%2)) + 1) * next_i();
        fn[_i0].common.fn_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fn__i0__common_scope0 = 1;
          fn[_i0].common.scope = (struct TYPE_10__ *) malloc(_len_fn__i0__common_scope0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_fn__i0__common_scope0; _j0++) {
            fn[_i0].common.scope->ce_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ce0 = 100;
          struct TYPE_10__ * ce = (struct TYPE_10__ *) malloc(_len_ce0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_ce0; _i0++) {
            ce[_i0].ce_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zend_fixup_trait_method(fn,ce);
          free(fn);
          free(ce);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
