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
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {int /*<<< orphan*/ * lpVtbl; } ;
struct TYPE_8__ {int /*<<< orphan*/ * lpVtbl; } ;
struct TYPE_12__ {int /*<<< orphan*/ * lpVtbl; } ;
struct TYPE_11__ {int /*<<< orphan*/ * lpVtbl; } ;
struct TYPE_10__ {int /*<<< orphan*/ * lpVtbl; } ;
struct TYPE_13__ {int /*<<< orphan*/ * doc_host; int /*<<< orphan*/ * outer; TYPE_2__ IWebBrowserPriv2IE9_iface; TYPE_1__ ITargetFramePriv2_iface; TYPE_5__ ITargetFrame2_iface; TYPE_4__ ITargetFrame_iface; TYPE_3__ IHlinkFrame_iface; } ;
typedef  int /*<<< orphan*/  IUnknown ;
typedef  TYPE_6__ HlinkFrame ;
typedef  int /*<<< orphan*/  DocHost ;

/* Variables and functions */
 int /*<<< orphan*/  HlinkFrameVtbl ; 
 int /*<<< orphan*/  TargetFrame2Vtbl ; 
 int /*<<< orphan*/  TargetFramePriv2Vtbl ; 
 int /*<<< orphan*/  TargetFrameVtbl ; 
 int /*<<< orphan*/  WebBrowserPriv2IE9Vtbl ; 

