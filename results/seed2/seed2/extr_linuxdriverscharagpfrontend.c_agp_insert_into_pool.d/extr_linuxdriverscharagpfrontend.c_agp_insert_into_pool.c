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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct agp_memory {struct agp_memory* next; struct agp_memory* prev; } ;
struct TYPE_4__ {TYPE_1__* current_controller; } ;
struct TYPE_3__ {struct agp_memory* pool; } ;

/* Variables and functions */
 TYPE_2__ agp_fe ; 

__attribute__((used)) static void agp_insert_into_pool(struct agp_memory * temp)
{
	struct agp_memory *prev;

	prev = agp_fe.current_controller->pool;

	if (prev != NULL) {
		prev->prev = temp;
		temp->next = prev;
	}
	agp_fe.current_controller->pool = temp;
}


// ------------------------------------------------------------------------- //

struct agp_memory *_allocate_temp(int length, struct agp_memory *aux_temp[]) {
  struct agp_memory *walker = (struct agp_memory *)malloc(sizeof(struct agp_memory));

  aux_temp[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct agp_memory *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct agp_memory *)malloc(sizeof(struct agp_memory));
    walker = walker->next;
    aux_temp[i] = walker;
    walker->prev = (struct agp_memory *)malloc(sizeof(struct agp_memory));
    walker = walker->prev;
    aux_temp[i] = walker;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_temp(struct agp_memory *aux_temp[], int aux_temp_size) {
  for(int i = 0; i < aux_temp_size; i++) 
    if(aux_temp[i])
      free(aux_temp[i]);
}

struct agp_memory *_allocate_Dlinked_temp(int length, struct agp_memory *aux_dlinked_temp[] ) {
  struct agp_memory *walker = (struct agp_memory *)malloc(sizeof(struct agp_memory));

  aux_dlinked_temp[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct agp_memory *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct agp_memory *)malloc(sizeof(struct agp_memory));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_temp[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_temp(struct agp_memory *aux_dlinked_temp[], int aux_dlinked_temp_size) {
  for(int i = 0; i < aux_dlinked_temp_size; i++) 
    if(aux_dlinked_temp[i])
      free(aux_dlinked_temp[i]);
}

struct agp_memory *_allocateBinTree_temp(int length, struct agp_memory *aux_tree_temp[], int *counter_temp) {
  if(length == 0)
    return NULL;
  struct agp_memory *walker = (struct agp_memory *)malloc(sizeof(struct agp_memory));

  aux_tree_temp[*counter_temp] = walker;
  (*counter_temp)++;
  walker->next = _allocateBinTree_temp(length - 1, aux_tree_temp, counter_temp);
  walker->prev = _allocateBinTree_temp(length - 1, aux_tree_temp, counter_temp);
  return walker;
}

void _deleteBinTree_temp(struct agp_memory *aux_tree_temp[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_temp[i])
      free(aux_tree_temp[i]);
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
          struct agp_memory * aux_temp[1];
          struct agp_memory * temp = _allocate_temp(1, aux_temp);
          agp_insert_into_pool(temp);
          _delete_temp(aux_temp, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct agp_memory * aux_temp[10000];
          struct agp_memory * temp = _allocate_temp(10000, aux_temp);
          agp_insert_into_pool(temp);
          _delete_temp(aux_temp, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct agp_memory * aux_dlinked_temp[10000];
          struct agp_memory * temp = _allocate_Dlinked_temp(10000, aux_dlinked_temp);
          agp_insert_into_pool(temp);
          _delete_Dlinked_temp(aux_dlinked_temp, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_temp= 0;
          struct agp_memory *  aux_tree_temp[1023];
          struct agp_memory * temp = _allocateBinTree_temp(10, aux_tree_temp, &counter_temp);
          agp_insert_into_pool(temp);
          _deleteBinTree_temp(aux_tree_temp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
