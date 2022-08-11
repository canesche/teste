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
typedef  int uint64_t ;
struct plt_entry {scalar_t__* bundle; } ;

/* Variables and functions */

unsigned long
plt_target (struct plt_entry *plt)
{
	uint64_t b0, b1, *b = (uint64_t *) plt->bundle[1];
	long off;

	b0 = b[0]; b1 = b[1];
	off = (  ((b1 & 0x00fffff000000000UL) >> 36)		/* imm20b -> bit 0 */
	       | ((b0 >> 48) << 20) | ((b1 & 0x7fffffUL) << 36)	/* imm39 -> bit 20 */
	       | ((b1 & 0x0800000000000000UL) << 0));		/* i -> bit 59 */
	return (long) plt->bundle[1] + 16*off;
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
          int _len_plt0 = 1;
          struct plt_entry * plt = (struct plt_entry *) malloc(_len_plt0*sizeof(struct plt_entry));
          for(int _i0 = 0; _i0 < _len_plt0; _i0++) {
              int _len_plt__i0__bundle0 = 1;
          plt[_i0].bundle = (long *) malloc(_len_plt__i0__bundle0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_plt__i0__bundle0; _j0++) {
            plt[_i0].bundle[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = plt_target(plt);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_plt0; _aux++) {
          free(plt[_aux].bundle);
          }
          free(plt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_plt0 = 65025;
          struct plt_entry * plt = (struct plt_entry *) malloc(_len_plt0*sizeof(struct plt_entry));
          for(int _i0 = 0; _i0 < _len_plt0; _i0++) {
              int _len_plt__i0__bundle0 = 1;
          plt[_i0].bundle = (long *) malloc(_len_plt__i0__bundle0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_plt__i0__bundle0; _j0++) {
            plt[_i0].bundle[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = plt_target(plt);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_plt0; _aux++) {
          free(plt[_aux].bundle);
          }
          free(plt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_plt0 = 100;
          struct plt_entry * plt = (struct plt_entry *) malloc(_len_plt0*sizeof(struct plt_entry));
          for(int _i0 = 0; _i0 < _len_plt0; _i0++) {
              int _len_plt__i0__bundle0 = 1;
          plt[_i0].bundle = (long *) malloc(_len_plt__i0__bundle0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_plt__i0__bundle0; _j0++) {
            plt[_i0].bundle[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = plt_target(plt);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_plt0; _aux++) {
          free(plt[_aux].bundle);
          }
          free(plt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
