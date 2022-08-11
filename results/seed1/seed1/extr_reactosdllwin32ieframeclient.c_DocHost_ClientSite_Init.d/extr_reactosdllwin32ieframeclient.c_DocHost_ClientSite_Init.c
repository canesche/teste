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
typedef  struct TYPE_15__   TYPE_7__ ;
typedef  struct TYPE_14__   TYPE_6__ ;
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {int /*<<< orphan*/ * lpVtbl; } ;
struct TYPE_9__ {int /*<<< orphan*/ * lpVtbl; } ;
struct TYPE_14__ {int /*<<< orphan*/ * lpVtbl; } ;
struct TYPE_13__ {int /*<<< orphan*/ * lpVtbl; } ;
struct TYPE_12__ {int /*<<< orphan*/ * lpVtbl; } ;
struct TYPE_11__ {int /*<<< orphan*/ * lpVtbl; } ;
struct TYPE_15__ {TYPE_2__ IServiceProvider_iface; TYPE_1__ IDispatch_iface; TYPE_6__ IOleControlSite_iface; TYPE_5__ IOleDocumentSite_iface; TYPE_4__ IOleInPlaceSiteEx_iface; TYPE_3__ IOleClientSite_iface; } ;
typedef  TYPE_7__ DocHost ;

/* Variables and functions */
 int /*<<< orphan*/  DispatchVtbl ; 
 int /*<<< orphan*/  OleClientSiteVtbl ; 
 int /*<<< orphan*/  OleControlSiteVtbl ; 
 int /*<<< orphan*/  OleDocumentSiteVtbl ; 
 int /*<<< orphan*/  OleInPlaceSiteExVtbl ; 
 int /*<<< orphan*/  ServiceProviderVtbl ; 

