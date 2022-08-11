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
typedef  TYPE_1__ ME_DisplayItem ;

/* Variables and functions */

void ME_InsertBefore(ME_DisplayItem *diWhere, ME_DisplayItem *diWhat)
{
  diWhat->next = diWhere;
  diWhat->prev = diWhere->prev;

  diWhere->prev->next = diWhat;
  diWhat->next->prev = diWhat;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_diWhere(int length, struct TYPE_4__ *aux_diWhere[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_diWhere[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->prev;
    aux_diWhere[i] = walker;
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_diWhere[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_diWhere(struct TYPE_4__ *aux_diWhere[], int aux_diWhere_size) {
  for(int i = 0; i < aux_diWhere_size; i++) 
    if(aux_diWhere[i])
      free(aux_diWhere[i]);
}

struct TYPE_4__ *_allocate_diWhat(int length, struct TYPE_4__ *aux_diWhat[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_diWhat[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->prev;
    aux_diWhat[i] = walker;
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_diWhat[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_diWhat(struct TYPE_4__ *aux_diWhat[], int aux_diWhat_size) {
  for(int i = 0; i < aux_diWhat_size; i++) 
    if(aux_diWhat[i])
      free(aux_diWhat[i]);
}

struct TYPE_4__ *_allocate_Dlinked_diWhere(int length, struct TYPE_4__ *aux_dlinked_diWhere[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_diWhere[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->next->prev = walker;
    walker = walker->next;
    aux_dlinked_diWhere[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;  }

  return head;
}

void _delete_Dlinked_diWhere(struct TYPE_4__ *aux_dlinked_diWhere[], int aux_dlinked_diWhere_size) {
  for(int i = 0; i < aux_dlinked_diWhere_size; i++) 
    if(aux_dlinked_diWhere[i])
      free(aux_dlinked_diWhere[i]);
}

struct TYPE_4__ *_allocate_Dlinked_diWhat(int length, struct TYPE_4__ *aux_dlinked_diWhat[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_diWhat[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->next->prev = walker;
    walker = walker->next;
    aux_dlinked_diWhat[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;  }

  return head;
}

void _delete_Dlinked_diWhat(struct TYPE_4__ *aux_dlinked_diWhat[], int aux_dlinked_diWhat_size) {
  for(int i = 0; i < aux_dlinked_diWhat_size; i++) 
    if(aux_dlinked_diWhat[i])
      free(aux_dlinked_diWhat[i]);
}

struct TYPE_4__ *_allocateBinTree_diWhere(int length, struct TYPE_4__ *aux_tree_diWhere[], int *counter_diWhere) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_diWhere[*counter_diWhere] = walker;
  (*counter_diWhere)++;
  walker->prev = _allocateBinTree_diWhere(length - 1, aux_tree_diWhere, counter_diWhere);
  walker->next = _allocateBinTree_diWhere(length - 1, aux_tree_diWhere, counter_diWhere);
  return walker;
}

void _deleteBinTree_diWhere(struct TYPE_4__ *aux_tree_diWhere[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_diWhere[i])
      free(aux_tree_diWhere[i]);
}

struct TYPE_4__ *_allocateBinTree_diWhat(int length, struct TYPE_4__ *aux_tree_diWhat[], int *counter_diWhat) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_diWhat[*counter_diWhat] = walker;
  (*counter_diWhat)++;
  walker->prev = _allocateBinTree_diWhat(length - 1, aux_tree_diWhat, counter_diWhat);
  walker->next = _allocateBinTree_diWhat(length - 1, aux_tree_diWhat, counter_diWhat);
  return walker;
}

void _deleteBinTree_diWhat(struct TYPE_4__ *aux_tree_diWhat[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_diWhat[i])
      free(aux_tree_diWhat[i]);
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
          struct TYPE_4__ * aux_diWhere[1];
          struct TYPE_4__ * diWhere = _allocate_diWhere(1, aux_diWhere);
          struct TYPE_4__ * aux_diWhat[1];
          struct TYPE_4__ * diWhat = _allocate_diWhat(1, aux_diWhat);
          ME_InsertBefore(diWhere,diWhat);
          _delete_diWhere(aux_diWhere, 1);
          _delete_diWhat(aux_diWhat, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_4__ * aux_diWhere[10000];
          struct TYPE_4__ * diWhere = _allocate_diWhere(10000, aux_diWhere);
          struct TYPE_4__ * aux_diWhat[10000];
          struct TYPE_4__ * diWhat = _allocate_diWhat(10000, aux_diWhat);
          ME_InsertBefore(diWhere,diWhat);
          _delete_diWhere(aux_diWhere, 10000);
          _delete_diWhat(aux_diWhat, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct TYPE_4__ * aux_dlinked_diWhere[10000];
          struct TYPE_4__ * diWhere = _allocate_Dlinked_diWhere(10000, aux_dlinked_diWhere);
          struct TYPE_4__ * aux_dlinked_diWhat[10000];
          struct TYPE_4__ * diWhat = _allocate_Dlinked_diWhat(10000, aux_dlinked_diWhat);
          ME_InsertBefore(diWhere,diWhat);
          _delete_Dlinked_diWhere(aux_dlinked_diWhere, 10000);
          _delete_Dlinked_diWhat(aux_dlinked_diWhat, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_diWhere= 0;
          struct TYPE_4__ *  aux_tree_diWhere[1023];
          struct TYPE_4__ * diWhere = _allocateBinTree_diWhere(10, aux_tree_diWhere, &counter_diWhere);
          int counter_diWhat= 0;
          struct TYPE_4__ *  aux_tree_diWhat[1023];
          struct TYPE_4__ * diWhat = _allocateBinTree_diWhat(10, aux_tree_diWhat, &counter_diWhat);
          ME_InsertBefore(diWhere,diWhat);
          _deleteBinTree_diWhere(aux_tree_diWhere);
          _deleteBinTree_diWhat(aux_tree_diWhat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
