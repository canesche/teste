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
union topology_entry {int /*<<< orphan*/  nl; } ;
struct topology_core {int dummy; } ;
struct topology_container {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static union topology_entry *next_tle(union topology_entry *tle)
{
	if (!tle->nl)
		return (union topology_entry *)((struct topology_core *)tle + 1);
	return (union topology_entry *)((struct topology_container *)tle + 1);
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
          int _len_tle0 = 1;
          union topology_entry * tle = (union topology_entry *) malloc(_len_tle0*sizeof(union topology_entry));
          for(int _i0 = 0; _i0 < _len_tle0; _i0++) {
            tle[_i0] = 0;
          }
          union topology_entry * benchRet = next_tle(tle);
          free(tle);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tle0 = 65025;
          union topology_entry * tle = (union topology_entry *) malloc(_len_tle0*sizeof(union topology_entry));
          for(int _i0 = 0; _i0 < _len_tle0; _i0++) {
            tle[_i0] = 0;
          }
          union topology_entry * benchRet = next_tle(tle);
          free(tle);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tle0 = 100;
          union topology_entry * tle = (union topology_entry *) malloc(_len_tle0*sizeof(union topology_entry));
          for(int _i0 = 0; _i0 < _len_tle0; _i0++) {
            tle[_i0] = 0;
          }
          union topology_entry * benchRet = next_tle(tle);
          free(tle);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
