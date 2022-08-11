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
struct TYPE_3__ {int /*<<< orphan*/  ItemSize__; scalar_t__ MaxSize__; scalar_t__ Size__; int /*<<< orphan*/ * Data__; } ;
typedef  TYPE_1__* PARRAY ;
typedef  int /*<<< orphan*/  DWORD ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static inline BOOL ARRAY_InitWorker(PARRAY Array, DWORD ItemSize)
{
    Array->Data__ = NULL;
    Array->Size__ = Array->MaxSize__ = 0;
    Array->ItemSize__ = ItemSize;

    return TRUE;
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
          int ItemSize = 100;
          int _len_Array0 = 1;
          struct TYPE_3__ * Array = (struct TYPE_3__ *) malloc(_len_Array0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_Array0; _i0++) {
            Array[_i0].ItemSize__ = ((-2 * (next_i()%2)) + 1) * next_i();
        Array[_i0].MaxSize__ = ((-2 * (next_i()%2)) + 1) * next_i();
        Array[_i0].Size__ = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_Array__i0__Data__0 = 1;
          Array[_i0].Data__ = (int *) malloc(_len_Array__i0__Data__0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Array__i0__Data__0; _j0++) {
            Array[_i0].Data__[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ARRAY_InitWorker(Array,ItemSize);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_Array0; _aux++) {
          free(Array[_aux].Data__);
          }
          free(Array);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ItemSize = 255;
          int _len_Array0 = 65025;
          struct TYPE_3__ * Array = (struct TYPE_3__ *) malloc(_len_Array0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_Array0; _i0++) {
            Array[_i0].ItemSize__ = ((-2 * (next_i()%2)) + 1) * next_i();
        Array[_i0].MaxSize__ = ((-2 * (next_i()%2)) + 1) * next_i();
        Array[_i0].Size__ = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_Array__i0__Data__0 = 1;
          Array[_i0].Data__ = (int *) malloc(_len_Array__i0__Data__0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Array__i0__Data__0; _j0++) {
            Array[_i0].Data__[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ARRAY_InitWorker(Array,ItemSize);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_Array0; _aux++) {
          free(Array[_aux].Data__);
          }
          free(Array);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ItemSize = 10;
          int _len_Array0 = 100;
          struct TYPE_3__ * Array = (struct TYPE_3__ *) malloc(_len_Array0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_Array0; _i0++) {
            Array[_i0].ItemSize__ = ((-2 * (next_i()%2)) + 1) * next_i();
        Array[_i0].MaxSize__ = ((-2 * (next_i()%2)) + 1) * next_i();
        Array[_i0].Size__ = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_Array__i0__Data__0 = 1;
          Array[_i0].Data__ = (int *) malloc(_len_Array__i0__Data__0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Array__i0__Data__0; _j0++) {
            Array[_i0].Data__[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ARRAY_InitWorker(Array,ItemSize);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_Array0; _aux++) {
          free(Array[_aux].Data__);
          }
          free(Array);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
