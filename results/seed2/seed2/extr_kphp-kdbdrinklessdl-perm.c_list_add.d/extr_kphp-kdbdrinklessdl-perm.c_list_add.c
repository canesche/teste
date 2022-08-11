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
struct TYPE_4__ {struct TYPE_4__* l; struct TYPE_4__* r; } ;
typedef  TYPE_1__ perm_list ;

/* Variables and functions */

void list_add (perm_list *a, perm_list *y) {
  perm_list *b = a->r;
  a->r = y;
  y->l = a;
  y->r = b;
  b->l = y;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_a(int length, struct TYPE_4__ *aux_a[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_a[0] = walker;
  walker->l = NULL;
  walker->r = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->l = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->l;
    aux_a[i] = walker;
    walker->r = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->r;
    aux_a[i] = walker;
    walker->l = NULL;
    walker->r = NULL;
  }

  return head;
}

void _delete_a(struct TYPE_4__ *aux_a[], int aux_a_size) {
  for(int i = 0; i < aux_a_size; i++) 
    if(aux_a[i])
      free(aux_a[i]);
}

struct TYPE_4__ *_allocate_y(int length, struct TYPE_4__ *aux_y[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_y[0] = walker;
  walker->l = NULL;
  walker->r = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->l = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->l;
    aux_y[i] = walker;
    walker->r = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->r;
    aux_y[i] = walker;
    walker->l = NULL;
    walker->r = NULL;
  }

  return head;
}

void _delete_y(struct TYPE_4__ *aux_y[], int aux_y_size) {
  for(int i = 0; i < aux_y_size; i++) 
    if(aux_y[i])
      free(aux_y[i]);
}

struct TYPE_4__ *_allocate_Dlinked_a(int length, struct TYPE_4__ *aux_dlinked_a[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_a[0] = walker;
  walker->l = NULL;
  walker->r = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->r = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->r->l = walker;
    walker = walker->r;
    aux_dlinked_a[i] = walker;
    if (i == (length - 1)) 
      walker->r = NULL;  }

  return head;
}

void _delete_Dlinked_a(struct TYPE_4__ *aux_dlinked_a[], int aux_dlinked_a_size) {
  for(int i = 0; i < aux_dlinked_a_size; i++) 
    if(aux_dlinked_a[i])
      free(aux_dlinked_a[i]);
}

struct TYPE_4__ *_allocate_Dlinked_y(int length, struct TYPE_4__ *aux_dlinked_y[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_y[0] = walker;
  walker->l = NULL;
  walker->r = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->r = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->r->l = walker;
    walker = walker->r;
    aux_dlinked_y[i] = walker;
    if (i == (length - 1)) 
      walker->r = NULL;  }

  return head;
}

void _delete_Dlinked_y(struct TYPE_4__ *aux_dlinked_y[], int aux_dlinked_y_size) {
  for(int i = 0; i < aux_dlinked_y_size; i++) 
    if(aux_dlinked_y[i])
      free(aux_dlinked_y[i]);
}

struct TYPE_4__ *_allocateBinTree_a(int length, struct TYPE_4__ *aux_tree_a[], int *counter_a) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_a[*counter_a] = walker;
  (*counter_a)++;
  walker->l = _allocateBinTree_a(length - 1, aux_tree_a, counter_a);
  walker->r = _allocateBinTree_a(length - 1, aux_tree_a, counter_a);
  return walker;
}

void _deleteBinTree_a(struct TYPE_4__ *aux_tree_a[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_a[i])
      free(aux_tree_a[i]);
}

struct TYPE_4__ *_allocateBinTree_y(int length, struct TYPE_4__ *aux_tree_y[], int *counter_y) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_y[*counter_y] = walker;
  (*counter_y)++;
  walker->l = _allocateBinTree_y(length - 1, aux_tree_y, counter_y);
  walker->r = _allocateBinTree_y(length - 1, aux_tree_y, counter_y);
  return walker;
}

void _deleteBinTree_y(struct TYPE_4__ *aux_tree_y[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_y[i])
      free(aux_tree_y[i]);
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
          struct TYPE_4__ * aux_a[1];
          struct TYPE_4__ * a = _allocate_a(1, aux_a);
          struct TYPE_4__ * aux_y[1];
          struct TYPE_4__ * y = _allocate_y(1, aux_y);
          list_add(a,y);
          _delete_a(aux_a, 1);
          _delete_y(aux_y, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_4__ * aux_a[10000];
          struct TYPE_4__ * a = _allocate_a(10000, aux_a);
          struct TYPE_4__ * aux_y[10000];
          struct TYPE_4__ * y = _allocate_y(10000, aux_y);
          list_add(a,y);
          _delete_a(aux_a, 10000);
          _delete_y(aux_y, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct TYPE_4__ * aux_dlinked_a[10000];
          struct TYPE_4__ * a = _allocate_Dlinked_a(10000, aux_dlinked_a);
          struct TYPE_4__ * aux_dlinked_y[10000];
          struct TYPE_4__ * y = _allocate_Dlinked_y(10000, aux_dlinked_y);
          list_add(a,y);
          _delete_Dlinked_a(aux_dlinked_a, 10000);
          _delete_Dlinked_y(aux_dlinked_y, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_a= 0;
          struct TYPE_4__ *  aux_tree_a[1023];
          struct TYPE_4__ * a = _allocateBinTree_a(10, aux_tree_a, &counter_a);
          int counter_y= 0;
          struct TYPE_4__ *  aux_tree_y[1023];
          struct TYPE_4__ * y = _allocateBinTree_y(10, aux_tree_y, &counter_y);
          list_add(a,y);
          _deleteBinTree_a(aux_tree_a);
          _deleteBinTree_y(aux_tree_y);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
