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
struct TYPE_5__ {TYPE_1__* pCursors; } ;
struct TYPE_4__ {scalar_t__ pRun; scalar_t__ nOffset; } ;
typedef  TYPE_2__ ME_TextEditor ;
typedef  int BOOL ;

/* Variables and functions */

BOOL ME_IsSelection(ME_TextEditor *editor)
{
  return editor->pCursors[0].pRun != editor->pCursors[1].pRun ||
         editor->pCursors[0].nOffset != editor->pCursors[1].nOffset;
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
          int _len_editor0 = 1;
          struct TYPE_5__ * editor = (struct TYPE_5__ *) malloc(_len_editor0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_editor0; _i0++) {
              int _len_editor__i0__pCursors0 = 1;
          editor[_i0].pCursors = (struct TYPE_4__ *) malloc(_len_editor__i0__pCursors0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_editor__i0__pCursors0; _j0++) {
            editor[_i0].pCursors->pRun = ((-2 * (next_i()%2)) + 1) * next_i();
        editor[_i0].pCursors->nOffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ME_IsSelection(editor);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_editor0; _aux++) {
          free(editor[_aux].pCursors);
          }
          free(editor);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_editor0 = 65025;
          struct TYPE_5__ * editor = (struct TYPE_5__ *) malloc(_len_editor0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_editor0; _i0++) {
              int _len_editor__i0__pCursors0 = 1;
          editor[_i0].pCursors = (struct TYPE_4__ *) malloc(_len_editor__i0__pCursors0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_editor__i0__pCursors0; _j0++) {
            editor[_i0].pCursors->pRun = ((-2 * (next_i()%2)) + 1) * next_i();
        editor[_i0].pCursors->nOffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ME_IsSelection(editor);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_editor0; _aux++) {
          free(editor[_aux].pCursors);
          }
          free(editor);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_editor0 = 100;
          struct TYPE_5__ * editor = (struct TYPE_5__ *) malloc(_len_editor0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_editor0; _i0++) {
              int _len_editor__i0__pCursors0 = 1;
          editor[_i0].pCursors = (struct TYPE_4__ *) malloc(_len_editor__i0__pCursors0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_editor__i0__pCursors0; _j0++) {
            editor[_i0].pCursors->pRun = ((-2 * (next_i()%2)) + 1) * next_i();
        editor[_i0].pCursors->nOffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ME_IsSelection(editor);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_editor0; _aux++) {
          free(editor[_aux].pCursors);
          }
          free(editor);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
