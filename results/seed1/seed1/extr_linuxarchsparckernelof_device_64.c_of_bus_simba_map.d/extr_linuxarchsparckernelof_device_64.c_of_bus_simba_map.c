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
typedef  int /*<<< orphan*/  u32 ;

/* Variables and functions */

__attribute__((used)) static int of_bus_simba_map(u32 *addr, const u32 *range,
			    int na, int ns, int pna)
{
	return 0;
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
          int na = 100;
          int ns = 100;
          int pna = 100;
          int _len_addr0 = 1;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_range0 = 1;
          const int * range = (const int *) malloc(_len_range0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_range0; _i0++) {
            range[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = of_bus_simba_map(addr,range,na,ns,pna);
          printf("%d\n", benchRet); 
          free(addr);
          free(range);
        
        break;
    }
    // big-arr
    case 1:
    {
          int na = 255;
          int ns = 255;
          int pna = 255;
          int _len_addr0 = 65025;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_range0 = 65025;
          const int * range = (const int *) malloc(_len_range0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_range0; _i0++) {
            range[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = of_bus_simba_map(addr,range,na,ns,pna);
          printf("%d\n", benchRet); 
          free(addr);
          free(range);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int na = 10;
          int ns = 10;
          int pna = 10;
          int _len_addr0 = 100;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_range0 = 100;
          const int * range = (const int *) malloc(_len_range0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_range0; _i0++) {
            range[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = of_bus_simba_map(addr,range,na,ns,pna);
          printf("%d\n", benchRet); 
          free(addr);
          free(range);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
