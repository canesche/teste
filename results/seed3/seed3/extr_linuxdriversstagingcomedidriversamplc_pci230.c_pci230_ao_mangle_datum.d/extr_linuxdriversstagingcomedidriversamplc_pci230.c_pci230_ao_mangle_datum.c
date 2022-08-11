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
struct pci230_private {scalar_t__ ao_bipolar; } ;
struct pci230_board {int ao_bits; } ;
struct comedi_device {struct pci230_private* private; struct pci230_board* board_ptr; } ;

/* Variables and functions */

__attribute__((used)) static unsigned short pci230_ao_mangle_datum(struct comedi_device *dev,
					     unsigned short datum)
{
	const struct pci230_board *board = dev->board_ptr;
	struct pci230_private *devpriv = dev->private;

	/*
	 * PCI230 is 12 bit - stored in upper bits of 16 bit register (lower
	 * four bits reserved for expansion).  PCI230+ is also 12 bit AO.
	 */
	datum <<= (16 - board->ao_bits);
	/*
	 * If a bipolar range was specified, mangle it
	 * (straight binary->twos complement).
	 */
	if (devpriv->ao_bipolar)
		datum ^= 0x8000;
	return datum;
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
          unsigned short datum = 100;
          int _len_dev0 = 1;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct pci230_private *) malloc(_len_dev__i0__private0*sizeof(struct pci230_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->ao_bipolar = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__board_ptr0 = 1;
          dev[_i0].board_ptr = (struct pci230_board *) malloc(_len_dev__i0__board_ptr0*sizeof(struct pci230_board));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr0; _j0++) {
            dev[_i0].board_ptr->ao_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned short benchRet = pci230_ao_mangle_datum(dev,datum);
          printf("%hu\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].board_ptr);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short datum = 255;
          int _len_dev0 = 65025;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct pci230_private *) malloc(_len_dev__i0__private0*sizeof(struct pci230_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->ao_bipolar = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__board_ptr0 = 1;
          dev[_i0].board_ptr = (struct pci230_board *) malloc(_len_dev__i0__board_ptr0*sizeof(struct pci230_board));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr0; _j0++) {
            dev[_i0].board_ptr->ao_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned short benchRet = pci230_ao_mangle_datum(dev,datum);
          printf("%hu\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].board_ptr);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short datum = 10;
          int _len_dev0 = 100;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct pci230_private *) malloc(_len_dev__i0__private0*sizeof(struct pci230_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->ao_bipolar = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__board_ptr0 = 1;
          dev[_i0].board_ptr = (struct pci230_board *) malloc(_len_dev__i0__board_ptr0*sizeof(struct pci230_board));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr0; _j0++) {
            dev[_i0].board_ptr->ao_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned short benchRet = pci230_ao_mangle_datum(dev,datum);
          printf("%hu\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].board_ptr);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
