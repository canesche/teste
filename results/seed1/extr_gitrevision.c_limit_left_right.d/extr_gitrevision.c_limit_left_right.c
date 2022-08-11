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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct rev_info {scalar_t__ right_only; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;

/* Variables and functions */
 int SHOWN ; 
 int SYMMETRIC_LEFT ; 

__attribute__((used)) static void limit_left_right(struct commit_list *list, struct rev_info *revs)
{
	struct commit_list *p;

	for (p = list; p; p = p->next) {
		struct commit *commit = p->item;

		if (revs->right_only) {
			if (commit->object.flags & SYMMETRIC_LEFT)
				commit->object.flags |= SHOWN;
		} else	/* revs->left_only is set */
			if (!(commit->object.flags & SYMMETRIC_LEFT))
				commit->object.flags |= SHOWN;
	}
}


// ------------------------------------------------------------------------- //

struct commit_list *_allocate_list(int length, struct commit_list *aux_list[]) {
  struct commit_list *walker = (struct commit_list *)malloc(sizeof(struct commit_list));

  aux_list[0] = walker;
  int _len_walker_item0 = 1;
  walker->item = (struct commit *) malloc(_len_walker_item0*sizeof(struct commit));
  for(int _i0 = 0; _i0 < _len_walker_item0; _i0++) {
    walker->item.object.flags = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->next = NULL;

  struct commit_list *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct commit_list *)malloc(sizeof(struct commit_list));
    walker = walker->next;
    aux_list[i] = walker;
  int _len_walker_item0 = 1;
  walker->item = (struct commit *) malloc(_len_walker_item0*sizeof(struct commit));
  for(int _i0 = 0; _i0 < _len_walker_item0; _i0++) {
    walker->item.object.flags = ((-2 * (next_i()%2)) + 1) * next_i();
  }
    walker->next = NULL;
  }

  return head;
}

void _delete_list(struct commit_list *aux_list[], int aux_list_size) {
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
          struct commit_list * aux_list[1];
          struct commit_list * list = _allocate_list(1, aux_list);
          int _len_revs0 = 1;
          struct rev_info * revs = (struct rev_info *) malloc(_len_revs0*sizeof(struct rev_info));
          for(int _i0 = 0; _i0 < _len_revs0; _i0++) {
            revs[_i0].right_only = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          limit_left_right(list,revs);
          _delete_list(aux_list, 1);
          free(revs);
        
        break;
    }
    // linked
    case 3:
    {
          struct commit_list * aux_list[10000];
          struct commit_list * list = _allocate_list(10000, aux_list);
          int _len_revs0 = 1;
          struct rev_info * revs = (struct rev_info *) malloc(_len_revs0*sizeof(struct rev_info));
          for(int _i0 = 0; _i0 < _len_revs0; _i0++) {
            revs[_i0].right_only = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          limit_left_right(list,revs);
          _delete_list(aux_list, 10000);
          free(revs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
