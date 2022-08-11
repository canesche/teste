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
typedef  int u8 ;

/* Variables and functions */
 int WLAN_EID_EXT_SUPP_RATES ; 
 int WLAN_EID_SUPP_RATES ; 

__attribute__((used)) static int prism_build_supp_rates(u8 *buf, const u8 *rates)
{
	int i;

	buf[0] = WLAN_EID_SUPP_RATES;
	for (i = 0; i < 8; i++) {
		/* NULL terminated */
		if (rates[i] == 0x0)
			break;
		buf[i + 2] = rates[i];
	}
	buf[1] = i;

	/* We might still have another 2 rates, which need to go in
	 * extended supported rates */
	if (i == 8 && rates[i] > 0) {
		buf[10] = WLAN_EID_EXT_SUPP_RATES;
		for (; i < 10; i++) {
			/* NULL terminated */
			if (rates[i] == 0x0)
				break;
			buf[i + 2] = rates[i];
		}
		buf[11] = i - 8;
	}

	return (i < 8) ? i + 2 : i + 4;
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
          int _len_buf0 = 1;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rates0 = 1;
          const int * rates = (const int *) malloc(_len_rates0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_rates0; _i0++) {
            rates[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = prism_build_supp_rates(buf,rates);
          printf("%d\n", benchRet); 
          free(buf);
          free(rates);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_buf0 = 65025;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rates0 = 65025;
          const int * rates = (const int *) malloc(_len_rates0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_rates0; _i0++) {
            rates[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = prism_build_supp_rates(buf,rates);
          printf("%d\n", benchRet); 
          free(buf);
          free(rates);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_buf0 = 100;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rates0 = 100;
          const int * rates = (const int *) malloc(_len_rates0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_rates0; _i0++) {
            rates[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = prism_build_supp_rates(buf,rates);
          printf("%d\n", benchRet); 
          free(buf);
          free(rates);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
