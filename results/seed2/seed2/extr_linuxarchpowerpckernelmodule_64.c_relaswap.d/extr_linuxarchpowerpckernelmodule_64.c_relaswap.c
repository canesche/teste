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
typedef  int /*<<< orphan*/  uint64_t ;
typedef  int /*<<< orphan*/  Elf64_Rela ;

/* Variables and functions */

__attribute__((used)) static void relaswap(void *_x, void *_y, int size)
{
	uint64_t *x, *y, tmp;
	int i;

	y = (uint64_t *)_x;
	x = (uint64_t *)_y;

	for (i = 0; i < sizeof(Elf64_Rela) / sizeof(uint64_t); i++) {
		tmp = x[i];
		x[i] = y[i];
		y[i] = tmp;
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
          int size = 100;
          void * _x;
          void * _y;
          relaswap(_x,_y,size);
        
        break;
    }
    // big-arr
    case 1:
    {
          int size = 255;
          void * _x;
          void * _y;
          relaswap(_x,_y,size);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int size = 10;
          void * _x;
          void * _y;
          relaswap(_x,_y,size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
