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
typedef  struct TYPE_33__   TYPE_9__ ;
typedef  struct TYPE_32__   TYPE_8__ ;
typedef  struct TYPE_31__   TYPE_7__ ;
typedef  struct TYPE_30__   TYPE_6__ ;
typedef  struct TYPE_29__   TYPE_5__ ;
typedef  struct TYPE_28__   TYPE_4__ ;
typedef  struct TYPE_27__   TYPE_3__ ;
typedef  struct TYPE_26__   TYPE_2__ ;
typedef  struct TYPE_25__   TYPE_1__ ;
typedef  struct TYPE_24__   TYPE_16__ ;
typedef  struct TYPE_23__   TYPE_15__ ;
typedef  struct TYPE_22__   TYPE_14__ ;
typedef  struct TYPE_21__   TYPE_13__ ;
typedef  struct TYPE_20__   TYPE_12__ ;
typedef  struct TYPE_19__   TYPE_11__ ;
typedef  struct TYPE_18__   TYPE_10__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  VOID ;
struct TYPE_33__ {int left; int top; int right; int bottom; } ;
struct TYPE_32__ {int top; int right; int bottom; scalar_t__ left; } ;
struct TYPE_31__ {int left; int top; int right; int bottom; } ;
struct TYPE_30__ {int left; int top; int right; int bottom; } ;
struct TYPE_29__ {int left; int top; int right; int bottom; } ;
struct TYPE_28__ {int left; int top; int right; int bottom; } ;
struct TYPE_27__ {int left; int top; int right; int bottom; } ;
struct TYPE_26__ {int left; int top; int right; int bottom; } ;
struct TYPE_25__ {int left; int top; int right; int bottom; } ;
struct TYPE_23__ {int left; int right; int bottom; int top; } ;
struct TYPE_22__ {int left; int top; int right; int bottom; } ;
struct TYPE_21__ {int left; int top; int right; int bottom; } ;
struct TYPE_20__ {int left; int top; int right; int bottom; } ;
struct TYPE_19__ {int left; int top; int right; int bottom; } ;
struct TYPE_18__ {int left; int top; int right; int bottom; } ;
struct TYPE_24__ {int cxEdge; int cySizeFrame; int cyEdge; int cyCaption; int cyBorder; int cyMenu; TYPE_15__ rcDialogButton; TYPE_14__ rcDialogClient; TYPE_13__ rcDialogFrame; TYPE_12__ rcDialogCaption; TYPE_11__ rcDialogCaptionButtons; TYPE_10__ rcDesktop; TYPE_9__ rcActiveClient; TYPE_8__ rcActiveScroll; scalar_t__ cxScrollbar; TYPE_7__ rcActiveFrame; TYPE_6__ rcActiveMenuBar; TYPE_5__ rcActiveCaption; TYPE_4__ rcActiveCaptionButtons; TYPE_3__ rcInactiveCaption; TYPE_2__ rcInactiveFrame; TYPE_1__ rcInactiveCaptionButtons; } ;
typedef  TYPE_16__* PPREVIEW_DATA ;

/* Variables and functions */

