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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  const* vtables; } ;
typedef  TYPE_1__ KXLDRelocator ;
typedef  int /*<<< orphan*/  KXLDDict ;

/* Variables and functions */

void 
kxld_relocator_set_vtables(KXLDRelocator *relocator, const KXLDDict *vtables)
{
    relocator->vtables = vtables;
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
          int _len_relocator0 = 1;
          struct TYPE_3__ * relocator = (struct TYPE_3__ *) malloc(_len_relocator0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_relocator0; _i0++) {
              int _len_relocator__i0__vtables0 = 1;
          relocator[_i0].vtables = (const int *) malloc(_len_relocator__i0__vtables0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_relocator__i0__vtables0; _j0++) {
            relocator[_i0].vtables[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vtables0 = 1;
          const int * vtables = (const int *) malloc(_len_vtables0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_vtables0; _i0++) {
            vtables[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kxld_relocator_set_vtables(relocator,vtables);
          for(int _aux = 0; _aux < _len_relocator0; _aux++) {
          free(relocator[_aux].vtables);
          }
          free(relocator);
          free(vtables);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_relocator0 = 65025;
          struct TYPE_3__ * relocator = (struct TYPE_3__ *) malloc(_len_relocator0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_relocator0; _i0++) {
              int _len_relocator__i0__vtables0 = 1;
          relocator[_i0].vtables = (const int *) malloc(_len_relocator__i0__vtables0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_relocator__i0__vtables0; _j0++) {
            relocator[_i0].vtables[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vtables0 = 65025;
          const int * vtables = (const int *) malloc(_len_vtables0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_vtables0; _i0++) {
            vtables[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kxld_relocator_set_vtables(relocator,vtables);
          for(int _aux = 0; _aux < _len_relocator0; _aux++) {
          free(relocator[_aux].vtables);
          }
          free(relocator);
          free(vtables);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_relocator0 = 100;
          struct TYPE_3__ * relocator = (struct TYPE_3__ *) malloc(_len_relocator0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_relocator0; _i0++) {
              int _len_relocator__i0__vtables0 = 1;
          relocator[_i0].vtables = (const int *) malloc(_len_relocator__i0__vtables0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_relocator__i0__vtables0; _j0++) {
            relocator[_i0].vtables[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vtables0 = 100;
          const int * vtables = (const int *) malloc(_len_vtables0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_vtables0; _i0++) {
            vtables[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kxld_relocator_set_vtables(relocator,vtables);
          for(int _aux = 0; _aux < _len_relocator0; _aux++) {
          free(relocator[_aux].vtables);
          }
          free(relocator);
          free(vtables);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
