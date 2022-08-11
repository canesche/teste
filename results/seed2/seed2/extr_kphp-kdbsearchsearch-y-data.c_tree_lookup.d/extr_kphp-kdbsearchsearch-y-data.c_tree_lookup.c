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
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {scalar_t__ word; struct TYPE_8__* right; TYPE_1__* item; struct TYPE_8__* left; } ;
typedef  TYPE_2__ tree_t ;
struct TYPE_9__ {scalar_t__ item_id; } ;
typedef  TYPE_3__ item_t ;
typedef  scalar_t__ hash_t ;
struct TYPE_7__ {scalar_t__ item_id; } ;

/* Variables and functions */

__attribute__((used)) static tree_t *tree_lookup (tree_t *T, hash_t word, item_t *item) {
  while (T) {
    if (word < T->word) {
      T = T->left;
    } else if (word > T->word) {
      T = T->right;
    } else if (item->item_id < T->item->item_id) {
      T = T->left;
    } else if (item->item_id > T->item->item_id) {
      T = T->right;
    } else {
      return T;
    }
  }
  return T;
}


// ------------------------------------------------------------------------- //

struct TYPE_8__ *_allocate_T(int length, struct TYPE_8__ *aux_T[]) {
  struct TYPE_8__ *walker = (struct TYPE_8__ *)malloc(sizeof(struct TYPE_8__));

  aux_T[0] = walker;
walker->word = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->right = NULL;
  int _len_walker_item0 = 1;
  walker->item = (struct TYPE_7__ *) malloc(_len_walker_item0*sizeof(struct TYPE_7__));
  for(int _i0 = 0; _i0 < _len_walker_item0; _i0++) {
    walker->item.item_id = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->left = NULL;

  struct TYPE_8__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->right = (struct TYPE_8__ *)malloc(sizeof(struct TYPE_8__));
    walker = walker->right;
    aux_T[i] = walker;
    walker->left = (struct TYPE_8__ *)malloc(sizeof(struct TYPE_8__));
    walker = walker->left;
    aux_T[i] = walker;
walker->word = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->right = NULL;
  int _len_walker_item0 = 1;
  walker->item = (struct TYPE_7__ *) malloc(_len_walker_item0*sizeof(struct TYPE_7__));
  for(int _i0 = 0; _i0 < _len_walker_item0; _i0++) {
    walker->item.item_id = ((-2 * (next_i()%2)) + 1) * next_i();
  }
    walker->left = NULL;
  }

  return head;
}

void _delete_T(struct TYPE_8__ *aux_T[], int aux_T_size) {
  for(int i = 0; i < aux_T_size; i++) 
    if(aux_T[i])
      free(aux_T[i]);
}

struct TYPE_8__ *_allocate_Dlinked_T(int length, struct TYPE_8__ *aux_dlinked_T[] ) {
  struct TYPE_8__ *walker = (struct TYPE_8__ *)malloc(sizeof(struct TYPE_8__));

  aux_dlinked_T[0] = walker;
  walker->word = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->right = NULL;
  int _len_walker_item0 = 1;
  walker->item = (struct TYPE_7__ *) malloc(_len_walker_item0*sizeof(struct TYPE_7__));
  for(int _i0 = 0; _i0 < _len_walker_item0; _i0++) {
    walker->item.item_id = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->left = NULL;

  struct TYPE_8__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->left = (struct TYPE_8__ *)malloc(sizeof(struct TYPE_8__));
    walker->left->right = walker;
    walker = walker->left;
    aux_dlinked_T[i] = walker;
    if (i == (length - 1)) 
      walker->left = NULL;    walker->word = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_item0 = 1;
  walker->item = (struct TYPE_7__ *) malloc(_len_walker_item0*sizeof(struct TYPE_7__));
  for(int _i0 = 0; _i0 < _len_walker_item0; _i0++) {
    walker->item.item_id = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_Dlinked_T(struct TYPE_8__ *aux_dlinked_T[], int aux_dlinked_T_size) {
  for(int i = 0; i < aux_dlinked_T_size; i++) 
    if(aux_dlinked_T[i])
      free(aux_dlinked_T[i]);
}

struct TYPE_8__ *_allocateBinTree_T(int length, struct TYPE_8__ *aux_tree_T[], int *counter_T) {
  if(length == 0)
    return NULL;
  struct TYPE_8__ *walker = (struct TYPE_8__ *)malloc(sizeof(struct TYPE_8__));

  aux_tree_T[*counter_T] = walker;
  (*counter_T)++;
  walker->word = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->right = _allocateBinTree_T(length - 1, aux_tree_T, counter_T);
  int _len_walker_item0 = 1;
  walker->item = (struct TYPE_7__ *) malloc(_len_walker_item0*sizeof(struct TYPE_7__));
  for(int _i0 = 0; _i0 < _len_walker_item0; _i0++) {
    walker->item.item_id = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->left = _allocateBinTree_T(length - 1, aux_tree_T, counter_T);
  return walker;
}

void _deleteBinTree_T(struct TYPE_8__ *aux_tree_T[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_T[i])
      free(aux_tree_T[i]);
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
          long word = 100;
          struct TYPE_8__ * aux_T[1];
          struct TYPE_8__ * T = _allocate_T(1, aux_T);
          int _len_item0 = 1;
          struct TYPE_9__ * item = (struct TYPE_9__ *) malloc(_len_item0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_item0; _i0++) {
            item[_i0].item_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_8__ * benchRet = tree_lookup(T,word,item);
          printf("%ld\n", (*benchRet).word);
          _delete_T(aux_T, 1);
          free(item);
        
        break;
    }
    // linked
    case 3:
    {
          long word = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_8__ * aux_T[10000];
          struct TYPE_8__ * T = _allocate_T(10000, aux_T);
          int _len_item0 = 1;
          struct TYPE_9__ * item = (struct TYPE_9__ *) malloc(_len_item0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_item0; _i0++) {
            item[_i0].item_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_8__ * benchRet = tree_lookup(T,word,item);
          printf("%ld\n", (*benchRet).word);
          _delete_T(aux_T, 10000);
          free(item);
        
        break;
    }
    // dlinked
    case 4:
    {
          long word = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_8__ * aux_dlinked_T[10000];
          struct TYPE_8__ * T = _allocate_Dlinked_T(10000, aux_dlinked_T);
          int _len_item0 = 1;
          struct TYPE_9__ * item = (struct TYPE_9__ *) malloc(_len_item0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_item0; _i0++) {
            item[_i0].item_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_8__ * benchRet = tree_lookup(T,word,item);
          printf("%ld\n", (*benchRet).word);
          _delete_Dlinked_T(aux_dlinked_T, 10000);
          free(item);
        
        break;
    }
    // bintree
    case 5:
    {
          long word = ((-2 * (next_i()%2)) + 1) * next_i();
          int counter_T= 0;
          struct TYPE_8__ *  aux_tree_T[1023];
          struct TYPE_8__ * T = _allocateBinTree_T(10, aux_tree_T, &counter_T);
          int _len_item0 = 1;
          struct TYPE_9__ * item = (struct TYPE_9__ *) malloc(_len_item0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_item0; _i0++) {
            item[_i0].item_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_8__ * benchRet = tree_lookup(T,word,item);
          printf("%ld\n", (*benchRet).word);
          _deleteBinTree_T(aux_tree_T);
          free(item);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
