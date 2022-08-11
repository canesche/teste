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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int chunk_count; TYPE_1__* chunks; } ;
struct TYPE_4__ {int p; int q; } ;
typedef  TYPE_1__ Chunk ;

/* Variables and functions */
 TYPE_2__* g ; 

Chunk *find_chunk(int p, int q) {
    for (int i = 0; i < g->chunk_count; i++) {
        Chunk *chunk = g->chunks + i;
        if (chunk->p == p && chunk->q == q) {
            return chunk;
        }
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
          int p = 100;
          int q = 100;
          struct TYPE_4__ * benchRet = find_chunk(p,q);
          printf("%d\n", (*benchRet).p);
          printf("%d\n", (*benchRet).q);
        
        break;
    }
    // big-arr
    case 1:
    {
          int p = 255;
          int q = 255;
          struct TYPE_4__ * benchRet = find_chunk(p,q);
          printf("%d\n", (*benchRet).p);
          printf("%d\n", (*benchRet).q);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int p = 10;
          int q = 10;
          struct TYPE_4__ * benchRet = find_chunk(p,q);
          printf("%d\n", (*benchRet).p);
          printf("%d\n", (*benchRet).q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
