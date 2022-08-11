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

/* Type definitions */
struct fpm_event_s {int dummy; } ;
struct fpm_event_queue_s {struct fpm_event_queue_s* next; struct fpm_event_s* ev; } ;

/* Variables and functions */

__attribute__((used)) static struct fpm_event_s *fpm_event_queue_isset(struct fpm_event_queue_s *queue, struct fpm_event_s *ev) /* {{{ */
{
	if (!ev) {
		return NULL;
	}

	while (queue) {
		if (queue->ev == ev) {
			return ev;
		}
		queue = queue->next;
	}

	return NULL;
}


// ------------------------------------------------------------------------- //

struct fpm_event_queue_s *_allocate_queue(int length, struct fpm_event_queue_s *aux_queue[]) {
  struct fpm_event_queue_s *walker = (struct fpm_event_queue_s *)malloc(sizeof(struct fpm_event_queue_s));

  aux_queue[0] = walker;
  walker->next = NULL;
  int _len_walker_ev0 = 1;
  walker->ev = (struct fpm_event_s *) malloc(_len_walker_ev0*sizeof(struct fpm_event_s));
  for(int _i0 = 0; _i0 < _len_walker_ev0; _i0++) {
    walker->ev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  struct fpm_event_queue_s *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct fpm_event_queue_s *)malloc(sizeof(struct fpm_event_queue_s));
    walker = walker->next;
    aux_queue[i] = walker;
    walker->next = NULL;
  int _len_walker_ev0 = 1;
  walker->ev = (struct fpm_event_s *) malloc(_len_walker_ev0*sizeof(struct fpm_event_s));
  for(int _i0 = 0; _i0 < _len_walker_ev0; _i0++) {
    walker->ev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_queue(struct fpm_event_queue_s *aux_queue[], int aux_queue_size) {
  for(int i = 0; i < aux_queue_size; i++) 
    if(aux_queue[i])
      free(aux_queue[i]);
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
          struct fpm_event_queue_s * aux_queue[1];
          struct fpm_event_queue_s * queue = _allocate_queue(1, aux_queue);
          int _len_ev0 = 1;
          struct fpm_event_s * ev = (struct fpm_event_s *) malloc(_len_ev0*sizeof(struct fpm_event_s));
          for(int _i0 = 0; _i0 < _len_ev0; _i0++) {
            ev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct fpm_event_s * benchRet = fpm_event_queue_isset(queue,ev);
          printf("%d\n", (*benchRet).dummy);
          _delete_queue(aux_queue, 1);
          free(ev);
        
        break;
    }
    // linked
    case 3:
    {
          struct fpm_event_queue_s * aux_queue[10000];
          struct fpm_event_queue_s * queue = _allocate_queue(10000, aux_queue);
          int _len_ev0 = 1;
          struct fpm_event_s * ev = (struct fpm_event_s *) malloc(_len_ev0*sizeof(struct fpm_event_s));
          for(int _i0 = 0; _i0 < _len_ev0; _i0++) {
            ev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct fpm_event_s * benchRet = fpm_event_queue_isset(queue,ev);
          printf("%d\n", (*benchRet).dummy);
          _delete_queue(aux_queue, 10000);
          free(ev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
