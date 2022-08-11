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
#define  CR_INTR_DMA0 135 
#define  CR_INTR_DMA1 134 
#define  CR_INTR_DMA2 133 
#define  CR_INTR_DMA3 132 
#define  CR_INTR_DMA4 131 
#define  CR_INTR_DMA5 130 
#define  CR_INTR_DMA6 129 
#define  CR_INTR_DMA7 128 

__attribute__((used)) static inline int CR_INTR_DMA(int N)
{
	static const unsigned int _CR_INTR_DMA[] = {
		CR_INTR_DMA0, CR_INTR_DMA1, CR_INTR_DMA2, CR_INTR_DMA3,
		CR_INTR_DMA4, CR_INTR_DMA5, CR_INTR_DMA6, CR_INTR_DMA7
	};
	return _CR_INTR_DMA[N];
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
          int N = 100;
          int benchRet = CR_INTR_DMA(N);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int N = 255;
          int benchRet = CR_INTR_DMA(N);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int N = 10;
          int benchRet = CR_INTR_DMA(N);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
