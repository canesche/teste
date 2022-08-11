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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  treespace_t ;
typedef  int /*<<< orphan*/  treeref_t ;
struct TYPE_4__ {int free_queue_cnt; int /*<<< orphan*/ * free_queue; } ;
struct TYPE_3__ {int /*<<< orphan*/  left; } ;

/* Variables and functions */
 TYPE_2__* TS_HEADER ; 
 TYPE_1__* TS_NODE (int /*<<< orphan*/ ) ; 
 int lrand48 () ; 

inline void free_intree_node (treespace_t TS, treeref_t N) {
  int q = lrand48() & (TS_HEADER->free_queue_cnt - 1);
  TS_NODE(N)->left = TS_HEADER->free_queue[q*2];
  TS_HEADER->free_queue[q*2] = N;
  TS_HEADER->free_queue[q*2+1]++;
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
          int int = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_3__ * benchRet = TS_NODE(int);
          printf("%d\n", (*benchRet).left);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
