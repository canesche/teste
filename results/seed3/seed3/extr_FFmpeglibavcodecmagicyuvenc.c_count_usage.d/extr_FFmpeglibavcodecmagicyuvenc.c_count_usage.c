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
typedef  size_t uint8_t ;
struct TYPE_3__ {int /*<<< orphan*/  prob; } ;
typedef  TYPE_1__ PTable ;

/* Variables and functions */

__attribute__((used)) static void count_usage(uint8_t *src, int width,
                        int height, PTable *counts)
{
    int i, j;

    for (j = 0; j < height; j++) {
        for (i = 0; i < width; i++) {
            counts[src[i]].prob++;
        }
        src += width;
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
          int width = 100;
          int height = 100;
          int _len_src0 = 1;
          unsigned long * src = (unsigned long *) malloc(_len_src0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_counts0 = 1;
          struct TYPE_3__ * counts = (struct TYPE_3__ *) malloc(_len_counts0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_counts0; _i0++) {
            counts[_i0].prob = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          count_usage(src,width,height,counts);
          free(src);
          free(counts);
        
        break;
    }
    // big-arr
    case 1:
    {
          int width = 255;
          int height = 255;
          int _len_src0 = 65025;
          unsigned long * src = (unsigned long *) malloc(_len_src0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_counts0 = 65025;
          struct TYPE_3__ * counts = (struct TYPE_3__ *) malloc(_len_counts0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_counts0; _i0++) {
            counts[_i0].prob = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          count_usage(src,width,height,counts);
          free(src);
          free(counts);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int width = 10;
          int height = 10;
          int _len_src0 = 100;
          unsigned long * src = (unsigned long *) malloc(_len_src0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_counts0 = 100;
          struct TYPE_3__ * counts = (struct TYPE_3__ *) malloc(_len_counts0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_counts0; _i0++) {
            counts[_i0].prob = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          count_usage(src,width,height,counts);
          free(src);
          free(counts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
