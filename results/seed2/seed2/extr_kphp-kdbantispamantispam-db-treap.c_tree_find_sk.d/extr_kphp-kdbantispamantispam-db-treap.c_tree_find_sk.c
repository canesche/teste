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
       4            dlinked\n\
       5            bintree\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  trie_node_t ;
struct TYPE_3__ {int x; int /*<<< orphan*/ * data; struct TYPE_3__* right; struct TYPE_3__* left; } ;
typedef  TYPE_1__ tree_t ;

/* Variables and functions */

trie_node_t *tree_find_sk (tree_t *V, int x) {
  while (V && V->x != x) {
    V = (V->x > x ? V->left : V->right);
  }
  return V ? V->data : 0;
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_V(int length, struct TYPE_3__ *aux_V[]) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_V[0] = walker;
walker->x = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_data0 = 1;
  walker->data = (int *) malloc(_len_walker_data0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_data0; _i0++) {
    walker->data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->right = NULL;
  walker->left = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->right = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->right;
    aux_V[i] = walker;
    walker->left = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->left;
    aux_V[i] = walker;
walker->x = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_data0 = 1;
  walker->data = (int *) malloc(_len_walker_data0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_data0; _i0++) {
    walker->data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
    walker->right = NULL;
    walker->left = NULL;
  }

  return head;
}

void _delete_V(struct TYPE_3__ *aux_V[], int aux_V_size) {
  for(int i = 0; i < aux_V_size; i++) 
    if(aux_V[i])
      free(aux_V[i]);
}

struct TYPE_3__ *_allocate_Dlinked_V(int length, struct TYPE_3__ *aux_dlinked_V[] ) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_dlinked_V[0] = walker;
  walker->x = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_data0 = 1;
  walker->data = (int *) malloc(_len_walker_data0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_data0; _i0++) {
    walker->data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->right = NULL;
  walker->left = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->left = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker->left->right = walker;
    walker = walker->left;
    aux_dlinked_V[i] = walker;
    if (i == (length - 1)) 
      walker->left = NULL;    walker->x = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_data0 = 1;
  walker->data = (int *) malloc(_len_walker_data0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_data0; _i0++) {
    walker->data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_Dlinked_V(struct TYPE_3__ *aux_dlinked_V[], int aux_dlinked_V_size) {
  for(int i = 0; i < aux_dlinked_V_size; i++) 
    if(aux_dlinked_V[i])
      free(aux_dlinked_V[i]);
}

struct TYPE_3__ *_allocateBinTree_V(int length, struct TYPE_3__ *aux_tree_V[], int *counter_V) {
  if(length == 0)
    return NULL;
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_tree_V[*counter_V] = walker;
  (*counter_V)++;
  walker->x = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_data0 = 1;
  walker->data = (int *) malloc(_len_walker_data0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_data0; _i0++) {
    walker->data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->right = _allocateBinTree_V(length - 1, aux_tree_V, counter_V);
  walker->left = _allocateBinTree_V(length - 1, aux_tree_V, counter_V);
  return walker;
}

void _deleteBinTree_V(struct TYPE_3__ *aux_tree_V[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_V[i])
      free(aux_tree_V[i]);
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
          int x = 100;
          struct TYPE_3__ * aux_V[1];
          struct TYPE_3__ * V = _allocate_V(1, aux_V);
          int * benchRet = tree_find_sk(V,x);
          printf("%d\n", (*benchRet)); 
          _delete_V(aux_V, 1);
        
        break;
    }
    // linked
    case 3:
    {
          int x = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_3__ * aux_V[10000];
          struct TYPE_3__ * V = _allocate_V(10000, aux_V);
          int * benchRet = tree_find_sk(V,x);
          printf("%d\n", (*benchRet)); 
          _delete_V(aux_V, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          int x = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_3__ * aux_dlinked_V[10000];
          struct TYPE_3__ * V = _allocate_Dlinked_V(10000, aux_dlinked_V);
          int * benchRet = tree_find_sk(V,x);
          printf("%d\n", (*benchRet)); 
          _delete_Dlinked_V(aux_dlinked_V, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int x = ((-2 * (next_i()%2)) + 1) * next_i();
          int counter_V= 0;
          struct TYPE_3__ *  aux_tree_V[1023];
          struct TYPE_3__ * V = _allocateBinTree_V(10, aux_tree_V, &counter_V);
          int * benchRet = tree_find_sk(V,x);
          printf("%d\n", (*benchRet)); 
          _deleteBinTree_V(aux_tree_V);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
