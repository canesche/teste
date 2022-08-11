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
typedef  int /*<<< orphan*/  u8 ;
struct cxd2880_spi {int dummy; } ;
struct cxd2880_io {int /*<<< orphan*/  slave_select; scalar_t__ i2c_address_demod; scalar_t__ i2c_address_sys; struct cxd2880_spi* if_object; int /*<<< orphan*/  write_reg; int /*<<< orphan*/  write_regs; int /*<<< orphan*/  read_regs; } ;

/* Variables and functions */
 int EINVAL ; 
 int /*<<< orphan*/  cxd2880_io_common_write_one_reg ; 
 int /*<<< orphan*/  cxd2880_io_spi_read_reg ; 
 int /*<<< orphan*/  cxd2880_io_spi_write_reg ; 

int cxd2880_io_spi_create(struct cxd2880_io *io,
			  struct cxd2880_spi *spi, u8 slave_select)
{
	if (!io || !spi)
		return -EINVAL;

	io->read_regs = cxd2880_io_spi_read_reg;
	io->write_regs = cxd2880_io_spi_write_reg;
	io->write_reg = cxd2880_io_common_write_one_reg;
	io->if_object = spi;
	io->i2c_address_sys = 0;
	io->i2c_address_demod = 0;
	io->slave_select = slave_select;

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
          int slave_select = 100;
          int _len_io0 = 1;
          struct cxd2880_io * io = (struct cxd2880_io *) malloc(_len_io0*sizeof(struct cxd2880_io));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
            io[_i0].slave_select = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].i2c_address_demod = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].i2c_address_sys = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io__i0__if_object0 = 1;
          io[_i0].if_object = (struct cxd2880_spi *) malloc(_len_io__i0__if_object0*sizeof(struct cxd2880_spi));
          for(int _j0 = 0; _j0 < _len_io__i0__if_object0; _j0++) {
            io[_i0].if_object->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        io[_i0].write_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].write_regs = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].read_regs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_spi0 = 1;
          struct cxd2880_spi * spi = (struct cxd2880_spi *) malloc(_len_spi0*sizeof(struct cxd2880_spi));
          for(int _i0 = 0; _i0 < _len_spi0; _i0++) {
            spi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cxd2880_io_spi_create(io,spi,slave_select);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_io0; _aux++) {
          free(io[_aux].if_object);
          }
          free(io);
          free(spi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int slave_select = 255;
          int _len_io0 = 65025;
          struct cxd2880_io * io = (struct cxd2880_io *) malloc(_len_io0*sizeof(struct cxd2880_io));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
            io[_i0].slave_select = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].i2c_address_demod = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].i2c_address_sys = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io__i0__if_object0 = 1;
          io[_i0].if_object = (struct cxd2880_spi *) malloc(_len_io__i0__if_object0*sizeof(struct cxd2880_spi));
          for(int _j0 = 0; _j0 < _len_io__i0__if_object0; _j0++) {
            io[_i0].if_object->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        io[_i0].write_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].write_regs = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].read_regs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_spi0 = 65025;
          struct cxd2880_spi * spi = (struct cxd2880_spi *) malloc(_len_spi0*sizeof(struct cxd2880_spi));
          for(int _i0 = 0; _i0 < _len_spi0; _i0++) {
            spi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cxd2880_io_spi_create(io,spi,slave_select);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_io0; _aux++) {
          free(io[_aux].if_object);
          }
          free(io);
          free(spi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int slave_select = 10;
          int _len_io0 = 100;
          struct cxd2880_io * io = (struct cxd2880_io *) malloc(_len_io0*sizeof(struct cxd2880_io));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
            io[_i0].slave_select = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].i2c_address_demod = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].i2c_address_sys = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io__i0__if_object0 = 1;
          io[_i0].if_object = (struct cxd2880_spi *) malloc(_len_io__i0__if_object0*sizeof(struct cxd2880_spi));
          for(int _j0 = 0; _j0 < _len_io__i0__if_object0; _j0++) {
            io[_i0].if_object->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        io[_i0].write_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].write_regs = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].read_regs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_spi0 = 100;
          struct cxd2880_spi * spi = (struct cxd2880_spi *) malloc(_len_spi0*sizeof(struct cxd2880_spi));
          for(int _i0 = 0; _i0 < _len_spi0; _i0++) {
            spi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cxd2880_io_spi_create(io,spi,slave_select);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_io0; _aux++) {
          free(io[_aux].if_object);
          }
          free(io);
          free(spi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
