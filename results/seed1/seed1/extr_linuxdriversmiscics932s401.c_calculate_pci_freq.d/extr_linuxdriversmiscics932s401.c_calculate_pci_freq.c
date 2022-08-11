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
struct ics932s401_data {int* regs; } ;

/* Variables and functions */
 int BASE_CLOCK ; 
 int ICS932S401_M_MASK ; 
 size_t ICS932S401_PCI_DIVISOR_SHIFT ; 
 size_t ICS932S401_REG_PCISRC_DIVISOR ; 
 size_t ICS932S401_REG_SRC_M_CTRL ; 
 size_t ICS932S401_REG_SRC_N_CTRL ; 
 int* divisors ; 

__attribute__((used)) static int calculate_pci_freq(struct ics932s401_data *data)
{
	int m, n, freq;

	m = data->regs[ICS932S401_REG_SRC_M_CTRL] & ICS932S401_M_MASK;
	n = data->regs[ICS932S401_REG_SRC_N_CTRL];

	/* Pull in bits 8 & 9 from the M register */
	n |= ((int)data->regs[ICS932S401_REG_SRC_M_CTRL] & 0x80) << 1;
	n |= ((int)data->regs[ICS932S401_REG_SRC_M_CTRL] & 0x40) << 3;

	freq = BASE_CLOCK * (n + 8) / (m + 2);
	freq /= divisors[data->regs[ICS932S401_REG_PCISRC_DIVISOR] >>
			 ICS932S401_PCI_DIVISOR_SHIFT];

	return freq;
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
          int _len_data0 = 1;
          struct ics932s401_data * data = (struct ics932s401_data *) malloc(_len_data0*sizeof(struct ics932s401_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__regs0 = 1;
          data[_i0].regs = (int *) malloc(_len_data__i0__regs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__regs0; _j0++) {
            data[_i0].regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = calculate_pci_freq(data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].regs);
          }
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_data0 = 65025;
          struct ics932s401_data * data = (struct ics932s401_data *) malloc(_len_data0*sizeof(struct ics932s401_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__regs0 = 1;
          data[_i0].regs = (int *) malloc(_len_data__i0__regs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__regs0; _j0++) {
            data[_i0].regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = calculate_pci_freq(data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].regs);
          }
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_data0 = 100;
          struct ics932s401_data * data = (struct ics932s401_data *) malloc(_len_data0*sizeof(struct ics932s401_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__regs0 = 1;
          data[_i0].regs = (int *) malloc(_len_data__i0__regs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__regs0; _j0++) {
            data[_i0].regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = calculate_pci_freq(data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].regs);
          }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
