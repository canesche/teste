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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct config_store_data {int* seen; int parsed_nr; int seen_nr; TYPE_1__* parsed; } ;
typedef  enum config_event_t { ____Placeholder_config_event_t } config_event_t ;
struct TYPE_2__ {int type; size_t begin; size_t end; scalar_t__ is_keys_section; } ;

/* Variables and functions */
 int CONFIG_EVENT_COMMENT ; 
 int CONFIG_EVENT_ENTRY ; 
 int CONFIG_EVENT_SECTION ; 

__attribute__((used)) static void maybe_remove_section(struct config_store_data *store,
				 size_t *begin_offset, size_t *end_offset,
				 int *seen_ptr)
{
	size_t begin;
	int i, seen, section_seen = 0;

	/*
	 * First, ensure that this is the first key, and that there are no
	 * comments before the entry nor before the section header.
	 */
	seen = *seen_ptr;
	for (i = store->seen[seen]; i > 0; i--) {
		enum config_event_t type = store->parsed[i - 1].type;

		if (type == CONFIG_EVENT_COMMENT)
			/* There is a comment before this entry or section */
			return;
		if (type == CONFIG_EVENT_ENTRY) {
			if (!section_seen)
				/* This is not the section's first entry. */
				return;
			/* We encountered no comment before the section. */
			break;
		}
		if (type == CONFIG_EVENT_SECTION) {
			if (!store->parsed[i - 1].is_keys_section)
				break;
			section_seen = 1;
		}
	}
	begin = store->parsed[i].begin;

	/*
	 * Next, make sure that we are removing he last key(s) in the section,
	 * and that there are no comments that are possibly about the current
	 * section.
	 */
	for (i = store->seen[seen] + 1; i < store->parsed_nr; i++) {
		enum config_event_t type = store->parsed[i].type;

		if (type == CONFIG_EVENT_COMMENT)
			return;
		if (type == CONFIG_EVENT_SECTION) {
			if (store->parsed[i].is_keys_section)
				continue;
			break;
		}
		if (type == CONFIG_EVENT_ENTRY) {
			if (++seen < store->seen_nr &&
			    i == store->seen[seen])
				/* We want to remove this entry, too */
				continue;
			/* There is another entry in this section. */
			return;
		}
	}

	/*
	 * We are really removing the last entry/entries from this section, and
	 * there are no enclosed or surrounding comments. Remove the entire,
	 * now-empty section.
	 */
	*seen_ptr = seen;
	*begin_offset = begin;
	if (i < store->parsed_nr)
		*end_offset = store->parsed[i].begin;
	else
		*end_offset = store->parsed[store->parsed_nr - 1].end;
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
          int _len_store0 = 1;
          struct config_store_data * store = (struct config_store_data *) malloc(_len_store0*sizeof(struct config_store_data));
          for(int _i0 = 0; _i0 < _len_store0; _i0++) {
              int _len_store__i0__seen0 = 1;
          store[_i0].seen = (int *) malloc(_len_store__i0__seen0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_store__i0__seen0; _j0++) {
            store[_i0].seen[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        store[_i0].parsed_nr = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].seen_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_store__i0__parsed0 = 1;
          store[_i0].parsed = (struct TYPE_2__ *) malloc(_len_store__i0__parsed0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_store__i0__parsed0; _j0++) {
            store[_i0].parsed->type = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].parsed->begin = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].parsed->end = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].parsed->is_keys_section = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_begin_offset0 = 1;
          unsigned long * begin_offset = (unsigned long *) malloc(_len_begin_offset0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_begin_offset0; _i0++) {
            begin_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end_offset0 = 1;
          unsigned long * end_offset = (unsigned long *) malloc(_len_end_offset0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_end_offset0; _i0++) {
            end_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_seen_ptr0 = 1;
          int * seen_ptr = (int *) malloc(_len_seen_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_seen_ptr0; _i0++) {
            seen_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          maybe_remove_section(store,begin_offset,end_offset,seen_ptr);
          for(int _aux = 0; _aux < _len_store0; _aux++) {
          free(store[_aux].seen);
          }
          for(int _aux = 0; _aux < _len_store0; _aux++) {
          free(store[_aux].parsed);
          }
          free(store);
          free(begin_offset);
          free(end_offset);
          free(seen_ptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_store0 = 65025;
          struct config_store_data * store = (struct config_store_data *) malloc(_len_store0*sizeof(struct config_store_data));
          for(int _i0 = 0; _i0 < _len_store0; _i0++) {
              int _len_store__i0__seen0 = 1;
          store[_i0].seen = (int *) malloc(_len_store__i0__seen0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_store__i0__seen0; _j0++) {
            store[_i0].seen[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        store[_i0].parsed_nr = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].seen_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_store__i0__parsed0 = 1;
          store[_i0].parsed = (struct TYPE_2__ *) malloc(_len_store__i0__parsed0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_store__i0__parsed0; _j0++) {
            store[_i0].parsed->type = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].parsed->begin = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].parsed->end = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].parsed->is_keys_section = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_begin_offset0 = 65025;
          unsigned long * begin_offset = (unsigned long *) malloc(_len_begin_offset0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_begin_offset0; _i0++) {
            begin_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end_offset0 = 65025;
          unsigned long * end_offset = (unsigned long *) malloc(_len_end_offset0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_end_offset0; _i0++) {
            end_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_seen_ptr0 = 65025;
          int * seen_ptr = (int *) malloc(_len_seen_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_seen_ptr0; _i0++) {
            seen_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          maybe_remove_section(store,begin_offset,end_offset,seen_ptr);
          for(int _aux = 0; _aux < _len_store0; _aux++) {
          free(store[_aux].seen);
          }
          for(int _aux = 0; _aux < _len_store0; _aux++) {
          free(store[_aux].parsed);
          }
          free(store);
          free(begin_offset);
          free(end_offset);
          free(seen_ptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_store0 = 100;
          struct config_store_data * store = (struct config_store_data *) malloc(_len_store0*sizeof(struct config_store_data));
          for(int _i0 = 0; _i0 < _len_store0; _i0++) {
              int _len_store__i0__seen0 = 1;
          store[_i0].seen = (int *) malloc(_len_store__i0__seen0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_store__i0__seen0; _j0++) {
            store[_i0].seen[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        store[_i0].parsed_nr = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].seen_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_store__i0__parsed0 = 1;
          store[_i0].parsed = (struct TYPE_2__ *) malloc(_len_store__i0__parsed0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_store__i0__parsed0; _j0++) {
            store[_i0].parsed->type = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].parsed->begin = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].parsed->end = ((-2 * (next_i()%2)) + 1) * next_i();
        store[_i0].parsed->is_keys_section = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_begin_offset0 = 100;
          unsigned long * begin_offset = (unsigned long *) malloc(_len_begin_offset0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_begin_offset0; _i0++) {
            begin_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end_offset0 = 100;
          unsigned long * end_offset = (unsigned long *) malloc(_len_end_offset0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_end_offset0; _i0++) {
            end_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_seen_ptr0 = 100;
          int * seen_ptr = (int *) malloc(_len_seen_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_seen_ptr0; _i0++) {
            seen_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          maybe_remove_section(store,begin_offset,end_offset,seen_ptr);
          for(int _aux = 0; _aux < _len_store0; _aux++) {
          free(store[_aux].seen);
          }
          for(int _aux = 0; _aux < _len_store0; _aux++) {
          free(store[_aux].parsed);
          }
          free(store);
          free(begin_offset);
          free(end_offset);
          free(seen_ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
