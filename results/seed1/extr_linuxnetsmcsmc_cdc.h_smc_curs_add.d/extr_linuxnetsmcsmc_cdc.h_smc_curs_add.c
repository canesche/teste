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
union smc_host_cursor {int count; int /*<<< orphan*/  wrap; } ;

/* Variables and functions */

__attribute__((used)) static inline void smc_curs_add(int size, union smc_host_cursor *curs,
				int value)
{
	curs->count += value;
	if (curs->count >= size) {
		curs->wrap++;
		curs->count -= size;
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
          int value = 100;
          int _len_curs0 = 1;
          union smc_host_cursor * curs = (union smc_host_cursor *) malloc(_len_curs0*sizeof(union smc_host_cursor));
          for(int _i0 = 0; _i0 < _len_curs0; _i0++) {
            curs[_i0] = 0;
          }
          smc_curs_add(size,curs,value);
          free(curs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int size = 255;
          int value = 255;
          int _len_curs0 = 65025;
          union smc_host_cursor * curs = (union smc_host_cursor *) malloc(_len_curs0*sizeof(union smc_host_cursor));
          for(int _i0 = 0; _i0 < _len_curs0; _i0++) {
            curs[_i0] = 0;
          }
          smc_curs_add(size,curs,value);
          free(curs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int size = 10;
          int value = 10;
          int _len_curs0 = 100;
          union smc_host_cursor * curs = (union smc_host_cursor *) malloc(_len_curs0*sizeof(union smc_host_cursor));
          for(int _i0 = 0; _i0 < _len_curs0; _i0++) {
            curs[_i0] = 0;
          }
          smc_curs_add(size,curs,value);
          free(curs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
