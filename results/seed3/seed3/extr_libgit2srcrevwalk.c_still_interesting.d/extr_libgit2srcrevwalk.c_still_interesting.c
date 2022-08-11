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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ int64_t ;
struct TYPE_5__ {TYPE_1__* item; struct TYPE_5__* next; } ;
typedef  TYPE_2__ git_commit_list ;
struct TYPE_4__ {scalar_t__ time; int /*<<< orphan*/  uninteresting; } ;

/* Variables and functions */
 int SLOP ; 

__attribute__((used)) static int still_interesting(git_commit_list *list, int64_t time, int slop)
{
	/* The empty list is pretty boring */
	if (!list)
		return 0;

	/*
	 * If the destination list has commits with an earlier date than our
	 * source, we want to reset the slop counter as we're not done.
	 */
	if (time <= list->item->time)
		return SLOP;

	for (; list; list = list->next) {
		/*
		 * If the destination list still contains interesting commits we
		 * want to continue looking.
		 */
		if (!list->item->uninteresting || list->item->time > time)
			return SLOP;
	}

	/* Everything's uninteresting, reduce the count */
	return slop - 1;
}


// ------------------------------------------------------------------------- //

struct TYPE_5__ *_allocate_list(int length, struct TYPE_5__ *aux_list[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_list[0] = walker;
  int _len_walker_item0 = 1;
  walker->item = (struct TYPE_4__ *) malloc(_len_walker_item0*sizeof(struct TYPE_4__));
  for(int _i0 = 0; _i0 < _len_walker_item0; _i0++) {
    walker->item.time = ((-2 * (next_i()%2)) + 1) * next_i();
walker->item.uninteresting = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->next = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->next;
    aux_list[i] = walker;
  int _len_walker_item0 = 1;
  walker->item = (struct TYPE_4__ *) malloc(_len_walker_item0*sizeof(struct TYPE_4__));
  for(int _i0 = 0; _i0 < _len_walker_item0; _i0++) {
    walker->item.time = ((-2 * (next_i()%2)) + 1) * next_i();
walker->item.uninteresting = ((-2 * (next_i()%2)) + 1) * next_i();
  }
    walker->next = NULL;
  }

  return head;
}

void _delete_list(struct TYPE_5__ *aux_list[], int aux_list_size) {
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
          long time = 100;
          int slop = 100;
          struct TYPE_5__ * aux_list[1];
          struct TYPE_5__ * list = _allocate_list(1, aux_list);
          int benchRet = still_interesting(list,time,slop);
          printf("%d\n", benchRet); 
          _delete_list(aux_list, 1);
        
        break;
    }
    // linked
    case 3:
    {
          long time = ((-2 * (next_i()%2)) + 1) * next_i();
          int slop = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_5__ * aux_list[10000];
          struct TYPE_5__ * list = _allocate_list(10000, aux_list);
          int benchRet = still_interesting(list,time,slop);
          printf("%d\n", benchRet); 
          _delete_list(aux_list, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
