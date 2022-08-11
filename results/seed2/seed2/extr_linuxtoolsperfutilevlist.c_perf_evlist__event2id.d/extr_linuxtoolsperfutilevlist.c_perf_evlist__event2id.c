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
struct TYPE_4__ {int size; scalar_t__ type; } ;
struct TYPE_3__ {int /*<<< orphan*/ * array; } ;
union perf_event {TYPE_2__ header; TYPE_1__ sample; } ;
typedef  int /*<<< orphan*/  u64 ;
struct perf_evlist {size_t id_pos; size_t is_pos; } ;
typedef  size_t ssize_t ;

/* Variables and functions */
 scalar_t__ PERF_RECORD_SAMPLE ; 

__attribute__((used)) static int perf_evlist__event2id(struct perf_evlist *evlist,
				 union perf_event *event, u64 *id)
{
	const u64 *array = event->sample.array;
	ssize_t n;

	n = (event->header.size - sizeof(event->header)) >> 3;

	if (event->header.type == PERF_RECORD_SAMPLE) {
		if (evlist->id_pos >= n)
			return -1;
		*id = array[evlist->id_pos];
	} else {
		if (evlist->is_pos > n)
			return -1;
		n -= evlist->is_pos;
		*id = array[n];
	}
	return 0;
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
          int _len_evlist0 = 1;
          struct perf_evlist * evlist = (struct perf_evlist *) malloc(_len_evlist0*sizeof(struct perf_evlist));
          for(int _i0 = 0; _i0 < _len_evlist0; _i0++) {
            evlist[_i0].id_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        evlist[_i0].is_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_event0 = 1;
          union perf_event * event = (union perf_event *) malloc(_len_event0*sizeof(union perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0] = 0;
          }
          int _len_id0 = 1;
          int * id = (int *) malloc(_len_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = perf_evlist__event2id(evlist,event,id);
          printf("%d\n", benchRet); 
          free(evlist);
          free(event);
          free(id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_evlist0 = 65025;
          struct perf_evlist * evlist = (struct perf_evlist *) malloc(_len_evlist0*sizeof(struct perf_evlist));
          for(int _i0 = 0; _i0 < _len_evlist0; _i0++) {
            evlist[_i0].id_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        evlist[_i0].is_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_event0 = 65025;
          union perf_event * event = (union perf_event *) malloc(_len_event0*sizeof(union perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0] = 0;
          }
          int _len_id0 = 65025;
          int * id = (int *) malloc(_len_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = perf_evlist__event2id(evlist,event,id);
          printf("%d\n", benchRet); 
          free(evlist);
          free(event);
          free(id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_evlist0 = 100;
          struct perf_evlist * evlist = (struct perf_evlist *) malloc(_len_evlist0*sizeof(struct perf_evlist));
          for(int _i0 = 0; _i0 < _len_evlist0; _i0++) {
            evlist[_i0].id_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        evlist[_i0].is_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_event0 = 100;
          union perf_event * event = (union perf_event *) malloc(_len_event0*sizeof(union perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0] = 0;
          }
          int _len_id0 = 100;
          int * id = (int *) malloc(_len_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = perf_evlist__event2id(evlist,event,id);
          printf("%d\n", benchRet); 
          free(evlist);
          free(event);
          free(id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
