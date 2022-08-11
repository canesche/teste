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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ node_id; scalar_t__ server_id; } ;
union cache_packed_local_copy_location {TYPE_1__ p; int /*<<< orphan*/  i; } ;
struct TYPE_4__ {int /*<<< orphan*/  id; } ;
typedef  TYPE_2__ cache_stat_server_t ;

/* Variables and functions */

__attribute__((used)) static int cmp_stat_server_id (const void *x, const void *y) {
  cache_stat_server_t *a = *(cache_stat_server_t **) x;
  cache_stat_server_t *b = *(cache_stat_server_t **) y;
  union cache_packed_local_copy_location c, d;
  c.i = a->id;
  d.i = b->id;
  if (c.p.node_id < d.p.node_id) {
    return -1;
  }
  if (c.p.node_id > d.p.node_id) {
    return 1;
  }
  if (c.p.server_id < d.p.server_id) {
    return -1;
  }
  if (c.p.server_id > d.p.server_id) {
    return 1;
  }
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
          int _len_x0 = 1;
          const void * x = (const void *) malloc(_len_x0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = 0;
          }
          int _len_y0 = 1;
          const void * y = (const void *) malloc(_len_y0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = 0;
          }
          int benchRet = cmp_stat_server_id(x,y);
          printf("%d\n", benchRet); 
          free(x);
          free(y);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_x0 = 65025;
          const void * x = (const void *) malloc(_len_x0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = 0;
          }
          int _len_y0 = 65025;
          const void * y = (const void *) malloc(_len_y0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = 0;
          }
          int benchRet = cmp_stat_server_id(x,y);
          printf("%d\n", benchRet); 
          free(x);
          free(y);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_x0 = 100;
          const void * x = (const void *) malloc(_len_x0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = 0;
          }
          int _len_y0 = 100;
          const void * y = (const void *) malloc(_len_y0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = 0;
          }
          int benchRet = cmp_stat_server_id(x,y);
          printf("%d\n", benchRet); 
          free(x);
          free(y);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
