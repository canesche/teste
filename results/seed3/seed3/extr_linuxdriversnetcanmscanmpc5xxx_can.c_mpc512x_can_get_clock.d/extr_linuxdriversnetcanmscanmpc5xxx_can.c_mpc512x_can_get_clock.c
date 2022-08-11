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
typedef  int /*<<< orphan*/  u32 ;
struct platform_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static u32 mpc512x_can_get_clock(struct platform_device *ofdev,
				 const char *clock_name, int *mscan_clksrc)
{
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
          int _len_ofdev0 = 1;
          struct platform_device * ofdev = (struct platform_device *) malloc(_len_ofdev0*sizeof(struct platform_device));
          for(int _i0 = 0; _i0 < _len_ofdev0; _i0++) {
            ofdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_clock_name0 = 1;
          const char * clock_name = (const char *) malloc(_len_clock_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_clock_name0; _i0++) {
            clock_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mscan_clksrc0 = 1;
          int * mscan_clksrc = (int *) malloc(_len_mscan_clksrc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mscan_clksrc0; _i0++) {
            mscan_clksrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mpc512x_can_get_clock(ofdev,clock_name,mscan_clksrc);
          printf("%d\n", benchRet); 
          free(ofdev);
          free(clock_name);
          free(mscan_clksrc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ofdev0 = 65025;
          struct platform_device * ofdev = (struct platform_device *) malloc(_len_ofdev0*sizeof(struct platform_device));
          for(int _i0 = 0; _i0 < _len_ofdev0; _i0++) {
            ofdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_clock_name0 = 65025;
          const char * clock_name = (const char *) malloc(_len_clock_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_clock_name0; _i0++) {
            clock_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mscan_clksrc0 = 65025;
          int * mscan_clksrc = (int *) malloc(_len_mscan_clksrc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mscan_clksrc0; _i0++) {
            mscan_clksrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mpc512x_can_get_clock(ofdev,clock_name,mscan_clksrc);
          printf("%d\n", benchRet); 
          free(ofdev);
          free(clock_name);
          free(mscan_clksrc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ofdev0 = 100;
          struct platform_device * ofdev = (struct platform_device *) malloc(_len_ofdev0*sizeof(struct platform_device));
          for(int _i0 = 0; _i0 < _len_ofdev0; _i0++) {
            ofdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_clock_name0 = 100;
          const char * clock_name = (const char *) malloc(_len_clock_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_clock_name0; _i0++) {
            clock_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mscan_clksrc0 = 100;
          int * mscan_clksrc = (int *) malloc(_len_mscan_clksrc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mscan_clksrc0; _i0++) {
            mscan_clksrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mpc512x_can_get_clock(ofdev,clock_name,mscan_clksrc);
          printf("%d\n", benchRet); 
          free(ofdev);
          free(clock_name);
          free(mscan_clksrc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
