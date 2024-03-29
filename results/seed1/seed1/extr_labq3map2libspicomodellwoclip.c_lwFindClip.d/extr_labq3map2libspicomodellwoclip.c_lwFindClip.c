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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int index; struct TYPE_4__* next; } ;
typedef  TYPE_1__ lwClip ;

/* Variables and functions */

lwClip *lwFindClip( lwClip *list, int index ){
	lwClip *clip;

	clip = list;
	while ( clip ) {
		if ( clip->index == index ) {
			break;
		}
		clip = clip->next;
	}
	return clip;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_list(int length, struct TYPE_4__ *aux_list[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_list[0] = walker;
walker->index = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->next = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_list[i] = walker;
walker->index = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->next = NULL;
  }

  return head;
}

void _delete_list(struct TYPE_4__ *aux_list[], int aux_list_size) {
  for(int i = 0; i < aux_list_size; i++) 
    if(aux_list[i])
      free(aux_list[i]);
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
          int index = 100;
          struct TYPE_4__ * aux_list[1];
          struct TYPE_4__ * list = _allocate_list(1, aux_list);
          struct TYPE_4__ * benchRet = lwFindClip(list,index);
          printf("%d\n", (*benchRet).index);
          _delete_list(aux_list, 1);
        
        break;
    }
    // linked
    case 3:
    {
          int index = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_4__ * aux_list[10000];
          struct TYPE_4__ * list = _allocate_list(10000, aux_list);
          struct TYPE_4__ * benchRet = lwFindClip(list,index);
          printf("%d\n", (*benchRet).index);
          _delete_list(aux_list, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
