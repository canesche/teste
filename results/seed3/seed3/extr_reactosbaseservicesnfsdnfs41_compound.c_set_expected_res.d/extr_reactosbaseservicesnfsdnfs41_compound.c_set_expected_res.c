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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint32_t ;
struct TYPE_7__ {size_t argarray_count; TYPE_4__* argarray; } ;
struct TYPE_9__ {size_t resarray_count; TYPE_2__* resarray; } ;
struct TYPE_11__ {TYPE_1__ args; TYPE_3__ res; } ;
typedef  TYPE_5__ nfs41_compound ;
struct TYPE_10__ {int /*<<< orphan*/  op; } ;
struct TYPE_8__ {int /*<<< orphan*/  op; } ;

/* Variables and functions */

__attribute__((used)) static void set_expected_res(
    nfs41_compound *compound)
{
    uint32_t i;
    compound->res.resarray_count = compound->args.argarray_count;
    for (i = 0; i < compound->res.resarray_count; i++)
        compound->res.resarray[i].op = compound->args.argarray[i].op;
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
          int _len_compound0 = 1;
          struct TYPE_11__ * compound = (struct TYPE_11__ *) malloc(_len_compound0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_compound0; _i0++) {
            compound[_i0].args.argarray_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_compound__i0__args_argarray0 = 1;
          compound[_i0].args.argarray = (struct TYPE_10__ *) malloc(_len_compound__i0__args_argarray0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_compound__i0__args_argarray0; _j0++) {
            compound[_i0].args.argarray->op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        compound[_i0].res.resarray_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_compound__i0__res_resarray0 = 1;
          compound[_i0].res.resarray = (struct TYPE_8__ *) malloc(_len_compound__i0__res_resarray0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_compound__i0__res_resarray0; _j0++) {
            compound[_i0].res.resarray->op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_expected_res(compound);
          free(compound);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_compound0 = 65025;
          struct TYPE_11__ * compound = (struct TYPE_11__ *) malloc(_len_compound0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_compound0; _i0++) {
            compound[_i0].args.argarray_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_compound__i0__args_argarray0 = 1;
          compound[_i0].args.argarray = (struct TYPE_10__ *) malloc(_len_compound__i0__args_argarray0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_compound__i0__args_argarray0; _j0++) {
            compound[_i0].args.argarray->op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        compound[_i0].res.resarray_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_compound__i0__res_resarray0 = 1;
          compound[_i0].res.resarray = (struct TYPE_8__ *) malloc(_len_compound__i0__res_resarray0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_compound__i0__res_resarray0; _j0++) {
            compound[_i0].res.resarray->op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_expected_res(compound);
          free(compound);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_compound0 = 100;
          struct TYPE_11__ * compound = (struct TYPE_11__ *) malloc(_len_compound0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_compound0; _i0++) {
            compound[_i0].args.argarray_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_compound__i0__args_argarray0 = 1;
          compound[_i0].args.argarray = (struct TYPE_10__ *) malloc(_len_compound__i0__args_argarray0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_compound__i0__args_argarray0; _j0++) {
            compound[_i0].args.argarray->op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        compound[_i0].res.resarray_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_compound__i0__res_resarray0 = 1;
          compound[_i0].res.resarray = (struct TYPE_8__ *) malloc(_len_compound__i0__res_resarray0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_compound__i0__res_resarray0; _j0++) {
            compound[_i0].res.resarray->op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_expected_res(compound);
          free(compound);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
