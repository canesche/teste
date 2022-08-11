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
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct tep_handle {int nr_events; struct event_format** events; } ;
struct event_format {int dummy; } ;

/* Variables and functions */

struct event_format *trace_find_next_event(struct tep_handle *pevent,
					   struct event_format *event)
{
	static int idx;

	if (!pevent || !pevent->events)
		return NULL;

	if (!event) {
		idx = 0;
		return pevent->events[0];
	}

	if (idx < pevent->nr_events && event == pevent->events[idx]) {
		idx++;
		if (idx == pevent->nr_events)
			return NULL;
		return pevent->events[idx];
	}

	for (idx = 1; idx < pevent->nr_events; idx++) {
		if (event == pevent->events[idx - 1])
			return pevent->events[idx];
	}
	return NULL;
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
          int _len_pevent0 = 1;
          struct tep_handle * pevent = (struct tep_handle *) malloc(_len_pevent0*sizeof(struct tep_handle));
          for(int _i0 = 0; _i0 < _len_pevent0; _i0++) {
            pevent[_i0].nr_events = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pevent__i0__events0 = 1;
          pevent[_i0].events = (struct event_format **) malloc(_len_pevent__i0__events0*sizeof(struct event_format *));
          for(int _j0 = 0; _j0 < _len_pevent__i0__events0; _j0++) {
            int _len_pevent__i0__events1 = 1;
            pevent[_i0].events[_j0] = (struct event_format *) malloc(_len_pevent__i0__events1*sizeof(struct event_format));
            for(int _j1 = 0; _j1 < _len_pevent__i0__events1; _j1++) {
              pevent[_i0].events[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_event0 = 1;
          struct event_format * event = (struct event_format *) malloc(_len_event0*sizeof(struct event_format));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct event_format * benchRet = trace_find_next_event(pevent,event);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_pevent0; _aux++) {
          free(*(pevent[_aux].events));
        free(pevent[_aux].events);
          }
          free(pevent);
          free(event);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pevent0 = 65025;
          struct tep_handle * pevent = (struct tep_handle *) malloc(_len_pevent0*sizeof(struct tep_handle));
          for(int _i0 = 0; _i0 < _len_pevent0; _i0++) {
            pevent[_i0].nr_events = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pevent__i0__events0 = 1;
          pevent[_i0].events = (struct event_format **) malloc(_len_pevent__i0__events0*sizeof(struct event_format *));
          for(int _j0 = 0; _j0 < _len_pevent__i0__events0; _j0++) {
            int _len_pevent__i0__events1 = 1;
            pevent[_i0].events[_j0] = (struct event_format *) malloc(_len_pevent__i0__events1*sizeof(struct event_format));
            for(int _j1 = 0; _j1 < _len_pevent__i0__events1; _j1++) {
              pevent[_i0].events[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_event0 = 65025;
          struct event_format * event = (struct event_format *) malloc(_len_event0*sizeof(struct event_format));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct event_format * benchRet = trace_find_next_event(pevent,event);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_pevent0; _aux++) {
          free(*(pevent[_aux].events));
        free(pevent[_aux].events);
          }
          free(pevent);
          free(event);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pevent0 = 100;
          struct tep_handle * pevent = (struct tep_handle *) malloc(_len_pevent0*sizeof(struct tep_handle));
          for(int _i0 = 0; _i0 < _len_pevent0; _i0++) {
            pevent[_i0].nr_events = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pevent__i0__events0 = 1;
          pevent[_i0].events = (struct event_format **) malloc(_len_pevent__i0__events0*sizeof(struct event_format *));
          for(int _j0 = 0; _j0 < _len_pevent__i0__events0; _j0++) {
            int _len_pevent__i0__events1 = 1;
            pevent[_i0].events[_j0] = (struct event_format *) malloc(_len_pevent__i0__events1*sizeof(struct event_format));
            for(int _j1 = 0; _j1 < _len_pevent__i0__events1; _j1++) {
              pevent[_i0].events[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_event0 = 100;
          struct event_format * event = (struct event_format *) malloc(_len_event0*sizeof(struct event_format));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct event_format * benchRet = trace_find_next_event(pevent,event);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_pevent0; _aux++) {
          free(*(pevent[_aux].events));
        free(pevent[_aux].events);
          }
          free(pevent);
          free(event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
