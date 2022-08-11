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
struct pci_func {int* irq; } ;

/* Variables and functions */
 int LAN_IRQ ; 
 int OTHER_IRQ ; 
#define  PCI_BASE_CLASS_NETWORK 129 
#define  PCI_BASE_CLASS_STORAGE 128 
 int SCSI_IRQ ; 

__attribute__((used)) static void assign_alt_irq(struct pci_func *cur_func, u8 class_code)
{
	int j;
	for (j = 0; j < 4; j++) {
		if (cur_func->irq[j] == 0xff) {
			switch (class_code) {
				case PCI_BASE_CLASS_STORAGE:
					cur_func->irq[j] = SCSI_IRQ;
					break;
				case PCI_BASE_CLASS_NETWORK:
					cur_func->irq[j] = LAN_IRQ;
					break;
				default:
					cur_func->irq[j] = OTHER_IRQ;
					break;
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
          int class_code = 100;
          int _len_cur_func0 = 1;
          struct pci_func * cur_func = (struct pci_func *) malloc(_len_cur_func0*sizeof(struct pci_func));
          for(int _i0 = 0; _i0 < _len_cur_func0; _i0++) {
              int _len_cur_func__i0__irq0 = 1;
          cur_func[_i0].irq = (int *) malloc(_len_cur_func__i0__irq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cur_func__i0__irq0; _j0++) {
            cur_func[_i0].irq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          assign_alt_irq(cur_func,class_code);
          for(int _aux = 0; _aux < _len_cur_func0; _aux++) {
          free(cur_func[_aux].irq);
          }
          free(cur_func);
        
        break;
    }
    // big-arr
    case 1:
    {
          int class_code = 255;
          int _len_cur_func0 = 65025;
          struct pci_func * cur_func = (struct pci_func *) malloc(_len_cur_func0*sizeof(struct pci_func));
          for(int _i0 = 0; _i0 < _len_cur_func0; _i0++) {
              int _len_cur_func__i0__irq0 = 1;
          cur_func[_i0].irq = (int *) malloc(_len_cur_func__i0__irq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cur_func__i0__irq0; _j0++) {
            cur_func[_i0].irq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          assign_alt_irq(cur_func,class_code);
          for(int _aux = 0; _aux < _len_cur_func0; _aux++) {
          free(cur_func[_aux].irq);
          }
          free(cur_func);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int class_code = 10;
          int _len_cur_func0 = 100;
          struct pci_func * cur_func = (struct pci_func *) malloc(_len_cur_func0*sizeof(struct pci_func));
          for(int _i0 = 0; _i0 < _len_cur_func0; _i0++) {
              int _len_cur_func__i0__irq0 = 1;
          cur_func[_i0].irq = (int *) malloc(_len_cur_func__i0__irq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cur_func__i0__irq0; _j0++) {
            cur_func[_i0].irq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          assign_alt_irq(cur_func,class_code);
          for(int _aux = 0; _aux < _len_cur_func0; _aux++) {
          free(cur_func[_aux].irq);
          }
          free(cur_func);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
