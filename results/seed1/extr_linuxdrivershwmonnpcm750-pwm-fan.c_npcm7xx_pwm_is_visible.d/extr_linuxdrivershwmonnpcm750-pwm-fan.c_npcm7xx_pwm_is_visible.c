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
typedef  int umode_t ;
typedef  int u32 ;
struct npcm7xx_pwm_fan_data {int /*<<< orphan*/ * pwm_present; } ;

/* Variables and functions */
#define  hwmon_pwm_input 128 

__attribute__((used)) static umode_t npcm7xx_pwm_is_visible(const void *_data, u32 attr, int channel)
{
	const struct npcm7xx_pwm_fan_data *data = _data;

	if (!data->pwm_present[channel])
		return 0;

	switch (attr) {
	case hwmon_pwm_input:
		return 0644;
	default:
		return 0;
	}
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
          int attr = 100;
          int channel = 100;
          int _len__data0 = 1;
          const void * _data = (const void *) malloc(_len__data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__data0; _i0++) {
            _data[_i0] = 0;
          }
          int benchRet = npcm7xx_pwm_is_visible(_data,attr,channel);
          printf("%d\n", benchRet); 
          free(_data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int attr = 255;
          int channel = 255;
          int _len__data0 = 65025;
          const void * _data = (const void *) malloc(_len__data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__data0; _i0++) {
            _data[_i0] = 0;
          }
          int benchRet = npcm7xx_pwm_is_visible(_data,attr,channel);
          printf("%d\n", benchRet); 
          free(_data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int attr = 10;
          int channel = 10;
          int _len__data0 = 100;
          const void * _data = (const void *) malloc(_len__data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__data0; _i0++) {
            _data[_i0] = 0;
          }
          int benchRet = npcm7xx_pwm_is_visible(_data,attr,channel);
          printf("%d\n", benchRet); 
          free(_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
