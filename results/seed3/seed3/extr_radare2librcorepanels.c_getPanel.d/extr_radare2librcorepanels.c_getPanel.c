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
struct TYPE_3__ {int /*<<< orphan*/ ** panel; } ;
typedef  TYPE_1__ RPanels ;
typedef  int /*<<< orphan*/  RPanel ;

/* Variables and functions */
 int PANEL_NUM_LIMIT ; 

__attribute__((used)) static RPanel *getPanel(RPanels *panels, int i) {
	if (i >= PANEL_NUM_LIMIT) {
		return NULL;
	}
	return panels->panel[i];
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
          int i = 100;
          int _len_panels0 = 1;
          struct TYPE_3__ * panels = (struct TYPE_3__ *) malloc(_len_panels0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_panels0; _i0++) {
              int _len_panels__i0__panel0 = 1;
          panels[_i0].panel = (int **) malloc(_len_panels__i0__panel0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_panels__i0__panel0; _j0++) {
            int _len_panels__i0__panel1 = 1;
            panels[_i0].panel[_j0] = (int *) malloc(_len_panels__i0__panel1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_panels__i0__panel1; _j1++) {
              panels[_i0].panel[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = getPanel(panels,i);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_panels0; _aux++) {
          free(*(panels[_aux].panel));
        free(panels[_aux].panel);
          }
          free(panels);
        
        break;
    }
    // big-arr
    case 1:
    {
          int i = 255;
          int _len_panels0 = 65025;
          struct TYPE_3__ * panels = (struct TYPE_3__ *) malloc(_len_panels0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_panels0; _i0++) {
              int _len_panels__i0__panel0 = 1;
          panels[_i0].panel = (int **) malloc(_len_panels__i0__panel0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_panels__i0__panel0; _j0++) {
            int _len_panels__i0__panel1 = 1;
            panels[_i0].panel[_j0] = (int *) malloc(_len_panels__i0__panel1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_panels__i0__panel1; _j1++) {
              panels[_i0].panel[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = getPanel(panels,i);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_panels0; _aux++) {
          free(*(panels[_aux].panel));
        free(panels[_aux].panel);
          }
          free(panels);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int i = 10;
          int _len_panels0 = 100;
          struct TYPE_3__ * panels = (struct TYPE_3__ *) malloc(_len_panels0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_panels0; _i0++) {
              int _len_panels__i0__panel0 = 1;
          panels[_i0].panel = (int **) malloc(_len_panels__i0__panel0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_panels__i0__panel0; _j0++) {
            int _len_panels__i0__panel1 = 1;
            panels[_i0].panel[_j0] = (int *) malloc(_len_panels__i0__panel1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_panels__i0__panel1; _j1++) {
              panels[_i0].panel[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = getPanel(panels,i);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_panels0; _aux++) {
          free(*(panels[_aux].panel));
        free(panels[_aux].panel);
          }
          free(panels);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
