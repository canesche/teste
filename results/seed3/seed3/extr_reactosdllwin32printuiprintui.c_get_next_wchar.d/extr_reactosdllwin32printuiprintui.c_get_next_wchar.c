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
struct TYPE_3__ {char* pNextCharW; size_t next_arg; size_t argc; char** argv; } ;
typedef  TYPE_1__ context_t ;
typedef  char WCHAR ;
typedef  scalar_t__ BOOL ;

/* Variables and functions */

__attribute__((used)) static WCHAR get_next_wchar(context_t * cx, BOOL use_next_parameter)
{
    WCHAR   c;

    /* Try the next WCHAR in the actual Parameter */
    if (cx->pNextCharW) {
        c = *cx->pNextCharW;
        if (c) {
            cx->pNextCharW++;
            return c;
        }
        /* We reached the end of the Parameter */
        cx->pNextCharW = NULL;
    }

    /* Get the next Parameter, when available and allowed */
    if ((cx->pNextCharW == NULL) && (cx->next_arg < cx->argc) && (use_next_parameter)) {
        cx->pNextCharW = cx->argv[cx->next_arg];
        cx->next_arg++;
    }

    if (cx->pNextCharW) {
        c = *cx->pNextCharW;
        if (c) {
            cx->pNextCharW++;
        }
        else
        {
            /* We reached the end of the Parameter */
            cx->pNextCharW = NULL;
        }
        return c;
    }
    return '\0';
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
          long use_next_parameter = 100;
          int _len_cx0 = 1;
          struct TYPE_3__ * cx = (struct TYPE_3__ *) malloc(_len_cx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
              int _len_cx__i0__pNextCharW0 = 1;
          cx[_i0].pNextCharW = (char *) malloc(_len_cx__i0__pNextCharW0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_cx__i0__pNextCharW0; _j0++) {
            cx[_i0].pNextCharW[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cx[_i0].next_arg = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].argc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cx__i0__argv0 = 1;
          cx[_i0].argv = (char **) malloc(_len_cx__i0__argv0*sizeof(char *));
          for(int _j0 = 0; _j0 < _len_cx__i0__argv0; _j0++) {
            int _len_cx__i0__argv1 = 1;
            cx[_i0].argv[_j0] = (char *) malloc(_len_cx__i0__argv1*sizeof(char));
            for(int _j1 = 0; _j1 < _len_cx__i0__argv1; _j1++) {
              cx[_i0].argv[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          char benchRet = get_next_wchar(cx,use_next_parameter);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int _aux = 0; _aux < _len_cx0; _aux++) {
          free(cx[_aux].pNextCharW);
          }
          for(int _aux = 0; _aux < _len_cx0; _aux++) {
          free(*(cx[_aux].argv));
        free(cx[_aux].argv);
          }
          free(cx);
        
        break;
    }
    // big-arr
    case 1:
    {
          long use_next_parameter = 255;
          int _len_cx0 = 65025;
          struct TYPE_3__ * cx = (struct TYPE_3__ *) malloc(_len_cx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
              int _len_cx__i0__pNextCharW0 = 1;
          cx[_i0].pNextCharW = (char *) malloc(_len_cx__i0__pNextCharW0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_cx__i0__pNextCharW0; _j0++) {
            cx[_i0].pNextCharW[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cx[_i0].next_arg = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].argc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cx__i0__argv0 = 1;
          cx[_i0].argv = (char **) malloc(_len_cx__i0__argv0*sizeof(char *));
          for(int _j0 = 0; _j0 < _len_cx__i0__argv0; _j0++) {
            int _len_cx__i0__argv1 = 1;
            cx[_i0].argv[_j0] = (char *) malloc(_len_cx__i0__argv1*sizeof(char));
            for(int _j1 = 0; _j1 < _len_cx__i0__argv1; _j1++) {
              cx[_i0].argv[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          char benchRet = get_next_wchar(cx,use_next_parameter);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int _aux = 0; _aux < _len_cx0; _aux++) {
          free(cx[_aux].pNextCharW);
          }
          for(int _aux = 0; _aux < _len_cx0; _aux++) {
          free(*(cx[_aux].argv));
        free(cx[_aux].argv);
          }
          free(cx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long use_next_parameter = 10;
          int _len_cx0 = 100;
          struct TYPE_3__ * cx = (struct TYPE_3__ *) malloc(_len_cx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
              int _len_cx__i0__pNextCharW0 = 1;
          cx[_i0].pNextCharW = (char *) malloc(_len_cx__i0__pNextCharW0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_cx__i0__pNextCharW0; _j0++) {
            cx[_i0].pNextCharW[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cx[_i0].next_arg = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].argc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cx__i0__argv0 = 1;
          cx[_i0].argv = (char **) malloc(_len_cx__i0__argv0*sizeof(char *));
          for(int _j0 = 0; _j0 < _len_cx__i0__argv0; _j0++) {
            int _len_cx__i0__argv1 = 1;
            cx[_i0].argv[_j0] = (char *) malloc(_len_cx__i0__argv1*sizeof(char));
            for(int _j1 = 0; _j1 < _len_cx__i0__argv1; _j1++) {
              cx[_i0].argv[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          char benchRet = get_next_wchar(cx,use_next_parameter);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int _aux = 0; _aux < _len_cx0; _aux++) {
          free(cx[_aux].pNextCharW);
          }
          for(int _aux = 0; _aux < _len_cx0; _aux++) {
          free(*(cx[_aux].argv));
        free(cx[_aux].argv);
          }
          free(cx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
