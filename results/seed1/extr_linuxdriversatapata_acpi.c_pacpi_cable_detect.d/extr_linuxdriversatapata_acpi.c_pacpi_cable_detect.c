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
struct pata_acpi {int* mask; } ;
struct ata_port {struct pata_acpi* private_data; } ;

/* Variables and functions */
 int ATA_CBL_PATA40 ; 
 int ATA_CBL_PATA80 ; 
 int ATA_SHIFT_UDMA ; 

__attribute__((used)) static int pacpi_cable_detect(struct ata_port *ap)
{
	struct pata_acpi *acpi = ap->private_data;

	if ((acpi->mask[0] | acpi->mask[1]) & (0xF8 << ATA_SHIFT_UDMA))
		return ATA_CBL_PATA80;
	else
		return ATA_CBL_PATA40;
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
          int _len_ap0 = 1;
          struct ata_port * ap = (struct ata_port *) malloc(_len_ap0*sizeof(struct ata_port));
          for(int _i0 = 0; _i0 < _len_ap0; _i0++) {
              int _len_ap__i0__private_data0 = 1;
          ap[_i0].private_data = (struct pata_acpi *) malloc(_len_ap__i0__private_data0*sizeof(struct pata_acpi));
          for(int _j0 = 0; _j0 < _len_ap__i0__private_data0; _j0++) {
              int _len_ap__i0__private_data_mask0 = 1;
          ap[_i0].private_data->mask = (int *) malloc(_len_ap__i0__private_data_mask0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ap__i0__private_data_mask0; _j0++) {
            ap[_i0].private_data->mask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = pacpi_cable_detect(ap);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ap0; _aux++) {
          free(ap[_aux].private_data);
          }
          free(ap);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ap0 = 65025;
          struct ata_port * ap = (struct ata_port *) malloc(_len_ap0*sizeof(struct ata_port));
          for(int _i0 = 0; _i0 < _len_ap0; _i0++) {
              int _len_ap__i0__private_data0 = 1;
          ap[_i0].private_data = (struct pata_acpi *) malloc(_len_ap__i0__private_data0*sizeof(struct pata_acpi));
          for(int _j0 = 0; _j0 < _len_ap__i0__private_data0; _j0++) {
              int _len_ap__i0__private_data_mask0 = 1;
          ap[_i0].private_data->mask = (int *) malloc(_len_ap__i0__private_data_mask0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ap__i0__private_data_mask0; _j0++) {
            ap[_i0].private_data->mask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = pacpi_cable_detect(ap);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ap0; _aux++) {
          free(ap[_aux].private_data);
          }
          free(ap);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ap0 = 100;
          struct ata_port * ap = (struct ata_port *) malloc(_len_ap0*sizeof(struct ata_port));
          for(int _i0 = 0; _i0 < _len_ap0; _i0++) {
              int _len_ap__i0__private_data0 = 1;
          ap[_i0].private_data = (struct pata_acpi *) malloc(_len_ap__i0__private_data0*sizeof(struct pata_acpi));
          for(int _j0 = 0; _j0 < _len_ap__i0__private_data0; _j0++) {
              int _len_ap__i0__private_data_mask0 = 1;
          ap[_i0].private_data->mask = (int *) malloc(_len_ap__i0__private_data_mask0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ap__i0__private_data_mask0; _j0++) {
            ap[_i0].private_data->mask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = pacpi_cable_detect(ap);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ap0; _aux++) {
          free(ap[_aux].private_data);
          }
          free(ap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
