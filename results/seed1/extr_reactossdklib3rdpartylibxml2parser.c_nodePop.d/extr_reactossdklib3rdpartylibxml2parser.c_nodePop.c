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
typedef  TYPE_1__* xmlParserCtxtPtr ;
typedef  int /*<<< orphan*/ * xmlNodePtr ;
struct TYPE_3__ {int nodeNr; int /*<<< orphan*/ ** nodeTab; int /*<<< orphan*/ * node; } ;

/* Variables and functions */

xmlNodePtr
nodePop(xmlParserCtxtPtr ctxt)
{
    xmlNodePtr ret;

    if (ctxt == NULL) return(NULL);
    if (ctxt->nodeNr <= 0)
        return (NULL);
    ctxt->nodeNr--;
    if (ctxt->nodeNr > 0)
        ctxt->node = ctxt->nodeTab[ctxt->nodeNr - 1];
    else
        ctxt->node = NULL;
    ret = ctxt->nodeTab[ctxt->nodeNr];
    ctxt->nodeTab[ctxt->nodeNr] = NULL;
    return (ret);
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
          int _len_ctxt0 = 1;
          struct TYPE_3__ * ctxt = (struct TYPE_3__ *) malloc(_len_ctxt0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctxt0; _i0++) {
            ctxt[_i0].nodeNr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctxt__i0__nodeTab0 = 1;
          ctxt[_i0].nodeTab = (int **) malloc(_len_ctxt__i0__nodeTab0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ctxt__i0__nodeTab0; _j0++) {
            int _len_ctxt__i0__nodeTab1 = 1;
            ctxt[_i0].nodeTab[_j0] = (int *) malloc(_len_ctxt__i0__nodeTab1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ctxt__i0__nodeTab1; _j1++) {
              ctxt[_i0].nodeTab[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ctxt__i0__node0 = 1;
          ctxt[_i0].node = (int *) malloc(_len_ctxt__i0__node0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctxt__i0__node0; _j0++) {
            ctxt[_i0].node[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = nodePop(ctxt);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_ctxt0; _aux++) {
          free(*(ctxt[_aux].nodeTab));
        free(ctxt[_aux].nodeTab);
          }
          for(int _aux = 0; _aux < _len_ctxt0; _aux++) {
          free(ctxt[_aux].node);
          }
          free(ctxt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctxt0 = 65025;
          struct TYPE_3__ * ctxt = (struct TYPE_3__ *) malloc(_len_ctxt0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctxt0; _i0++) {
            ctxt[_i0].nodeNr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctxt__i0__nodeTab0 = 1;
          ctxt[_i0].nodeTab = (int **) malloc(_len_ctxt__i0__nodeTab0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ctxt__i0__nodeTab0; _j0++) {
            int _len_ctxt__i0__nodeTab1 = 1;
            ctxt[_i0].nodeTab[_j0] = (int *) malloc(_len_ctxt__i0__nodeTab1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ctxt__i0__nodeTab1; _j1++) {
              ctxt[_i0].nodeTab[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ctxt__i0__node0 = 1;
          ctxt[_i0].node = (int *) malloc(_len_ctxt__i0__node0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctxt__i0__node0; _j0++) {
            ctxt[_i0].node[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = nodePop(ctxt);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_ctxt0; _aux++) {
          free(*(ctxt[_aux].nodeTab));
        free(ctxt[_aux].nodeTab);
          }
          for(int _aux = 0; _aux < _len_ctxt0; _aux++) {
          free(ctxt[_aux].node);
          }
          free(ctxt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctxt0 = 100;
          struct TYPE_3__ * ctxt = (struct TYPE_3__ *) malloc(_len_ctxt0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctxt0; _i0++) {
            ctxt[_i0].nodeNr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctxt__i0__nodeTab0 = 1;
          ctxt[_i0].nodeTab = (int **) malloc(_len_ctxt__i0__nodeTab0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ctxt__i0__nodeTab0; _j0++) {
            int _len_ctxt__i0__nodeTab1 = 1;
            ctxt[_i0].nodeTab[_j0] = (int *) malloc(_len_ctxt__i0__nodeTab1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ctxt__i0__nodeTab1; _j1++) {
              ctxt[_i0].nodeTab[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ctxt__i0__node0 = 1;
          ctxt[_i0].node = (int *) malloc(_len_ctxt__i0__node0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctxt__i0__node0; _j0++) {
            ctxt[_i0].node[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = nodePop(ctxt);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_ctxt0; _aux++) {
          free(*(ctxt[_aux].nodeTab));
        free(ctxt[_aux].nodeTab);
          }
          for(int _aux = 0; _aux < _len_ctxt0; _aux++) {
          free(ctxt[_aux].node);
          }
          free(ctxt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
