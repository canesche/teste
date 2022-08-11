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
struct dss_device {struct dispc_ops const* dispc_ops; } ;
struct dispc_ops {int dummy; } ;

/* Variables and functions */

const struct dispc_ops *dispc_get_ops(struct dss_device *dss)
{
	return dss->dispc_ops;
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
          int _len_dss0 = 1;
          struct dss_device * dss = (struct dss_device *) malloc(_len_dss0*sizeof(struct dss_device));
          for(int _i0 = 0; _i0 < _len_dss0; _i0++) {
              int _len_dss__i0__dispc_ops0 = 1;
          dss[_i0].dispc_ops = (const struct dispc_ops *) malloc(_len_dss__i0__dispc_ops0*sizeof(const struct dispc_ops));
          for(int _j0 = 0; _j0 < _len_dss__i0__dispc_ops0; _j0++) {
              }
          }
          const struct dispc_ops * benchRet = dispc_get_ops(dss);
          for(int _aux = 0; _aux < _len_dss0; _aux++) {
          free(dss[_aux].dispc_ops);
          }
          free(dss);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dss0 = 65025;
          struct dss_device * dss = (struct dss_device *) malloc(_len_dss0*sizeof(struct dss_device));
          for(int _i0 = 0; _i0 < _len_dss0; _i0++) {
              int _len_dss__i0__dispc_ops0 = 1;
          dss[_i0].dispc_ops = (const struct dispc_ops *) malloc(_len_dss__i0__dispc_ops0*sizeof(const struct dispc_ops));
          for(int _j0 = 0; _j0 < _len_dss__i0__dispc_ops0; _j0++) {
              }
          }
          const struct dispc_ops * benchRet = dispc_get_ops(dss);
          for(int _aux = 0; _aux < _len_dss0; _aux++) {
          free(dss[_aux].dispc_ops);
          }
          free(dss);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dss0 = 100;
          struct dss_device * dss = (struct dss_device *) malloc(_len_dss0*sizeof(struct dss_device));
          for(int _i0 = 0; _i0 < _len_dss0; _i0++) {
              int _len_dss__i0__dispc_ops0 = 1;
          dss[_i0].dispc_ops = (const struct dispc_ops *) malloc(_len_dss__i0__dispc_ops0*sizeof(const struct dispc_ops));
          for(int _j0 = 0; _j0 < _len_dss__i0__dispc_ops0; _j0++) {
              }
          }
          const struct dispc_ops * benchRet = dispc_get_ops(dss);
          for(int _aux = 0; _aux < _len_dss0; _aux++) {
          free(dss[_aux].dispc_ops);
          }
          free(dss);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
