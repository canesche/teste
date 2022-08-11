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
typedef  int /*<<< orphan*/  VOID ;
struct TYPE_4__ {struct TYPE_4__* Flink; struct TYPE_4__* Blink; } ;
typedef  TYPE_1__* PLIST_ENTRY ;

/* Variables and functions */

__attribute__((used)) static VOID
InsertAfterEntry(PLIST_ENTRY Previous,
                 PLIST_ENTRY Entry)
/*
 * FUNCTION: Insert a list entry after another entry in the list
 */
{
    Previous->Flink->Blink = Entry;

    Entry->Flink = Previous->Flink;
    Entry->Blink = Previous;

    Previous->Flink = Entry;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_Previous(int length, struct TYPE_4__ *aux_Previous[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_Previous[0] = walker;
  walker->Flink = NULL;
  walker->Blink = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->Flink = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->Flink;
    aux_Previous[i] = walker;
    walker->Blink = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->Blink;
    aux_Previous[i] = walker;
    walker->Flink = NULL;
    walker->Blink = NULL;
  }

  return head;
}

void _delete_Previous(struct TYPE_4__ *aux_Previous[], int aux_Previous_size) {
  for(int i = 0; i < aux_Previous_size; i++) 
    if(aux_Previous[i])
      free(aux_Previous[i]);
}

struct TYPE_4__ *_allocate_Entry(int length, struct TYPE_4__ *aux_Entry[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_Entry[0] = walker;
  walker->Flink = NULL;
  walker->Blink = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->Flink = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->Flink;
    aux_Entry[i] = walker;
    walker->Blink = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->Blink;
    aux_Entry[i] = walker;
    walker->Flink = NULL;
    walker->Blink = NULL;
  }

  return head;
}

void _delete_Entry(struct TYPE_4__ *aux_Entry[], int aux_Entry_size) {
  for(int i = 0; i < aux_Entry_size; i++) 
    if(aux_Entry[i])
      free(aux_Entry[i]);
}

struct TYPE_4__ *_allocate_Dlinked_Previous(int length, struct TYPE_4__ *aux_dlinked_Previous[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_Previous[0] = walker;
  walker->Flink = NULL;
  walker->Blink = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->Blink = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->Blink->Flink = walker;
    walker = walker->Blink;
    aux_dlinked_Previous[i] = walker;
    if (i == (length - 1)) 
      walker->Blink = NULL;  }

  return head;
}

void _delete_Dlinked_Previous(struct TYPE_4__ *aux_dlinked_Previous[], int aux_dlinked_Previous_size) {
  for(int i = 0; i < aux_dlinked_Previous_size; i++) 
    if(aux_dlinked_Previous[i])
      free(aux_dlinked_Previous[i]);
}

struct TYPE_4__ *_allocate_Dlinked_Entry(int length, struct TYPE_4__ *aux_dlinked_Entry[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_Entry[0] = walker;
  walker->Flink = NULL;
  walker->Blink = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->Blink = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->Blink->Flink = walker;
    walker = walker->Blink;
    aux_dlinked_Entry[i] = walker;
    if (i == (length - 1)) 
      walker->Blink = NULL;  }

  return head;
}

void _delete_Dlinked_Entry(struct TYPE_4__ *aux_dlinked_Entry[], int aux_dlinked_Entry_size) {
  for(int i = 0; i < aux_dlinked_Entry_size; i++) 
    if(aux_dlinked_Entry[i])
      free(aux_dlinked_Entry[i]);
}

struct TYPE_4__ *_allocateBinTree_Previous(int length, struct TYPE_4__ *aux_tree_Previous[], int *counter_Previous) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_Previous[*counter_Previous] = walker;
  (*counter_Previous)++;
  walker->Flink = _allocateBinTree_Previous(length - 1, aux_tree_Previous, counter_Previous);
  walker->Blink = _allocateBinTree_Previous(length - 1, aux_tree_Previous, counter_Previous);
  return walker;
}

void _deleteBinTree_Previous(struct TYPE_4__ *aux_tree_Previous[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_Previous[i])
      free(aux_tree_Previous[i]);
}

struct TYPE_4__ *_allocateBinTree_Entry(int length, struct TYPE_4__ *aux_tree_Entry[], int *counter_Entry) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_Entry[*counter_Entry] = walker;
  (*counter_Entry)++;
  walker->Flink = _allocateBinTree_Entry(length - 1, aux_tree_Entry, counter_Entry);
  walker->Blink = _allocateBinTree_Entry(length - 1, aux_tree_Entry, counter_Entry);
  return walker;
}

void _deleteBinTree_Entry(struct TYPE_4__ *aux_tree_Entry[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_Entry[i])
      free(aux_tree_Entry[i]);
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
          struct TYPE_4__ * aux_Previous[1];
          struct TYPE_4__ * Previous = _allocate_Previous(1, aux_Previous);
          struct TYPE_4__ * aux_Entry[1];
          struct TYPE_4__ * Entry = _allocate_Entry(1, aux_Entry);
          int benchRet = InsertAfterEntry(Previous,Entry);
          printf("%d\n", benchRet); 
          _delete_Previous(aux_Previous, 1);
          _delete_Entry(aux_Entry, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_4__ * aux_Previous[10000];
          struct TYPE_4__ * Previous = _allocate_Previous(10000, aux_Previous);
          struct TYPE_4__ * aux_Entry[10000];
          struct TYPE_4__ * Entry = _allocate_Entry(10000, aux_Entry);
          int benchRet = InsertAfterEntry(Previous,Entry);
          printf("%d\n", benchRet); 
          _delete_Previous(aux_Previous, 10000);
          _delete_Entry(aux_Entry, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct TYPE_4__ * aux_dlinked_Previous[10000];
          struct TYPE_4__ * Previous = _allocate_Dlinked_Previous(10000, aux_dlinked_Previous);
          struct TYPE_4__ * aux_dlinked_Entry[10000];
          struct TYPE_4__ * Entry = _allocate_Dlinked_Entry(10000, aux_dlinked_Entry);
          int benchRet = InsertAfterEntry(Previous,Entry);
          printf("%d\n", benchRet); 
          _delete_Dlinked_Previous(aux_dlinked_Previous, 10000);
          _delete_Dlinked_Entry(aux_dlinked_Entry, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_Previous= 0;
          struct TYPE_4__ *  aux_tree_Previous[1023];
          struct TYPE_4__ * Previous = _allocateBinTree_Previous(10, aux_tree_Previous, &counter_Previous);
          int counter_Entry= 0;
          struct TYPE_4__ *  aux_tree_Entry[1023];
          struct TYPE_4__ * Entry = _allocateBinTree_Entry(10, aux_tree_Entry, &counter_Entry);
          int benchRet = InsertAfterEntry(Previous,Entry);
          printf("%d\n", benchRet); 
          _deleteBinTree_Previous(aux_tree_Previous);
          _deleteBinTree_Entry(aux_tree_Entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
