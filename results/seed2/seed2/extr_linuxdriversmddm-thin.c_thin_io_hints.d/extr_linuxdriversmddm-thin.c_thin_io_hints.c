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
struct thin_c {struct pool* pool; } ;
struct queue_limits {int discard_granularity; int max_discard_sectors; } ;
struct TYPE_2__ {int /*<<< orphan*/  discard_enabled; } ;
struct pool {int sectors_per_block; TYPE_1__ pf; } ;
struct dm_target {struct thin_c* private; } ;

/* Variables and functions */
 int SECTOR_SHIFT ; 

__attribute__((used)) static void thin_io_hints(struct dm_target *ti, struct queue_limits *limits)
{
	struct thin_c *tc = ti->private;
	struct pool *pool = tc->pool;

	if (!pool->pf.discard_enabled)
		return;

	limits->discard_granularity = pool->sectors_per_block << SECTOR_SHIFT;
	limits->max_discard_sectors = 2048 * 1024 * 16; /* 16G */
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
          int _len_ti0 = 1;
          struct dm_target * ti = (struct dm_target *) malloc(_len_ti0*sizeof(struct dm_target));
          for(int _i0 = 0; _i0 < _len_ti0; _i0++) {
              int _len_ti__i0__private0 = 1;
          ti[_i0].private = (struct thin_c *) malloc(_len_ti__i0__private0*sizeof(struct thin_c));
          for(int _j0 = 0; _j0 < _len_ti__i0__private0; _j0++) {
              int _len_ti__i0__private_pool0 = 1;
          ti[_i0].private->pool = (struct pool *) malloc(_len_ti__i0__private_pool0*sizeof(struct pool));
          for(int _j0 = 0; _j0 < _len_ti__i0__private_pool0; _j0++) {
            ti[_i0].private->pool->sectors_per_block = ((-2 * (next_i()%2)) + 1) * next_i();
        ti[_i0].private->pool->pf.discard_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_limits0 = 1;
          struct queue_limits * limits = (struct queue_limits *) malloc(_len_limits0*sizeof(struct queue_limits));
          for(int _i0 = 0; _i0 < _len_limits0; _i0++) {
            limits[_i0].discard_granularity = ((-2 * (next_i()%2)) + 1) * next_i();
        limits[_i0].max_discard_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          thin_io_hints(ti,limits);
          for(int _aux = 0; _aux < _len_ti0; _aux++) {
          free(ti[_aux].private);
          }
          free(ti);
          free(limits);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ti0 = 65025;
          struct dm_target * ti = (struct dm_target *) malloc(_len_ti0*sizeof(struct dm_target));
          for(int _i0 = 0; _i0 < _len_ti0; _i0++) {
              int _len_ti__i0__private0 = 1;
          ti[_i0].private = (struct thin_c *) malloc(_len_ti__i0__private0*sizeof(struct thin_c));
          for(int _j0 = 0; _j0 < _len_ti__i0__private0; _j0++) {
              int _len_ti__i0__private_pool0 = 1;
          ti[_i0].private->pool = (struct pool *) malloc(_len_ti__i0__private_pool0*sizeof(struct pool));
          for(int _j0 = 0; _j0 < _len_ti__i0__private_pool0; _j0++) {
            ti[_i0].private->pool->sectors_per_block = ((-2 * (next_i()%2)) + 1) * next_i();
        ti[_i0].private->pool->pf.discard_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_limits0 = 65025;
          struct queue_limits * limits = (struct queue_limits *) malloc(_len_limits0*sizeof(struct queue_limits));
          for(int _i0 = 0; _i0 < _len_limits0; _i0++) {
            limits[_i0].discard_granularity = ((-2 * (next_i()%2)) + 1) * next_i();
        limits[_i0].max_discard_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          thin_io_hints(ti,limits);
          for(int _aux = 0; _aux < _len_ti0; _aux++) {
          free(ti[_aux].private);
          }
          free(ti);
          free(limits);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ti0 = 100;
          struct dm_target * ti = (struct dm_target *) malloc(_len_ti0*sizeof(struct dm_target));
          for(int _i0 = 0; _i0 < _len_ti0; _i0++) {
              int _len_ti__i0__private0 = 1;
          ti[_i0].private = (struct thin_c *) malloc(_len_ti__i0__private0*sizeof(struct thin_c));
          for(int _j0 = 0; _j0 < _len_ti__i0__private0; _j0++) {
              int _len_ti__i0__private_pool0 = 1;
          ti[_i0].private->pool = (struct pool *) malloc(_len_ti__i0__private_pool0*sizeof(struct pool));
          for(int _j0 = 0; _j0 < _len_ti__i0__private_pool0; _j0++) {
            ti[_i0].private->pool->sectors_per_block = ((-2 * (next_i()%2)) + 1) * next_i();
        ti[_i0].private->pool->pf.discard_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_limits0 = 100;
          struct queue_limits * limits = (struct queue_limits *) malloc(_len_limits0*sizeof(struct queue_limits));
          for(int _i0 = 0; _i0 < _len_limits0; _i0++) {
            limits[_i0].discard_granularity = ((-2 * (next_i()%2)) + 1) * next_i();
        limits[_i0].max_discard_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          thin_io_hints(ti,limits);
          for(int _aux = 0; _aux < _len_ti0; _aux++) {
          free(ti[_aux].private);
          }
          free(ti);
          free(limits);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
