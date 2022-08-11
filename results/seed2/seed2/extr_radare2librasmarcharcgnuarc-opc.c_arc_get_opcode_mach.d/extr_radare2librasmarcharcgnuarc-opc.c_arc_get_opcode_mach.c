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
#define  ARC_MACH_ARC4 132 
#define  ARC_MACH_ARC5 131 
#define  ARC_MACH_ARC6 130 
#define  ARC_MACH_ARC601 129 
#define  ARC_MACH_ARC7 128 
 int ARC_MACH_BIG ; 

int
arc_get_opcode_mach (int bfd_mach, int big_p)
{
  static int mach_type_map[] =
    {
      ARC_MACH_ARC4,
      ARC_MACH_ARC5,
      ARC_MACH_ARC6,
      ARC_MACH_ARC7,
      ARC_MACH_ARC601
    };

  return mach_type_map[bfd_mach] | (big_p ? ARC_MACH_BIG : 0);
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
          int bfd_mach = 100;
          int big_p = 100;
          int benchRet = arc_get_opcode_mach(bfd_mach,big_p);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int bfd_mach = 255;
          int big_p = 255;
          int benchRet = arc_get_opcode_mach(bfd_mach,big_p);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bfd_mach = 10;
          int big_p = 10;
          int benchRet = arc_get_opcode_mach(bfd_mach,big_p);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
