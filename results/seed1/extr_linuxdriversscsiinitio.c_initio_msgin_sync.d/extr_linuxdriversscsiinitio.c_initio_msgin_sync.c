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
struct initio_host {char* msg; TYPE_1__* active_tc; } ;
struct TYPE_2__ {size_t flags; } ;

/* Variables and functions */
 char MAX_OFFSET ; 
 size_t TCF_SCSI_RATE ; 
 char* initio_rate_tbl ; 

__attribute__((used)) static int initio_msgin_sync(struct initio_host * host)
{
	char default_period;

	default_period = initio_rate_tbl[host->active_tc->flags & TCF_SCSI_RATE];
	if (host->msg[3] > MAX_OFFSET) {
		host->msg[3] = MAX_OFFSET;
		if (host->msg[2] < default_period) {
			host->msg[2] = default_period;
			return 1;
		}
		if (host->msg[2] >= 59)	/* Change to async              */
			host->msg[3] = 0;
		return 1;
	}
	/* offset requests asynchronous transfers ? */
	if (host->msg[3] == 0) {
		return 0;
	}
	if (host->msg[2] < default_period) {
		host->msg[2] = default_period;
		return 1;
	}
	if (host->msg[2] >= 59) {
		host->msg[3] = 0;
		return 1;
	}
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
          int _len_host0 = 1;
          struct initio_host * host = (struct initio_host *) malloc(_len_host0*sizeof(struct initio_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__msg0 = 1;
          host[_i0].msg = (char *) malloc(_len_host__i0__msg0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_host__i0__msg0; _j0++) {
            host[_i0].msg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__active_tc0 = 1;
          host[_i0].active_tc = (struct TYPE_2__ *) malloc(_len_host__i0__active_tc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__active_tc0; _j0++) {
            host[_i0].active_tc->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = initio_msgin_sync(host);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].msg);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].active_tc);
          }
          free(host);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_host0 = 65025;
          struct initio_host * host = (struct initio_host *) malloc(_len_host0*sizeof(struct initio_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__msg0 = 1;
          host[_i0].msg = (char *) malloc(_len_host__i0__msg0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_host__i0__msg0; _j0++) {
            host[_i0].msg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__active_tc0 = 1;
          host[_i0].active_tc = (struct TYPE_2__ *) malloc(_len_host__i0__active_tc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__active_tc0; _j0++) {
            host[_i0].active_tc->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = initio_msgin_sync(host);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].msg);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].active_tc);
          }
          free(host);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_host0 = 100;
          struct initio_host * host = (struct initio_host *) malloc(_len_host0*sizeof(struct initio_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__msg0 = 1;
          host[_i0].msg = (char *) malloc(_len_host__i0__msg0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_host__i0__msg0; _j0++) {
            host[_i0].msg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__active_tc0 = 1;
          host[_i0].active_tc = (struct TYPE_2__ *) malloc(_len_host__i0__active_tc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__active_tc0; _j0++) {
            host[_i0].active_tc->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = initio_msgin_sync(host);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].msg);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].active_tc);
          }
          free(host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
