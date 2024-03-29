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
       1            dlinked\n\
       2            bintree\n\
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
struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* prev; } ;
typedef  TYPE_1__ bot_consolemessage_t ;

/* Variables and functions */
 TYPE_1__* freeconsolemessages ; 

void FreeConsoleMessage(bot_consolemessage_t *message)
{
	if (freeconsolemessages) freeconsolemessages->prev = message;
	message->prev = NULL;
	message->next = freeconsolemessages;
	freeconsolemessages = message;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_message(int length, struct TYPE_4__ *aux_message[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_message[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_message[i] = walker;
    walker->prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->prev;
    aux_message[i] = walker;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_message(struct TYPE_4__ *aux_message[], int aux_message_size) {
  for(int i = 0; i < aux_message_size; i++) 
    if(aux_message[i])
      free(aux_message[i]);
}

struct TYPE_4__ *_allocate_Dlinked_message(int length, struct TYPE_4__ *aux_dlinked_message[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_message[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_message[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_message(struct TYPE_4__ *aux_dlinked_message[], int aux_dlinked_message_size) {
  for(int i = 0; i < aux_dlinked_message_size; i++) 
    if(aux_dlinked_message[i])
      free(aux_dlinked_message[i]);
}

struct TYPE_4__ *_allocateBinTree_message(int length, struct TYPE_4__ *aux_tree_message[], int *counter_message) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_message[*counter_message] = walker;
  (*counter_message)++;
  walker->next = _allocateBinTree_message(length - 1, aux_tree_message, counter_message);
  walker->prev = _allocateBinTree_message(length - 1, aux_tree_message, counter_message);
  return walker;
}

void _deleteBinTree_message(struct TYPE_4__ *aux_tree_message[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_message[i])
      free(aux_tree_message[i]);
}




// ------------------------------------------------------------------------- //

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
          struct TYPE_4__ * aux_message[1];
          struct TYPE_4__ * message = _allocate_message(1, aux_message);
          FreeConsoleMessage(message);
          _delete_message(aux_message, 1);
        
        break;
    }
    // dlinked
    case 1:
    {
          struct TYPE_4__ * aux_dlinked_message[10000];
          struct TYPE_4__ * message = _allocate_Dlinked_message(10000, aux_dlinked_message);
          FreeConsoleMessage(message);
          _delete_Dlinked_message(aux_dlinked_message, 10000);
        
        break;
    }
    // bintree
    case 2:
    {
          int counter_message= 0;
          struct TYPE_4__ *  aux_tree_message[1023];
          struct TYPE_4__ * message = _allocateBinTree_message(10, aux_tree_message, &counter_message);
          FreeConsoleMessage(message);
          _deleteBinTree_message(aux_tree_message);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
