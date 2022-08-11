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
typedef  int u32 ;
struct etmv4_config {int /*<<< orphan*/ * addr_type; } ;
struct etmv4_drvdata {int nr_addr_cmp; struct etmv4_config config; } ;

/* Variables and functions */
 int EINVAL ; 
 int ENOSPC ; 
 int /*<<< orphan*/  ETM_ADDR_TYPE_NONE ; 
#define  ETM_ADDR_TYPE_RANGE 130 
#define  ETM_ADDR_TYPE_START 129 
#define  ETM_ADDR_TYPE_STOP 128 

__attribute__((used)) static int etm4_get_next_comparator(struct etmv4_drvdata *drvdata, u32 type)
{
	int nr_comparator, index = 0;
	struct etmv4_config *config = &drvdata->config;

	/*
	 * nr_addr_cmp holds the number of comparator _pair_, so time 2
	 * for the total number of comparators.
	 */
	nr_comparator = drvdata->nr_addr_cmp * 2;

	/* Go through the tally of comparators looking for a free one. */
	while (index < nr_comparator) {
		switch (type) {
		case ETM_ADDR_TYPE_RANGE:
			if (config->addr_type[index] == ETM_ADDR_TYPE_NONE &&
			    config->addr_type[index + 1] == ETM_ADDR_TYPE_NONE)
				return index;

			/* Address range comparators go in pairs */
			index += 2;
			break;
		case ETM_ADDR_TYPE_START:
		case ETM_ADDR_TYPE_STOP:
			if (config->addr_type[index] == ETM_ADDR_TYPE_NONE)
				return index;

			/* Start/stop address can have odd indexes */
			index += 1;
			break;
		default:
			return -EINVAL;
		}
	}

	/* If we are here all the comparators have been used. */
	return -ENOSPC;
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
          int _len_drvdata0 = 1;
          struct etmv4_drvdata * drvdata = (struct etmv4_drvdata *) malloc(_len_drvdata0*sizeof(struct etmv4_drvdata));
          for(int _i0 = 0; _i0 < _len_drvdata0; _i0++) {
            drvdata[_i0].nr_addr_cmp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drvdata__i0__config_addr_type0 = 1;
          drvdata[_i0].config.addr_type = (int *) malloc(_len_drvdata__i0__config_addr_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_drvdata__i0__config_addr_type0; _j0++) {
            drvdata[_i0].config.addr_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = etm4_get_next_comparator(drvdata,type);
          printf("%d\n", benchRet); 
          free(drvdata);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          int _len_drvdata0 = 65025;
          struct etmv4_drvdata * drvdata = (struct etmv4_drvdata *) malloc(_len_drvdata0*sizeof(struct etmv4_drvdata));
          for(int _i0 = 0; _i0 < _len_drvdata0; _i0++) {
            drvdata[_i0].nr_addr_cmp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drvdata__i0__config_addr_type0 = 1;
          drvdata[_i0].config.addr_type = (int *) malloc(_len_drvdata__i0__config_addr_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_drvdata__i0__config_addr_type0; _j0++) {
            drvdata[_i0].config.addr_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = etm4_get_next_comparator(drvdata,type);
          printf("%d\n", benchRet); 
          free(drvdata);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          int _len_drvdata0 = 100;
          struct etmv4_drvdata * drvdata = (struct etmv4_drvdata *) malloc(_len_drvdata0*sizeof(struct etmv4_drvdata));
          for(int _i0 = 0; _i0 < _len_drvdata0; _i0++) {
            drvdata[_i0].nr_addr_cmp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drvdata__i0__config_addr_type0 = 1;
          drvdata[_i0].config.addr_type = (int *) malloc(_len_drvdata__i0__config_addr_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_drvdata__i0__config_addr_type0; _j0++) {
            drvdata[_i0].config.addr_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = etm4_get_next_comparator(drvdata,type);
          printf("%d\n", benchRet); 
          free(drvdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
