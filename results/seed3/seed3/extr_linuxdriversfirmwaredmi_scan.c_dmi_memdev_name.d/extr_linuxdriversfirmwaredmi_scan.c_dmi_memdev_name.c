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
typedef  scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ handle; char* bank; char* device; } ;

/* Variables and functions */
 TYPE_1__* dmi_memdev ; 
 int dmi_memdev_nr ; 

void dmi_memdev_name(u16 handle, const char **bank, const char **device)
{
	int n;

	if (dmi_memdev == NULL)
		return;

	for (n = 0; n < dmi_memdev_nr; n++) {
		if (handle == dmi_memdev[n].handle) {
			*bank = dmi_memdev[n].bank;
			*device = dmi_memdev[n].device;
			break;
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
          long handle = 100;
          int _len_bank0 = 1;
          const char ** bank = (const char **) malloc(_len_bank0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_bank0; _i0++) {
            int _len_bank1 = 1;
            bank[_i0] = (const char *) malloc(_len_bank1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_bank1; _i1++) {
              bank[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_device0 = 1;
          const char ** device = (const char **) malloc(_len_device0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
            int _len_device1 = 1;
            device[_i0] = (const char *) malloc(_len_device1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_device1; _i1++) {
              device[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          dmi_memdev_name(handle,bank,device);
          for(int i1 = 0; i1 < _len_bank0; i1++) {
            int _len_bank1 = 1;
              free(bank[i1]);
          }
          free(bank);
          for(int i1 = 0; i1 < _len_device0; i1++) {
            int _len_device1 = 1;
              free(device[i1]);
          }
          free(device);
        
        break;
    }
    // big-arr
    case 1:
    {
          long handle = 255;
          int _len_bank0 = 65025;
          const char ** bank = (const char **) malloc(_len_bank0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_bank0; _i0++) {
            int _len_bank1 = 1;
            bank[_i0] = (const char *) malloc(_len_bank1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_bank1; _i1++) {
              bank[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_device0 = 65025;
          const char ** device = (const char **) malloc(_len_device0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
            int _len_device1 = 1;
            device[_i0] = (const char *) malloc(_len_device1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_device1; _i1++) {
              device[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          dmi_memdev_name(handle,bank,device);
          for(int i1 = 0; i1 < _len_bank0; i1++) {
            int _len_bank1 = 1;
              free(bank[i1]);
          }
          free(bank);
          for(int i1 = 0; i1 < _len_device0; i1++) {
            int _len_device1 = 1;
              free(device[i1]);
          }
          free(device);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long handle = 10;
          int _len_bank0 = 100;
          const char ** bank = (const char **) malloc(_len_bank0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_bank0; _i0++) {
            int _len_bank1 = 1;
            bank[_i0] = (const char *) malloc(_len_bank1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_bank1; _i1++) {
              bank[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_device0 = 100;
          const char ** device = (const char **) malloc(_len_device0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
            int _len_device1 = 1;
            device[_i0] = (const char *) malloc(_len_device1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_device1; _i1++) {
              device[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          dmi_memdev_name(handle,bank,device);
          for(int i1 = 0; i1 < _len_bank0; i1++) {
            int _len_bank1 = 1;
              free(bank[i1]);
          }
          free(bank);
          for(int i1 = 0; i1 < _len_device0; i1++) {
            int _len_device1 = 1;
              free(device[i1]);
          }
          free(device);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
