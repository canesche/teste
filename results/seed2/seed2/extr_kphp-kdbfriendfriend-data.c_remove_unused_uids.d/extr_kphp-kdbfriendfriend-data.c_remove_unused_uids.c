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

/* Variables and functions */
 int* P ; 
 int PL ; 
 int PL_M_CAT ; 
 int PL_M_MASK ; 

__attribute__((used)) static int remove_unused_uids (int owner_id) {
  int *A = P, *B = P, x;
  while (*A != -1) {
    x = *A++;
    if (!(x & PL_M_CAT)) {
      x &= PL_M_MASK;
      if (!x || x == owner_id) {
        continue;
      }
      int *C;
      for (C = P; C < B; C++) {
        if ((*C & PL_M_MASK) == x) {
          break;
        }
      }
      if (C < B) {
        continue;
      }
      x = A[-1];
    }
    *B++ = x;
  }
  *B = -1;
  PL = B - P;
  return PL;
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
          int owner_id = 100;
          int benchRet = remove_unused_uids(owner_id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int owner_id = 255;
          int benchRet = remove_unused_uids(owner_id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int owner_id = 10;
          int benchRet = remove_unused_uids(owner_id);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
