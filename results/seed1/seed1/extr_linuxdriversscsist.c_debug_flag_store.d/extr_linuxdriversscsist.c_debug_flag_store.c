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
struct device_driver {int dummy; } ;
typedef  size_t ssize_t ;

/* Variables and functions */
 size_t EINVAL ; 
 int NO_DEBUG ; 
 int debugging ; 

__attribute__((used)) static ssize_t debug_flag_store(struct device_driver *ddp,
	const char *buf, size_t count)
{
/* We only care what the first byte of the data is the rest is unused.
 * if it's a '1' we turn on debug and if it's a '0' we disable it. All
 * other values have -EINVAL returned if they are passed in.
 */
	if (count > 0) {
		if (buf[0] == '0') {
			debugging = NO_DEBUG;
			return count;
		} else if (buf[0] == '1') {
			debugging = 1;
			return count;
		}
	}
	return -EINVAL;
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
          unsigned long count = 100;
          int _len_ddp0 = 1;
          struct device_driver * ddp = (struct device_driver *) malloc(_len_ddp0*sizeof(struct device_driver));
          for(int _i0 = 0; _i0 < _len_ddp0; _i0++) {
            ddp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          const char * buf = (const char *) malloc(_len_buf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = debug_flag_store(ddp,buf,count);
          printf("%lu\n", benchRet); 
          free(ddp);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long count = 255;
          int _len_ddp0 = 65025;
          struct device_driver * ddp = (struct device_driver *) malloc(_len_ddp0*sizeof(struct device_driver));
          for(int _i0 = 0; _i0 < _len_ddp0; _i0++) {
            ddp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          const char * buf = (const char *) malloc(_len_buf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = debug_flag_store(ddp,buf,count);
          printf("%lu\n", benchRet); 
          free(ddp);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long count = 10;
          int _len_ddp0 = 100;
          struct device_driver * ddp = (struct device_driver *) malloc(_len_ddp0*sizeof(struct device_driver));
          for(int _i0 = 0; _i0 < _len_ddp0; _i0++) {
            ddp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          const char * buf = (const char *) malloc(_len_buf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = debug_flag_store(ddp,buf,count);
          printf("%lu\n", benchRet); 
          free(ddp);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
