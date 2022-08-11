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
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/  s; scalar_t__ id; TYPE_2__* q; } ;
typedef  TYPE_1__ subscribers ;
struct TYPE_7__ {int /*<<< orphan*/  subscr_cnt; } ;
typedef  TYPE_2__ queue ;
typedef  scalar_t__ ll ;

/* Variables and functions */
 int /*<<< orphan*/  IS_UID (scalar_t__) ; 
 TYPE_1__* alloc_subscribers () ; 
 int /*<<< orphan*/  assert (int /*<<< orphan*/ ) ; 
 int /*<<< orphan*/  fprintf (int /*<<< orphan*/ ,char*,scalar_t__) ; 
 TYPE_2__* get_queue_by_alias (scalar_t__) ; 
 int /*<<< orphan*/  h_subscribers ; 
 scalar_t__ hset_llp_add (int /*<<< orphan*/ *,scalar_t__*) ; 
 scalar_t__ hset_llp_get (int /*<<< orphan*/ *,scalar_t__*) ; 
 int my_verbosity ; 
 int /*<<< orphan*/  stderr ; 
 int /*<<< orphan*/  treap_init (int /*<<< orphan*/ *) ; 

inline subscribers *get_subscribers (ll id, int force) {
  subscribers **b;

  // FAIL: TOO MUCH LOG DATA dbg ("get_subscribers %lld (force = %d)\n", id, force);

  if (force) {
    queue *q = NULL;

    if (!IS_UID (id)) {
      q = get_queue_by_alias (id);
      if (q == NULL) {
        return NULL;
      }
    }

    b = (subscribers **)hset_llp_add (&h_subscribers, &id);
//    fprintf (stderr, "%p ?? %p (%p;%p)\n", *b, (subscribers *)&id, &id, (int *)*b);
//    fprintf (stderr, "");
    if (*b == (subscribers *)&id) {
      subscribers *w = alloc_subscribers();
      if (!IS_UID (id)) {
        assert (q != NULL);
        w->q = q;
        q->subscr_cnt++;
      }

      w->id = id;
      treap_init (&w->s);

      if (my_verbosity > 1) {
        fprintf (stderr, "subcribers_created id = %lld\n", id);
      }

      *b = w;
    }
  } else {
    b = (subscribers **)hset_llp_get (&h_subscribers, &id);
    if (b == NULL) {
      return NULL;
    }
  }
  return *b;
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
          int benchRet = IS_UID(long);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
