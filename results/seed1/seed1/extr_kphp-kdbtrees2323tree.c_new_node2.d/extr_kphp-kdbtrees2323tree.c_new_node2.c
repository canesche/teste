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
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int x1; int x2; struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef  TYPE_1__ tree23_t ;

/* Variables and functions */
 int /*<<< orphan*/ * nodes ; 
 int /*<<< orphan*/  np ; 

__attribute__((used)) static tree23_t *new_node2 (int x, tree23_t *l, tree23_t *r) {
  //printf ("new_node: np = %d\n", np);
  tree23_t *ret = (tree23_t *)&nodes[np++];
  ret->x1 = x;
  ret->x2 = x | 1;
  ret->left = l;
  ret->right = r;
  //printf ("new_node exit: np = %d\n", np);
  return ret;
}


// ------------------------------------------------------------------------- //

struct TYPE_5__ *_allocate_l(int length, struct TYPE_5__ *aux_l[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_l[0] = walker;
walker->x1 = ((-2 * (next_i()%2)) + 1) * next_i();
walker->x2 = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->right = NULL;
  walker->left = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->right = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->right;
    aux_l[i] = walker;
    walker->left = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->left;
    aux_l[i] = walker;
walker->x1 = ((-2 * (next_i()%2)) + 1) * next_i();
walker->x2 = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->right = NULL;
    walker->left = NULL;
  }

  return head;
}

void _delete_l(struct TYPE_5__ *aux_l[], int aux_l_size) {
  for(int i = 0; i < aux_l_size; i++) 
    if(aux_l[i])
      free(aux_l[i]);
}

struct TYPE_5__ *_allocate_r(int length, struct TYPE_5__ *aux_r[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_r[0] = walker;
walker->x1 = ((-2 * (next_i()%2)) + 1) * next_i();
walker->x2 = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->right = NULL;
  walker->left = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->right = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->right;
    aux_r[i] = walker;
    walker->left = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->left;
    aux_r[i] = walker;
walker->x1 = ((-2 * (next_i()%2)) + 1) * next_i();
walker->x2 = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->right = NULL;
    walker->left = NULL;
  }

  return head;
}

void _delete_r(struct TYPE_5__ *aux_r[], int aux_r_size) {
  for(int i = 0; i < aux_r_size; i++) 
    if(aux_r[i])
      free(aux_r[i]);
}

struct TYPE_5__ *_allocate_Dlinked_l(int length, struct TYPE_5__ *aux_dlinked_l[] ) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_dlinked_l[0] = walker;
  walker->x1 = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->x2 = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->right = NULL;
  walker->left = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->left = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker->left->right = walker;
    walker = walker->left;
    aux_dlinked_l[i] = walker;
    if (i == (length - 1)) 
      walker->left = NULL;    walker->x1 = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->x2 = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  return head;
}

void _delete_Dlinked_l(struct TYPE_5__ *aux_dlinked_l[], int aux_dlinked_l_size) {
  for(int i = 0; i < aux_dlinked_l_size; i++) 
    if(aux_dlinked_l[i])
      free(aux_dlinked_l[i]);
}

struct TYPE_5__ *_allocate_Dlinked_r(int length, struct TYPE_5__ *aux_dlinked_r[] ) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_dlinked_r[0] = walker;
  walker->x1 = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->x2 = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->right = NULL;
  walker->left = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->left = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker->left->right = walker;
    walker = walker->left;
    aux_dlinked_r[i] = walker;
    if (i == (length - 1)) 
      walker->left = NULL;    walker->x1 = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->x2 = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  return head;
}

void _delete_Dlinked_r(struct TYPE_5__ *aux_dlinked_r[], int aux_dlinked_r_size) {
  for(int i = 0; i < aux_dlinked_r_size; i++) 
    if(aux_dlinked_r[i])
      free(aux_dlinked_r[i]);
}

struct TYPE_5__ *_allocateBinTree_l(int length, struct TYPE_5__ *aux_tree_l[], int *counter_l) {
  if(length == 0)
    return NULL;
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_tree_l[*counter_l] = walker;
  (*counter_l)++;
  walker->x1 = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->x2 = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->right = _allocateBinTree_l(length - 1, aux_tree_l, counter_l);
  walker->left = _allocateBinTree_l(length - 1, aux_tree_l, counter_l);
  return walker;
}

void _deleteBinTree_l(struct TYPE_5__ *aux_tree_l[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_l[i])
      free(aux_tree_l[i]);
}

struct TYPE_5__ *_allocateBinTree_r(int length, struct TYPE_5__ *aux_tree_r[], int *counter_r) {
  if(length == 0)
    return NULL;
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_tree_r[*counter_r] = walker;
  (*counter_r)++;
  walker->x1 = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->x2 = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->right = _allocateBinTree_r(length - 1, aux_tree_r, counter_r);
  walker->left = _allocateBinTree_r(length - 1, aux_tree_r, counter_r);
  return walker;
}

void _deleteBinTree_r(struct TYPE_5__ *aux_tree_r[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_r[i])
      free(aux_tree_r[i]);
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
          struct TYPE_5__ * aux_l[1];
          struct TYPE_5__ * l = _allocate_l(1, aux_l);
          struct TYPE_5__ * aux_r[1];
          struct TYPE_5__ * r = _allocate_r(1, aux_r);
          struct TYPE_5__ * benchRet = new_node2(x,l,r);
          printf("%d\n", (*benchRet).x1);
          printf("%d\n", (*benchRet).x2);
          _delete_l(aux_l, 1);
          _delete_r(aux_r, 1);
        
        break;
    }
    // linked
    case 3:
    {
          int x = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_5__ * aux_l[10000];
          struct TYPE_5__ * l = _allocate_l(10000, aux_l);
          struct TYPE_5__ * aux_r[10000];
          struct TYPE_5__ * r = _allocate_r(10000, aux_r);
          struct TYPE_5__ * benchRet = new_node2(x,l,r);
          printf("%d\n", (*benchRet).x1);
          printf("%d\n", (*benchRet).x2);
          _delete_l(aux_l, 10000);
          _delete_r(aux_r, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          int x = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_5__ * aux_dlinked_l[10000];
          struct TYPE_5__ * l = _allocate_Dlinked_l(10000, aux_dlinked_l);
          struct TYPE_5__ * aux_dlinked_r[10000];
          struct TYPE_5__ * r = _allocate_Dlinked_r(10000, aux_dlinked_r);
          struct TYPE_5__ * benchRet = new_node2(x,l,r);
          printf("%d\n", (*benchRet).x1);
          printf("%d\n", (*benchRet).x2);
          _delete_Dlinked_l(aux_dlinked_l, 10000);
          _delete_Dlinked_r(aux_dlinked_r, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int x = ((-2 * (next_i()%2)) + 1) * next_i();
          int counter_l= 0;
          struct TYPE_5__ *  aux_tree_l[1023];
          struct TYPE_5__ * l = _allocateBinTree_l(10, aux_tree_l, &counter_l);
          int counter_r= 0;
          struct TYPE_5__ *  aux_tree_r[1023];
          struct TYPE_5__ * r = _allocateBinTree_r(10, aux_tree_r, &counter_r);
          struct TYPE_5__ * benchRet = new_node2(x,l,r);
          printf("%d\n", (*benchRet).x1);
          printf("%d\n", (*benchRet).x2);
          _deleteBinTree_l(aux_tree_l);
          _deleteBinTree_r(aux_tree_r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
