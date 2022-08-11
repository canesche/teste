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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct tb_path {int path_length; TYPE_5__* hops; } ;
struct TYPE_10__ {TYPE_4__* out_port; TYPE_2__* in_port; } ;
struct TYPE_9__ {TYPE_3__* sw; } ;
struct TYPE_8__ {scalar_t__ is_unplugged; } ;
struct TYPE_7__ {TYPE_1__* sw; } ;
struct TYPE_6__ {scalar_t__ is_unplugged; } ;

/* Variables and functions */

bool tb_path_is_invalid(struct tb_path *path)
{
	int i = 0;
	for (i = 0; i < path->path_length; i++) {
		if (path->hops[i].in_port->sw->is_unplugged)
			return true;
		if (path->hops[i].out_port->sw->is_unplugged)
			return true;
	}
	return false;
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
          int _len_path0 = 1;
          struct tb_path * path = (struct tb_path *) malloc(_len_path0*sizeof(struct tb_path));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].path_length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__hops0 = 1;
          path[_i0].hops = (struct TYPE_10__ *) malloc(_len_path__i0__hops0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_path__i0__hops0; _j0++) {
              int _len_path__i0__hops_out_port0 = 1;
          path[_i0].hops->out_port = (struct TYPE_9__ *) malloc(_len_path__i0__hops_out_port0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_path__i0__hops_out_port0; _j0++) {
              int _len_path__i0__hops_out_port_sw0 = 1;
          path[_i0].hops->out_port->sw = (struct TYPE_8__ *) malloc(_len_path__i0__hops_out_port_sw0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_path__i0__hops_out_port_sw0; _j0++) {
            path[_i0].hops->out_port->sw->is_unplugged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_path__i0__hops_in_port0 = 1;
          path[_i0].hops->in_port = (struct TYPE_7__ *) malloc(_len_path__i0__hops_in_port0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_path__i0__hops_in_port0; _j0++) {
              int _len_path__i0__hops_in_port_sw0 = 1;
          path[_i0].hops->in_port->sw = (struct TYPE_6__ *) malloc(_len_path__i0__hops_in_port_sw0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_path__i0__hops_in_port_sw0; _j0++) {
            path[_i0].hops->in_port->sw->is_unplugged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = tb_path_is_invalid(path);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].hops);
          }
          free(path);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_path0 = 65025;
          struct tb_path * path = (struct tb_path *) malloc(_len_path0*sizeof(struct tb_path));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].path_length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__hops0 = 1;
          path[_i0].hops = (struct TYPE_10__ *) malloc(_len_path__i0__hops0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_path__i0__hops0; _j0++) {
              int _len_path__i0__hops_out_port0 = 1;
          path[_i0].hops->out_port = (struct TYPE_9__ *) malloc(_len_path__i0__hops_out_port0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_path__i0__hops_out_port0; _j0++) {
              int _len_path__i0__hops_out_port_sw0 = 1;
          path[_i0].hops->out_port->sw = (struct TYPE_8__ *) malloc(_len_path__i0__hops_out_port_sw0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_path__i0__hops_out_port_sw0; _j0++) {
            path[_i0].hops->out_port->sw->is_unplugged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_path__i0__hops_in_port0 = 1;
          path[_i0].hops->in_port = (struct TYPE_7__ *) malloc(_len_path__i0__hops_in_port0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_path__i0__hops_in_port0; _j0++) {
              int _len_path__i0__hops_in_port_sw0 = 1;
          path[_i0].hops->in_port->sw = (struct TYPE_6__ *) malloc(_len_path__i0__hops_in_port_sw0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_path__i0__hops_in_port_sw0; _j0++) {
            path[_i0].hops->in_port->sw->is_unplugged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = tb_path_is_invalid(path);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].hops);
          }
          free(path);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_path0 = 100;
          struct tb_path * path = (struct tb_path *) malloc(_len_path0*sizeof(struct tb_path));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].path_length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__hops0 = 1;
          path[_i0].hops = (struct TYPE_10__ *) malloc(_len_path__i0__hops0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_path__i0__hops0; _j0++) {
              int _len_path__i0__hops_out_port0 = 1;
          path[_i0].hops->out_port = (struct TYPE_9__ *) malloc(_len_path__i0__hops_out_port0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_path__i0__hops_out_port0; _j0++) {
              int _len_path__i0__hops_out_port_sw0 = 1;
          path[_i0].hops->out_port->sw = (struct TYPE_8__ *) malloc(_len_path__i0__hops_out_port_sw0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_path__i0__hops_out_port_sw0; _j0++) {
            path[_i0].hops->out_port->sw->is_unplugged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_path__i0__hops_in_port0 = 1;
          path[_i0].hops->in_port = (struct TYPE_7__ *) malloc(_len_path__i0__hops_in_port0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_path__i0__hops_in_port0; _j0++) {
              int _len_path__i0__hops_in_port_sw0 = 1;
          path[_i0].hops->in_port->sw = (struct TYPE_6__ *) malloc(_len_path__i0__hops_in_port_sw0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_path__i0__hops_in_port_sw0; _j0++) {
            path[_i0].hops->in_port->sw->is_unplugged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = tb_path_is_invalid(path);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].hops);
          }
          free(path);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
