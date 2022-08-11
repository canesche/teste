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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/ * next_area; int /*<<< orphan*/ * prev_area; struct TYPE_4__* next_ent; struct TYPE_4__* prev_ent; } ;
typedef  TYPE_1__ aas_link_t ;
struct TYPE_5__ {TYPE_1__* freelinks; } ;

/* Variables and functions */
 TYPE_2__ aasworld ; 
 int /*<<< orphan*/  numaaslinks ; 

void AAS_DeAllocAASLink(aas_link_t *link)
{
	if (aasworld.freelinks) aasworld.freelinks->prev_ent = link;
	link->prev_ent = NULL;
	link->next_ent = aasworld.freelinks;
	link->prev_area = NULL;
	link->next_area = NULL;
	aasworld.freelinks = link;
	numaaslinks++;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_link(int length, struct TYPE_4__ *aux_link[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_link[0] = walker;
  int _len_walker_next_area0 = 1;
  walker->next_area = (int *) malloc(_len_walker_next_area0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_next_area0; _i0++) {
    walker->next_area[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  int _len_walker_prev_area0 = 1;
  walker->prev_area = (int *) malloc(_len_walker_prev_area0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_prev_area0; _i0++) {
    walker->prev_area[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->next_ent = NULL;
  walker->prev_ent = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next_ent = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next_ent;
    aux_link[i] = walker;
    walker->prev_ent = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->prev_ent;
    aux_link[i] = walker;
  int _len_walker_next_area0 = 1;
  walker->next_area = (int *) malloc(_len_walker_next_area0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_next_area0; _i0++) {
    walker->next_area[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  int _len_walker_prev_area0 = 1;
  walker->prev_area = (int *) malloc(_len_walker_prev_area0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_prev_area0; _i0++) {
    walker->prev_area[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
    walker->next_ent = NULL;
    walker->prev_ent = NULL;
  }

  return head;
}

void _delete_link(struct TYPE_4__ *aux_link[], int aux_link_size) {
  for(int i = 0; i < aux_link_size; i++) 
    if(aux_link[i])
      free(aux_link[i]);
}

struct TYPE_4__ *_allocate_Dlinked_link(int length, struct TYPE_4__ *aux_dlinked_link[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_link[0] = walker;
  int _len_walker_next_area0 = 1;
  walker->next_area = (int *) malloc(_len_walker_next_area0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_next_area0; _i0++) {
    walker->next_area[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  int _len_walker_prev_area0 = 1;
  walker->prev_area = (int *) malloc(_len_walker_prev_area0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_prev_area0; _i0++) {
    walker->prev_area[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->next_ent = NULL;
  walker->prev_ent = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev_ent = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->prev_ent->next_ent = walker;
    walker = walker->prev_ent;
    aux_dlinked_link[i] = walker;
    if (i == (length - 1)) 
      walker->prev_ent = NULL;  int _len_walker_next_area0 = 1;
  walker->next_area = (int *) malloc(_len_walker_next_area0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_next_area0; _i0++) {
    walker->next_area[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  int _len_walker_prev_area0 = 1;
  walker->prev_area = (int *) malloc(_len_walker_prev_area0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_prev_area0; _i0++) {
    walker->prev_area[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_Dlinked_link(struct TYPE_4__ *aux_dlinked_link[], int aux_dlinked_link_size) {
  for(int i = 0; i < aux_dlinked_link_size; i++) 
    if(aux_dlinked_link[i])
      free(aux_dlinked_link[i]);
}

struct TYPE_4__ *_allocateBinTree_link(int length, struct TYPE_4__ *aux_tree_link[], int *counter_link) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_link[*counter_link] = walker;
  (*counter_link)++;
  int _len_walker_next_area0 = 1;
  walker->next_area = (int *) malloc(_len_walker_next_area0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_next_area0; _i0++) {
    walker->next_area[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  int _len_walker_prev_area0 = 1;
  walker->prev_area = (int *) malloc(_len_walker_prev_area0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_prev_area0; _i0++) {
    walker->prev_area[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->next_ent = _allocateBinTree_link(length - 1, aux_tree_link, counter_link);
  walker->prev_ent = _allocateBinTree_link(length - 1, aux_tree_link, counter_link);
  return walker;
}

void _deleteBinTree_link(struct TYPE_4__ *aux_tree_link[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_link[i])
      free(aux_tree_link[i]);
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
          struct TYPE_4__ * aux_link[1];
          struct TYPE_4__ * link = _allocate_link(1, aux_link);
          AAS_DeAllocAASLink(link);
          _delete_link(aux_link, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_4__ * aux_link[10000];
          struct TYPE_4__ * link = _allocate_link(10000, aux_link);
          AAS_DeAllocAASLink(link);
          _delete_link(aux_link, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct TYPE_4__ * aux_dlinked_link[10000];
          struct TYPE_4__ * link = _allocate_Dlinked_link(10000, aux_dlinked_link);
          AAS_DeAllocAASLink(link);
          _delete_Dlinked_link(aux_dlinked_link, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_link= 0;
          struct TYPE_4__ *  aux_tree_link[1023];
          struct TYPE_4__ * link = _allocateBinTree_link(10, aux_tree_link, &counter_link);
          AAS_DeAllocAASLink(link);
          _deleteBinTree_link(aux_tree_link);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
