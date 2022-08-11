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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/ * lpVtbl; } ;
struct ddraw_clipper {int ref; TYPE_1__ IDirectDrawClipper_iface; } ;
typedef  int /*<<< orphan*/  HRESULT ;

/* Variables and functions */
 int /*<<< orphan*/  DD_OK ; 
 int /*<<< orphan*/  ddraw_clipper_vtbl ; 

HRESULT ddraw_clipper_init(struct ddraw_clipper *clipper)
{
    clipper->IDirectDrawClipper_iface.lpVtbl = &ddraw_clipper_vtbl;
    clipper->ref = 1;

    return DD_OK;
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
          int _len_clipper0 = 1;
          struct ddraw_clipper * clipper = (struct ddraw_clipper *) malloc(_len_clipper0*sizeof(struct ddraw_clipper));
          for(int _i0 = 0; _i0 < _len_clipper0; _i0++) {
            clipper[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clipper__i0__IDirectDrawClipper_iface_lpVtbl0 = 1;
          clipper[_i0].IDirectDrawClipper_iface.lpVtbl = (int *) malloc(_len_clipper__i0__IDirectDrawClipper_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_clipper__i0__IDirectDrawClipper_iface_lpVtbl0; _j0++) {
            clipper[_i0].IDirectDrawClipper_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ddraw_clipper_init(clipper);
          printf("%d\n", benchRet); 
          free(clipper);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_clipper0 = 65025;
          struct ddraw_clipper * clipper = (struct ddraw_clipper *) malloc(_len_clipper0*sizeof(struct ddraw_clipper));
          for(int _i0 = 0; _i0 < _len_clipper0; _i0++) {
            clipper[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clipper__i0__IDirectDrawClipper_iface_lpVtbl0 = 1;
          clipper[_i0].IDirectDrawClipper_iface.lpVtbl = (int *) malloc(_len_clipper__i0__IDirectDrawClipper_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_clipper__i0__IDirectDrawClipper_iface_lpVtbl0; _j0++) {
            clipper[_i0].IDirectDrawClipper_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ddraw_clipper_init(clipper);
          printf("%d\n", benchRet); 
          free(clipper);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_clipper0 = 100;
          struct ddraw_clipper * clipper = (struct ddraw_clipper *) malloc(_len_clipper0*sizeof(struct ddraw_clipper));
          for(int _i0 = 0; _i0 < _len_clipper0; _i0++) {
            clipper[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clipper__i0__IDirectDrawClipper_iface_lpVtbl0 = 1;
          clipper[_i0].IDirectDrawClipper_iface.lpVtbl = (int *) malloc(_len_clipper__i0__IDirectDrawClipper_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_clipper__i0__IDirectDrawClipper_iface_lpVtbl0; _j0++) {
            clipper[_i0].IDirectDrawClipper_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ddraw_clipper_init(clipper);
          printf("%d\n", benchRet); 
          free(clipper);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
