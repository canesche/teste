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

/* Type definitions */
typedef  int /*<<< orphan*/  aseGeomObject_t ;

/* Variables and functions */

__attribute__((used)) static void ConcatenateObjects( aseGeomObject_t *pObjA, aseGeomObject_t *pObjB ){
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
          int _len_pObjA0 = 1;
          int * pObjA = (int *) malloc(_len_pObjA0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pObjA0; _i0++) {
            pObjA[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pObjB0 = 1;
          int * pObjB = (int *) malloc(_len_pObjB0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pObjB0; _i0++) {
            pObjB[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ConcatenateObjects(pObjA,pObjB);
          free(pObjA);
          free(pObjB);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pObjA0 = 65025;
          int * pObjA = (int *) malloc(_len_pObjA0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pObjA0; _i0++) {
            pObjA[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pObjB0 = 65025;
          int * pObjB = (int *) malloc(_len_pObjB0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pObjB0; _i0++) {
            pObjB[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ConcatenateObjects(pObjA,pObjB);
          free(pObjA);
          free(pObjB);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pObjA0 = 100;
          int * pObjA = (int *) malloc(_len_pObjA0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pObjA0; _i0++) {
            pObjA[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pObjB0 = 100;
          int * pObjB = (int *) malloc(_len_pObjB0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pObjB0; _i0++) {
            pObjB[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ConcatenateObjects(pObjA,pObjB);
          free(pObjA);
          free(pObjB);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
