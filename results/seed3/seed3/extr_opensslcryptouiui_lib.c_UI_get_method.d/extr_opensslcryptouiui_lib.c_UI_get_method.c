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
typedef  int /*<<< orphan*/  UI_METHOD ;
struct TYPE_3__ {int /*<<< orphan*/  const* meth; } ;
typedef  TYPE_1__ UI ;

/* Variables and functions */

const UI_METHOD *UI_get_method(UI *ui)
{
    return ui->meth;
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
          int _len_ui0 = 1;
          struct TYPE_3__ * ui = (struct TYPE_3__ *) malloc(_len_ui0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ui0; _i0++) {
              int _len_ui__i0__meth0 = 1;
          ui[_i0].meth = (const int *) malloc(_len_ui__i0__meth0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_ui__i0__meth0; _j0++) {
            ui[_i0].meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const int * benchRet = UI_get_method(ui);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_ui0; _aux++) {
          free(ui[_aux].meth);
          }
          free(ui);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ui0 = 65025;
          struct TYPE_3__ * ui = (struct TYPE_3__ *) malloc(_len_ui0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ui0; _i0++) {
              int _len_ui__i0__meth0 = 1;
          ui[_i0].meth = (const int *) malloc(_len_ui__i0__meth0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_ui__i0__meth0; _j0++) {
            ui[_i0].meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const int * benchRet = UI_get_method(ui);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_ui0; _aux++) {
          free(ui[_aux].meth);
          }
          free(ui);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ui0 = 100;
          struct TYPE_3__ * ui = (struct TYPE_3__ *) malloc(_len_ui0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ui0; _i0++) {
              int _len_ui__i0__meth0 = 1;
          ui[_i0].meth = (const int *) malloc(_len_ui__i0__meth0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_ui__i0__meth0; _j0++) {
            ui[_i0].meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const int * benchRet = UI_get_method(ui);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_ui0; _aux++) {
          free(ui[_aux].meth);
          }
          free(ui);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
