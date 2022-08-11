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
struct i2c_child_t {int dummy; } ;
struct TYPE_2__ {unsigned char* mon_type; } ;

/* Variables and functions */
 int ENVCTRL_MAX_CPU ; 
 int PCF8584_MAX_CHANNELS ; 
 TYPE_1__* i2c_childlist ; 

__attribute__((used)) static struct i2c_child_t *envctrl_get_i2c_child(unsigned char mon_type)
{
	int i, j;

	for (i = 0; i < ENVCTRL_MAX_CPU*2; i++) {
		for (j = 0; j < PCF8584_MAX_CHANNELS; j++) {
			if (i2c_childlist[i].mon_type[j] == mon_type) {
				return (struct i2c_child_t *)(&(i2c_childlist[i]));
			}
		}
	}
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
          unsigned char mon_type = 100;
          struct i2c_child_t * benchRet = envctrl_get_i2c_child(mon_type);
          printf("%d\n", (*benchRet).dummy);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char mon_type = 255;
          struct i2c_child_t * benchRet = envctrl_get_i2c_child(mon_type);
          printf("%d\n", (*benchRet).dummy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char mon_type = 10;
          struct i2c_child_t * benchRet = envctrl_get_i2c_child(mon_type);
          printf("%d\n", (*benchRet).dummy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
