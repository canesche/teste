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
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int /*<<< orphan*/ * x; int /*<<< orphan*/ * y; } ;
typedef  TYPE_1__ shmap_pair_string_vptr ;
struct TYPE_9__ {scalar_t__ id; int /*<<< orphan*/ * name; int /*<<< orphan*/ * extra; } ;
typedef  TYPE_2__ queue ;
typedef  scalar_t__ qtype ;

/* Variables and functions */
 scalar_t__ Q_WATCHCAT ; 
 scalar_t__ ZERO_UID ; 
 int /*<<< orphan*/  alias ; 
 int /*<<< orphan*/  dbg (char*,scalar_t__) ; 
 scalar_t__ dl_get_memory_used () ; 
 int /*<<< orphan*/  dl_strfree (int /*<<< orphan*/ *) ; 
 scalar_t__ get_qtype (int /*<<< orphan*/ *) ; 
 int /*<<< orphan*/  h_queue ; 
 int /*<<< orphan*/  map_ll_vptr_del (int /*<<< orphan*/ *,scalar_t__) ; 
 int /*<<< orphan*/  process_user_query_queue (TYPE_2__*) ; 
 int /*<<< orphan*/  queue_clear_subs (TYPE_2__*) ; 
 int /*<<< orphan*/  queue_free (TYPE_2__*) ; 
 int /*<<< orphan*/  shmap_string_vptr_del (int /*<<< orphan*/ *,TYPE_1__) ; 
 int /*<<< orphan*/  str_memory ; 

inline void delete_queue (queue *q) {
  if (q->name != NULL) {
    //fprintf (stderr, "DEL queue [%s]\n", q->name);
    shmap_pair_string_vptr a;
    a.y = NULL;
    a.x = q->name;

    shmap_string_vptr_del (&h_queue, a);

    //TODO why process but not close?
    process_user_query_queue (q);

    qtype tp = get_qtype (q->name);

    if (tp == Q_WATCHCAT) {
      str_memory -= dl_get_memory_used();
      dl_strfree (q->extra);
      str_memory += dl_get_memory_used();
      q->extra = NULL;
    }

    queue_clear_subs (q);

    str_memory -= dl_get_memory_used();
    dl_strfree (q->name);
    str_memory += dl_get_memory_used();
    q->name = NULL;

    if (q->id == 0) {
      q->id = ZERO_UID;
    }
    map_ll_vptr_del (&alias, q->id);
    dbg ("del alias %lld\n", q->id);

    queue_free (q);
  }
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
          long long = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_char0 = 1;
          * char = (*) malloc(_len_char0*sizeof());
          for(int _i0 = 0; _i0 < _len_char0; _i0++) {
            char[_i0] = 0;
          }
          int benchRet = dbg(char,long);
          printf("%d\n", benchRet); 
          free(char);
        
        break;
    }
    // big-arr
    case 1:
    {
          long long = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_char0 = 65025;
          * char = (*) malloc(_len_char0*sizeof());
          for(int _i0 = 0; _i0 < _len_char0; _i0++) {
            char[_i0] = 0;
          }
          int benchRet = dbg(char,long);
          printf("%d\n", benchRet); 
          free(char);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long long = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_char0 = 100;
          * char = (*) malloc(_len_char0*sizeof());
          for(int _i0 = 0; _i0 < _len_char0; _i0++) {
            char[_i0] = 0;
          }
          int benchRet = dbg(char,long);
          printf("%d\n", benchRet); 
          free(char);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
