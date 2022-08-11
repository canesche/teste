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
struct TYPE_2__ {int frame; int second; int minute; } ;
union cdrom_addr {int lba; TYPE_1__ msf; } ;
typedef  scalar_t__ u_char ;

/* Variables and functions */
 scalar_t__ CDROM_LBA ; 

__attribute__((used)) static
void sanitize_format(union cdrom_addr *addr,
		     u_char * curr, u_char requested)
{
	if (*curr == requested)
		return;                 /* nothing to be done! */
	if (requested == CDROM_LBA) {
		addr->lba = (int) addr->msf.frame +
			75 * (addr->msf.second - 2 + 60 * addr->msf.minute);
	} else {                        /* CDROM_MSF */
		int lba = addr->lba;
		addr->msf.frame = lba % 75;
		lba /= 75;
		lba += 2;
		addr->msf.second = lba % 60;
		addr->msf.minute = lba / 60;
	}
	*curr = requested;
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
          long requested = 100;
          int _len_addr0 = 1;
          union cdrom_addr * addr = (union cdrom_addr *) malloc(_len_addr0*sizeof(union cdrom_addr));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = 0;
          }
          int _len_curr0 = 1;
          long * curr = (long *) malloc(_len_curr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_curr0; _i0++) {
            curr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sanitize_format(addr,curr,requested);
          free(addr);
          free(curr);
        
        break;
    }
    // big-arr
    case 1:
    {
          long requested = 255;
          int _len_addr0 = 65025;
          union cdrom_addr * addr = (union cdrom_addr *) malloc(_len_addr0*sizeof(union cdrom_addr));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = 0;
          }
          int _len_curr0 = 65025;
          long * curr = (long *) malloc(_len_curr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_curr0; _i0++) {
            curr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sanitize_format(addr,curr,requested);
          free(addr);
          free(curr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long requested = 10;
          int _len_addr0 = 100;
          union cdrom_addr * addr = (union cdrom_addr *) malloc(_len_addr0*sizeof(union cdrom_addr));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = 0;
          }
          int _len_curr0 = 100;
          long * curr = (long *) malloc(_len_curr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_curr0; _i0++) {
            curr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sanitize_format(addr,curr,requested);
          free(addr);
          free(curr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
