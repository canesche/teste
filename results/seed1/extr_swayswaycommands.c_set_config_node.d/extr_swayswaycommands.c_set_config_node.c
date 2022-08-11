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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct sway_node {int type; int /*<<< orphan*/ * sway_workspace; TYPE_1__* sway_container; } ;
struct TYPE_5__ {int /*<<< orphan*/ * workspace; TYPE_1__* container; struct sway_node* node; } ;
struct TYPE_6__ {TYPE_2__ handler_context; } ;
struct TYPE_4__ {int /*<<< orphan*/ * workspace; } ;

/* Variables and functions */
#define  N_CONTAINER 131 
#define  N_OUTPUT 130 
#define  N_ROOT 129 
#define  N_WORKSPACE 128 
 TYPE_3__* config ; 

__attribute__((used)) static void set_config_node(struct sway_node *node) {
	config->handler_context.node = node;
	config->handler_context.container = NULL;
	config->handler_context.workspace = NULL;

	if (node == NULL) {
		return;
	}

	switch (node->type) {
	case N_CONTAINER:
		config->handler_context.container = node->sway_container;
		config->handler_context.workspace = node->sway_container->workspace;
		break;
	case N_WORKSPACE:
		config->handler_context.workspace = node->sway_workspace;
		break;
	case N_ROOT:
	case N_OUTPUT:
		break;
	}
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
          int _len_node0 = 1;
          struct sway_node * node = (struct sway_node *) malloc(_len_node0*sizeof(struct sway_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_node__i0__sway_workspace0 = 1;
          node[_i0].sway_workspace = (int *) malloc(_len_node__i0__sway_workspace0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_node__i0__sway_workspace0; _j0++) {
            node[_i0].sway_workspace[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node__i0__sway_container0 = 1;
          node[_i0].sway_container = (struct TYPE_4__ *) malloc(_len_node__i0__sway_container0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_node__i0__sway_container0; _j0++) {
              int _len_node__i0__sway_container_workspace0 = 1;
          node[_i0].sway_container->workspace = (int *) malloc(_len_node__i0__sway_container_workspace0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_node__i0__sway_container_workspace0; _j0++) {
            node[_i0].sway_container->workspace[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          set_config_node(node);
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].sway_workspace);
          }
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].sway_container);
          }
          free(node);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_node0 = 65025;
          struct sway_node * node = (struct sway_node *) malloc(_len_node0*sizeof(struct sway_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_node__i0__sway_workspace0 = 1;
          node[_i0].sway_workspace = (int *) malloc(_len_node__i0__sway_workspace0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_node__i0__sway_workspace0; _j0++) {
            node[_i0].sway_workspace[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node__i0__sway_container0 = 1;
          node[_i0].sway_container = (struct TYPE_4__ *) malloc(_len_node__i0__sway_container0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_node__i0__sway_container0; _j0++) {
              int _len_node__i0__sway_container_workspace0 = 1;
          node[_i0].sway_container->workspace = (int *) malloc(_len_node__i0__sway_container_workspace0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_node__i0__sway_container_workspace0; _j0++) {
            node[_i0].sway_container->workspace[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          set_config_node(node);
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].sway_workspace);
          }
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].sway_container);
          }
          free(node);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_node0 = 100;
          struct sway_node * node = (struct sway_node *) malloc(_len_node0*sizeof(struct sway_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_node__i0__sway_workspace0 = 1;
          node[_i0].sway_workspace = (int *) malloc(_len_node__i0__sway_workspace0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_node__i0__sway_workspace0; _j0++) {
            node[_i0].sway_workspace[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node__i0__sway_container0 = 1;
          node[_i0].sway_container = (struct TYPE_4__ *) malloc(_len_node__i0__sway_container0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_node__i0__sway_container0; _j0++) {
              int _len_node__i0__sway_container_workspace0 = 1;
          node[_i0].sway_container->workspace = (int *) malloc(_len_node__i0__sway_container_workspace0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_node__i0__sway_container_workspace0; _j0++) {
            node[_i0].sway_container->workspace[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          set_config_node(node);
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].sway_workspace);
          }
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].sway_container);
          }
          free(node);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
