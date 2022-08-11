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
struct sfp_upstream_ops {int dummy; } ;
struct sfp_bus {struct sfp_upstream_ops const* upstream_ops; scalar_t__ registered; } ;

/* Variables and functions */

__attribute__((used)) static const struct sfp_upstream_ops *sfp_get_upstream_ops(struct sfp_bus *bus)
{
	return bus->registered ? bus->upstream_ops : NULL;
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
          int _len_bus0 = 1;
          struct sfp_bus * bus = (struct sfp_bus *) malloc(_len_bus0*sizeof(struct sfp_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
              int _len_bus__i0__upstream_ops0 = 1;
          bus[_i0].upstream_ops = (const struct sfp_upstream_ops *) malloc(_len_bus__i0__upstream_ops0*sizeof(const struct sfp_upstream_ops));
          for(int _j0 = 0; _j0 < _len_bus__i0__upstream_ops0; _j0++) {
              }
        bus[_i0].registered = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct sfp_upstream_ops * benchRet = sfp_get_upstream_ops(bus);
          for(int _aux = 0; _aux < _len_bus0; _aux++) {
          free(bus[_aux].upstream_ops);
          }
          free(bus);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bus0 = 65025;
          struct sfp_bus * bus = (struct sfp_bus *) malloc(_len_bus0*sizeof(struct sfp_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
              int _len_bus__i0__upstream_ops0 = 1;
          bus[_i0].upstream_ops = (const struct sfp_upstream_ops *) malloc(_len_bus__i0__upstream_ops0*sizeof(const struct sfp_upstream_ops));
          for(int _j0 = 0; _j0 < _len_bus__i0__upstream_ops0; _j0++) {
              }
        bus[_i0].registered = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct sfp_upstream_ops * benchRet = sfp_get_upstream_ops(bus);
          for(int _aux = 0; _aux < _len_bus0; _aux++) {
          free(bus[_aux].upstream_ops);
          }
          free(bus);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bus0 = 100;
          struct sfp_bus * bus = (struct sfp_bus *) malloc(_len_bus0*sizeof(struct sfp_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
              int _len_bus__i0__upstream_ops0 = 1;
          bus[_i0].upstream_ops = (const struct sfp_upstream_ops *) malloc(_len_bus__i0__upstream_ops0*sizeof(const struct sfp_upstream_ops));
          for(int _j0 = 0; _j0 < _len_bus__i0__upstream_ops0; _j0++) {
              }
        bus[_i0].registered = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct sfp_upstream_ops * benchRet = sfp_get_upstream_ops(bus);
          for(int _aux = 0; _aux < _len_bus0; _aux++) {
          free(bus[_aux].upstream_ops);
          }
          free(bus);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
