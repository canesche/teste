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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int vector_id; int timestamp; int coord_id; } ;
typedef  TYPE_1__ weights_cyclic_buffer_en_t ;

/* Variables and functions */
 TYPE_1__* CC ; 
 unsigned int WEIGHTS_CB_CACHE_SIZE ; 

__attribute__((used)) static int cyclic_buffer_cache_store (int vector_id, int coord_id, int timestamp) {
  unsigned int h = (vector_id * 63617 + coord_id) * 63617 + timestamp;
  h %= WEIGHTS_CB_CACHE_SIZE;
  weights_cyclic_buffer_en_t *C = CC + h;
  if (C->vector_id == vector_id && C->timestamp == timestamp && C->coord_id == coord_id) {
    return 0;
  }
  C->vector_id = vector_id;
  C->coord_id = coord_id;
  C->timestamp = timestamp;
  return 1;
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
          int vector_id = 100;
          int coord_id = 100;
          int timestamp = 100;
          int benchRet = cyclic_buffer_cache_store(vector_id,coord_id,timestamp);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int vector_id = 255;
          int coord_id = 255;
          int timestamp = 255;
          int benchRet = cyclic_buffer_cache_store(vector_id,coord_id,timestamp);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int vector_id = 10;
          int coord_id = 10;
          int timestamp = 10;
          int benchRet = cyclic_buffer_cache_store(vector_id,coord_id,timestamp);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
