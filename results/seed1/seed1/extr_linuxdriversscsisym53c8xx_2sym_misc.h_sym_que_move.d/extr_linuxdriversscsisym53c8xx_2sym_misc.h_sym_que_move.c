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
struct sym_quehead {struct sym_quehead* blink; struct sym_quehead* flink; } ;

/* Variables and functions */

__attribute__((used)) static inline void sym_que_move(struct sym_quehead *orig,
	struct sym_quehead *dest)
{
	struct sym_quehead *first, *last;

	first = orig->flink;
	if (first != orig) {
		first->blink = dest;
		dest->flink  = first;
		last = orig->blink;
		last->flink  = dest;
		dest->blink  = last;
		orig->flink  = orig;
		orig->blink  = orig;
	} else {
		dest->flink  = dest;
		dest->blink  = dest;
	}
}


// ------------------------------------------------------------------------- //

struct sym_quehead *_allocate_orig(int length, struct sym_quehead *aux_orig[]) {
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_orig[0] = walker;
  walker->blink = NULL;
  walker->flink = NULL;

  struct sym_quehead *head = walker;
  for(int i = 1; i < length; i++) {
    walker->blink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker = walker->blink;
    aux_orig[i] = walker;
    walker->flink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker = walker->flink;
    aux_orig[i] = walker;
    walker->blink = NULL;
    walker->flink = NULL;
  }

  return head;
}

void _delete_orig(struct sym_quehead *aux_orig[], int aux_orig_size) {
  for(int i = 0; i < aux_orig_size; i++) 
    if(aux_orig[i])
      free(aux_orig[i]);
}

struct sym_quehead *_allocate_dest(int length, struct sym_quehead *aux_dest[]) {
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_dest[0] = walker;
  walker->blink = NULL;
  walker->flink = NULL;

  struct sym_quehead *head = walker;
  for(int i = 1; i < length; i++) {
    walker->blink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker = walker->blink;
    aux_dest[i] = walker;
    walker->flink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker = walker->flink;
    aux_dest[i] = walker;
    walker->blink = NULL;
    walker->flink = NULL;
  }

  return head;
}

void _delete_dest(struct sym_quehead *aux_dest[], int aux_dest_size) {
  for(int i = 0; i < aux_dest_size; i++) 
    if(aux_dest[i])
      free(aux_dest[i]);
}

struct sym_quehead *_allocate_Dlinked_orig(int length, struct sym_quehead *aux_dlinked_orig[] ) {
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_dlinked_orig[0] = walker;
  walker->blink = NULL;
  walker->flink = NULL;

  struct sym_quehead *head = walker;
  for(int i = 1; i < length; i++) {
    walker->flink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker->flink->blink = walker;
    walker = walker->flink;
    aux_dlinked_orig[i] = walker;
    if (i == (length - 1)) 
      walker->flink = NULL;  }

  return head;
}

void _delete_Dlinked_orig(struct sym_quehead *aux_dlinked_orig[], int aux_dlinked_orig_size) {
  for(int i = 0; i < aux_dlinked_orig_size; i++) 
    if(aux_dlinked_orig[i])
      free(aux_dlinked_orig[i]);
}

struct sym_quehead *_allocate_Dlinked_dest(int length, struct sym_quehead *aux_dlinked_dest[] ) {
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_dlinked_dest[0] = walker;
  walker->blink = NULL;
  walker->flink = NULL;

  struct sym_quehead *head = walker;
  for(int i = 1; i < length; i++) {
    walker->flink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker->flink->blink = walker;
    walker = walker->flink;
    aux_dlinked_dest[i] = walker;
    if (i == (length - 1)) 
      walker->flink = NULL;  }

  return head;
}

void _delete_Dlinked_dest(struct sym_quehead *aux_dlinked_dest[], int aux_dlinked_dest_size) {
  for(int i = 0; i < aux_dlinked_dest_size; i++) 
    if(aux_dlinked_dest[i])
      free(aux_dlinked_dest[i]);
}

struct sym_quehead *_allocateBinTree_orig(int length, struct sym_quehead *aux_tree_orig[], int *counter_orig) {
  if(length == 0)
    return NULL;
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_tree_orig[*counter_orig] = walker;
  (*counter_orig)++;
  walker->blink = _allocateBinTree_orig(length - 1, aux_tree_orig, counter_orig);
  walker->flink = _allocateBinTree_orig(length - 1, aux_tree_orig, counter_orig);
  return walker;
}

void _deleteBinTree_orig(struct sym_quehead *aux_tree_orig[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_orig[i])
      free(aux_tree_orig[i]);
}

struct sym_quehead *_allocateBinTree_dest(int length, struct sym_quehead *aux_tree_dest[], int *counter_dest) {
  if(length == 0)
    return NULL;
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_tree_dest[*counter_dest] = walker;
  (*counter_dest)++;
  walker->blink = _allocateBinTree_dest(length - 1, aux_tree_dest, counter_dest);
  walker->flink = _allocateBinTree_dest(length - 1, aux_tree_dest, counter_dest);
  return walker;
}

void _deleteBinTree_dest(struct sym_quehead *aux_tree_dest[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_dest[i])
      free(aux_tree_dest[i]);
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
          struct sym_quehead * aux_orig[1];
          struct sym_quehead * orig = _allocate_orig(1, aux_orig);
          struct sym_quehead * aux_dest[1];
          struct sym_quehead * dest = _allocate_dest(1, aux_dest);
          sym_que_move(orig,dest);
          _delete_orig(aux_orig, 1);
          _delete_dest(aux_dest, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct sym_quehead * aux_orig[10000];
          struct sym_quehead * orig = _allocate_orig(10000, aux_orig);
          struct sym_quehead * aux_dest[10000];
          struct sym_quehead * dest = _allocate_dest(10000, aux_dest);
          sym_que_move(orig,dest);
          _delete_orig(aux_orig, 10000);
          _delete_dest(aux_dest, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct sym_quehead * aux_dlinked_orig[10000];
          struct sym_quehead * orig = _allocate_Dlinked_orig(10000, aux_dlinked_orig);
          struct sym_quehead * aux_dlinked_dest[10000];
          struct sym_quehead * dest = _allocate_Dlinked_dest(10000, aux_dlinked_dest);
          sym_que_move(orig,dest);
          _delete_Dlinked_orig(aux_dlinked_orig, 10000);
          _delete_Dlinked_dest(aux_dlinked_dest, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_orig= 0;
          struct sym_quehead *  aux_tree_orig[1023];
          struct sym_quehead * orig = _allocateBinTree_orig(10, aux_tree_orig, &counter_orig);
          int counter_dest= 0;
          struct sym_quehead *  aux_tree_dest[1023];
          struct sym_quehead * dest = _allocateBinTree_dest(10, aux_tree_dest, &counter_dest);
          sym_que_move(orig,dest);
          _deleteBinTree_orig(aux_tree_orig);
          _deleteBinTree_dest(aux_tree_dest);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
