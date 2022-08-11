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
struct platform_device {int dummy; } ;
struct mc13xxx_regulator_init_data {int dummy; } ;
struct mc13xxx_regulator {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct mc13xxx_regulator_init_data *mc13xxx_parse_regulators_dt(
	struct platform_device *pdev, struct mc13xxx_regulator *regulators,
	int num_regulators)
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
          int num_regulators = 100;
          int _len_pdev0 = 1;
          struct platform_device * pdev = (struct platform_device *) malloc(_len_pdev0*sizeof(struct platform_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regulators0 = 1;
          struct mc13xxx_regulator * regulators = (struct mc13xxx_regulator *) malloc(_len_regulators0*sizeof(struct mc13xxx_regulator));
          for(int _i0 = 0; _i0 < _len_regulators0; _i0++) {
            regulators[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mc13xxx_regulator_init_data * benchRet = mc13xxx_parse_regulators_dt(pdev,regulators,num_regulators);
          printf("%d\n", (*benchRet).dummy);
          free(pdev);
          free(regulators);
        
        break;
    }
    // big-arr
    case 1:
    {
          int num_regulators = 255;
          int _len_pdev0 = 65025;
          struct platform_device * pdev = (struct platform_device *) malloc(_len_pdev0*sizeof(struct platform_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regulators0 = 65025;
          struct mc13xxx_regulator * regulators = (struct mc13xxx_regulator *) malloc(_len_regulators0*sizeof(struct mc13xxx_regulator));
          for(int _i0 = 0; _i0 < _len_regulators0; _i0++) {
            regulators[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mc13xxx_regulator_init_data * benchRet = mc13xxx_parse_regulators_dt(pdev,regulators,num_regulators);
          printf("%d\n", (*benchRet).dummy);
          free(pdev);
          free(regulators);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int num_regulators = 10;
          int _len_pdev0 = 100;
          struct platform_device * pdev = (struct platform_device *) malloc(_len_pdev0*sizeof(struct platform_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regulators0 = 100;
          struct mc13xxx_regulator * regulators = (struct mc13xxx_regulator *) malloc(_len_regulators0*sizeof(struct mc13xxx_regulator));
          for(int _i0 = 0; _i0 < _len_regulators0; _i0++) {
            regulators[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mc13xxx_regulator_init_data * benchRet = mc13xxx_parse_regulators_dt(pdev,regulators,num_regulators);
          printf("%d\n", (*benchRet).dummy);
          free(pdev);
          free(regulators);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
