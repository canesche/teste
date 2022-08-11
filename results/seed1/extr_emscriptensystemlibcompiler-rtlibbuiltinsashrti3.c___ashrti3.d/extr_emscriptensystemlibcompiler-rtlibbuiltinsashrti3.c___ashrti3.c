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
struct TYPE_3__ {int high; int low; } ;
struct TYPE_4__ {int /*<<< orphan*/  all; TYPE_1__ s; } ;
typedef  TYPE_2__ twords ;
typedef  int /*<<< orphan*/  ti_int ;
typedef  int const si_int ;
typedef  int /*<<< orphan*/  di_int ;

/* Variables and functions */
 int CHAR_BIT ; 

ti_int
__ashrti3(ti_int a, si_int b)
{
    const int bits_in_dword = (int)(sizeof(di_int) * CHAR_BIT);
    twords input;
    twords result;
    input.all = a;
    if (b & bits_in_dword)  /* bits_in_dword <= b < bits_in_tword */
    {
        /* result.s.high = input.s.high < 0 ? -1 : 0 */
        result.s.high = input.s.high >> (bits_in_dword - 1);
        result.s.low = input.s.high >> (b - bits_in_dword);
    }
    else  /* 0 <= b < bits_in_dword */
    {
        if (b == 0)
            return a;
        result.s.high  = input.s.high >> b;
        result.s.low = (input.s.high << (bits_in_dword - b)) | (input.s.low >> b);
    }
    return result.all;
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
          int a = 100;
          const int b = 100;
          int benchRet = __ashrti3(a,b);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int a = 255;
          const int b = 255;
          int benchRet = __ashrti3(a,b);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int a = 10;
          const int b = 10;
          int benchRet = __ashrti3(a,b);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
