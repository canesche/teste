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
struct TYPE_4__ {int /*<<< orphan*/  ull; int /*<<< orphan*/  sl; int /*<<< orphan*/  sll; int /*<<< orphan*/  ui; int /*<<< orphan*/  si; } ;
struct TYPE_5__ {int type; TYPE_1__ val; } ;
typedef  TYPE_2__ cval_t ;

/* Variables and functions */
#define  cv_sint 133 
#define  cv_sll 132 
#define  cv_slong 131 
#define  cv_uint 130 
#define  cv_ull 129 
#define  cv_ulong 128 

__attribute__((used)) static void cast_to_slong(cval_t *v)
{
	switch(v->type)
	{
	case cv_sint:	v->val.sl = v->val.si;	break;
	case cv_uint:	v->val.sl = v->val.ui;	break;
	case cv_slong:	break;
	case cv_ulong:	break;
	case cv_sll:	v->val.sl = v->val.sll;	break;
	case cv_ull:	v->val.sl = v->val.ull;	break;
	}
	v->type = cv_slong;
}


// ------------------------------------------------------------------------- //




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
          int _len_v0 = 1;
          struct TYPE_5__ * v = (struct TYPE_5__ *) malloc(_len_v0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].val.ull = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].val.sl = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].val.sll = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].val.ui = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].val.si = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cast_to_slong(v);
          free(v);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_v0 = 65025;
          struct TYPE_5__ * v = (struct TYPE_5__ *) malloc(_len_v0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].val.ull = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].val.sl = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].val.sll = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].val.ui = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].val.si = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cast_to_slong(v);
          free(v);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_v0 = 100;
          struct TYPE_5__ * v = (struct TYPE_5__ *) malloc(_len_v0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].val.ull = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].val.sl = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].val.sll = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].val.ui = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].val.si = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cast_to_slong(v);
          free(v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
