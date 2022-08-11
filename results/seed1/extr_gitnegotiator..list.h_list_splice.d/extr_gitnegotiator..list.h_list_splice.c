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
struct list_head {struct list_head* next; struct list_head* prev; } ;

/* Variables and functions */

__attribute__((used)) static inline void list_splice(struct list_head *add, struct list_head *head)
{
	/* Do nothing if the list which gets added is empty. */
	if (add != add->next) {
		add->next->prev = head;
		add->prev->next = head->next;
		head->next->prev = add->prev;
		head->next = add->next;
	}
}


// ------------------------------------------------------------------------- //

struct list_head *_allocate_add(int length, struct list_head *aux_add[]) {
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_add[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct list_head *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct list_head *)malloc(sizeof(struct list_head));
    walker = walker->next;
    aux_add[i] = walker;
    walker->prev = (struct list_head *)malloc(sizeof(struct list_head));
    walker = walker->prev;
    aux_add[i] = walker;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_add(struct list_head *aux_add[], int aux_add_size) {
  for(int i = 0; i < aux_add_size; i++) 
    if(aux_add[i])
      free(aux_add[i]);
}

struct list_head *_allocate_head(int length, struct list_head *aux_head[]) {
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_head[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct list_head *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct list_head *)malloc(sizeof(struct list_head));
    walker = walker->next;
    aux_head[i] = walker;
    walker->prev = (struct list_head *)malloc(sizeof(struct list_head));
    walker = walker->prev;
    aux_head[i] = walker;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_head(struct list_head *aux_head[], int aux_head_size) {
  for(int i = 0; i < aux_head_size; i++) 
    if(aux_head[i])
      free(aux_head[i]);
}

struct list_head *_allocate_Dlinked_add(int length, struct list_head *aux_dlinked_add[] ) {
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_dlinked_add[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct list_head *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct list_head *)malloc(sizeof(struct list_head));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_add[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_add(struct list_head *aux_dlinked_add[], int aux_dlinked_add_size) {
  for(int i = 0; i < aux_dlinked_add_size; i++) 
    if(aux_dlinked_add[i])
      free(aux_dlinked_add[i]);
}

struct list_head *_allocate_Dlinked_head(int length, struct list_head *aux_dlinked_head[] ) {
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_dlinked_head[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct list_head *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct list_head *)malloc(sizeof(struct list_head));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_head[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_head(struct list_head *aux_dlinked_head[], int aux_dlinked_head_size) {
  for(int i = 0; i < aux_dlinked_head_size; i++) 
    if(aux_dlinked_head[i])
      free(aux_dlinked_head[i]);
}

struct list_head *_allocateBinTree_add(int length, struct list_head *aux_tree_add[], int *counter_add) {
  if(length == 0)
    return NULL;
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_tree_add[*counter_add] = walker;
  (*counter_add)++;
  walker->next = _allocateBinTree_add(length - 1, aux_tree_add, counter_add);
  walker->prev = _allocateBinTree_add(length - 1, aux_tree_add, counter_add);
  return walker;
}

void _deleteBinTree_add(struct list_head *aux_tree_add[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_add[i])
      free(aux_tree_add[i]);
}

struct list_head *_allocateBinTree_head(int length, struct list_head *aux_tree_head[], int *counter_head) {
  if(length == 0)
    return NULL;
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_tree_head[*counter_head] = walker;
  (*counter_head)++;
  walker->next = _allocateBinTree_head(length - 1, aux_tree_head, counter_head);
  walker->prev = _allocateBinTree_head(length - 1, aux_tree_head, counter_head);
  return walker;
}

void _deleteBinTree_head(struct list_head *aux_tree_head[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_head[i])
      free(aux_tree_head[i]);
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
          struct list_head * aux_add[1];
          struct list_head * add = _allocate_add(1, aux_add);
          struct list_head * aux_head[1];
          struct list_head * head = _allocate_head(1, aux_head);
          list_splice(add,head);
          _delete_add(aux_add, 1);
          _delete_head(aux_head, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct list_head * aux_add[10000];
          struct list_head * add = _allocate_add(10000, aux_add);
          struct list_head * aux_head[10000];
          struct list_head * head = _allocate_head(10000, aux_head);
          list_splice(add,head);
          _delete_add(aux_add, 10000);
          _delete_head(aux_head, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct list_head * aux_dlinked_add[10000];
          struct list_head * add = _allocate_Dlinked_add(10000, aux_dlinked_add);
          struct list_head * aux_dlinked_head[10000];
          struct list_head * head = _allocate_Dlinked_head(10000, aux_dlinked_head);
          list_splice(add,head);
          _delete_Dlinked_add(aux_dlinked_add, 10000);
          _delete_Dlinked_head(aux_dlinked_head, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_add= 0;
          struct list_head *  aux_tree_add[1023];
          struct list_head * add = _allocateBinTree_add(10, aux_tree_add, &counter_add);
          int counter_head= 0;
          struct list_head *  aux_tree_head[1023];
          struct list_head * head = _allocateBinTree_head(10, aux_tree_head, &counter_head);
          list_splice(add,head);
          _deleteBinTree_add(aux_tree_add);
          _deleteBinTree_head(aux_tree_head);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