void DocHost_ClientSite_Init(DocHost *This)
{
    This->IOleClientSite_iface.lpVtbl    = &OleClientSiteVtbl;
    This->IOleInPlaceSiteEx_iface.lpVtbl = &OleInPlaceSiteExVtbl;
    This->IOleDocumentSite_iface.lpVtbl  = &OleDocumentSiteVtbl;
    This->IOleControlSite_iface.lpVtbl   = &OleControlSiteVtbl;
    This->IDispatch_iface.lpVtbl         = &DispatchVtbl;
    This->IServiceProvider_iface.lpVtbl  = &ServiceProviderVtbl;
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
          int _len_This0 = 1;
          struct TYPE_15__ * This = (struct TYPE_15__ *) malloc(_len_This0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__IServiceProvider_iface_lpVtbl0 = 1;
          This[_i0].IServiceProvider_iface.lpVtbl = (int *) malloc(_len_This__i0__IServiceProvider_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IServiceProvider_iface_lpVtbl0; _j0++) {
            This[_i0].IServiceProvider_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IDispatch_iface_lpVtbl0 = 1;
          This[_i0].IDispatch_iface.lpVtbl = (int *) malloc(_len_This__i0__IDispatch_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IDispatch_iface_lpVtbl0; _j0++) {
            This[_i0].IDispatch_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IOleControlSite_iface_lpVtbl0 = 1;
          This[_i0].IOleControlSite_iface.lpVtbl = (int *) malloc(_len_This__i0__IOleControlSite_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IOleControlSite_iface_lpVtbl0; _j0++) {
            This[_i0].IOleControlSite_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IOleDocumentSite_iface_lpVtbl0 = 1;
          This[_i0].IOleDocumentSite_iface.lpVtbl = (int *) malloc(_len_This__i0__IOleDocumentSite_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IOleDocumentSite_iface_lpVtbl0; _j0++) {
            This[_i0].IOleDocumentSite_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IOleInPlaceSiteEx_iface_lpVtbl0 = 1;
          This[_i0].IOleInPlaceSiteEx_iface.lpVtbl = (int *) malloc(_len_This__i0__IOleInPlaceSiteEx_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IOleInPlaceSiteEx_iface_lpVtbl0; _j0++) {
            This[_i0].IOleInPlaceSiteEx_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IOleClientSite_iface_lpVtbl0 = 1;
          This[_i0].IOleClientSite_iface.lpVtbl = (int *) malloc(_len_This__i0__IOleClientSite_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IOleClientSite_iface_lpVtbl0; _j0++) {
            This[_i0].IOleClientSite_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          DocHost_ClientSite_Init(This);
          free(This);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_This0 = 65025;
          struct TYPE_15__ * This = (struct TYPE_15__ *) malloc(_len_This0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__IServiceProvider_iface_lpVtbl0 = 1;
          This[_i0].IServiceProvider_iface.lpVtbl = (int *) malloc(_len_This__i0__IServiceProvider_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IServiceProvider_iface_lpVtbl0; _j0++) {
            This[_i0].IServiceProvider_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IDispatch_iface_lpVtbl0 = 1;
          This[_i0].IDispatch_iface.lpVtbl = (int *) malloc(_len_This__i0__IDispatch_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IDispatch_iface_lpVtbl0; _j0++) {
            This[_i0].IDispatch_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IOleControlSite_iface_lpVtbl0 = 1;
          This[_i0].IOleControlSite_iface.lpVtbl = (int *) malloc(_len_This__i0__IOleControlSite_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IOleControlSite_iface_lpVtbl0; _j0++) {
            This[_i0].IOleControlSite_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IOleDocumentSite_iface_lpVtbl0 = 1;
          This[_i0].IOleDocumentSite_iface.lpVtbl = (int *) malloc(_len_This__i0__IOleDocumentSite_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IOleDocumentSite_iface_lpVtbl0; _j0++) {
            This[_i0].IOleDocumentSite_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IOleInPlaceSiteEx_iface_lpVtbl0 = 1;
          This[_i0].IOleInPlaceSiteEx_iface.lpVtbl = (int *) malloc(_len_This__i0__IOleInPlaceSiteEx_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IOleInPlaceSiteEx_iface_lpVtbl0; _j0++) {
            This[_i0].IOleInPlaceSiteEx_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IOleClientSite_iface_lpVtbl0 = 1;
          This[_i0].IOleClientSite_iface.lpVtbl = (int *) malloc(_len_This__i0__IOleClientSite_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IOleClientSite_iface_lpVtbl0; _j0++) {
            This[_i0].IOleClientSite_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          DocHost_ClientSite_Init(This);
          free(This);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_This0 = 100;
          struct TYPE_15__ * This = (struct TYPE_15__ *) malloc(_len_This0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__IServiceProvider_iface_lpVtbl0 = 1;
          This[_i0].IServiceProvider_iface.lpVtbl = (int *) malloc(_len_This__i0__IServiceProvider_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IServiceProvider_iface_lpVtbl0; _j0++) {
            This[_i0].IServiceProvider_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IDispatch_iface_lpVtbl0 = 1;
          This[_i0].IDispatch_iface.lpVtbl = (int *) malloc(_len_This__i0__IDispatch_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IDispatch_iface_lpVtbl0; _j0++) {
            This[_i0].IDispatch_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IOleControlSite_iface_lpVtbl0 = 1;
          This[_i0].IOleControlSite_iface.lpVtbl = (int *) malloc(_len_This__i0__IOleControlSite_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IOleControlSite_iface_lpVtbl0; _j0++) {
            This[_i0].IOleControlSite_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IOleDocumentSite_iface_lpVtbl0 = 1;
          This[_i0].IOleDocumentSite_iface.lpVtbl = (int *) malloc(_len_This__i0__IOleDocumentSite_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IOleDocumentSite_iface_lpVtbl0; _j0++) {
            This[_i0].IOleDocumentSite_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IOleInPlaceSiteEx_iface_lpVtbl0 = 1;
          This[_i0].IOleInPlaceSiteEx_iface.lpVtbl = (int *) malloc(_len_This__i0__IOleInPlaceSiteEx_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IOleInPlaceSiteEx_iface_lpVtbl0; _j0++) {
            This[_i0].IOleInPlaceSiteEx_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IOleClientSite_iface_lpVtbl0 = 1;
          This[_i0].IOleClientSite_iface.lpVtbl = (int *) malloc(_len_This__i0__IOleClientSite_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IOleClientSite_iface_lpVtbl0; _j0++) {
            This[_i0].IOleClientSite_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          DocHost_ClientSite_Init(This);
          free(This);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
