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
typedef  int /*<<< orphan*/  ident_map_t ;
struct TYPE_3__ {scalar_t__ ident_map_cnt; scalar_t__ ident_map; } ;
typedef  TYPE_1__ ScriptDisp ;
typedef  scalar_t__ DISPID ;

/* Variables and functions */

__attribute__((used)) static inline ident_map_t *id_to_ident(ScriptDisp *This, DISPID id)
{
    return 0 < id && id <= This->ident_map_cnt ? This->ident_map+id-1 : NULL;
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
          long id = 100;
          int _len_This0 = 1;
          struct TYPE_3__ * This = (struct TYPE_3__ *) malloc(_len_This0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
            This[_i0].ident_map_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].ident_map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = id_to_ident(This,id);
          printf("%d\n", (*benchRet)); 
          free(This);
        
        break;
    }
    // big-arr
    case 1:
    {
          long id = 255;
          int _len_This0 = 65025;
          struct TYPE_3__ * This = (struct TYPE_3__ *) malloc(_len_This0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
            This[_i0].ident_map_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].ident_map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = id_to_ident(This,id);
          printf("%d\n", (*benchRet)); 
          free(This);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long id = 10;
          int _len_This0 = 100;
          struct TYPE_3__ * This = (struct TYPE_3__ *) malloc(_len_This0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
            This[_i0].ident_map_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].ident_map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = id_to_ident(This,id);
          printf("%d\n", (*benchRet)); 
          free(This);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
