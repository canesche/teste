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
struct regulator {TYPE_1__* rdev; } ;
struct TYPE_2__ {void* reg_data; } ;

/* Variables and functions */

void *regulator_get_drvdata(struct regulator *regulator)
{
	return regulator->rdev->reg_data;
}


// ------------------------------------------------------------------------- //




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
          int _len_regulator0 = 1;
          struct regulator * regulator = (struct regulator *) malloc(_len_regulator0*sizeof(struct regulator));
          for(int _i0 = 0; _i0 < _len_regulator0; _i0++) {
              int _len_regulator__i0__rdev0 = 1;
          regulator[_i0].rdev = (struct TYPE_2__ *) malloc(_len_regulator__i0__rdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_regulator__i0__rdev0; _j0++) {
              }
          }
          void * benchRet = regulator_get_drvdata(regulator);
          for(int _aux = 0; _aux < _len_regulator0; _aux++) {
          free(regulator[_aux].rdev);
          }
          free(regulator);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_regulator0 = 65025;
          struct regulator * regulator = (struct regulator *) malloc(_len_regulator0*sizeof(struct regulator));
          for(int _i0 = 0; _i0 < _len_regulator0; _i0++) {
              int _len_regulator__i0__rdev0 = 1;
          regulator[_i0].rdev = (struct TYPE_2__ *) malloc(_len_regulator__i0__rdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_regulator__i0__rdev0; _j0++) {
              }
          }
          void * benchRet = regulator_get_drvdata(regulator);
          for(int _aux = 0; _aux < _len_regulator0; _aux++) {
          free(regulator[_aux].rdev);
          }
          free(regulator);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_regulator0 = 100;
          struct regulator * regulator = (struct regulator *) malloc(_len_regulator0*sizeof(struct regulator));
          for(int _i0 = 0; _i0 < _len_regulator0; _i0++) {
              int _len_regulator__i0__rdev0 = 1;
          regulator[_i0].rdev = (struct TYPE_2__ *) malloc(_len_regulator__i0__rdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_regulator__i0__rdev0; _j0++) {
              }
          }
          void * benchRet = regulator_get_drvdata(regulator);
          for(int _aux = 0; _aux < _len_regulator0; _aux++) {
          free(regulator[_aux].rdev);
          }
          free(regulator);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
