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
struct ovl_layer {int dummy; } ;
struct ovl_entry {TYPE_1__* lowerstack; scalar_t__ numlower; } ;
struct dentry {struct ovl_entry* d_fsdata; } ;
struct TYPE_2__ {struct ovl_layer* layer; } ;

/* Variables and functions */

struct ovl_layer *ovl_layer_lower(struct dentry *dentry)
{
	struct ovl_entry *oe = dentry->d_fsdata;

	return oe->numlower ? oe->lowerstack[0].layer : NULL;
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
          int _len_dentry0 = 1;
          struct dentry * dentry = (struct dentry *) malloc(_len_dentry0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_dentry0; _i0++) {
              int _len_dentry__i0__d_fsdata0 = 1;
          dentry[_i0].d_fsdata = (struct ovl_entry *) malloc(_len_dentry__i0__d_fsdata0*sizeof(struct ovl_entry));
          for(int _j0 = 0; _j0 < _len_dentry__i0__d_fsdata0; _j0++) {
              int _len_dentry__i0__d_fsdata_lowerstack0 = 1;
          dentry[_i0].d_fsdata->lowerstack = (struct TYPE_2__ *) malloc(_len_dentry__i0__d_fsdata_lowerstack0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dentry__i0__d_fsdata_lowerstack0; _j0++) {
              int _len_dentry__i0__d_fsdata_lowerstack_layer0 = 1;
          dentry[_i0].d_fsdata->lowerstack->layer = (struct ovl_layer *) malloc(_len_dentry__i0__d_fsdata_lowerstack_layer0*sizeof(struct ovl_layer));
          for(int _j0 = 0; _j0 < _len_dentry__i0__d_fsdata_lowerstack_layer0; _j0++) {
            dentry[_i0].d_fsdata->lowerstack->layer->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        dentry[_i0].d_fsdata->numlower = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ovl_layer * benchRet = ovl_layer_lower(dentry);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dentry0; _aux++) {
          free(dentry[_aux].d_fsdata);
          }
          free(dentry);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dentry0 = 65025;
          struct dentry * dentry = (struct dentry *) malloc(_len_dentry0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_dentry0; _i0++) {
              int _len_dentry__i0__d_fsdata0 = 1;
          dentry[_i0].d_fsdata = (struct ovl_entry *) malloc(_len_dentry__i0__d_fsdata0*sizeof(struct ovl_entry));
          for(int _j0 = 0; _j0 < _len_dentry__i0__d_fsdata0; _j0++) {
              int _len_dentry__i0__d_fsdata_lowerstack0 = 1;
          dentry[_i0].d_fsdata->lowerstack = (struct TYPE_2__ *) malloc(_len_dentry__i0__d_fsdata_lowerstack0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dentry__i0__d_fsdata_lowerstack0; _j0++) {
              int _len_dentry__i0__d_fsdata_lowerstack_layer0 = 1;
          dentry[_i0].d_fsdata->lowerstack->layer = (struct ovl_layer *) malloc(_len_dentry__i0__d_fsdata_lowerstack_layer0*sizeof(struct ovl_layer));
          for(int _j0 = 0; _j0 < _len_dentry__i0__d_fsdata_lowerstack_layer0; _j0++) {
            dentry[_i0].d_fsdata->lowerstack->layer->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        dentry[_i0].d_fsdata->numlower = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ovl_layer * benchRet = ovl_layer_lower(dentry);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dentry0; _aux++) {
          free(dentry[_aux].d_fsdata);
          }
          free(dentry);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dentry0 = 100;
          struct dentry * dentry = (struct dentry *) malloc(_len_dentry0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_dentry0; _i0++) {
              int _len_dentry__i0__d_fsdata0 = 1;
          dentry[_i0].d_fsdata = (struct ovl_entry *) malloc(_len_dentry__i0__d_fsdata0*sizeof(struct ovl_entry));
          for(int _j0 = 0; _j0 < _len_dentry__i0__d_fsdata0; _j0++) {
              int _len_dentry__i0__d_fsdata_lowerstack0 = 1;
          dentry[_i0].d_fsdata->lowerstack = (struct TYPE_2__ *) malloc(_len_dentry__i0__d_fsdata_lowerstack0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dentry__i0__d_fsdata_lowerstack0; _j0++) {
              int _len_dentry__i0__d_fsdata_lowerstack_layer0 = 1;
          dentry[_i0].d_fsdata->lowerstack->layer = (struct ovl_layer *) malloc(_len_dentry__i0__d_fsdata_lowerstack_layer0*sizeof(struct ovl_layer));
          for(int _j0 = 0; _j0 < _len_dentry__i0__d_fsdata_lowerstack_layer0; _j0++) {
            dentry[_i0].d_fsdata->lowerstack->layer->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        dentry[_i0].d_fsdata->numlower = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ovl_layer * benchRet = ovl_layer_lower(dentry);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dentry0; _aux++) {
          free(dentry[_aux].d_fsdata);
          }
          free(dentry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
