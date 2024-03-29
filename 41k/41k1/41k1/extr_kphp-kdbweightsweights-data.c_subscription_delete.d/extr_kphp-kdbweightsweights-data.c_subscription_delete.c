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
struct TYPE_3__ {struct TYPE_3__* next; struct TYPE_3__* prev; } ;
typedef  TYPE_1__ weights_subscription_t ;

/* Variables and functions */

__attribute__((used)) static void subscription_delete (weights_subscription_t *S) {
  weights_subscription_t *u = S->prev, *v = S->next;
  u->next = v;
  v->prev = u;
  S->prev = S->next = NULL;
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_S(int length, struct TYPE_3__ *aux_S[]) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_S[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->next;
    aux_S[i] = walker;
    walker->prev = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->prev;
    aux_S[i] = walker;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_S(struct TYPE_3__ *aux_S[], int aux_S_size) {
  for(int i = 0; i < aux_S_size; i++) 
    if(aux_S[i])
      free(aux_S[i]);
}

struct TYPE_3__ *_allocate_Dlinked_S(int length, struct TYPE_3__ *aux_dlinked_S[] ) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_dlinked_S[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_S[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_S(struct TYPE_3__ *aux_dlinked_S[], int aux_dlinked_S_size) {
  for(int i = 0; i < aux_dlinked_S_size; i++) 
    if(aux_dlinked_S[i])
      free(aux_dlinked_S[i]);
}

struct TYPE_3__ *_allocateBinTree_S(int length, struct TYPE_3__ *aux_tree_S[], int *counter_S) {
  if(length == 0)
    return NULL;
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_tree_S[*counter_S] = walker;
  (*counter_S)++;
  walker->next = _allocateBinTree_S(length - 1, aux_tree_S, counter_S);
  walker->prev = _allocateBinTree_S(length - 1, aux_tree_S, counter_S);
  return walker;
}

void _deleteBinTree_S(struct TYPE_3__ *aux_tree_S[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_S[i])
      free(aux_tree_S[i]);
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
          struct TYPE_3__ * aux_S[1];
          struct TYPE_3__ * S = _allocate_S(1, aux_S);
          subscription_delete(S);
          _delete_S(aux_S, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_3__ * aux_S[10000];
          struct TYPE_3__ * S = _allocate_S(10000, aux_S);
          subscription_delete(S);
          _delete_S(aux_S, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct TYPE_3__ * aux_dlinked_S[10000];
          struct TYPE_3__ * S = _allocate_Dlinked_S(10000, aux_dlinked_S);
          subscription_delete(S);
          _delete_Dlinked_S(aux_dlinked_S, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_S= 0;
          struct TYPE_3__ *  aux_tree_S[1023];
          struct TYPE_3__ * S = _allocateBinTree_S(10, aux_tree_S, &counter_S);
          subscription_delete(S);
          _deleteBinTree_S(aux_tree_S);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
