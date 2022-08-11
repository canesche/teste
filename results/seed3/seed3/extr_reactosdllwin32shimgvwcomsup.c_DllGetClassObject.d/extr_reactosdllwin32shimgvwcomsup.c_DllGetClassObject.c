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
typedef  int /*<<< orphan*/  STDAPI ;
typedef  int /*<<< orphan*/  REFIID ;
typedef  int /*<<< orphan*/  REFCLSID ;
typedef  int /*<<< orphan*/ * LPVOID ;
typedef  int /*<<< orphan*/  HRESULT ;

/* Variables and functions */
 int /*<<< orphan*/  CLASS_E_CLASSNOTAVAILABLE ; 

STDAPI
DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID *ppv)
{
    HRESULT hr;

    /* There are no classes to export, so always return CLASS_E_CLASSNOTAVAILABLE*/
    *ppv = NULL;
    hr = CLASS_E_CLASSNOTAVAILABLE;

    return hr;
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
          int rclsid = 100;
          int riid = 100;
          int _len_ppv0 = 1;
          int ** ppv = (int **) malloc(_len_ppv0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_ppv0; _i0++) {
            int _len_ppv1 = 1;
            ppv[_i0] = (int *) malloc(_len_ppv1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_ppv1; _i1++) {
              ppv[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = DllGetClassObject(rclsid,riid,ppv);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_ppv0; i1++) {
            int _len_ppv1 = 1;
              free(ppv[i1]);
          }
          free(ppv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int rclsid = 255;
          int riid = 255;
          int _len_ppv0 = 65025;
          int ** ppv = (int **) malloc(_len_ppv0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_ppv0; _i0++) {
            int _len_ppv1 = 1;
            ppv[_i0] = (int *) malloc(_len_ppv1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_ppv1; _i1++) {
              ppv[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = DllGetClassObject(rclsid,riid,ppv);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_ppv0; i1++) {
            int _len_ppv1 = 1;
              free(ppv[i1]);
          }
          free(ppv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int rclsid = 10;
          int riid = 10;
          int _len_ppv0 = 100;
          int ** ppv = (int **) malloc(_len_ppv0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_ppv0; _i0++) {
            int _len_ppv1 = 1;
            ppv[_i0] = (int *) malloc(_len_ppv1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_ppv1; _i1++) {
              ppv[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = DllGetClassObject(rclsid,riid,ppv);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_ppv0; i1++) {
            int _len_ppv1 = 1;
              free(ppv[i1]);
          }
          free(ppv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
