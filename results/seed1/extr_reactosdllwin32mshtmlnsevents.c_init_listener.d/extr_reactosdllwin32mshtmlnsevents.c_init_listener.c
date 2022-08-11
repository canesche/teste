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
typedef  int /*<<< orphan*/  nsIDOMEventListenerVtbl ;
struct TYPE_4__ {int /*<<< orphan*/  const* lpVtbl; } ;
struct TYPE_5__ {int /*<<< orphan*/ * This; TYPE_1__ nsIDOMEventListener_iface; } ;
typedef  TYPE_2__ nsEventListener ;
typedef  int /*<<< orphan*/  nsDocumentEventListener ;

/* Variables and functions */

__attribute__((used)) static void init_listener(nsEventListener *This, nsDocumentEventListener *listener,
        const nsIDOMEventListenerVtbl *vtbl)
{
    This->nsIDOMEventListener_iface.lpVtbl = vtbl;
    This->This = listener;
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
          struct TYPE_5__ * This = (struct TYPE_5__ *) malloc(_len_This0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__This0 = 1;
          This[_i0].This = (int *) malloc(_len_This__i0__This0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__This0; _j0++) {
            This[_i0].This[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__nsIDOMEventListener_iface_lpVtbl0 = 1;
          This[_i0].nsIDOMEventListener_iface.lpVtbl = (const int *) malloc(_len_This__i0__nsIDOMEventListener_iface_lpVtbl0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_This__i0__nsIDOMEventListener_iface_lpVtbl0; _j0++) {
            This[_i0].nsIDOMEventListener_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_listener0 = 1;
          int * listener = (int *) malloc(_len_listener0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_listener0; _i0++) {
            listener[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vtbl0 = 1;
          const int * vtbl = (const int *) malloc(_len_vtbl0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_vtbl0; _i0++) {
            vtbl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_listener(This,listener,vtbl);
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].This);
          }
          free(This);
          free(listener);
          free(vtbl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_This0 = 65025;
          struct TYPE_5__ * This = (struct TYPE_5__ *) malloc(_len_This0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__This0 = 1;
          This[_i0].This = (int *) malloc(_len_This__i0__This0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__This0; _j0++) {
            This[_i0].This[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__nsIDOMEventListener_iface_lpVtbl0 = 1;
          This[_i0].nsIDOMEventListener_iface.lpVtbl = (const int *) malloc(_len_This__i0__nsIDOMEventListener_iface_lpVtbl0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_This__i0__nsIDOMEventListener_iface_lpVtbl0; _j0++) {
            This[_i0].nsIDOMEventListener_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_listener0 = 65025;
          int * listener = (int *) malloc(_len_listener0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_listener0; _i0++) {
            listener[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vtbl0 = 65025;
          const int * vtbl = (const int *) malloc(_len_vtbl0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_vtbl0; _i0++) {
            vtbl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_listener(This,listener,vtbl);
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].This);
          }
          free(This);
          free(listener);
          free(vtbl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_This0 = 100;
          struct TYPE_5__ * This = (struct TYPE_5__ *) malloc(_len_This0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__This0 = 1;
          This[_i0].This = (int *) malloc(_len_This__i0__This0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__This0; _j0++) {
            This[_i0].This[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__nsIDOMEventListener_iface_lpVtbl0 = 1;
          This[_i0].nsIDOMEventListener_iface.lpVtbl = (const int *) malloc(_len_This__i0__nsIDOMEventListener_iface_lpVtbl0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_This__i0__nsIDOMEventListener_iface_lpVtbl0; _j0++) {
            This[_i0].nsIDOMEventListener_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_listener0 = 100;
          int * listener = (int *) malloc(_len_listener0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_listener0; _i0++) {
            listener[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vtbl0 = 100;
          const int * vtbl = (const int *) malloc(_len_vtbl0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_vtbl0; _i0++) {
            vtbl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_listener(This,listener,vtbl);
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].This);
          }
          free(This);
          free(listener);
          free(vtbl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
