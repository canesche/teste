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
struct TYPE_3__ {struct TYPE_3__* prev; struct TYPE_3__* next; } ;
typedef  TYPE_1__ olist_t ;

/* Variables and functions */

__attribute__((used)) static inline void online_list_clear (olist_t *head) {
  olist_t *tmp = head->next;
  while (tmp != head) {
    olist_t *tnext = tmp->next;
    tmp->next = tmp->prev = 0;
    tmp = tnext;
  }
  head->next = head->prev = head;
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_head(int length, struct TYPE_3__ *aux_head[]) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_head[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->prev;
    aux_head[i] = walker;
    walker->next = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->next;
    aux_head[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_head(struct TYPE_3__ *aux_head[], int aux_head_size) {
  for(int i = 0; i < aux_head_size; i++) 
    if(aux_head[i])
      free(aux_head[i]);
}

struct TYPE_3__ *_allocate_Dlinked_head(int length, struct TYPE_3__ *aux_dlinked_head[] ) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_dlinked_head[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker->next->prev = walker;
    walker = walker->next;
    aux_dlinked_head[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;  }

  return head;
}

void _delete_Dlinked_head(struct TYPE_3__ *aux_dlinked_head[], int aux_dlinked_head_size) {
  for(int i = 0; i < aux_dlinked_head_size; i++) 
    if(aux_dlinked_head[i])
      free(aux_dlinked_head[i]);
}

struct TYPE_3__ *_allocateBinTree_head(int length, struct TYPE_3__ *aux_tree_head[], int *counter_head) {
  if(length == 0)
    return NULL;
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_tree_head[*counter_head] = walker;
  (*counter_head)++;
  walker->prev = _allocateBinTree_head(length - 1, aux_tree_head, counter_head);
  walker->next = _allocateBinTree_head(length - 1, aux_tree_head, counter_head);
  return walker;
}

void _deleteBinTree_head(struct TYPE_3__ *aux_tree_head[]) {
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
          struct TYPE_3__ * aux_head[1];
          struct TYPE_3__ * head = _allocate_head(1, aux_head);
          online_list_clear(head);
          _delete_head(aux_head, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_3__ * aux_head[10000];
          struct TYPE_3__ * head = _allocate_head(10000, aux_head);
          online_list_clear(head);
          _delete_head(aux_head, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct TYPE_3__ * aux_dlinked_head[10000];
          struct TYPE_3__ * head = _allocate_Dlinked_head(10000, aux_dlinked_head);
          online_list_clear(head);
          _delete_Dlinked_head(aux_dlinked_head, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_head= 0;
          struct TYPE_3__ *  aux_tree_head[1023];
          struct TYPE_3__ * head = _allocateBinTree_head(10, aux_tree_head, &counter_head);
          online_list_clear(head);
          _deleteBinTree_head(aux_tree_head);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
