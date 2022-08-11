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
struct counter {struct counter* prev_use; struct counter* next_use; } ;

/* Variables and functions */
 struct counter** Counters ; 
 size_t counters_prime ; 

__attribute__((used)) static void add_use (struct counter *C) {
  C->next_use = Counters[counters_prime]->next_use;
  Counters[counters_prime]->next_use = C;
  C->prev_use = Counters[counters_prime];
  C->next_use->prev_use = C;
}


// ------------------------------------------------------------------------- //

struct counter *_allocate_C(int length, struct counter *aux_C[]) {
  struct counter *walker = (struct counter *)malloc(sizeof(struct counter));

  aux_C[0] = walker;
  walker->prev_use = NULL;
  walker->next_use = NULL;

  struct counter *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev_use = (struct counter *)malloc(sizeof(struct counter));
    walker = walker->prev_use;
    aux_C[i] = walker;
    walker->next_use = (struct counter *)malloc(sizeof(struct counter));
    walker = walker->next_use;
    aux_C[i] = walker;
    walker->prev_use = NULL;
    walker->next_use = NULL;
  }

  return head;
}

void _delete_C(struct counter *aux_C[], int aux_C_size) {
  for(int i = 0; i < aux_C_size; i++) 
    if(aux_C[i])
      free(aux_C[i]);
}

struct counter *_allocate_Dlinked_C(int length, struct counter *aux_dlinked_C[] ) {
  struct counter *walker = (struct counter *)malloc(sizeof(struct counter));

  aux_dlinked_C[0] = walker;
  walker->prev_use = NULL;
  walker->next_use = NULL;

  struct counter *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next_use = (struct counter *)malloc(sizeof(struct counter));
    walker->next_use->prev_use = walker;
    walker = walker->next_use;
    aux_dlinked_C[i] = walker;
    if (i == (length - 1)) 
      walker->next_use = NULL;  }

  return head;
}

void _delete_Dlinked_C(struct counter *aux_dlinked_C[], int aux_dlinked_C_size) {
  for(int i = 0; i < aux_dlinked_C_size; i++) 
    if(aux_dlinked_C[i])
      free(aux_dlinked_C[i]);
}

struct counter *_allocateBinTree_C(int length, struct counter *aux_tree_C[], int *counter_C) {
  if(length == 0)
    return NULL;
  struct counter *walker = (struct counter *)malloc(sizeof(struct counter));

  aux_tree_C[*counter_C] = walker;
  (*counter_C)++;
  walker->prev_use = _allocateBinTree_C(length - 1, aux_tree_C, counter_C);
  walker->next_use = _allocateBinTree_C(length - 1, aux_tree_C, counter_C);
  return walker;
}

void _deleteBinTree_C(struct counter *aux_tree_C[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_C[i])
      free(aux_tree_C[i]);
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
          struct counter * aux_C[1];
          struct counter * C = _allocate_C(1, aux_C);
          add_use(C);
          _delete_C(aux_C, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct counter * aux_C[10000];
          struct counter * C = _allocate_C(10000, aux_C);
          add_use(C);
          _delete_C(aux_C, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct counter * aux_dlinked_C[10000];
          struct counter * C = _allocate_Dlinked_C(10000, aux_dlinked_C);
          add_use(C);
          _delete_Dlinked_C(aux_dlinked_C, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_C= 0;
          struct counter *  aux_tree_C[1023];
          struct counter * C = _allocateBinTree_C(10, aux_tree_C, &counter_C);
          add_use(C);
          _deleteBinTree_C(aux_tree_C);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
