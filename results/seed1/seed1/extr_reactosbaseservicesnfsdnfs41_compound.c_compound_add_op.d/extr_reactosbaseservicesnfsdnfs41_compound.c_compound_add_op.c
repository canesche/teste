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
struct TYPE_10__ {TYPE_2__* resarray; int /*<<< orphan*/  resarray_count; } ;
struct TYPE_9__ {TYPE_1__* argarray; int /*<<< orphan*/  argarray_count; } ;
struct TYPE_11__ {TYPE_4__ res; TYPE_3__ args; } ;
typedef  TYPE_5__ nfs41_compound ;
struct TYPE_8__ {size_t op; void* res; } ;
struct TYPE_7__ {size_t op; void* arg; } ;

/* Variables and functions */

void compound_add_op(
    nfs41_compound *compound,
    uint32_t opnum,
    void *arg,
    void *res)
{
    const uint32_t i = compound->args.argarray_count++;
    const uint32_t j = compound->res.resarray_count++;
    compound->args.argarray[i].op = opnum;
    compound->args.argarray[i].arg = arg;
    compound->res.resarray[j].op = opnum;
    compound->res.resarray[j].res = res;
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
          unsigned long opnum = 100;
          int _len_compound0 = 1;
          struct TYPE_11__ * compound = (struct TYPE_11__ *) malloc(_len_compound0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_compound0; _i0++) {
              int _len_compound__i0__res_resarray0 = 1;
          compound[_i0].res.resarray = (struct TYPE_8__ *) malloc(_len_compound__i0__res_resarray0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_compound__i0__res_resarray0; _j0++) {
            compound[_i0].res.resarray->op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        compound[_i0].res.resarray_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_compound__i0__args_argarray0 = 1;
          compound[_i0].args.argarray = (struct TYPE_7__ *) malloc(_len_compound__i0__args_argarray0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_compound__i0__args_argarray0; _j0++) {
            compound[_i0].args.argarray->op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        compound[_i0].args.argarray_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          void * res;
          compound_add_op(compound,opnum,arg,res);
          free(compound);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long opnum = 255;
          int _len_compound0 = 65025;
          struct TYPE_11__ * compound = (struct TYPE_11__ *) malloc(_len_compound0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_compound0; _i0++) {
              int _len_compound__i0__res_resarray0 = 1;
          compound[_i0].res.resarray = (struct TYPE_8__ *) malloc(_len_compound__i0__res_resarray0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_compound__i0__res_resarray0; _j0++) {
            compound[_i0].res.resarray->op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        compound[_i0].res.resarray_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_compound__i0__args_argarray0 = 1;
          compound[_i0].args.argarray = (struct TYPE_7__ *) malloc(_len_compound__i0__args_argarray0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_compound__i0__args_argarray0; _j0++) {
            compound[_i0].args.argarray->op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        compound[_i0].args.argarray_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          void * res;
          compound_add_op(compound,opnum,arg,res);
          free(compound);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long opnum = 10;
          int _len_compound0 = 100;
          struct TYPE_11__ * compound = (struct TYPE_11__ *) malloc(_len_compound0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_compound0; _i0++) {
              int _len_compound__i0__res_resarray0 = 1;
          compound[_i0].res.resarray = (struct TYPE_8__ *) malloc(_len_compound__i0__res_resarray0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_compound__i0__res_resarray0; _j0++) {
            compound[_i0].res.resarray->op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        compound[_i0].res.resarray_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_compound__i0__args_argarray0 = 1;
          compound[_i0].args.argarray = (struct TYPE_7__ *) malloc(_len_compound__i0__args_argarray0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_compound__i0__args_argarray0; _j0++) {
            compound[_i0].args.argarray->op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        compound[_i0].args.argarray_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          void * res;
          compound_add_op(compound,opnum,arg,res);
          free(compound);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