__attribute__((used)) static VOID
CalculateItemSize(PPREVIEW_DATA pPreviewData)
{
    int width, height;

    /* Calculate the inactive window rectangle */
    pPreviewData->rcInactiveFrame.left = pPreviewData->rcDesktop.left + 8;
    pPreviewData->rcInactiveFrame.top = pPreviewData->rcDesktop.top + 8;
    pPreviewData->rcInactiveFrame.right = pPreviewData->rcDesktop.right - 25;
    pPreviewData->rcInactiveFrame.bottom = pPreviewData->rcDesktop.bottom - 30;

    /* Calculate the inactive caption rectangle */
    pPreviewData->rcInactiveCaption.left = pPreviewData->rcInactiveFrame.left + pPreviewData->cxEdge + pPreviewData->cySizeFrame + 1;
    pPreviewData->rcInactiveCaption.top = pPreviewData->rcInactiveFrame.top + pPreviewData->cyEdge + pPreviewData->cySizeFrame + 1;
    pPreviewData->rcInactiveCaption.right = pPreviewData->rcInactiveFrame.right - pPreviewData->cxEdge - pPreviewData->cySizeFrame - 1;
    pPreviewData->rcInactiveCaption.bottom = pPreviewData->rcInactiveCaption.top + pPreviewData->cyCaption - pPreviewData->cyBorder;

    /* Calculate the inactive caption buttons rectangle */
    pPreviewData->rcInactiveCaptionButtons.left = pPreviewData->rcInactiveCaption.right - 2 - 2 - 3 * 16;
    pPreviewData->rcInactiveCaptionButtons.top = pPreviewData->rcInactiveCaption.top + 2;
    pPreviewData->rcInactiveCaptionButtons.right = pPreviewData->rcInactiveCaption.right - 2;
    pPreviewData->rcInactiveCaptionButtons.bottom = pPreviewData->rcInactiveCaption.bottom - 2;

    /* Calculate the active window rectangle */
    pPreviewData->rcActiveFrame.left = pPreviewData->rcInactiveFrame.left + 3 + pPreviewData->cySizeFrame;
    pPreviewData->rcActiveFrame.top = pPreviewData->rcInactiveCaption.bottom + 1;
    pPreviewData->rcActiveFrame.right = pPreviewData->rcDesktop.right - 10;
    pPreviewData->rcActiveFrame.bottom = pPreviewData->rcDesktop.bottom - 25;

    /* Calculate the active caption rectangle */
    pPreviewData->rcActiveCaption.left = pPreviewData->rcActiveFrame.left + pPreviewData->cxEdge + pPreviewData->cySizeFrame + 1;
    pPreviewData->rcActiveCaption.top = pPreviewData->rcActiveFrame.top + pPreviewData->cxEdge + pPreviewData->cySizeFrame + 1;
    pPreviewData->rcActiveCaption.right = pPreviewData->rcActiveFrame.right - pPreviewData->cxEdge - pPreviewData->cySizeFrame - 1;
    pPreviewData->rcActiveCaption.bottom = pPreviewData->rcActiveCaption.top + pPreviewData->cyCaption - pPreviewData->cyBorder;

    /* Calculate the active caption buttons rectangle */
    pPreviewData->rcActiveCaptionButtons.left = pPreviewData->rcActiveCaption.right - 2 - 2 - 3 * 16;
    pPreviewData->rcActiveCaptionButtons.top = pPreviewData->rcActiveCaption.top + 2;
    pPreviewData->rcActiveCaptionButtons.right = pPreviewData->rcActiveCaption.right - 2;
    pPreviewData->rcActiveCaptionButtons.bottom = pPreviewData->rcActiveCaption.bottom - 2;

    /* Calculate the active menu bar rectangle */
    pPreviewData->rcActiveMenuBar.left = pPreviewData->rcActiveFrame.left + pPreviewData->cxEdge + pPreviewData->cySizeFrame + 1;
    pPreviewData->rcActiveMenuBar.top = pPreviewData->rcActiveCaption.bottom + 1;
    pPreviewData->rcActiveMenuBar.right = pPreviewData->rcActiveFrame.right - pPreviewData->cxEdge - pPreviewData->cySizeFrame - 1;
    pPreviewData->rcActiveMenuBar.bottom = pPreviewData->rcActiveMenuBar.top + pPreviewData->cyMenu + 1;

    /* Calculate the active client rectangle */
    pPreviewData->rcActiveClient.left = pPreviewData->rcActiveFrame.left + pPreviewData->cxEdge + pPreviewData->cySizeFrame + 1;
    pPreviewData->rcActiveClient.top = pPreviewData->rcActiveMenuBar.bottom;
    pPreviewData->rcActiveClient.right = pPreviewData->rcActiveFrame.right - pPreviewData->cxEdge - pPreviewData->cySizeFrame - 1;
    pPreviewData->rcActiveClient.bottom = pPreviewData->rcActiveFrame.bottom - pPreviewData->cyEdge - pPreviewData->cySizeFrame - 1;

    /* Calculate the active scroll rectangle */
    pPreviewData->rcActiveScroll.left = pPreviewData->rcActiveClient.right - 2 - pPreviewData->cxScrollbar;
    pPreviewData->rcActiveScroll.top = pPreviewData->rcActiveClient.top + 2;
    pPreviewData->rcActiveScroll.right = pPreviewData->rcActiveClient.right - 2;
    pPreviewData->rcActiveScroll.bottom = pPreviewData->rcActiveClient.bottom - 2;


    /* Dialog window */
    pPreviewData->rcDialogFrame.left = pPreviewData->rcActiveClient.left + 4;
    pPreviewData->rcDialogFrame.top = (pPreviewData->rcDesktop.bottom * 60) / 100;
    pPreviewData->rcDialogFrame.right = (pPreviewData->rcDesktop.right * 65) / 100;
    pPreviewData->rcDialogFrame.bottom = pPreviewData->rcDesktop.bottom - 5;

    /* Calculate the dialog caption rectangle */
    pPreviewData->rcDialogCaption.left = pPreviewData->rcDialogFrame.left + 3;
    pPreviewData->rcDialogCaption.top = pPreviewData->rcDialogFrame.top + 3;
    pPreviewData->rcDialogCaption.right = pPreviewData->rcDialogFrame.right - 3;
    pPreviewData->rcDialogCaption.bottom = pPreviewData->rcDialogFrame.top + pPreviewData->cyCaption + 1 + 1;

    /* Calculate the inactive caption buttons rectangle */
    pPreviewData->rcDialogCaptionButtons.left = pPreviewData->rcDialogCaption.right - 2 - 16;
    pPreviewData->rcDialogCaptionButtons.top = pPreviewData->rcDialogCaption.top + 2;
    pPreviewData->rcDialogCaptionButtons.right = pPreviewData->rcDialogCaption.right - 2;
    pPreviewData->rcDialogCaptionButtons.bottom = pPreviewData->rcDialogCaption.bottom - 2;

    /* Calculate the dialog client rectangle */
    pPreviewData->rcDialogClient.left = pPreviewData->rcDialogFrame.left + 3;
    pPreviewData->rcDialogClient.top = pPreviewData->rcDialogCaption.bottom + 1;
    pPreviewData->rcDialogClient.right = pPreviewData->rcDialogFrame.right - 3;
    pPreviewData->rcDialogClient.bottom = pPreviewData->rcDialogFrame.bottom - 3;

    /* Calculate the dialog button rectangle */
    width = 80;
    height = 28;

    pPreviewData->rcDialogButton.left =
        (pPreviewData->rcDialogClient.right + pPreviewData->rcDialogClient.left - width) / 2;
    pPreviewData->rcDialogButton.right = pPreviewData->rcDialogButton.left + width;
    pPreviewData->rcDialogButton.bottom = pPreviewData->rcDialogClient.bottom - 2;
    pPreviewData->rcDialogButton.top = pPreviewData->rcDialogButton.bottom - height;
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
          int _len_pPreviewData0 = 1;
          struct TYPE_24__ * pPreviewData = (struct TYPE_24__ *) malloc(_len_pPreviewData0*sizeof(struct TYPE_24__));
          for(int _i0 = 0; _i0 < _len_pPreviewData0; _i0++) {
            pPreviewData[_i0].cxEdge = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cySizeFrame = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cyEdge = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cyCaption = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cyBorder = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cyMenu = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogButton.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogButton.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogButton.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogButton.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogClient.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogClient.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogClient.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogClient.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogFrame.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogFrame.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogFrame.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogFrame.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaption.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaption.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaption.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaption.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaptionButtons.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaptionButtons.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaptionButtons.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaptionButtons.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDesktop.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDesktop.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDesktop.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDesktop.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveClient.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveClient.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveClient.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveClient.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveScroll.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveScroll.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveScroll.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveScroll.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cxScrollbar = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveFrame.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveFrame.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveFrame.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveFrame.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveMenuBar.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveMenuBar.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveMenuBar.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveMenuBar.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaption.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaption.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaption.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaption.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaptionButtons.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaptionButtons.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaptionButtons.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaptionButtons.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaption.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaption.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaption.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaption.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveFrame.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveFrame.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveFrame.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveFrame.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaptionButtons.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaptionButtons.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaptionButtons.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaptionButtons.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = CalculateItemSize(pPreviewData);
          printf("%d\n", benchRet); 
          free(pPreviewData);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pPreviewData0 = 65025;
          struct TYPE_24__ * pPreviewData = (struct TYPE_24__ *) malloc(_len_pPreviewData0*sizeof(struct TYPE_24__));
          for(int _i0 = 0; _i0 < _len_pPreviewData0; _i0++) {
            pPreviewData[_i0].cxEdge = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cySizeFrame = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cyEdge = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cyCaption = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cyBorder = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cyMenu = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogButton.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogButton.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogButton.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogButton.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogClient.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogClient.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogClient.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogClient.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogFrame.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogFrame.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogFrame.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogFrame.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaption.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaption.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaption.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaption.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaptionButtons.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaptionButtons.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaptionButtons.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaptionButtons.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDesktop.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDesktop.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDesktop.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDesktop.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveClient.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveClient.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveClient.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveClient.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveScroll.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveScroll.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveScroll.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveScroll.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cxScrollbar = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveFrame.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveFrame.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveFrame.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveFrame.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveMenuBar.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveMenuBar.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveMenuBar.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveMenuBar.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaption.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaption.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaption.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaption.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaptionButtons.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaptionButtons.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaptionButtons.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaptionButtons.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaption.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaption.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaption.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaption.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveFrame.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveFrame.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveFrame.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveFrame.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaptionButtons.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaptionButtons.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaptionButtons.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaptionButtons.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = CalculateItemSize(pPreviewData);
          printf("%d\n", benchRet); 
          free(pPreviewData);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pPreviewData0 = 100;
          struct TYPE_24__ * pPreviewData = (struct TYPE_24__ *) malloc(_len_pPreviewData0*sizeof(struct TYPE_24__));
          for(int _i0 = 0; _i0 < _len_pPreviewData0; _i0++) {
            pPreviewData[_i0].cxEdge = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cySizeFrame = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cyEdge = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cyCaption = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cyBorder = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cyMenu = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogButton.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogButton.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogButton.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogButton.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogClient.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogClient.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogClient.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogClient.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogFrame.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogFrame.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogFrame.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogFrame.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaption.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaption.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaption.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaption.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaptionButtons.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaptionButtons.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaptionButtons.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDialogCaptionButtons.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDesktop.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDesktop.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDesktop.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcDesktop.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveClient.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveClient.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveClient.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveClient.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveScroll.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveScroll.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveScroll.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveScroll.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].cxScrollbar = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveFrame.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveFrame.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveFrame.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveFrame.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveMenuBar.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveMenuBar.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveMenuBar.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveMenuBar.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaption.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaption.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaption.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaption.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaptionButtons.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaptionButtons.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaptionButtons.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcActiveCaptionButtons.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaption.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaption.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaption.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaption.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveFrame.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveFrame.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveFrame.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveFrame.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaptionButtons.left = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaptionButtons.top = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaptionButtons.right = ((-2 * (next_i()%2)) + 1) * next_i();
        pPreviewData[_i0].rcInactiveCaptionButtons.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = CalculateItemSize(pPreviewData);
          printf("%d\n", benchRet); 
          free(pPreviewData);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
