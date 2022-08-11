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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ cSpeed; scalar_t__ cSize; } ;
typedef  TYPE_1__ BMK_benchResult_t ;

/* Variables and functions */
 int BETTER_RESULT ; 
 int SIZE_RESULT ; 
 int SPEED_RESULT ; 
 int WORSE_RESULT ; 

__attribute__((used)) static int
speedSizeCompare(const BMK_benchResult_t r1, const BMK_benchResult_t r2)
{
    if(r1.cSpeed < r2.cSpeed) {
        if(r1.cSize >= r2.cSize) {
            return BETTER_RESULT;
        }
        return SPEED_RESULT; /* r2 is smaller but not faster. */
    } else {
        if(r1.cSize <= r2.cSize) {
            return WORSE_RESULT;
        }
        return SIZE_RESULT; /* r2 is faster but not smaller */
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
          const struct TYPE_4__ r1;
          const struct TYPE_4__ r2;
          int benchRet = speedSizeCompare(r1,r2);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
