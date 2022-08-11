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
struct net {int dummy; } ;
struct flowi6 {int dummy; } ;
struct fib6_table {int dummy; } ;
struct fib6_info {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct fib6_info *
eafnosupport_fib6_table_lookup(struct net *net, struct fib6_table *table,
			       int oif, struct flowi6 *fl6, int flags)
{
	return NULL;
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
          int oif = 100;
          int flags = 100;
          int _len_net0 = 1;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table0 = 1;
          struct fib6_table * table = (struct fib6_table *) malloc(_len_table0*sizeof(struct fib6_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fl60 = 1;
          struct flowi6 * fl6 = (struct flowi6 *) malloc(_len_fl60*sizeof(struct flowi6));
          for(int _i0 = 0; _i0 < _len_fl60; _i0++) {
            fl6[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct fib6_info * benchRet = eafnosupport_fib6_table_lookup(net,table,oif,fl6,flags);
          printf("%d\n", (*benchRet).dummy);
          free(net);
          free(table);
          free(fl6);
        
        break;
    }
    // big-arr
    case 1:
    {
          int oif = 255;
          int flags = 255;
          int _len_net0 = 65025;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table0 = 65025;
          struct fib6_table * table = (struct fib6_table *) malloc(_len_table0*sizeof(struct fib6_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fl60 = 65025;
          struct flowi6 * fl6 = (struct flowi6 *) malloc(_len_fl60*sizeof(struct flowi6));
          for(int _i0 = 0; _i0 < _len_fl60; _i0++) {
            fl6[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct fib6_info * benchRet = eafnosupport_fib6_table_lookup(net,table,oif,fl6,flags);
          printf("%d\n", (*benchRet).dummy);
          free(net);
          free(table);
          free(fl6);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int oif = 10;
          int flags = 10;
          int _len_net0 = 100;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table0 = 100;
          struct fib6_table * table = (struct fib6_table *) malloc(_len_table0*sizeof(struct fib6_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fl60 = 100;
          struct flowi6 * fl6 = (struct flowi6 *) malloc(_len_fl60*sizeof(struct flowi6));
          for(int _i0 = 0; _i0 < _len_fl60; _i0++) {
            fl6[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct fib6_info * benchRet = eafnosupport_fib6_table_lookup(net,table,oif,fl6,flags);
          printf("%d\n", (*benchRet).dummy);
          free(net);
          free(table);
          free(fl6);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
