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
struct index_item {long long item_id; int extra; } ;

/* Variables and functions */
 int FLAG_DELETED ; 
 struct index_item* IndexItems ; 
 int idx_items ; 

__attribute__((used)) static struct index_item *get_idx_item (long long item_id) {
  int a = -1, b = idx_items, c;
  while (b - a > 1) {
    c = ((a + b) >> 1);
    if (IndexItems[c].item_id <= item_id) { a = c; } else { b = c; }
  }
  if (a >= 0 && IndexItems[a].item_id == item_id && !(IndexItems[a].extra & FLAG_DELETED)) {
    return IndexItems + a;
  } else {
    return 0;
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
          long long item_id = 100;
          struct index_item * benchRet = get_idx_item(item_id);
          printf("%lld\n", (*benchRet).item_id);
          printf("%d\n", (*benchRet).extra);
        
        break;
    }
    // big-arr
    case 1:
    {
          long long item_id = 255;
          struct index_item * benchRet = get_idx_item(item_id);
          printf("%lld\n", (*benchRet).item_id);
          printf("%d\n", (*benchRet).extra);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long long item_id = 10;
          struct index_item * benchRet = get_idx_item(item_id);
          printf("%lld\n", (*benchRet).item_id);
          printf("%d\n", (*benchRet).extra);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
