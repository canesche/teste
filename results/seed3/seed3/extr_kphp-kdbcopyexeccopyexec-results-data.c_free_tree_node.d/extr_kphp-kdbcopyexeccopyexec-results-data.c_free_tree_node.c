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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {struct TYPE_4__* left; struct TYPE_4__* right; } ;
typedef  TYPE_1__ tree_t ;

/* Variables and functions */
 TYPE_1__ free_tree_head ; 
 int /*<<< orphan*/  free_tree_nodes ; 

__attribute__((used)) static void free_tree_node (tree_t *T) {
  (T->right = free_tree_head.right)->left = T;
  free_tree_head.right = T;
  T->left = &free_tree_head;
  free_tree_nodes++;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_T(int length, struct TYPE_4__ *aux_T[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_T[0] = walker;
  walker->left = NULL;
  walker->right = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->left = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->left;
    aux_T[i] = walker;
    walker->right = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->right;
    aux_T[i] = walker;
    walker->left = NULL;
    walker->right = NULL;
  }

  return head;
}

void _delete_T(struct TYPE_4__ *aux_T[], int aux_T_size) {
  for(int i = 0; i < aux_T_size; i++) 
    if(aux_T[i])
      free(aux_T[i]);
}

struct TYPE_4__ *_allocate_Dlinked_T(int length, struct TYPE_4__ *aux_dlinked_T[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_T[0] = walker;
  walker->left = NULL;
  walker->right = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->right = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->right->left = walker;
    walker = walker->right;
    aux_dlinked_T[i] = walker;
    if (i == (length - 1)) 
      walker->right = NULL;  }

  return head;
}

void _delete_Dlinked_T(struct TYPE_4__ *aux_dlinked_T[], int aux_dlinked_T_size) {
  for(int i = 0; i < aux_dlinked_T_size; i++) 
    if(aux_dlinked_T[i])
      free(aux_dlinked_T[i]);
}

struct TYPE_4__ *_allocateBinTree_T(int length, struct TYPE_4__ *aux_tree_T[], int *counter_T) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_T[*counter_T] = walker;
  (*counter_T)++;
  walker->left = _allocateBinTree_T(length - 1, aux_tree_T, counter_T);
  walker->right = _allocateBinTree_T(length - 1, aux_tree_T, counter_T);
  return walker;
}

void _deleteBinTree_T(struct TYPE_4__ *aux_tree_T[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_T[i])
      free(aux_tree_T[i]);
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
          struct TYPE_4__ * aux_T[1];
          struct TYPE_4__ * T = _allocate_T(1, aux_T);
          free_tree_node(T);
          _delete_T(aux_T, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_4__ * aux_T[10000];
          struct TYPE_4__ * T = _allocate_T(10000, aux_T);
          free_tree_node(T);
          _delete_T(aux_T, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct TYPE_4__ * aux_dlinked_T[10000];
          struct TYPE_4__ * T = _allocate_Dlinked_T(10000, aux_dlinked_T);
          free_tree_node(T);
          _delete_Dlinked_T(aux_dlinked_T, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_T= 0;
          struct TYPE_4__ *  aux_tree_T[1023];
          struct TYPE_4__ * T = _allocateBinTree_T(10, aux_tree_T, &counter_T);
          free_tree_node(T);
          _deleteBinTree_T(aux_tree_T);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
