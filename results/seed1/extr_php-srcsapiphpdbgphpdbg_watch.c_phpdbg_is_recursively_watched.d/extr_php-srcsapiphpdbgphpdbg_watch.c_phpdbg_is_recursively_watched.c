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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int zend_bool ;
struct TYPE_7__ {int flags; struct TYPE_7__* parent; TYPE_2__* watch; } ;
typedef  TYPE_3__ phpdbg_watch_element ;
struct TYPE_5__ {void* ptr; } ;
struct TYPE_6__ {TYPE_1__ addr; } ;

/* Variables and functions */
 int PHPDBG_WATCH_RECURSIVE_ROOT ; 

zend_bool phpdbg_is_recursively_watched(void *ptr, phpdbg_watch_element *element) {
	phpdbg_watch_element *next = element;
	do {
		element = next;
		if (element->watch->addr.ptr == ptr) {
			return 1;
		}
		next = element->parent;
	} while (!(element->flags & PHPDBG_WATCH_RECURSIVE_ROOT));

	return 0;
}


// ------------------------------------------------------------------------- //

struct TYPE_7__ *_allocate_element(int length, struct TYPE_7__ *aux_element[]) {
  struct TYPE_7__ *walker = (struct TYPE_7__ *)malloc(sizeof(struct TYPE_7__));

  aux_element[0] = walker;
walker->flags = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->parent = NULL;
  int _len_walker_watch0 = 1;
  walker->watch = (struct TYPE_6__ *) malloc(_len_walker_watch0*sizeof(struct TYPE_6__));
  for(int _i0 = 0; _i0 < _len_walker_watch0; _i0++) {
      }

  struct TYPE_7__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct TYPE_7__ *)malloc(sizeof(struct TYPE_7__));
    walker = walker->parent;
    aux_element[i] = walker;
walker->flags = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->parent = NULL;
  int _len_walker_watch0 = 1;
  walker->watch = (struct TYPE_6__ *) malloc(_len_walker_watch0*sizeof(struct TYPE_6__));
  for(int _i0 = 0; _i0 < _len_walker_watch0; _i0++) {
      }
  }

  return head;
}

void _delete_element(struct TYPE_7__ *aux_element[], int aux_element_size) {
  for(int i = 0; i < aux_element_size; i++) 
    if(aux_element[i])
      free(aux_element[i]);
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
          void * ptr;
          struct TYPE_7__ * aux_element[1];
          struct TYPE_7__ * element = _allocate_element(1, aux_element);
          int benchRet = phpdbg_is_recursively_watched(ptr,element);
          printf("%d\n", benchRet); 
          _delete_element(aux_element, 1);
        
        break;
    }
    // linked
    case 3:
    {
          void * ptr;
          struct TYPE_7__ * aux_element[10000];
          struct TYPE_7__ * element = _allocate_element(10000, aux_element);
          int benchRet = phpdbg_is_recursively_watched(ptr,element);
          printf("%d\n", benchRet); 
          _delete_element(aux_element, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
