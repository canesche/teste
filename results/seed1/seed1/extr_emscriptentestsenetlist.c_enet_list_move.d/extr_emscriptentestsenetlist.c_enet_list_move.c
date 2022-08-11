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
struct TYPE_4__ {struct TYPE_4__* previous; struct TYPE_4__* next; } ;
typedef  TYPE_1__* ENetListIterator ;

/* Variables and functions */

ENetListIterator
enet_list_move (ENetListIterator position, void * dataFirst, void * dataLast)
{
   ENetListIterator first = (ENetListIterator) dataFirst,
                    last = (ENetListIterator) dataLast;

   first -> previous -> next = last -> next;
   last -> next -> previous = first -> previous;

   first -> previous = position -> previous;
   last -> next = position;

   first -> previous -> next = first;
   position -> previous = last;
    
   return first;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_position(int length, struct TYPE_4__ *aux_position[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_position[0] = walker;
  walker->previous = NULL;
  walker->next = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->previous = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->previous;
    aux_position[i] = walker;
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_position[i] = walker;
    walker->previous = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_position(struct TYPE_4__ *aux_position[], int aux_position_size) {
  for(int i = 0; i < aux_position_size; i++) 
    if(aux_position[i])
      free(aux_position[i]);
}

struct TYPE_4__ *_allocate_Dlinked_position(int length, struct TYPE_4__ *aux_dlinked_position[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_position[0] = walker;
  walker->previous = NULL;
  walker->next = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->next->previous = walker;
    walker = walker->next;
    aux_dlinked_position[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;  }

  return head;
}

void _delete_Dlinked_position(struct TYPE_4__ *aux_dlinked_position[], int aux_dlinked_position_size) {
  for(int i = 0; i < aux_dlinked_position_size; i++) 
    if(aux_dlinked_position[i])
      free(aux_dlinked_position[i]);
}

struct TYPE_4__ *_allocateBinTree_position(int length, struct TYPE_4__ *aux_tree_position[], int *counter_position) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_position[*counter_position] = walker;
  (*counter_position)++;
  walker->previous = _allocateBinTree_position(length - 1, aux_tree_position, counter_position);
  walker->next = _allocateBinTree_position(length - 1, aux_tree_position, counter_position);
  return walker;
}

void _deleteBinTree_position(struct TYPE_4__ *aux_tree_position[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_position[i])
      free(aux_tree_position[i]);
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
          struct TYPE_4__ * aux_position[1];
          struct TYPE_4__ * position = _allocate_position(1, aux_position);
          void * dataFirst;
          void * dataLast;
          struct TYPE_4__ * benchRet = enet_list_move(position,dataFirst,dataLast);
          _delete_position(aux_position, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_4__ * aux_position[10000];
          struct TYPE_4__ * position = _allocate_position(10000, aux_position);
          void * dataFirst;
          void * dataLast;
          struct TYPE_4__ * benchRet = enet_list_move(position,dataFirst,dataLast);
          _delete_position(aux_position, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct TYPE_4__ * aux_dlinked_position[10000];
          struct TYPE_4__ * position = _allocate_Dlinked_position(10000, aux_dlinked_position);
          void * dataFirst;
          void * dataLast;
          struct TYPE_4__ * benchRet = enet_list_move(position,dataFirst,dataLast);
          _delete_Dlinked_position(aux_dlinked_position, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_position= 0;
          struct TYPE_4__ *  aux_tree_position[1023];
          struct TYPE_4__ * position = _allocateBinTree_position(10, aux_tree_position, &counter_position);
          void * dataFirst;
          void * dataLast;
          struct TYPE_4__ * benchRet = enet_list_move(position,dataFirst,dataLast);
          _deleteBinTree_position(aux_tree_position);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
