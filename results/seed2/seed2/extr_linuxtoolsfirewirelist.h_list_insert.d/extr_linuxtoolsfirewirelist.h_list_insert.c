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

/* Type definitions */
struct list {struct list* prev; struct list* next; } ;

/* Variables and functions */

__attribute__((used)) static inline void
list_insert(struct list *link, struct list *new_link)
{
	new_link->prev		= link->prev;
	new_link->next		= link;
	new_link->prev->next	= new_link;
	new_link->next->prev	= new_link;
}


// ------------------------------------------------------------------------- //

struct list *_allocate_link(int length, struct list *aux_link[]) {
  struct list *walker = (struct list *)malloc(sizeof(struct list));

  aux_link[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct list *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct list *)malloc(sizeof(struct list));
    walker = walker->prev;
    aux_link[i] = walker;
    walker->next = (struct list *)malloc(sizeof(struct list));
    walker = walker->next;
    aux_link[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_link(struct list *aux_link[], int aux_link_size) {
  for(int i = 0; i < aux_link_size; i++) 
    if(aux_link[i])
      free(aux_link[i]);
}

struct list *_allocate_new_link(int length, struct list *aux_new_link[]) {
  struct list *walker = (struct list *)malloc(sizeof(struct list));

  aux_new_link[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct list *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct list *)malloc(sizeof(struct list));
    walker = walker->prev;
    aux_new_link[i] = walker;
    walker->next = (struct list *)malloc(sizeof(struct list));
    walker = walker->next;
    aux_new_link[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_new_link(struct list *aux_new_link[], int aux_new_link_size) {
  for(int i = 0; i < aux_new_link_size; i++) 
    if(aux_new_link[i])
      free(aux_new_link[i]);
}

struct list *_allocate_Dlinked_link(int length, struct list *aux_dlinked_link[] ) {
  struct list *walker = (struct list *)malloc(sizeof(struct list));

  aux_dlinked_link[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct list *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct list *)malloc(sizeof(struct list));
    walker->next->prev = walker;
    walker = walker->next;
    aux_dlinked_link[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;  }

  return head;
}

void _delete_Dlinked_link(struct list *aux_dlinked_link[], int aux_dlinked_link_size) {
  for(int i = 0; i < aux_dlinked_link_size; i++) 
    if(aux_dlinked_link[i])
      free(aux_dlinked_link[i]);
}

struct list *_allocate_Dlinked_new_link(int length, struct list *aux_dlinked_new_link[] ) {
  struct list *walker = (struct list *)malloc(sizeof(struct list));

  aux_dlinked_new_link[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct list *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct list *)malloc(sizeof(struct list));
    walker->next->prev = walker;
    walker = walker->next;
    aux_dlinked_new_link[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;  }

  return head;
}

void _delete_Dlinked_new_link(struct list *aux_dlinked_new_link[], int aux_dlinked_new_link_size) {
  for(int i = 0; i < aux_dlinked_new_link_size; i++) 
    if(aux_dlinked_new_link[i])
      free(aux_dlinked_new_link[i]);
}

struct list *_allocateBinTree_link(int length, struct list *aux_tree_link[], int *counter_link) {
  if(length == 0)
    return NULL;
  struct list *walker = (struct list *)malloc(sizeof(struct list));

  aux_tree_link[*counter_link] = walker;
  (*counter_link)++;
  walker->prev = _allocateBinTree_link(length - 1, aux_tree_link, counter_link);
  walker->next = _allocateBinTree_link(length - 1, aux_tree_link, counter_link);
  return walker;
}

void _deleteBinTree_link(struct list *aux_tree_link[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_link[i])
      free(aux_tree_link[i]);
}

struct list *_allocateBinTree_new_link(int length, struct list *aux_tree_new_link[], int *counter_new_link) {
  if(length == 0)
    return NULL;
  struct list *walker = (struct list *)malloc(sizeof(struct list));

  aux_tree_new_link[*counter_new_link] = walker;
  (*counter_new_link)++;
  walker->prev = _allocateBinTree_new_link(length - 1, aux_tree_new_link, counter_new_link);
  walker->next = _allocateBinTree_new_link(length - 1, aux_tree_new_link, counter_new_link);
  return walker;
}

void _deleteBinTree_new_link(struct list *aux_tree_new_link[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_new_link[i])
      free(aux_tree_new_link[i]);
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
          struct list * aux_link[1];
          struct list * link = _allocate_link(1, aux_link);
          struct list * aux_new_link[1];
          struct list * new_link = _allocate_new_link(1, aux_new_link);
          list_insert(link,new_link);
          _delete_link(aux_link, 1);
          _delete_new_link(aux_new_link, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct list * aux_link[10000];
          struct list * link = _allocate_link(10000, aux_link);
          struct list * aux_new_link[10000];
          struct list * new_link = _allocate_new_link(10000, aux_new_link);
          list_insert(link,new_link);
          _delete_link(aux_link, 10000);
          _delete_new_link(aux_new_link, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct list * aux_dlinked_link[10000];
          struct list * link = _allocate_Dlinked_link(10000, aux_dlinked_link);
          struct list * aux_dlinked_new_link[10000];
          struct list * new_link = _allocate_Dlinked_new_link(10000, aux_dlinked_new_link);
          list_insert(link,new_link);
          _delete_Dlinked_link(aux_dlinked_link, 10000);
          _delete_Dlinked_new_link(aux_dlinked_new_link, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_link= 0;
          struct list *  aux_tree_link[1023];
          struct list * link = _allocateBinTree_link(10, aux_tree_link, &counter_link);
          int counter_new_link= 0;
          struct list *  aux_tree_new_link[1023];
          struct list * new_link = _allocateBinTree_new_link(10, aux_tree_new_link, &counter_new_link);
          list_insert(link,new_link);
          _deleteBinTree_link(aux_tree_link);
          _deleteBinTree_new_link(aux_tree_new_link);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
