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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct net_device {int dummy; } ;
struct mlxsw_sp_span_entry {struct net_device const* to_dev; scalar_t__ ref_count; } ;
struct TYPE_2__ {int entries_count; struct mlxsw_sp_span_entry* entries; } ;
struct mlxsw_sp {TYPE_1__ span; } ;

/* Variables and functions */

struct mlxsw_sp_span_entry *
mlxsw_sp_span_entry_find_by_port(struct mlxsw_sp *mlxsw_sp,
				 const struct net_device *to_dev)
{
	int i;

	for (i = 0; i < mlxsw_sp->span.entries_count; i++) {
		struct mlxsw_sp_span_entry *curr = &mlxsw_sp->span.entries[i];

		if (curr->ref_count && curr->to_dev == to_dev)
			return curr;
	}
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
          int _len_mlxsw_sp0 = 1;
          struct mlxsw_sp * mlxsw_sp = (struct mlxsw_sp *) malloc(_len_mlxsw_sp0*sizeof(struct mlxsw_sp));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp0; _i0++) {
            mlxsw_sp[_i0].span.entries_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_sp__i0__span_entries0 = 1;
          mlxsw_sp[_i0].span.entries = (struct mlxsw_sp_span_entry *) malloc(_len_mlxsw_sp__i0__span_entries0*sizeof(struct mlxsw_sp_span_entry));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__span_entries0; _j0++) {
              int _len_mlxsw_sp__i0__span_entries_to_dev0 = 1;
          mlxsw_sp[_i0].span.entries->to_dev = (const struct net_device *) malloc(_len_mlxsw_sp__i0__span_entries_to_dev0*sizeof(const struct net_device));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__span_entries_to_dev0; _j0++) {
              }
        mlxsw_sp[_i0].span.entries->ref_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_to_dev0 = 1;
          const struct net_device * to_dev = (const struct net_device *) malloc(_len_to_dev0*sizeof(const struct net_device));
          for(int _i0 = 0; _i0 < _len_to_dev0; _i0++) {
              }
          struct mlxsw_sp_span_entry * benchRet = mlxsw_sp_span_entry_find_by_port(mlxsw_sp,to_dev);
          printf("%ld\n", (*benchRet).ref_count);
          free(mlxsw_sp);
          free(to_dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mlxsw_sp0 = 65025;
          struct mlxsw_sp * mlxsw_sp = (struct mlxsw_sp *) malloc(_len_mlxsw_sp0*sizeof(struct mlxsw_sp));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp0; _i0++) {
            mlxsw_sp[_i0].span.entries_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_sp__i0__span_entries0 = 1;
          mlxsw_sp[_i0].span.entries = (struct mlxsw_sp_span_entry *) malloc(_len_mlxsw_sp__i0__span_entries0*sizeof(struct mlxsw_sp_span_entry));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__span_entries0; _j0++) {
              int _len_mlxsw_sp__i0__span_entries_to_dev0 = 1;
          mlxsw_sp[_i0].span.entries->to_dev = (const struct net_device *) malloc(_len_mlxsw_sp__i0__span_entries_to_dev0*sizeof(const struct net_device));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__span_entries_to_dev0; _j0++) {
              }
        mlxsw_sp[_i0].span.entries->ref_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_to_dev0 = 65025;
          const struct net_device * to_dev = (const struct net_device *) malloc(_len_to_dev0*sizeof(const struct net_device));
          for(int _i0 = 0; _i0 < _len_to_dev0; _i0++) {
              }
          struct mlxsw_sp_span_entry * benchRet = mlxsw_sp_span_entry_find_by_port(mlxsw_sp,to_dev);
          printf("%ld\n", (*benchRet).ref_count);
          free(mlxsw_sp);
          free(to_dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mlxsw_sp0 = 100;
          struct mlxsw_sp * mlxsw_sp = (struct mlxsw_sp *) malloc(_len_mlxsw_sp0*sizeof(struct mlxsw_sp));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp0; _i0++) {
            mlxsw_sp[_i0].span.entries_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_sp__i0__span_entries0 = 1;
          mlxsw_sp[_i0].span.entries = (struct mlxsw_sp_span_entry *) malloc(_len_mlxsw_sp__i0__span_entries0*sizeof(struct mlxsw_sp_span_entry));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__span_entries0; _j0++) {
              int _len_mlxsw_sp__i0__span_entries_to_dev0 = 1;
          mlxsw_sp[_i0].span.entries->to_dev = (const struct net_device *) malloc(_len_mlxsw_sp__i0__span_entries_to_dev0*sizeof(const struct net_device));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__span_entries_to_dev0; _j0++) {
              }
        mlxsw_sp[_i0].span.entries->ref_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_to_dev0 = 100;
          const struct net_device * to_dev = (const struct net_device *) malloc(_len_to_dev0*sizeof(const struct net_device));
          for(int _i0 = 0; _i0 < _len_to_dev0; _i0++) {
              }
          struct mlxsw_sp_span_entry * benchRet = mlxsw_sp_span_entry_find_by_port(mlxsw_sp,to_dev);
          printf("%ld\n", (*benchRet).ref_count);
          free(mlxsw_sp);
          free(to_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
