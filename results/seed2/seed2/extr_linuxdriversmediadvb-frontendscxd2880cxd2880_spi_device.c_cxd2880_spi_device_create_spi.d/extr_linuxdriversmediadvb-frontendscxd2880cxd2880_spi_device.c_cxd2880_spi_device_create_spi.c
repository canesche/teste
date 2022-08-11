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
       3            linked\n\
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
struct cxd2880_spi_device {int dummy; } ;
struct cxd2880_spi {struct cxd2880_spi_device* user; scalar_t__ flags; int /*<<< orphan*/  write_read; int /*<<< orphan*/  write; int /*<<< orphan*/ * read; } ;

/* Variables and functions */
 int EINVAL ; 
 int /*<<< orphan*/  cxd2880_spi_device_write ; 
 int /*<<< orphan*/  cxd2880_spi_device_write_read ; 

int cxd2880_spi_device_create_spi(struct cxd2880_spi *spi,
				  struct cxd2880_spi_device *spi_device)
{
	if (!spi || !spi_device)
		return -EINVAL;

	spi->read = NULL;
	spi->write = cxd2880_spi_device_write;
	spi->write_read = cxd2880_spi_device_write_read;
	spi->flags = 0;
	spi->user = spi_device;

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
          int _len_spi0 = 1;
          struct cxd2880_spi * spi = (struct cxd2880_spi *) malloc(_len_spi0*sizeof(struct cxd2880_spi));
          for(int _i0 = 0; _i0 < _len_spi0; _i0++) {
              int _len_spi__i0__user0 = 1;
          spi[_i0].user = (struct cxd2880_spi_device *) malloc(_len_spi__i0__user0*sizeof(struct cxd2880_spi_device));
          for(int _j0 = 0; _j0 < _len_spi__i0__user0; _j0++) {
            spi[_i0].user->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        spi[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        spi[_i0].write_read = ((-2 * (next_i()%2)) + 1) * next_i();
        spi[_i0].write = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_spi__i0__read0 = 1;
          spi[_i0].read = (int *) malloc(_len_spi__i0__read0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_spi__i0__read0; _j0++) {
            spi[_i0].read[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_spi_device0 = 1;
          struct cxd2880_spi_device * spi_device = (struct cxd2880_spi_device *) malloc(_len_spi_device0*sizeof(struct cxd2880_spi_device));
          for(int _i0 = 0; _i0 < _len_spi_device0; _i0++) {
            spi_device[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cxd2880_spi_device_create_spi(spi,spi_device);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_spi0; _aux++) {
          free(spi[_aux].user);
          }
          for(int _aux = 0; _aux < _len_spi0; _aux++) {
          free(spi[_aux].read);
          }
          free(spi);
          free(spi_device);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_spi0 = 65025;
          struct cxd2880_spi * spi = (struct cxd2880_spi *) malloc(_len_spi0*sizeof(struct cxd2880_spi));
          for(int _i0 = 0; _i0 < _len_spi0; _i0++) {
              int _len_spi__i0__user0 = 1;
          spi[_i0].user = (struct cxd2880_spi_device *) malloc(_len_spi__i0__user0*sizeof(struct cxd2880_spi_device));
          for(int _j0 = 0; _j0 < _len_spi__i0__user0; _j0++) {
            spi[_i0].user->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        spi[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        spi[_i0].write_read = ((-2 * (next_i()%2)) + 1) * next_i();
        spi[_i0].write = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_spi__i0__read0 = 1;
          spi[_i0].read = (int *) malloc(_len_spi__i0__read0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_spi__i0__read0; _j0++) {
            spi[_i0].read[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_spi_device0 = 65025;
          struct cxd2880_spi_device * spi_device = (struct cxd2880_spi_device *) malloc(_len_spi_device0*sizeof(struct cxd2880_spi_device));
          for(int _i0 = 0; _i0 < _len_spi_device0; _i0++) {
            spi_device[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cxd2880_spi_device_create_spi(spi,spi_device);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_spi0; _aux++) {
          free(spi[_aux].user);
          }
          for(int _aux = 0; _aux < _len_spi0; _aux++) {
          free(spi[_aux].read);
          }
          free(spi);
          free(spi_device);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_spi0 = 100;
          struct cxd2880_spi * spi = (struct cxd2880_spi *) malloc(_len_spi0*sizeof(struct cxd2880_spi));
          for(int _i0 = 0; _i0 < _len_spi0; _i0++) {
              int _len_spi__i0__user0 = 1;
          spi[_i0].user = (struct cxd2880_spi_device *) malloc(_len_spi__i0__user0*sizeof(struct cxd2880_spi_device));
          for(int _j0 = 0; _j0 < _len_spi__i0__user0; _j0++) {
            spi[_i0].user->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        spi[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        spi[_i0].write_read = ((-2 * (next_i()%2)) + 1) * next_i();
        spi[_i0].write = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_spi__i0__read0 = 1;
          spi[_i0].read = (int *) malloc(_len_spi__i0__read0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_spi__i0__read0; _j0++) {
            spi[_i0].read[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_spi_device0 = 100;
          struct cxd2880_spi_device * spi_device = (struct cxd2880_spi_device *) malloc(_len_spi_device0*sizeof(struct cxd2880_spi_device));
          for(int _i0 = 0; _i0 < _len_spi_device0; _i0++) {
            spi_device[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cxd2880_spi_device_create_spi(spi,spi_device);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_spi0; _aux++) {
          free(spi[_aux].user);
          }
          for(int _aux = 0; _aux < _len_spi0; _aux++) {
          free(spi[_aux].read);
          }
          free(spi);
          free(spi_device);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_spi0 = 1;
          struct cxd2880_spi * spi = (struct cxd2880_spi *) malloc(_len_spi0*sizeof(struct cxd2880_spi));
          for(int _i0 = 0; _i0 < _len_spi0; _i0++) {
              int _len_spi__i0__user0 = 1;
          spi[_i0].user = (struct cxd2880_spi_device *) malloc(_len_spi__i0__user0*sizeof(struct cxd2880_spi_device));
          for(int _j0 = 0; _j0 < _len_spi__i0__user0; _j0++) {
            spi[_i0].user->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        spi[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        spi[_i0].write_read = ((-2 * (next_i()%2)) + 1) * next_i();
        spi[_i0].write = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_spi__i0__read0 = 1;
          spi[_i0].read = (int *) malloc(_len_spi__i0__read0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_spi__i0__read0; _j0++) {
            spi[_i0].read[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_spi_device0 = 1;
          struct cxd2880_spi_device * spi_device = (struct cxd2880_spi_device *) malloc(_len_spi_device0*sizeof(struct cxd2880_spi_device));
          for(int _i0 = 0; _i0 < _len_spi_device0; _i0++) {
            spi_device[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cxd2880_spi_device_create_spi(spi,spi_device);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_spi0; _aux++) {
          free(spi[_aux].user);
          }
          for(int _aux = 0; _aux < _len_spi0; _aux++) {
          free(spi[_aux].read);
          }
          free(spi);
          free(spi_device);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
