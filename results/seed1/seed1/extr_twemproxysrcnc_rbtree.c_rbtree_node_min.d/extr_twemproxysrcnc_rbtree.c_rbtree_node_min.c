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

/* Type definitions */
struct rbnode {struct rbnode* left; } ;

/* Variables and functions */

__attribute__((used)) static struct rbnode *
rbtree_node_min(struct rbnode *node, struct rbnode *sentinel)
{
    /* traverse left links */

    while (node->left != sentinel) {
        node = node->left;
    }

    return node;
}


// ------------------------------------------------------------------------- //

struct rbnode *_allocate_node(int length, struct rbnode *aux_node[]) {
  struct rbnode *walker = (struct rbnode *)malloc(sizeof(struct rbnode));

  aux_node[0] = walker;
  walker->left = NULL;

  struct rbnode *head = walker;
  for(int i = 1; i < length; i++) {
    walker->left = (struct rbnode *)malloc(sizeof(struct rbnode));
    walker = walker->left;
    aux_node[i] = walker;
    walker->left = NULL;
  }

  return head;
}

void _delete_node(struct rbnode *aux_node[], int aux_node_size) {
  for(int i = 0; i < aux_node_size; i++) 
    if(aux_node[i])
      free(aux_node[i]);
}

struct rbnode *_allocate_sentinel(int length, struct rbnode *aux_sentinel[]) {
  struct rbnode *walker = (struct rbnode *)malloc(sizeof(struct rbnode));

  aux_sentinel[0] = walker;
  walker->left = NULL;

  struct rbnode *head = walker;
  for(int i = 1; i < length; i++) {
    walker->left = (struct rbnode *)malloc(sizeof(struct rbnode));
    walker = walker->left;
    aux_sentinel[i] = walker;
    walker->left = NULL;
  }

  return head;
}

void _delete_sentinel(struct rbnode *aux_sentinel[], int aux_sentinel_size) {
  for(int i = 0; i < aux_sentinel_size; i++) 
    if(aux_sentinel[i])
      free(aux_sentinel[i]);
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
          struct rbnode * aux_node[1];
          struct rbnode * node = _allocate_node(1, aux_node);
          struct rbnode * aux_sentinel[1];
          struct rbnode * sentinel = _allocate_sentinel(1, aux_sentinel);
          struct rbnode * benchRet = rbtree_node_min(node,sentinel);
          _delete_node(aux_node, 1);
          _delete_sentinel(aux_sentinel, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct rbnode * aux_node[10000];
          struct rbnode * node = _allocate_node(10000, aux_node);
          struct rbnode * aux_sentinel[10000];
          struct rbnode * sentinel = _allocate_sentinel(10000, aux_sentinel);
          struct rbnode * benchRet = rbtree_node_min(node,sentinel);
          _delete_node(aux_node, 10000);
          _delete_sentinel(aux_sentinel, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
