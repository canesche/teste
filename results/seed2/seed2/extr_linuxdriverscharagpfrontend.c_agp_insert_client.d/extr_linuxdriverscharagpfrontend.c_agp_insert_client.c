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
struct agp_client {struct agp_client* prev; struct agp_client* next; } ;
struct TYPE_4__ {TYPE_1__* current_controller; } ;
struct TYPE_3__ {int /*<<< orphan*/  num_clients; struct agp_client* clients; } ;

/* Variables and functions */
 TYPE_2__ agp_fe ; 

__attribute__((used)) static void agp_insert_client(struct agp_client *client)
{
	struct agp_client *prev_client;

	prev_client = agp_fe.current_controller->clients;
	client->next = prev_client;

	if (prev_client != NULL)
		prev_client->prev = client;

	agp_fe.current_controller->clients = client;
	agp_fe.current_controller->num_clients++;
}


// ------------------------------------------------------------------------- //

struct agp_client *_allocate_client(int length, struct agp_client *aux_client[]) {
  struct agp_client *walker = (struct agp_client *)malloc(sizeof(struct agp_client));

  aux_client[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct agp_client *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct agp_client *)malloc(sizeof(struct agp_client));
    walker = walker->prev;
    aux_client[i] = walker;
    walker->next = (struct agp_client *)malloc(sizeof(struct agp_client));
    walker = walker->next;
    aux_client[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_client(struct agp_client *aux_client[], int aux_client_size) {
  for(int i = 0; i < aux_client_size; i++) 
    if(aux_client[i])
      free(aux_client[i]);
}

struct agp_client *_allocate_Dlinked_client(int length, struct agp_client *aux_dlinked_client[] ) {
  struct agp_client *walker = (struct agp_client *)malloc(sizeof(struct agp_client));

  aux_dlinked_client[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct agp_client *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct agp_client *)malloc(sizeof(struct agp_client));
    walker->next->prev = walker;
    walker = walker->next;
    aux_dlinked_client[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;  }

  return head;
}

void _delete_Dlinked_client(struct agp_client *aux_dlinked_client[], int aux_dlinked_client_size) {
  for(int i = 0; i < aux_dlinked_client_size; i++) 
    if(aux_dlinked_client[i])
      free(aux_dlinked_client[i]);
}

struct agp_client *_allocateBinTree_client(int length, struct agp_client *aux_tree_client[], int *counter_client) {
  if(length == 0)
    return NULL;
  struct agp_client *walker = (struct agp_client *)malloc(sizeof(struct agp_client));

  aux_tree_client[*counter_client] = walker;
  (*counter_client)++;
  walker->prev = _allocateBinTree_client(length - 1, aux_tree_client, counter_client);
  walker->next = _allocateBinTree_client(length - 1, aux_tree_client, counter_client);
  return walker;
}

void _deleteBinTree_client(struct agp_client *aux_tree_client[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_client[i])
      free(aux_tree_client[i]);
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
          struct agp_client * aux_client[1];
          struct agp_client * client = _allocate_client(1, aux_client);
          agp_insert_client(client);
          _delete_client(aux_client, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct agp_client * aux_client[10000];
          struct agp_client * client = _allocate_client(10000, aux_client);
          agp_insert_client(client);
          _delete_client(aux_client, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct agp_client * aux_dlinked_client[10000];
          struct agp_client * client = _allocate_Dlinked_client(10000, aux_dlinked_client);
          agp_insert_client(client);
          _delete_Dlinked_client(aux_dlinked_client, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_client= 0;
          struct agp_client *  aux_tree_client[1023];
          struct agp_client * client = _allocateBinTree_client(10, aux_tree_client, &counter_client);
          agp_insert_client(client);
          _deleteBinTree_client(aux_tree_client);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
