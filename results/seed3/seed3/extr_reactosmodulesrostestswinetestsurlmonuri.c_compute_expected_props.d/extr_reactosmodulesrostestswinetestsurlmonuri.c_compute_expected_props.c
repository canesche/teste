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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {TYPE_2__* dword_props; TYPE_1__* str_props; } ;
typedef  TYPE_3__ uri_properties ;
struct TYPE_6__ {scalar_t__ expected; } ;
struct TYPE_5__ {scalar_t__ expected; scalar_t__ expected2; int /*<<< orphan*/ * value2; } ;
typedef  size_t DWORD ;

/* Variables and functions */
 scalar_t__ S_OK ; 
 size_t Uri_PROPERTY_DWORD_LAST ; 
 size_t Uri_PROPERTY_DWORD_START ; 
 size_t Uri_PROPERTY_STRING_LAST ; 
 size_t Uri_PROPERTY_STRING_START ; 

__attribute__((used)) static DWORD compute_expected_props(uri_properties *test, DWORD *mask)
{
    DWORD ret = 0, i;

    *mask = 0;

    for(i=Uri_PROPERTY_STRING_START; i <= Uri_PROPERTY_STRING_LAST; i++) {
        if(test->str_props[i-Uri_PROPERTY_STRING_START].expected == S_OK)
            ret |= 1<<i;
        if(test->str_props[i-Uri_PROPERTY_STRING_START].value2 == NULL ||
           test->str_props[i-Uri_PROPERTY_STRING_START].expected ==
           test->str_props[i-Uri_PROPERTY_STRING_START].expected2)
            *mask |= 1<<i;
    }

    for(i=Uri_PROPERTY_DWORD_START; i <= Uri_PROPERTY_DWORD_LAST; i++) {
        if(test->dword_props[i-Uri_PROPERTY_DWORD_START].expected == S_OK)
            ret |= 1<<i;
        *mask |= 1<<i;
    }

    return ret;
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
          int _len_test0 = 1;
          struct TYPE_7__ * test = (struct TYPE_7__ *) malloc(_len_test0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_test0; _i0++) {
              int _len_test__i0__dword_props0 = 1;
          test[_i0].dword_props = (struct TYPE_6__ *) malloc(_len_test__i0__dword_props0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_test__i0__dword_props0; _j0++) {
            test[_i0].dword_props->expected = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_test__i0__str_props0 = 1;
          test[_i0].str_props = (struct TYPE_5__ *) malloc(_len_test__i0__str_props0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_test__i0__str_props0; _j0++) {
            test[_i0].str_props->expected = ((-2 * (next_i()%2)) + 1) * next_i();
        test[_i0].str_props->expected2 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_test__i0__str_props_value20 = 1;
          test[_i0].str_props->value2 = (int *) malloc(_len_test__i0__str_props_value20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_test__i0__str_props_value20; _j0++) {
            test[_i0].str_props->value2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_mask0 = 1;
          unsigned long * mask = (unsigned long *) malloc(_len_mask0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = compute_expected_props(test,mask);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_test0; _aux++) {
          free(test[_aux].dword_props);
          }
          for(int _aux = 0; _aux < _len_test0; _aux++) {
          free(test[_aux].str_props);
          }
          free(test);
          free(mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_test0 = 65025;
          struct TYPE_7__ * test = (struct TYPE_7__ *) malloc(_len_test0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_test0; _i0++) {
              int _len_test__i0__dword_props0 = 1;
          test[_i0].dword_props = (struct TYPE_6__ *) malloc(_len_test__i0__dword_props0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_test__i0__dword_props0; _j0++) {
            test[_i0].dword_props->expected = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_test__i0__str_props0 = 1;
          test[_i0].str_props = (struct TYPE_5__ *) malloc(_len_test__i0__str_props0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_test__i0__str_props0; _j0++) {
            test[_i0].str_props->expected = ((-2 * (next_i()%2)) + 1) * next_i();
        test[_i0].str_props->expected2 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_test__i0__str_props_value20 = 1;
          test[_i0].str_props->value2 = (int *) malloc(_len_test__i0__str_props_value20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_test__i0__str_props_value20; _j0++) {
            test[_i0].str_props->value2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_mask0 = 65025;
          unsigned long * mask = (unsigned long *) malloc(_len_mask0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = compute_expected_props(test,mask);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_test0; _aux++) {
          free(test[_aux].dword_props);
          }
          for(int _aux = 0; _aux < _len_test0; _aux++) {
          free(test[_aux].str_props);
          }
          free(test);
          free(mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_test0 = 100;
          struct TYPE_7__ * test = (struct TYPE_7__ *) malloc(_len_test0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_test0; _i0++) {
              int _len_test__i0__dword_props0 = 1;
          test[_i0].dword_props = (struct TYPE_6__ *) malloc(_len_test__i0__dword_props0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_test__i0__dword_props0; _j0++) {
            test[_i0].dword_props->expected = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_test__i0__str_props0 = 1;
          test[_i0].str_props = (struct TYPE_5__ *) malloc(_len_test__i0__str_props0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_test__i0__str_props0; _j0++) {
            test[_i0].str_props->expected = ((-2 * (next_i()%2)) + 1) * next_i();
        test[_i0].str_props->expected2 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_test__i0__str_props_value20 = 1;
          test[_i0].str_props->value2 = (int *) malloc(_len_test__i0__str_props_value20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_test__i0__str_props_value20; _j0++) {
            test[_i0].str_props->value2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_mask0 = 100;
          unsigned long * mask = (unsigned long *) malloc(_len_mask0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = compute_expected_props(test,mask);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_test0; _aux++) {
          free(test[_aux].dword_props);
          }
          for(int _aux = 0; _aux < _len_test0; _aux++) {
          free(test[_aux].str_props);
          }
          free(test);
          free(mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
