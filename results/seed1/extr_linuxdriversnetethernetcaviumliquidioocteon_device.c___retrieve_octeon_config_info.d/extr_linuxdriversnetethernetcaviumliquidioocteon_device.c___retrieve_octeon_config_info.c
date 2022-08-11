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
typedef  size_t u32 ;
typedef  int /*<<< orphan*/  u16 ;
struct octeon_device {size_t octeon_id; int /*<<< orphan*/  chip_id; } ;
struct TYPE_2__ {int conf_type; } ;

/* Variables and functions */
 int /*<<< orphan*/  LIO_210NV ; 
 int /*<<< orphan*/  LIO_410NV ; 
 int /*<<< orphan*/  OCTEON_CN23XX_PF_VID ; 
 int /*<<< orphan*/  OCTEON_CN23XX_VF_VID ; 
 int /*<<< orphan*/  OCTEON_CN66XX ; 
 int /*<<< orphan*/  OCTEON_CN68XX ; 
#define  OCTEON_CONFIG_TYPE_DEFAULT 128 
 int /*<<< orphan*/  default_cn23xx_conf ; 
 int /*<<< orphan*/  default_cn66xx_conf ; 
 int /*<<< orphan*/  default_cn68xx_210nv_conf ; 
 int /*<<< orphan*/  default_cn68xx_conf ; 
 TYPE_1__* oct_conf_info ; 

__attribute__((used)) static void *__retrieve_octeon_config_info(struct octeon_device *oct,
					   u16 card_type)
{
	u32 oct_id = oct->octeon_id;
	void *ret = NULL;

	switch (oct_conf_info[oct_id].conf_type) {
	case OCTEON_CONFIG_TYPE_DEFAULT:
		if (oct->chip_id == OCTEON_CN66XX) {
			ret = &default_cn66xx_conf;
		} else if ((oct->chip_id == OCTEON_CN68XX) &&
			   (card_type == LIO_210NV)) {
			ret = &default_cn68xx_210nv_conf;
		} else if ((oct->chip_id == OCTEON_CN68XX) &&
			   (card_type == LIO_410NV)) {
			ret = &default_cn68xx_conf;
		} else if (oct->chip_id == OCTEON_CN23XX_PF_VID) {
			ret = &default_cn23xx_conf;
		} else if (oct->chip_id == OCTEON_CN23XX_VF_VID) {
			ret = &default_cn23xx_conf;
		}
		break;
	default:
		break;
	}
	return ret;
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
          int card_type = 100;
          int _len_oct0 = 1;
          struct octeon_device * oct = (struct octeon_device *) malloc(_len_oct0*sizeof(struct octeon_device));
          for(int _i0 = 0; _i0 < _len_oct0; _i0++) {
            oct[_i0].octeon_id = ((-2 * (next_i()%2)) + 1) * next_i();
        oct[_i0].chip_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = __retrieve_octeon_config_info(oct,card_type);
          free(oct);
        
        break;
    }
    // big-arr
    case 1:
    {
          int card_type = 255;
          int _len_oct0 = 65025;
          struct octeon_device * oct = (struct octeon_device *) malloc(_len_oct0*sizeof(struct octeon_device));
          for(int _i0 = 0; _i0 < _len_oct0; _i0++) {
            oct[_i0].octeon_id = ((-2 * (next_i()%2)) + 1) * next_i();
        oct[_i0].chip_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = __retrieve_octeon_config_info(oct,card_type);
          free(oct);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int card_type = 10;
          int _len_oct0 = 100;
          struct octeon_device * oct = (struct octeon_device *) malloc(_len_oct0*sizeof(struct octeon_device));
          for(int _i0 = 0; _i0 < _len_oct0; _i0++) {
            oct[_i0].octeon_id = ((-2 * (next_i()%2)) + 1) * next_i();
        oct[_i0].chip_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = __retrieve_octeon_config_info(oct,card_type);
          free(oct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
