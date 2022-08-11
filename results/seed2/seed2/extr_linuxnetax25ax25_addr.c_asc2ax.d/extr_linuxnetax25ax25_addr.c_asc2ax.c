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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {char* ax25_call; } ;
typedef  TYPE_1__ ax25_address ;

/* Variables and functions */

void asc2ax(ax25_address *addr, const char *callsign)
{
	const char *s;
	int n;

	for (s = callsign, n = 0; n < 6; n++) {
		if (*s != '\0' && *s != '-')
			addr->ax25_call[n] = *s++;
		else
			addr->ax25_call[n] = ' ';
		addr->ax25_call[n] <<= 1;
		addr->ax25_call[n] &= 0xFE;
	}

	if (*s++ == '\0') {
		addr->ax25_call[6] = 0x00;
		return;
	}

	addr->ax25_call[6] = *s++ - '0';

	if (*s != '\0') {
		addr->ax25_call[6] *= 10;
		addr->ax25_call[6] += *s++ - '0';
	}

	addr->ax25_call[6] <<= 1;
	addr->ax25_call[6] &= 0x1E;
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
          int _len_addr0 = 1;
          struct TYPE_3__ * addr = (struct TYPE_3__ *) malloc(_len_addr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
              int _len_addr__i0__ax25_call0 = 1;
          addr[_i0].ax25_call = (char *) malloc(_len_addr__i0__ax25_call0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_addr__i0__ax25_call0; _j0++) {
            addr[_i0].ax25_call[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_callsign0 = 1;
          const char * callsign = (const char *) malloc(_len_callsign0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_callsign0; _i0++) {
            callsign[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          asc2ax(addr,callsign);
          for(int _aux = 0; _aux < _len_addr0; _aux++) {
          free(addr[_aux].ax25_call);
          }
          free(addr);
          free(callsign);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_addr0 = 65025;
          struct TYPE_3__ * addr = (struct TYPE_3__ *) malloc(_len_addr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
              int _len_addr__i0__ax25_call0 = 1;
          addr[_i0].ax25_call = (char *) malloc(_len_addr__i0__ax25_call0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_addr__i0__ax25_call0; _j0++) {
            addr[_i0].ax25_call[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_callsign0 = 65025;
          const char * callsign = (const char *) malloc(_len_callsign0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_callsign0; _i0++) {
            callsign[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          asc2ax(addr,callsign);
          for(int _aux = 0; _aux < _len_addr0; _aux++) {
          free(addr[_aux].ax25_call);
          }
          free(addr);
          free(callsign);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_addr0 = 100;
          struct TYPE_3__ * addr = (struct TYPE_3__ *) malloc(_len_addr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
              int _len_addr__i0__ax25_call0 = 1;
          addr[_i0].ax25_call = (char *) malloc(_len_addr__i0__ax25_call0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_addr__i0__ax25_call0; _j0++) {
            addr[_i0].ax25_call[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_callsign0 = 100;
          const char * callsign = (const char *) malloc(_len_callsign0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_callsign0; _i0++) {
            callsign[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          asc2ax(addr,callsign);
          for(int _aux = 0; _aux < _len_addr0; _aux++) {
          free(addr[_aux].ax25_call);
          }
          free(addr);
          free(callsign);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
