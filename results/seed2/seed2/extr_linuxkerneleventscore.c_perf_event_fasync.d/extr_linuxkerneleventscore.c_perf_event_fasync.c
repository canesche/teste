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
struct perf_event {struct fasync_struct* fasync; struct perf_event* parent; } ;
struct fasync_struct {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct fasync_struct **perf_event_fasync(struct perf_event *event)
{
	/* only the parent has fasync state */
	if (event->parent)
		event = event->parent;
	return &event->fasync;
}


// ------------------------------------------------------------------------- //

struct perf_event *_allocate_event(int length, struct perf_event *aux_event[]) {
  struct perf_event *walker = (struct perf_event *)malloc(sizeof(struct perf_event));

  aux_event[0] = walker;
  int _len_walker_fasync0 = 1;
  walker->fasync = (struct fasync_struct *) malloc(_len_walker_fasync0*sizeof(struct fasync_struct));
  for(int _i0 = 0; _i0 < _len_walker_fasync0; _i0++) {
    walker->fasync.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->parent = NULL;

  struct perf_event *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct perf_event *)malloc(sizeof(struct perf_event));
    walker = walker->parent;
    aux_event[i] = walker;
  int _len_walker_fasync0 = 1;
  walker->fasync = (struct fasync_struct *) malloc(_len_walker_fasync0*sizeof(struct fasync_struct));
  for(int _i0 = 0; _i0 < _len_walker_fasync0; _i0++) {
    walker->fasync.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }
    walker->parent = NULL;
  }

  return head;
}

void _delete_event(struct perf_event *aux_event[], int aux_event_size) {
  for(int i = 0; i < aux_event_size; i++) 
    if(aux_event[i])
      free(aux_event[i]);
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
          struct perf_event * aux_event[1];
          struct perf_event * event = _allocate_event(1, aux_event);
          struct fasync_struct ** benchRet = perf_event_fasync(event);
          printf("%d\n", (**benchRet).dummy);
          _delete_event(aux_event, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct perf_event * aux_event[10000];
          struct perf_event * event = _allocate_event(10000, aux_event);
          struct fasync_struct ** benchRet = perf_event_fasync(event);
          printf("%d\n", (**benchRet).dummy);
          _delete_event(aux_event, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