void HlinkFrame_Init(HlinkFrame *This, IUnknown *outer, DocHost *doc_host)
{
    This->IHlinkFrame_iface.lpVtbl = &HlinkFrameVtbl;
    This->ITargetFrame_iface.lpVtbl = &TargetFrameVtbl;
    This->ITargetFrame2_iface.lpVtbl = &TargetFrame2Vtbl;
    This->ITargetFramePriv2_iface.lpVtbl = &TargetFramePriv2Vtbl;
    This->IWebBrowserPriv2IE9_iface.lpVtbl = &WebBrowserPriv2IE9Vtbl;

    This->outer = outer;
    This->doc_host = doc_host;
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
          struct TYPE_13__ * This = (struct TYPE_13__ *) malloc(_len_This0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__doc_host0 = 1;
          This[_i0].doc_host = (int *) malloc(_len_This__i0__doc_host0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__doc_host0; _j0++) {
            This[_i0].doc_host[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__outer0 = 1;
          This[_i0].outer = (int *) malloc(_len_This__i0__outer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__outer0; _j0++) {
            This[_i0].outer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IWebBrowserPriv2IE9_iface_lpVtbl0 = 1;
          This[_i0].IWebBrowserPriv2IE9_iface.lpVtbl = (int *) malloc(_len_This__i0__IWebBrowserPriv2IE9_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IWebBrowserPriv2IE9_iface_lpVtbl0; _j0++) {
            This[_i0].IWebBrowserPriv2IE9_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__ITargetFramePriv2_iface_lpVtbl0 = 1;
          This[_i0].ITargetFramePriv2_iface.lpVtbl = (int *) malloc(_len_This__i0__ITargetFramePriv2_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__ITargetFramePriv2_iface_lpVtbl0; _j0++) {
            This[_i0].ITargetFramePriv2_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__ITargetFrame2_iface_lpVtbl0 = 1;
          This[_i0].ITargetFrame2_iface.lpVtbl = (int *) malloc(_len_This__i0__ITargetFrame2_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__ITargetFrame2_iface_lpVtbl0; _j0++) {
            This[_i0].ITargetFrame2_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__ITargetFrame_iface_lpVtbl0 = 1;
          This[_i0].ITargetFrame_iface.lpVtbl = (int *) malloc(_len_This__i0__ITargetFrame_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__ITargetFrame_iface_lpVtbl0; _j0++) {
            This[_i0].ITargetFrame_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IHlinkFrame_iface_lpVtbl0 = 1;
          This[_i0].IHlinkFrame_iface.lpVtbl = (int *) malloc(_len_This__i0__IHlinkFrame_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IHlinkFrame_iface_lpVtbl0; _j0++) {
            This[_i0].IHlinkFrame_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_outer0 = 1;
          int * outer = (int *) malloc(_len_outer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_outer0; _i0++) {
            outer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_doc_host0 = 1;
          int * doc_host = (int *) malloc(_len_doc_host0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_doc_host0; _i0++) {
            doc_host[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          HlinkFrame_Init(This,outer,doc_host);
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].doc_host);
          }
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].outer);
          }
          free(This);
          free(outer);
          free(doc_host);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_This0 = 65025;
          struct TYPE_13__ * This = (struct TYPE_13__ *) malloc(_len_This0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__doc_host0 = 1;
          This[_i0].doc_host = (int *) malloc(_len_This__i0__doc_host0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__doc_host0; _j0++) {
            This[_i0].doc_host[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__outer0 = 1;
          This[_i0].outer = (int *) malloc(_len_This__i0__outer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__outer0; _j0++) {
            This[_i0].outer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IWebBrowserPriv2IE9_iface_lpVtbl0 = 1;
          This[_i0].IWebBrowserPriv2IE9_iface.lpVtbl = (int *) malloc(_len_This__i0__IWebBrowserPriv2IE9_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IWebBrowserPriv2IE9_iface_lpVtbl0; _j0++) {
            This[_i0].IWebBrowserPriv2IE9_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__ITargetFramePriv2_iface_lpVtbl0 = 1;
          This[_i0].ITargetFramePriv2_iface.lpVtbl = (int *) malloc(_len_This__i0__ITargetFramePriv2_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__ITargetFramePriv2_iface_lpVtbl0; _j0++) {
            This[_i0].ITargetFramePriv2_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__ITargetFrame2_iface_lpVtbl0 = 1;
          This[_i0].ITargetFrame2_iface.lpVtbl = (int *) malloc(_len_This__i0__ITargetFrame2_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__ITargetFrame2_iface_lpVtbl0; _j0++) {
            This[_i0].ITargetFrame2_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__ITargetFrame_iface_lpVtbl0 = 1;
          This[_i0].ITargetFrame_iface.lpVtbl = (int *) malloc(_len_This__i0__ITargetFrame_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__ITargetFrame_iface_lpVtbl0; _j0++) {
            This[_i0].ITargetFrame_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IHlinkFrame_iface_lpVtbl0 = 1;
          This[_i0].IHlinkFrame_iface.lpVtbl = (int *) malloc(_len_This__i0__IHlinkFrame_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IHlinkFrame_iface_lpVtbl0; _j0++) {
            This[_i0].IHlinkFrame_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_outer0 = 65025;
          int * outer = (int *) malloc(_len_outer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_outer0; _i0++) {
            outer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_doc_host0 = 65025;
          int * doc_host = (int *) malloc(_len_doc_host0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_doc_host0; _i0++) {
            doc_host[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          HlinkFrame_Init(This,outer,doc_host);
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].doc_host);
          }
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].outer);
          }
          free(This);
          free(outer);
          free(doc_host);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_This0 = 100;
          struct TYPE_13__ * This = (struct TYPE_13__ *) malloc(_len_This0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__doc_host0 = 1;
          This[_i0].doc_host = (int *) malloc(_len_This__i0__doc_host0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__doc_host0; _j0++) {
            This[_i0].doc_host[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__outer0 = 1;
          This[_i0].outer = (int *) malloc(_len_This__i0__outer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__outer0; _j0++) {
            This[_i0].outer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IWebBrowserPriv2IE9_iface_lpVtbl0 = 1;
          This[_i0].IWebBrowserPriv2IE9_iface.lpVtbl = (int *) malloc(_len_This__i0__IWebBrowserPriv2IE9_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IWebBrowserPriv2IE9_iface_lpVtbl0; _j0++) {
            This[_i0].IWebBrowserPriv2IE9_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__ITargetFramePriv2_iface_lpVtbl0 = 1;
          This[_i0].ITargetFramePriv2_iface.lpVtbl = (int *) malloc(_len_This__i0__ITargetFramePriv2_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__ITargetFramePriv2_iface_lpVtbl0; _j0++) {
            This[_i0].ITargetFramePriv2_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__ITargetFrame2_iface_lpVtbl0 = 1;
          This[_i0].ITargetFrame2_iface.lpVtbl = (int *) malloc(_len_This__i0__ITargetFrame2_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__ITargetFrame2_iface_lpVtbl0; _j0++) {
            This[_i0].ITargetFrame2_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__ITargetFrame_iface_lpVtbl0 = 1;
          This[_i0].ITargetFrame_iface.lpVtbl = (int *) malloc(_len_This__i0__ITargetFrame_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__ITargetFrame_iface_lpVtbl0; _j0++) {
            This[_i0].ITargetFrame_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__IHlinkFrame_iface_lpVtbl0 = 1;
          This[_i0].IHlinkFrame_iface.lpVtbl = (int *) malloc(_len_This__i0__IHlinkFrame_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_This__i0__IHlinkFrame_iface_lpVtbl0; _j0++) {
            This[_i0].IHlinkFrame_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_outer0 = 100;
          int * outer = (int *) malloc(_len_outer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_outer0; _i0++) {
            outer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_doc_host0 = 100;
          int * doc_host = (int *) malloc(_len_doc_host0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_doc_host0; _i0++) {
            doc_host[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          HlinkFrame_Init(This,outer,doc_host);
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].doc_host);
          }
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].outer);
          }
          free(This);
          free(outer);
          free(doc_host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
