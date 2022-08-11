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
typedef  enum REF_TYPE { ____Placeholder_REF_TYPE } REF_TYPE ;
typedef  int /*<<< orphan*/  VOID ;
struct TYPE_3__ {int RefType; int /*<<< orphan*/ * pUnknown; int /*<<< orphan*/ * lpVtbl; } ;
typedef  int /*<<< orphan*/  IUnknown ;
typedef  TYPE_1__ D3D9BaseObject ;

/* Variables and functions */
 int /*<<< orphan*/  D3D9BaseObject_Vtbl ; 

VOID InitD3D9BaseObject(D3D9BaseObject* pBaseObject, enum REF_TYPE RefType, IUnknown* pUnknown)
{
    pBaseObject->lpVtbl = &D3D9BaseObject_Vtbl;
    pBaseObject->RefType = RefType;
    pBaseObject->pUnknown = pUnknown;
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
          enum REF_TYPE RefType = 0;
          int _len_pBaseObject0 = 1;
          struct TYPE_3__ * pBaseObject = (struct TYPE_3__ *) malloc(_len_pBaseObject0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pBaseObject0; _i0++) {
            pBaseObject[_i0].RefType = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pBaseObject__i0__pUnknown0 = 1;
          pBaseObject[_i0].pUnknown = (int *) malloc(_len_pBaseObject__i0__pUnknown0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pBaseObject__i0__pUnknown0; _j0++) {
            pBaseObject[_i0].pUnknown[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pBaseObject__i0__lpVtbl0 = 1;
          pBaseObject[_i0].lpVtbl = (int *) malloc(_len_pBaseObject__i0__lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pBaseObject__i0__lpVtbl0; _j0++) {
            pBaseObject[_i0].lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pUnknown0 = 1;
          int * pUnknown = (int *) malloc(_len_pUnknown0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pUnknown0; _i0++) {
            pUnknown[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = InitD3D9BaseObject(pBaseObject,RefType,pUnknown);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pBaseObject0; _aux++) {
          free(pBaseObject[_aux].pUnknown);
          }
          for(int _aux = 0; _aux < _len_pBaseObject0; _aux++) {
          free(pBaseObject[_aux].lpVtbl);
          }
          free(pBaseObject);
          free(pUnknown);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum REF_TYPE RefType = 0;
          int _len_pBaseObject0 = 65025;
          struct TYPE_3__ * pBaseObject = (struct TYPE_3__ *) malloc(_len_pBaseObject0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pBaseObject0; _i0++) {
            pBaseObject[_i0].RefType = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pBaseObject__i0__pUnknown0 = 1;
          pBaseObject[_i0].pUnknown = (int *) malloc(_len_pBaseObject__i0__pUnknown0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pBaseObject__i0__pUnknown0; _j0++) {
            pBaseObject[_i0].pUnknown[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pBaseObject__i0__lpVtbl0 = 1;
          pBaseObject[_i0].lpVtbl = (int *) malloc(_len_pBaseObject__i0__lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pBaseObject__i0__lpVtbl0; _j0++) {
            pBaseObject[_i0].lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pUnknown0 = 65025;
          int * pUnknown = (int *) malloc(_len_pUnknown0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pUnknown0; _i0++) {
            pUnknown[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = InitD3D9BaseObject(pBaseObject,RefType,pUnknown);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pBaseObject0; _aux++) {
          free(pBaseObject[_aux].pUnknown);
          }
          for(int _aux = 0; _aux < _len_pBaseObject0; _aux++) {
          free(pBaseObject[_aux].lpVtbl);
          }
          free(pBaseObject);
          free(pUnknown);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum REF_TYPE RefType = 0;
          int _len_pBaseObject0 = 100;
          struct TYPE_3__ * pBaseObject = (struct TYPE_3__ *) malloc(_len_pBaseObject0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pBaseObject0; _i0++) {
            pBaseObject[_i0].RefType = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pBaseObject__i0__pUnknown0 = 1;
          pBaseObject[_i0].pUnknown = (int *) malloc(_len_pBaseObject__i0__pUnknown0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pBaseObject__i0__pUnknown0; _j0++) {
            pBaseObject[_i0].pUnknown[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pBaseObject__i0__lpVtbl0 = 1;
          pBaseObject[_i0].lpVtbl = (int *) malloc(_len_pBaseObject__i0__lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pBaseObject__i0__lpVtbl0; _j0++) {
            pBaseObject[_i0].lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pUnknown0 = 100;
          int * pUnknown = (int *) malloc(_len_pUnknown0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pUnknown0; _i0++) {
            pUnknown[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = InitD3D9BaseObject(pBaseObject,RefType,pUnknown);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pBaseObject0; _aux++) {
          free(pBaseObject[_aux].pUnknown);
          }
          for(int _aux = 0; _aux < _len_pBaseObject0; _aux++) {
          free(pBaseObject[_aux].lpVtbl);
          }
          free(pBaseObject);
          free(pUnknown);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
