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
struct TYPE_10__ {int /*<<< orphan*/ * lpVtbl; } ;
struct TYPE_9__ {int /*<<< orphan*/ * lpVtbl; } ;
struct TYPE_8__ {int /*<<< orphan*/ * lpVtbl; } ;
struct TYPE_7__ {int /*<<< orphan*/ * lpVtbl; } ;
struct TYPE_11__ {TYPE_4__ IHTMLStyle6_iface; TYPE_3__ IHTMLStyle5_iface; TYPE_2__ IHTMLStyle4_iface; TYPE_1__ IHTMLStyle3_iface; } ;
typedef  TYPE_5__ HTMLStyle ;

/* Variables and functions */
 int /*<<< orphan*/  HTMLStyle3Vtbl ; 
 int /*<<< orphan*/  HTMLStyle4Vtbl ; 
 int /*<<< orphan*/  HTMLStyle5Vtbl ; 
 int /*<<< orphan*/  HTMLStyle6Vtbl ; 

void HTMLStyle3_Init(HTMLStyle *This)
{
    This->IHTMLStyle3_iface.lpVtbl = &HTMLStyle3Vtbl;
    This->IHTMLStyle4_iface.lpVtbl = &HTMLStyle4Vtbl;
    This->IHTMLStyle5_iface.lpVtbl = &HTMLStyle5Vtbl;
    This->IHTMLStyle6_iface.lpVtbl = &HTMLStyle6Vtbl;
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
          int _len_This0 = 1;
          struct TYPE_11__ * This = (struct TYPE_11__ *) malloc(_len_This0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__IHTMLStyle6_iface_lpVtbl0 = 1;
          This[_i0].IHTMLStyle6_iface.lpVtbl = (int *) malloc(_len_This__i0__IHTMLStyle6_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IHTMLStyle6_iface_lpVtbl0; _j0++) {
            This[_i0].IHTMLStyle6_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IHTMLStyle5_iface_lpVtbl0 = 1;
          This[_i0].IHTMLStyle5_iface.lpVtbl = (int *) malloc(_len_This__i0__IHTMLStyle5_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IHTMLStyle5_iface_lpVtbl0; _j0++) {
            This[_i0].IHTMLStyle5_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IHTMLStyle4_iface_lpVtbl0 = 1;
          This[_i0].IHTMLStyle4_iface.lpVtbl = (int *) malloc(_len_This__i0__IHTMLStyle4_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IHTMLStyle4_iface_lpVtbl0; _j0++) {
            This[_i0].IHTMLStyle4_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IHTMLStyle3_iface_lpVtbl0 = 1;
          This[_i0].IHTMLStyle3_iface.lpVtbl = (int *) malloc(_len_This__i0__IHTMLStyle3_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IHTMLStyle3_iface_lpVtbl0; _j0++) {
            This[_i0].IHTMLStyle3_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          HTMLStyle3_Init(This);
          free(This);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_This0 = 65025;
          struct TYPE_11__ * This = (struct TYPE_11__ *) malloc(_len_This0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__IHTMLStyle6_iface_lpVtbl0 = 1;
          This[_i0].IHTMLStyle6_iface.lpVtbl = (int *) malloc(_len_This__i0__IHTMLStyle6_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IHTMLStyle6_iface_lpVtbl0; _j0++) {
            This[_i0].IHTMLStyle6_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IHTMLStyle5_iface_lpVtbl0 = 1;
          This[_i0].IHTMLStyle5_iface.lpVtbl = (int *) malloc(_len_This__i0__IHTMLStyle5_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IHTMLStyle5_iface_lpVtbl0; _j0++) {
            This[_i0].IHTMLStyle5_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IHTMLStyle4_iface_lpVtbl0 = 1;
          This[_i0].IHTMLStyle4_iface.lpVtbl = (int *) malloc(_len_This__i0__IHTMLStyle4_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IHTMLStyle4_iface_lpVtbl0; _j0++) {
            This[_i0].IHTMLStyle4_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IHTMLStyle3_iface_lpVtbl0 = 1;
          This[_i0].IHTMLStyle3_iface.lpVtbl = (int *) malloc(_len_This__i0__IHTMLStyle3_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IHTMLStyle3_iface_lpVtbl0; _j0++) {
            This[_i0].IHTMLStyle3_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          HTMLStyle3_Init(This);
          free(This);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_This0 = 100;
          struct TYPE_11__ * This = (struct TYPE_11__ *) malloc(_len_This0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__IHTMLStyle6_iface_lpVtbl0 = 1;
          This[_i0].IHTMLStyle6_iface.lpVtbl = (int *) malloc(_len_This__i0__IHTMLStyle6_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IHTMLStyle6_iface_lpVtbl0; _j0++) {
            This[_i0].IHTMLStyle6_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IHTMLStyle5_iface_lpVtbl0 = 1;
          This[_i0].IHTMLStyle5_iface.lpVtbl = (int *) malloc(_len_This__i0__IHTMLStyle5_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IHTMLStyle5_iface_lpVtbl0; _j0++) {
            This[_i0].IHTMLStyle5_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IHTMLStyle4_iface_lpVtbl0 = 1;
          This[_i0].IHTMLStyle4_iface.lpVtbl = (int *) malloc(_len_This__i0__IHTMLStyle4_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IHTMLStyle4_iface_lpVtbl0; _j0++) {
            This[_i0].IHTMLStyle4_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IHTMLStyle3_iface_lpVtbl0 = 1;
          This[_i0].IHTMLStyle3_iface.lpVtbl = (int *) malloc(_len_This__i0__IHTMLStyle3_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IHTMLStyle3_iface_lpVtbl0; _j0++) {
            This[_i0].IHTMLStyle3_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          HTMLStyle3_Init(This);
          free(This);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
