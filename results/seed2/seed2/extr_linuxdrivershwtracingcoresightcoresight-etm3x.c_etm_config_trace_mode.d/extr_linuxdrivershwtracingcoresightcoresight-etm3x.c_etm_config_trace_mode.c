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
struct etm_config {int mode; int enable_ctrl2; int* addr_val; int* addr_acctype; void** addr_type; int /*<<< orphan*/  enable_ctrl1; } ;

/* Variables and functions */
 int /*<<< orphan*/  ETMTECR1_ADDR_COMP_1 ; 
 void* ETM_ADDR_TYPE_RANGE ; 
 int ETM_MODE_EXCL_KERN ; 
 int ETM_MODE_EXCL_USER ; 

void etm_config_trace_mode(struct etm_config *config)
{
	u32 flags, mode;

	mode = config->mode;

	mode &= (ETM_MODE_EXCL_KERN | ETM_MODE_EXCL_USER);

	/* excluding kernel AND user space doesn't make sense */
	if (mode == (ETM_MODE_EXCL_KERN | ETM_MODE_EXCL_USER))
		return;

	/* nothing to do if neither flags are set */
	if (!(mode & ETM_MODE_EXCL_KERN) && !(mode & ETM_MODE_EXCL_USER))
		return;

	flags = (1 << 0 |	/* instruction execute */
		 3 << 3 |	/* ARM instruction */
		 0 << 5 |	/* No data value comparison */
		 0 << 7 |	/* No exact mach */
		 0 << 8);	/* Ignore context ID */

	/* No need to worry about single address comparators. */
	config->enable_ctrl2 = 0x0;

	/* Bit 0 is address range comparator 1 */
	config->enable_ctrl1 = ETMTECR1_ADDR_COMP_1;

	/*
	 * On ETMv3.5:
	 * ETMACTRn[13,11] == Non-secure state comparison control
	 * ETMACTRn[12,10] == Secure state comparison control
	 *
	 * b00 == Match in all modes in this state
	 * b01 == Do not match in any more in this state
	 * b10 == Match in all modes excepts user mode in this state
	 * b11 == Match only in user mode in this state
	 */

	/* Tracing in secure mode is not supported at this time */
	flags |= (0 << 12 | 1 << 10);

	if (mode & ETM_MODE_EXCL_USER) {
		/* exclude user, match all modes except user mode */
		flags |= (1 << 13 | 0 << 11);
	} else {
		/* exclude kernel, match only in user mode */
		flags |= (1 << 13 | 1 << 11);
	}

	/*
	 * The ETMEEVR register is already set to "hard wire A".  As such
	 * all there is to do is setup an address comparator that spans
	 * the entire address range and configure the state and mode bits.
	 */
	config->addr_val[0] = (u32) 0x0;
	config->addr_val[1] = (u32) ~0x0;
	config->addr_acctype[0] = flags;
	config->addr_acctype[1] = flags;
	config->addr_type[0] = ETM_ADDR_TYPE_RANGE;
	config->addr_type[1] = ETM_ADDR_TYPE_RANGE;
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
          int _len_config0 = 1;
          struct etm_config * config = (struct etm_config *) malloc(_len_config0*sizeof(struct etm_config));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
            config[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].enable_ctrl2 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_config__i0__addr_val0 = 1;
          config[_i0].addr_val = (int *) malloc(_len_config__i0__addr_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_config__i0__addr_val0; _j0++) {
            config[_i0].addr_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_config__i0__addr_acctype0 = 1;
          config[_i0].addr_acctype = (int *) malloc(_len_config__i0__addr_acctype0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_config__i0__addr_acctype0; _j0++) {
            config[_i0].addr_acctype[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_config__i0__addr_type0 = 1;
          config[_i0].addr_type = (void **) malloc(_len_config__i0__addr_type0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_config__i0__addr_type0; _j0++) {
          }
        config[_i0].enable_ctrl1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          etm_config_trace_mode(config);
          for(int _aux = 0; _aux < _len_config0; _aux++) {
          free(config[_aux].addr_val);
          }
          for(int _aux = 0; _aux < _len_config0; _aux++) {
          free(config[_aux].addr_acctype);
          }
          free(config);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_config0 = 65025;
          struct etm_config * config = (struct etm_config *) malloc(_len_config0*sizeof(struct etm_config));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
            config[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].enable_ctrl2 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_config__i0__addr_val0 = 1;
          config[_i0].addr_val = (int *) malloc(_len_config__i0__addr_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_config__i0__addr_val0; _j0++) {
            config[_i0].addr_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_config__i0__addr_acctype0 = 1;
          config[_i0].addr_acctype = (int *) malloc(_len_config__i0__addr_acctype0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_config__i0__addr_acctype0; _j0++) {
            config[_i0].addr_acctype[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_config__i0__addr_type0 = 1;
          config[_i0].addr_type = (void **) malloc(_len_config__i0__addr_type0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_config__i0__addr_type0; _j0++) {
          }
        config[_i0].enable_ctrl1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          etm_config_trace_mode(config);
          for(int _aux = 0; _aux < _len_config0; _aux++) {
          free(config[_aux].addr_val);
          }
          for(int _aux = 0; _aux < _len_config0; _aux++) {
          free(config[_aux].addr_acctype);
          }
          free(config);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_config0 = 100;
          struct etm_config * config = (struct etm_config *) malloc(_len_config0*sizeof(struct etm_config));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
            config[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].enable_ctrl2 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_config__i0__addr_val0 = 1;
          config[_i0].addr_val = (int *) malloc(_len_config__i0__addr_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_config__i0__addr_val0; _j0++) {
            config[_i0].addr_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_config__i0__addr_acctype0 = 1;
          config[_i0].addr_acctype = (int *) malloc(_len_config__i0__addr_acctype0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_config__i0__addr_acctype0; _j0++) {
            config[_i0].addr_acctype[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_config__i0__addr_type0 = 1;
          config[_i0].addr_type = (void **) malloc(_len_config__i0__addr_type0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_config__i0__addr_type0; _j0++) {
          }
        config[_i0].enable_ctrl1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          etm_config_trace_mode(config);
          for(int _aux = 0; _aux < _len_config0; _aux++) {
          free(config[_aux].addr_val);
          }
          for(int _aux = 0; _aux < _len_config0; _aux++) {
          free(config[_aux].addr_acctype);
          }
          free(config);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
