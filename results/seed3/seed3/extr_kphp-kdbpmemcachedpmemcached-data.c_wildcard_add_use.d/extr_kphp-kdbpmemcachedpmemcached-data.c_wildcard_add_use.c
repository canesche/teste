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
struct wildcard_entry {struct wildcard_entry* prev_use; struct wildcard_entry* next_use; } ;

/* Variables and functions */
 struct wildcard_entry wildcard_use ; 

void wildcard_add_use (struct wildcard_entry *entry) {
  entry->prev_use = &wildcard_use;
  entry->next_use = wildcard_use.next_use;
  entry->prev_use->next_use = entry;
  entry->next_use->prev_use = entry;
}


// ------------------------------------------------------------------------- //

struct wildcard_entry *_allocate_entry(int length, struct wildcard_entry *aux_entry[]) {
  struct wildcard_entry *walker = (struct wildcard_entry *)malloc(sizeof(struct wildcard_entry));

  aux_entry[0] = walker;
  walker->prev_use = NULL;
  walker->next_use = NULL;

  struct wildcard_entry *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev_use = (struct wildcard_entry *)malloc(sizeof(struct wildcard_entry));
    walker = walker->prev_use;
    aux_entry[i] = walker;
    walker->next_use = (struct wildcard_entry *)malloc(sizeof(struct wildcard_entry));
    walker = walker->next_use;
    aux_entry[i] = walker;
    walker->prev_use = NULL;
    walker->next_use = NULL;
  }

  return head;
}

void _delete_entry(struct wildcard_entry *aux_entry[], int aux_entry_size) {
  for(int i = 0; i < aux_entry_size; i++) 
    if(aux_entry[i])
      free(aux_entry[i]);
}

struct wildcard_entry *_allocate_Dlinked_entry(int length, struct wildcard_entry *aux_dlinked_entry[] ) {
  struct wildcard_entry *walker = (struct wildcard_entry *)malloc(sizeof(struct wildcard_entry));

  aux_dlinked_entry[0] = walker;
  walker->prev_use = NULL;
  walker->next_use = NULL;

  struct wildcard_entry *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next_use = (struct wildcard_entry *)malloc(sizeof(struct wildcard_entry));
    walker->next_use->prev_use = walker;
    walker = walker->next_use;
    aux_dlinked_entry[i] = walker;
    if (i == (length - 1)) 
      walker->next_use = NULL;  }

  return head;
}

void _delete_Dlinked_entry(struct wildcard_entry *aux_dlinked_entry[], int aux_dlinked_entry_size) {
  for(int i = 0; i < aux_dlinked_entry_size; i++) 
    if(aux_dlinked_entry[i])
      free(aux_dlinked_entry[i]);
}

struct wildcard_entry *_allocateBinTree_entry(int length, struct wildcard_entry *aux_tree_entry[], int *counter_entry) {
  if(length == 0)
    return NULL;
  struct wildcard_entry *walker = (struct wildcard_entry *)malloc(sizeof(struct wildcard_entry));

  aux_tree_entry[*counter_entry] = walker;
  (*counter_entry)++;
  walker->prev_use = _allocateBinTree_entry(length - 1, aux_tree_entry, counter_entry);
  walker->next_use = _allocateBinTree_entry(length - 1, aux_tree_entry, counter_entry);
  return walker;
}

void _deleteBinTree_entry(struct wildcard_entry *aux_tree_entry[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_entry[i])
      free(aux_tree_entry[i]);
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
          struct wildcard_entry * aux_entry[1];
          struct wildcard_entry * entry = _allocate_entry(1, aux_entry);
          wildcard_add_use(entry);
          _delete_entry(aux_entry, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct wildcard_entry * aux_entry[10000];
          struct wildcard_entry * entry = _allocate_entry(10000, aux_entry);
          wildcard_add_use(entry);
          _delete_entry(aux_entry, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct wildcard_entry * aux_dlinked_entry[10000];
          struct wildcard_entry * entry = _allocate_Dlinked_entry(10000, aux_dlinked_entry);
          wildcard_add_use(entry);
          _delete_Dlinked_entry(aux_dlinked_entry, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_entry= 0;
          struct wildcard_entry *  aux_tree_entry[1023];
          struct wildcard_entry * entry = _allocateBinTree_entry(10, aux_tree_entry, &counter_entry);
          wildcard_add_use(entry);
          _deleteBinTree_entry(aux_tree_entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
