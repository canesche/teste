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
struct TYPE_4__ {struct TYPE_4__* prev; struct TYPE_4__* next; } ;
typedef  TYPE_1__ restore_list ;

/* Variables and functions */

inline void restore_list_connect (restore_list *a, restore_list *b) {
  a->next = b;
  b->prev = a;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_a(int length, struct TYPE_4__ *aux_a[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_a[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->prev;
    aux_a[i] = walker;
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_a[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_a(struct TYPE_4__ *aux_a[], int aux_a_size) {
  for(int i = 0; i < aux_a_size; i++) 
    if(aux_a[i])
      free(aux_a[i]);
}

struct TYPE_4__ *_allocate_b(int length, struct TYPE_4__ *aux_b[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_b[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->prev;
    aux_b[i] = walker;
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_b[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_b(struct TYPE_4__ *aux_b[], int aux_b_size) {
  for(int i = 0; i < aux_b_size; i++) 
    if(aux_b[i])
      free(aux_b[i]);
}

struct TYPE_4__ *_allocate_Dlinked_a(int length, struct TYPE_4__ *aux_dlinked_a[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_a[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->next->prev = walker;
    walker = walker->next;
    aux_dlinked_a[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;  }

  return head;
}

void _delete_Dlinked_a(struct TYPE_4__ *aux_dlinked_a[], int aux_dlinked_a_size) {
  for(int i = 0; i < aux_dlinked_a_size; i++) 
    if(aux_dlinked_a[i])
      free(aux_dlinked_a[i]);
}

struct TYPE_4__ *_allocate_Dlinked_b(int length, struct TYPE_4__ *aux_dlinked_b[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_b[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->next->prev = walker;
    walker = walker->next;
    aux_dlinked_b[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;  }

  return head;
}

void _delete_Dlinked_b(struct TYPE_4__ *aux_dlinked_b[], int aux_dlinked_b_size) {
  for(int i = 0; i < aux_dlinked_b_size; i++) 
    if(aux_dlinked_b[i])
      free(aux_dlinked_b[i]);
}

struct TYPE_4__ *_allocateBinTree_a(int length, struct TYPE_4__ *aux_tree_a[], int *counter_a) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_a[*counter_a] = walker;
  (*counter_a)++;
  walker->prev = _allocateBinTree_a(length - 1, aux_tree_a, counter_a);
  walker->next = _allocateBinTree_a(length - 1, aux_tree_a, counter_a);
  return walker;
}

void _deleteBinTree_a(struct TYPE_4__ *aux_tree_a[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_a[i])
      free(aux_tree_a[i]);
}

struct TYPE_4__ *_allocateBinTree_b(int length, struct TYPE_4__ *aux_tree_b[], int *counter_b) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_b[*counter_b] = walker;
  (*counter_b)++;
  walker->prev = _allocateBinTree_b(length - 1, aux_tree_b, counter_b);
  walker->next = _allocateBinTree_b(length - 1, aux_tree_b, counter_b);
  return walker;
}

void _deleteBinTree_b(struct TYPE_4__ *aux_tree_b[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_b[i])
      free(aux_tree_b[i]);
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
          struct TYPE_4__ * aux_b[1];
          struct TYPE_4__ * b = _allocate_b(1, aux_b);
          restore_list_connect(a,b);
          _delete_a(aux_a, 1);
          _delete_b(aux_b, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_4__ * aux_a[10000];
          struct TYPE_4__ * a = _allocate_a(10000, aux_a);
          struct TYPE_4__ * aux_b[10000];
          struct TYPE_4__ * b = _allocate_b(10000, aux_b);
          restore_list_connect(a,b);
          _delete_a(aux_a, 10000);
          _delete_b(aux_b, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct TYPE_4__ * aux_dlinked_a[10000];
          struct TYPE_4__ * a = _allocate_Dlinked_a(10000, aux_dlinked_a);
          struct TYPE_4__ * aux_dlinked_b[10000];
          struct TYPE_4__ * b = _allocate_Dlinked_b(10000, aux_dlinked_b);
          restore_list_connect(a,b);
          _delete_Dlinked_a(aux_dlinked_a, 10000);
          _delete_Dlinked_b(aux_dlinked_b, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_a= 0;
          struct TYPE_4__ *  aux_tree_a[1023];
          struct TYPE_4__ * a = _allocateBinTree_a(10, aux_tree_a, &counter_a);
          int counter_b= 0;
          struct TYPE_4__ *  aux_tree_b[1023];
          struct TYPE_4__ * b = _allocateBinTree_b(10, aux_tree_b, &counter_b);
          restore_list_connect(a,b);
          _deleteBinTree_a(aux_tree_a);
          _deleteBinTree_b(aux_tree_b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
