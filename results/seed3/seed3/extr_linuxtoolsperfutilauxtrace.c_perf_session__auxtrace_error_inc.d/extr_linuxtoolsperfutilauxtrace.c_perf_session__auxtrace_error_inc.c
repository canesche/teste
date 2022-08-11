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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct auxtrace_error_event {size_t type; } ;
union perf_event {struct auxtrace_error_event auxtrace_error; } ;
struct perf_session {TYPE_2__* evlist; } ;
struct TYPE_3__ {int* nr_auxtrace_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;

/* Variables and functions */
 size_t PERF_AUXTRACE_ERROR_MAX ; 

void perf_session__auxtrace_error_inc(struct perf_session *session,
				      union perf_event *event)
{
	struct auxtrace_error_event *e = &event->auxtrace_error;

	if (e->type < PERF_AUXTRACE_ERROR_MAX)
		session->evlist->stats.nr_auxtrace_errors[e->type] += 1;
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
          int _len_session0 = 1;
          struct perf_session * session = (struct perf_session *) malloc(_len_session0*sizeof(struct perf_session));
          for(int _i0 = 0; _i0 < _len_session0; _i0++) {
              int _len_session__i0__evlist0 = 1;
          session[_i0].evlist = (struct TYPE_4__ *) malloc(_len_session__i0__evlist0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_session__i0__evlist0; _j0++) {
              int _len_session__i0__evlist_stats_nr_auxtrace_errors0 = 1;
          session[_i0].evlist->stats.nr_auxtrace_errors = (int *) malloc(_len_session__i0__evlist_stats_nr_auxtrace_errors0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_session__i0__evlist_stats_nr_auxtrace_errors0; _j0++) {
            session[_i0].evlist->stats.nr_auxtrace_errors[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_event0 = 1;
          union perf_event * event = (union perf_event *) malloc(_len_event0*sizeof(union perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0] = 0;
          }
          perf_session__auxtrace_error_inc(session,event);
          for(int _aux = 0; _aux < _len_session0; _aux++) {
          free(session[_aux].evlist);
          }
          free(session);
          free(event);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_session0 = 65025;
          struct perf_session * session = (struct perf_session *) malloc(_len_session0*sizeof(struct perf_session));
          for(int _i0 = 0; _i0 < _len_session0; _i0++) {
              int _len_session__i0__evlist0 = 1;
          session[_i0].evlist = (struct TYPE_4__ *) malloc(_len_session__i0__evlist0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_session__i0__evlist0; _j0++) {
              int _len_session__i0__evlist_stats_nr_auxtrace_errors0 = 1;
          session[_i0].evlist->stats.nr_auxtrace_errors = (int *) malloc(_len_session__i0__evlist_stats_nr_auxtrace_errors0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_session__i0__evlist_stats_nr_auxtrace_errors0; _j0++) {
            session[_i0].evlist->stats.nr_auxtrace_errors[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_event0 = 65025;
          union perf_event * event = (union perf_event *) malloc(_len_event0*sizeof(union perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0] = 0;
          }
          perf_session__auxtrace_error_inc(session,event);
          for(int _aux = 0; _aux < _len_session0; _aux++) {
          free(session[_aux].evlist);
          }
          free(session);
          free(event);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_session0 = 100;
          struct perf_session * session = (struct perf_session *) malloc(_len_session0*sizeof(struct perf_session));
          for(int _i0 = 0; _i0 < _len_session0; _i0++) {
              int _len_session__i0__evlist0 = 1;
          session[_i0].evlist = (struct TYPE_4__ *) malloc(_len_session__i0__evlist0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_session__i0__evlist0; _j0++) {
              int _len_session__i0__evlist_stats_nr_auxtrace_errors0 = 1;
          session[_i0].evlist->stats.nr_auxtrace_errors = (int *) malloc(_len_session__i0__evlist_stats_nr_auxtrace_errors0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_session__i0__evlist_stats_nr_auxtrace_errors0; _j0++) {
            session[_i0].evlist->stats.nr_auxtrace_errors[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_event0 = 100;
          union perf_event * event = (union perf_event *) malloc(_len_event0*sizeof(union perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0] = 0;
          }
          perf_session__auxtrace_error_inc(session,event);
          for(int _aux = 0; _aux < _len_session0; _aux++) {
          free(session[_aux].evlist);
          }
          free(session);
          free(event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
