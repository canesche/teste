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
struct telemetry_unit_config {int dummy; } ;
typedef  enum telemetry_unit { ____Placeholder_telemetry_unit } telemetry_unit ;
struct TYPE_2__ {struct telemetry_unit_config ioss_config; struct telemetry_unit_config pss_config; } ;

/* Variables and functions */
 int EINVAL ; 
 int TELEM_IOSS ; 
 int TELEM_PSS ; 
 TYPE_1__* telm_conf ; 

__attribute__((used)) static inline int telem_get_unitconfig(enum telemetry_unit telem_unit,
				     struct telemetry_unit_config **unit_config)
{
	if (telem_unit == TELEM_PSS)
		*unit_config = &(telm_conf->pss_config);
	else if (telem_unit == TELEM_IOSS)
		*unit_config = &(telm_conf->ioss_config);
	else
		return -EINVAL;

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
          enum telemetry_unit telem_unit = 0;
          int _len_unit_config0 = 1;
          struct telemetry_unit_config ** unit_config = (struct telemetry_unit_config **) malloc(_len_unit_config0*sizeof(struct telemetry_unit_config *));
          for(int _i0 = 0; _i0 < _len_unit_config0; _i0++) {
            int _len_unit_config1 = 1;
            unit_config[_i0] = (struct telemetry_unit_config *) malloc(_len_unit_config1*sizeof(struct telemetry_unit_config));
            for(int _i1 = 0; _i1 < _len_unit_config1; _i1++) {
              unit_config[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = telem_get_unitconfig(telem_unit,unit_config);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_unit_config0; i1++) {
            int _len_unit_config1 = 1;
              free(unit_config[i1]);
          }
          free(unit_config);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum telemetry_unit telem_unit = 0;
          int _len_unit_config0 = 65025;
          struct telemetry_unit_config ** unit_config = (struct telemetry_unit_config **) malloc(_len_unit_config0*sizeof(struct telemetry_unit_config *));
          for(int _i0 = 0; _i0 < _len_unit_config0; _i0++) {
            int _len_unit_config1 = 1;
            unit_config[_i0] = (struct telemetry_unit_config *) malloc(_len_unit_config1*sizeof(struct telemetry_unit_config));
            for(int _i1 = 0; _i1 < _len_unit_config1; _i1++) {
              unit_config[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = telem_get_unitconfig(telem_unit,unit_config);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_unit_config0; i1++) {
            int _len_unit_config1 = 1;
              free(unit_config[i1]);
          }
          free(unit_config);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum telemetry_unit telem_unit = 0;
          int _len_unit_config0 = 100;
          struct telemetry_unit_config ** unit_config = (struct telemetry_unit_config **) malloc(_len_unit_config0*sizeof(struct telemetry_unit_config *));
          for(int _i0 = 0; _i0 < _len_unit_config0; _i0++) {
            int _len_unit_config1 = 1;
            unit_config[_i0] = (struct telemetry_unit_config *) malloc(_len_unit_config1*sizeof(struct telemetry_unit_config));
            for(int _i1 = 0; _i1 < _len_unit_config1; _i1++) {
              unit_config[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = telem_get_unitconfig(telem_unit,unit_config);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_unit_config0; i1++) {
            int _len_unit_config1 = 1;
              free(unit_config[i1]);
          }
          free(unit_config);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
