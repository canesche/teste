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
struct TYPE_4__ {TYPE_1__* ctl_table; } ;
struct ctl_dir {TYPE_2__ header; } ;
struct TYPE_3__ {int /*<<< orphan*/  child; } ;

/* Variables and functions */
 int /*<<< orphan*/  sysctl_mount_point ; 

__attribute__((used)) static void set_empty_dir(struct ctl_dir *dir)
{
	dir->header.ctl_table[0].child = sysctl_mount_point;
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
          int _len_dir0 = 1;
          struct ctl_dir * dir = (struct ctl_dir *) malloc(_len_dir0*sizeof(struct ctl_dir));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
              int _len_dir__i0__header_ctl_table0 = 1;
          dir[_i0].header.ctl_table = (struct TYPE_3__ *) malloc(_len_dir__i0__header_ctl_table0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dir__i0__header_ctl_table0; _j0++) {
            dir[_i0].header.ctl_table->child = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_empty_dir(dir);
          free(dir);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dir0 = 65025;
          struct ctl_dir * dir = (struct ctl_dir *) malloc(_len_dir0*sizeof(struct ctl_dir));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
              int _len_dir__i0__header_ctl_table0 = 1;
          dir[_i0].header.ctl_table = (struct TYPE_3__ *) malloc(_len_dir__i0__header_ctl_table0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dir__i0__header_ctl_table0; _j0++) {
            dir[_i0].header.ctl_table->child = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_empty_dir(dir);
          free(dir);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dir0 = 100;
          struct ctl_dir * dir = (struct ctl_dir *) malloc(_len_dir0*sizeof(struct ctl_dir));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
              int _len_dir__i0__header_ctl_table0 = 1;
          dir[_i0].header.ctl_table = (struct TYPE_3__ *) malloc(_len_dir__i0__header_ctl_table0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dir__i0__header_ctl_table0; _j0++) {
            dir[_i0].header.ctl_table->child = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_empty_dir(dir);
          free(dir);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
