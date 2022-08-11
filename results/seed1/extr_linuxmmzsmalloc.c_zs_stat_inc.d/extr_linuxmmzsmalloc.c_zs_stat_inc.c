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
struct TYPE_2__ {unsigned long* objs; } ;
struct size_class {TYPE_1__ stats; } ;

/* Variables and functions */

__attribute__((used)) static inline void zs_stat_inc(struct size_class *class,
				int type, unsigned long cnt)
{
	class->stats.objs[type] += cnt;
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
          int type = 100;
          unsigned long cnt = 100;
          int _len_class0 = 1;
          struct size_class * class = (struct size_class *) malloc(_len_class0*sizeof(struct size_class));
          for(int _i0 = 0; _i0 < _len_class0; _i0++) {
              int _len_class__i0__stats_objs0 = 1;
          class[_i0].stats.objs = (unsigned long *) malloc(_len_class__i0__stats_objs0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_class__i0__stats_objs0; _j0++) {
            class[_i0].stats.objs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          zs_stat_inc(class,type,cnt);
          free(class);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          unsigned long cnt = 255;
          int _len_class0 = 65025;
          struct size_class * class = (struct size_class *) malloc(_len_class0*sizeof(struct size_class));
          for(int _i0 = 0; _i0 < _len_class0; _i0++) {
              int _len_class__i0__stats_objs0 = 1;
          class[_i0].stats.objs = (unsigned long *) malloc(_len_class__i0__stats_objs0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_class__i0__stats_objs0; _j0++) {
            class[_i0].stats.objs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          zs_stat_inc(class,type,cnt);
          free(class);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          unsigned long cnt = 10;
          int _len_class0 = 100;
          struct size_class * class = (struct size_class *) malloc(_len_class0*sizeof(struct size_class));
          for(int _i0 = 0; _i0 < _len_class0; _i0++) {
              int _len_class__i0__stats_objs0 = 1;
          class[_i0].stats.objs = (unsigned long *) malloc(_len_class__i0__stats_objs0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_class__i0__stats_objs0; _j0++) {
            class[_i0].stats.objs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          zs_stat_inc(class,type,cnt);
          free(class);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
