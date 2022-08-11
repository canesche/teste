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
struct saxlexicalhandler {int ref; int /*<<< orphan*/  qi_hr; TYPE_1__ ISAXLexicalHandler_iface; } ;
typedef  int /*<<< orphan*/  HRESULT ;

/* Variables and functions */
 int /*<<< orphan*/  SAXLexicalHandlerVtbl ; 

__attribute__((used)) static void init_saxlexicalhandler(struct saxlexicalhandler *handler, HRESULT hr)
{
    handler->ISAXLexicalHandler_iface.lpVtbl = &SAXLexicalHandlerVtbl;
    handler->ref = 1;
    handler->qi_hr = hr;
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
          int hr = 100;
          int _len_handler0 = 1;
          struct saxlexicalhandler * handler = (struct saxlexicalhandler *) malloc(_len_handler0*sizeof(struct saxlexicalhandler));
          for(int _i0 = 0; _i0 < _len_handler0; _i0++) {
            handler[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
        handler[_i0].qi_hr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_handler__i0__ISAXLexicalHandler_iface_lpVtbl0 = 1;
          handler[_i0].ISAXLexicalHandler_iface.lpVtbl = (int *) malloc(_len_handler__i0__ISAXLexicalHandler_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_handler__i0__ISAXLexicalHandler_iface_lpVtbl0; _j0++) {
            handler[_i0].ISAXLexicalHandler_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_saxlexicalhandler(handler,hr);
          free(handler);
        
        break;
    }
    // big-arr
    case 1:
    {
          int hr = 255;
          int _len_handler0 = 65025;
          struct saxlexicalhandler * handler = (struct saxlexicalhandler *) malloc(_len_handler0*sizeof(struct saxlexicalhandler));
          for(int _i0 = 0; _i0 < _len_handler0; _i0++) {
            handler[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
        handler[_i0].qi_hr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_handler__i0__ISAXLexicalHandler_iface_lpVtbl0 = 1;
          handler[_i0].ISAXLexicalHandler_iface.lpVtbl = (int *) malloc(_len_handler__i0__ISAXLexicalHandler_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_handler__i0__ISAXLexicalHandler_iface_lpVtbl0; _j0++) {
            handler[_i0].ISAXLexicalHandler_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_saxlexicalhandler(handler,hr);
          free(handler);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hr = 10;
          int _len_handler0 = 100;
          struct saxlexicalhandler * handler = (struct saxlexicalhandler *) malloc(_len_handler0*sizeof(struct saxlexicalhandler));
          for(int _i0 = 0; _i0 < _len_handler0; _i0++) {
            handler[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
        handler[_i0].qi_hr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_handler__i0__ISAXLexicalHandler_iface_lpVtbl0 = 1;
          handler[_i0].ISAXLexicalHandler_iface.lpVtbl = (int *) malloc(_len_handler__i0__ISAXLexicalHandler_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_handler__i0__ISAXLexicalHandler_iface_lpVtbl0; _j0++) {
            handler[_i0].ISAXLexicalHandler_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_saxlexicalhandler(handler,hr);
          free(handler);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
