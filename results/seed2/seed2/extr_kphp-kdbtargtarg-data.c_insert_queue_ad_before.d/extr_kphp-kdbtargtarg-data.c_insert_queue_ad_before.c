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
struct advert {struct advert* prev; struct advert* next; } ;

/* Variables and functions */

inline void insert_queue_ad_before (struct advert *W, struct advert *A) {
  A->next = W;
  A->prev = W->prev;
  W->prev->next = A;
  W->prev = A;
}


// ------------------------------------------------------------------------- //

struct advert *_allocate_W(int length, struct advert *aux_W[]) {
  struct advert *walker = (struct advert *)malloc(sizeof(struct advert));

  aux_W[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct advert *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct advert *)malloc(sizeof(struct advert));
    walker = walker->prev;
    aux_W[i] = walker;
    walker->next = (struct advert *)malloc(sizeof(struct advert));
    walker = walker->next;
    aux_W[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_W(struct advert *aux_W[], int aux_W_size) {
  for(int i = 0; i < aux_W_size; i++) 
    if(aux_W[i])
      free(aux_W[i]);
}

struct advert *_allocate_A(int length, struct advert *aux_A[]) {
  struct advert *walker = (struct advert *)malloc(sizeof(struct advert));

  aux_A[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct advert *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct advert *)malloc(sizeof(struct advert));
    walker = walker->prev;
    aux_A[i] = walker;
    walker->next = (struct advert *)malloc(sizeof(struct advert));
    walker = walker->next;
    aux_A[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_A(struct advert *aux_A[], int aux_A_size) {
  for(int i = 0; i < aux_A_size; i++) 
    if(aux_A[i])
      free(aux_A[i]);
}

struct advert *_allocate_Dlinked_W(int length, struct advert *aux_dlinked_W[] ) {
  struct advert *walker = (struct advert *)malloc(sizeof(struct advert));

  aux_dlinked_W[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct advert *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct advert *)malloc(sizeof(struct advert));
    walker->next->prev = walker;
    walker = walker->next;
    aux_dlinked_W[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;  }

  return head;
}

void _delete_Dlinked_W(struct advert *aux_dlinked_W[], int aux_dlinked_W_size) {
  for(int i = 0; i < aux_dlinked_W_size; i++) 
    if(aux_dlinked_W[i])
      free(aux_dlinked_W[i]);
}

struct advert *_allocate_Dlinked_A(int length, struct advert *aux_dlinked_A[] ) {
  struct advert *walker = (struct advert *)malloc(sizeof(struct advert));

  aux_dlinked_A[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct advert *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct advert *)malloc(sizeof(struct advert));
    walker->next->prev = walker;
    walker = walker->next;
    aux_dlinked_A[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;  }

  return head;
}

void _delete_Dlinked_A(struct advert *aux_dlinked_A[], int aux_dlinked_A_size) {
  for(int i = 0; i < aux_dlinked_A_size; i++) 
    if(aux_dlinked_A[i])
      free(aux_dlinked_A[i]);
}

struct advert *_allocateBinTree_W(int length, struct advert *aux_tree_W[], int *counter_W) {
  if(length == 0)
    return NULL;
  struct advert *walker = (struct advert *)malloc(sizeof(struct advert));

  aux_tree_W[*counter_W] = walker;
  (*counter_W)++;
  walker->prev = _allocateBinTree_W(length - 1, aux_tree_W, counter_W);
  walker->next = _allocateBinTree_W(length - 1, aux_tree_W, counter_W);
  return walker;
}

void _deleteBinTree_W(struct advert *aux_tree_W[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_W[i])
      free(aux_tree_W[i]);
}

struct advert *_allocateBinTree_A(int length, struct advert *aux_tree_A[], int *counter_A) {
  if(length == 0)
    return NULL;
  struct advert *walker = (struct advert *)malloc(sizeof(struct advert));

  aux_tree_A[*counter_A] = walker;
  (*counter_A)++;
  walker->prev = _allocateBinTree_A(length - 1, aux_tree_A, counter_A);
  walker->next = _allocateBinTree_A(length - 1, aux_tree_A, counter_A);
  return walker;
}

void _deleteBinTree_A(struct advert *aux_tree_A[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_A[i])
      free(aux_tree_A[i]);
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
          struct advert * aux_W[1];
          struct advert * W = _allocate_W(1, aux_W);
          struct advert * aux_A[1];
          struct advert * A = _allocate_A(1, aux_A);
          insert_queue_ad_before(W,A);
          _delete_W(aux_W, 1);
          _delete_A(aux_A, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct advert * aux_W[10000];
          struct advert * W = _allocate_W(10000, aux_W);
          struct advert * aux_A[10000];
          struct advert * A = _allocate_A(10000, aux_A);
          insert_queue_ad_before(W,A);
          _delete_W(aux_W, 10000);
          _delete_A(aux_A, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct advert * aux_dlinked_W[10000];
          struct advert * W = _allocate_Dlinked_W(10000, aux_dlinked_W);
          struct advert * aux_dlinked_A[10000];
          struct advert * A = _allocate_Dlinked_A(10000, aux_dlinked_A);
          insert_queue_ad_before(W,A);
          _delete_Dlinked_W(aux_dlinked_W, 10000);
          _delete_Dlinked_A(aux_dlinked_A, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_W= 0;
          struct advert *  aux_tree_W[1023];
          struct advert * W = _allocateBinTree_W(10, aux_tree_W, &counter_W);
          int counter_A= 0;
          struct advert *  aux_tree_A[1023];
          struct advert * A = _allocateBinTree_A(10, aux_tree_A, &counter_A);
          insert_queue_ad_before(W,A);
          _deleteBinTree_W(aux_tree_W);
          _deleteBinTree_A(aux_tree_A);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
