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
       3            linked\n\
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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {struct TYPE_4__* shortcut; } ;
typedef  TYPE_1__ ccv_mser_node_t ;

/* Variables and functions */

__attribute__((used)) static ccv_mser_node_t* _ccv_mser_find_root(ccv_mser_node_t* node)
{
	ccv_mser_node_t* prev = node;
	ccv_mser_node_t* root;
	for (;;)
	{
		root = node->shortcut;
		// use the shortcut as a temporary variable to record previous node,
		// we will update it again shortly with the real shortcut to root
		node->shortcut = prev;
		if (root == node)
			break;
		prev = node;
		node = root;
	}
	for (;;)
	{
		prev = node->shortcut;
		node->shortcut = root;
		if (prev == node)
			break;
		node = prev;
	}
	return root;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_node(int length, struct TYPE_4__ *aux_node[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_node[0] = walker;
  walker->shortcut = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->shortcut = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->shortcut;
    aux_node[i] = walker;
    walker->shortcut = NULL;
  }

  return head;
}

void _delete_node(struct TYPE_4__ *aux_node[], int aux_node_size) {
  for(int i = 0; i < aux_node_size; i++) 
    if(aux_node[i])
      free(aux_node[i]);
}

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
          struct TYPE_4__ * aux_node[1];
          struct TYPE_4__ * node = _allocate_node(1, aux_node);
          struct TYPE_4__ * benchRet = _ccv_mser_find_root(node);
          _delete_node(aux_node, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_4__ * aux_node[10000];
          struct TYPE_4__ * node = _allocate_node(10000, aux_node);
          struct TYPE_4__ * benchRet = _ccv_mser_find_root(node);
          _delete_node(aux_node, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
