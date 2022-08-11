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
struct TYPE_2__ {scalar_t__ authType; scalar_t__* rates; } ;
struct airo_info {TYPE_1__ config; } ;

/* Variables and functions */
 scalar_t__ AUTH_OPEN ; 
 scalar_t__ maxencrypt ; 

__attribute__((used)) static inline void checkThrottle(struct airo_info *ai)
{
	int i;
/* Old hardware had a limit on encryption speed */
	if (ai->config.authType != AUTH_OPEN && maxencrypt) {
		for(i=0; i<8; i++) {
			if (ai->config.rates[i] > maxencrypt) {
				ai->config.rates[i] = 0;
			}
		}
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
          int _len_ai0 = 1;
          struct airo_info * ai = (struct airo_info *) malloc(_len_ai0*sizeof(struct airo_info));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
            ai[_i0].config.authType = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ai__i0__config_rates0 = 1;
          ai[_i0].config.rates = (long *) malloc(_len_ai__i0__config_rates0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ai__i0__config_rates0; _j0++) {
            ai[_i0].config.rates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          checkThrottle(ai);
          free(ai);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ai0 = 65025;
          struct airo_info * ai = (struct airo_info *) malloc(_len_ai0*sizeof(struct airo_info));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
            ai[_i0].config.authType = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ai__i0__config_rates0 = 1;
          ai[_i0].config.rates = (long *) malloc(_len_ai__i0__config_rates0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ai__i0__config_rates0; _j0++) {
            ai[_i0].config.rates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          checkThrottle(ai);
          free(ai);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ai0 = 100;
          struct airo_info * ai = (struct airo_info *) malloc(_len_ai0*sizeof(struct airo_info));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
            ai[_i0].config.authType = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ai__i0__config_rates0 = 1;
          ai[_i0].config.rates = (long *) malloc(_len_ai__i0__config_rates0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ai__i0__config_rates0; _j0++) {
            ai[_i0].config.rates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          checkThrottle(ai);
          free(ai);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
