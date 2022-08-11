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
struct TYPE_4__ {struct TYPE_4__* next_used; struct TYPE_4__* prev_used; } ;
typedef  TYPE_1__ user ;

/* Variables and functions */
 TYPE_1__* LRU_head ; 

void add_user_used (user *u) {
  user *y = LRU_head->prev_used;

  u->next_used = LRU_head;
  LRU_head->prev_used = u;

  u->prev_used = y;
  y->next_used = u;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_u(int length, struct TYPE_4__ *aux_u[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_u[0] = walker;
  walker->next_used = NULL;
  walker->prev_used = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next_used = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next_used;
    aux_u[i] = walker;
    walker->prev_used = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->prev_used;
    aux_u[i] = walker;
    walker->next_used = NULL;
    walker->prev_used = NULL;
  }

  return head;
}

void _delete_u(struct TYPE_4__ *aux_u[], int aux_u_size) {
  for(int i = 0; i < aux_u_size; i++) 
    if(aux_u[i])
      free(aux_u[i]);
}

struct TYPE_4__ *_allocate_Dlinked_u(int length, struct TYPE_4__ *aux_dlinked_u[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_u[0] = walker;
  walker->next_used = NULL;
  walker->prev_used = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev_used = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->prev_used->next_used = walker;
    walker = walker->prev_used;
    aux_dlinked_u[i] = walker;
    if (i == (length - 1)) 
      walker->prev_used = NULL;  }

  return head;
}

void _delete_Dlinked_u(struct TYPE_4__ *aux_dlinked_u[], int aux_dlinked_u_size) {
  for(int i = 0; i < aux_dlinked_u_size; i++) 
    if(aux_dlinked_u[i])
      free(aux_dlinked_u[i]);
}

struct TYPE_4__ *_allocateBinTree_u(int length, struct TYPE_4__ *aux_tree_u[], int *counter_u) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_u[*counter_u] = walker;
  (*counter_u)++;
  walker->next_used = _allocateBinTree_u(length - 1, aux_tree_u, counter_u);
  walker->prev_used = _allocateBinTree_u(length - 1, aux_tree_u, counter_u);
  return walker;
}

void _deleteBinTree_u(struct TYPE_4__ *aux_tree_u[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_u[i])
      free(aux_tree_u[i]);
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
          struct TYPE_4__ * aux_u[1];
          struct TYPE_4__ * u = _allocate_u(1, aux_u);
          add_user_used(u);
          _delete_u(aux_u, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_4__ * aux_u[10000];
          struct TYPE_4__ * u = _allocate_u(10000, aux_u);
          add_user_used(u);
          _delete_u(aux_u, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct TYPE_4__ * aux_dlinked_u[10000];
          struct TYPE_4__ * u = _allocate_Dlinked_u(10000, aux_dlinked_u);
          add_user_used(u);
          _delete_Dlinked_u(aux_dlinked_u, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_u= 0;
          struct TYPE_4__ *  aux_tree_u[1023];
          struct TYPE_4__ * u = _allocateBinTree_u(10, aux_tree_u, &counter_u);
          add_user_used(u);
          _deleteBinTree_u(aux_tree_u);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
