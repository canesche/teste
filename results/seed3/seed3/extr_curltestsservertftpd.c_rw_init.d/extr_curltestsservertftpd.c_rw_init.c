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
struct tftphdr {int dummy; } ;
struct TYPE_3__ {struct tftphdr hdr; } ;
struct TYPE_4__ {TYPE_1__ buf; int /*<<< orphan*/  counter; } ;

/* Variables and functions */
 int /*<<< orphan*/  BF_ALLOC ; 
 int /*<<< orphan*/  BF_FREE ; 
 TYPE_2__* bfs ; 
 scalar_t__ current ; 
 scalar_t__ newline ; 
 int nextone ; 
 int prevchar ; 

__attribute__((used)) static struct tftphdr *rw_init(int x)
{
  newline = 0;                    /* init crlf flag */
  prevchar = -1;
  bfs[0].counter =  BF_ALLOC;     /* pass out the first buffer */
  current = 0;
  bfs[1].counter = BF_FREE;
  nextone = x;                    /* ahead or behind? */
  return &bfs[0].buf.hdr;
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
          int x = 100;
          struct tftphdr * benchRet = rw_init(x);
          printf("%d\n", (*benchRet).dummy);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          struct tftphdr * benchRet = rw_init(x);
          printf("%d\n", (*benchRet).dummy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          struct tftphdr * benchRet = rw_init(x);
          printf("%d\n", (*benchRet).dummy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
