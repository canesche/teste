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
struct TYPE_3__ {int id; int drive_l; int priority; struct TYPE_3__* prev; struct TYPE_3__* next; int /*<<< orphan*/ * l; } ;
typedef  TYPE_1__ temp_letter ;

/* Variables and functions */

void temp_letter_init (temp_letter *head_letter) {
  head_letter->id = head_letter->drive_l = head_letter->priority = -1;
  head_letter->l = NULL;
  head_letter->next = head_letter;
  head_letter->prev = head_letter;
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_head_letter(int length, struct TYPE_3__ *aux_head_letter[]) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_head_letter[0] = walker;
walker->id = ((-2 * (next_i()%2)) + 1) * next_i();
walker->drive_l = ((-2 * (next_i()%2)) + 1) * next_i();
walker->priority = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->prev = NULL;
  walker->next = NULL;
  int _len_walker_l0 = 1;
  walker->l = (int *) malloc(_len_walker_l0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_l0; _i0++) {
    walker->l[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->prev;
    aux_head_letter[i] = walker;
    walker->next = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->next;
    aux_head_letter[i] = walker;
walker->id = ((-2 * (next_i()%2)) + 1) * next_i();
walker->drive_l = ((-2 * (next_i()%2)) + 1) * next_i();
walker->priority = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->prev = NULL;
    walker->next = NULL;
  int _len_walker_l0 = 1;
  walker->l = (int *) malloc(_len_walker_l0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_l0; _i0++) {
    walker->l[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_head_letter(struct TYPE_3__ *aux_head_letter[], int aux_head_letter_size) {
  for(int i = 0; i < aux_head_letter_size; i++) 
    if(aux_head_letter[i])
      free(aux_head_letter[i]);
}

struct TYPE_3__ *_allocate_Dlinked_head_letter(int length, struct TYPE_3__ *aux_dlinked_head_letter[] ) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_dlinked_head_letter[0] = walker;
  walker->id = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->drive_l = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->priority = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->prev = NULL;
  walker->next = NULL;
  int _len_walker_l0 = 1;
  walker->l = (int *) malloc(_len_walker_l0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_l0; _i0++) {
    walker->l[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker->next->prev = walker;
    walker = walker->next;
    aux_dlinked_head_letter[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;    walker->id = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->drive_l = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->priority = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_l0 = 1;
  walker->l = (int *) malloc(_len_walker_l0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_l0; _i0++) {
    walker->l[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_Dlinked_head_letter(struct TYPE_3__ *aux_dlinked_head_letter[], int aux_dlinked_head_letter_size) {
  for(int i = 0; i < aux_dlinked_head_letter_size; i++) 
    if(aux_dlinked_head_letter[i])
      free(aux_dlinked_head_letter[i]);
}

struct TYPE_3__ *_allocateBinTree_head_letter(int length, struct TYPE_3__ *aux_tree_head_letter[], int *counter_head_letter) {
  if(length == 0)
    return NULL;
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_tree_head_letter[*counter_head_letter] = walker;
  (*counter_head_letter)++;
  walker->id = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->drive_l = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->priority = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->prev = _allocateBinTree_head_letter(length - 1, aux_tree_head_letter, counter_head_letter);
  walker->next = _allocateBinTree_head_letter(length - 1, aux_tree_head_letter, counter_head_letter);
  int _len_walker_l0 = 1;
  walker->l = (int *) malloc(_len_walker_l0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_l0; _i0++) {
    walker->l[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  return walker;
}

void _deleteBinTree_head_letter(struct TYPE_3__ *aux_tree_head_letter[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_head_letter[i])
      free(aux_tree_head_letter[i]);
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
          struct TYPE_3__ * aux_head_letter[1];
          struct TYPE_3__ * head_letter = _allocate_head_letter(1, aux_head_letter);
          temp_letter_init(head_letter);
          _delete_head_letter(aux_head_letter, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_3__ * aux_head_letter[10000];
          struct TYPE_3__ * head_letter = _allocate_head_letter(10000, aux_head_letter);
          temp_letter_init(head_letter);
          _delete_head_letter(aux_head_letter, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct TYPE_3__ * aux_dlinked_head_letter[10000];
          struct TYPE_3__ * head_letter = _allocate_Dlinked_head_letter(10000, aux_dlinked_head_letter);
          temp_letter_init(head_letter);
          _delete_Dlinked_head_letter(aux_dlinked_head_letter, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_head_letter= 0;
          struct TYPE_3__ *  aux_tree_head_letter[1023];
          struct TYPE_3__ * head_letter = _allocateBinTree_head_letter(10, aux_tree_head_letter, &counter_head_letter);
          temp_letter_init(head_letter);
          _deleteBinTree_head_letter(aux_tree_head_letter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
