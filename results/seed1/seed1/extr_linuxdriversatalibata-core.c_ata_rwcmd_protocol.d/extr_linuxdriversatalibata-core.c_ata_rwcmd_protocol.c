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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u8 ;
struct ata_taskfile {int flags; scalar_t__ command; void* protocol; } ;
struct ata_device {int flags; scalar_t__ multi_count; TYPE_2__* link; } ;
struct TYPE_4__ {TYPE_1__* ap; } ;
struct TYPE_3__ {int flags; } ;

/* Variables and functions */
 int ATA_DFLAG_PIO ; 
 int ATA_FLAG_PIO_LBA48 ; 
 void* ATA_PROT_DMA ; 
 void* ATA_PROT_PIO ; 
 int ATA_TFLAG_FUA ; 
 int ATA_TFLAG_LBA48 ; 
 int ATA_TFLAG_WRITE ; 
 scalar_t__* ata_rw_cmds ; 

__attribute__((used)) static int ata_rwcmd_protocol(struct ata_taskfile *tf, struct ata_device *dev)
{
	u8 cmd;

	int index, fua, lba48, write;

	fua = (tf->flags & ATA_TFLAG_FUA) ? 4 : 0;
	lba48 = (tf->flags & ATA_TFLAG_LBA48) ? 2 : 0;
	write = (tf->flags & ATA_TFLAG_WRITE) ? 1 : 0;

	if (dev->flags & ATA_DFLAG_PIO) {
		tf->protocol = ATA_PROT_PIO;
		index = dev->multi_count ? 0 : 8;
	} else if (lba48 && (dev->link->ap->flags & ATA_FLAG_PIO_LBA48)) {
		/* Unable to use DMA due to host limitation */
		tf->protocol = ATA_PROT_PIO;
		index = dev->multi_count ? 0 : 8;
	} else {
		tf->protocol = ATA_PROT_DMA;
		index = 16;
	}

	cmd = ata_rw_cmds[index + fua + lba48 + write];
	if (cmd) {
		tf->command = cmd;
		return 0;
	}
	return -1;
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
          int _len_tf0 = 1;
          struct ata_taskfile * tf = (struct ata_taskfile *) malloc(_len_tf0*sizeof(struct ata_taskfile));
          for(int _i0 = 0; _i0 < _len_tf0; _i0++) {
            tf[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].command = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev0 = 1;
          struct ata_device * dev = (struct ata_device *) malloc(_len_dev0*sizeof(struct ata_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].multi_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__link0 = 1;
          dev[_i0].link = (struct TYPE_4__ *) malloc(_len_dev__i0__link0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__link0; _j0++) {
              int _len_dev__i0__link_ap0 = 1;
          dev[_i0].link->ap = (struct TYPE_3__ *) malloc(_len_dev__i0__link_ap0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__link_ap0; _j0++) {
            dev[_i0].link->ap->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ata_rwcmd_protocol(tf,dev);
          printf("%d\n", benchRet); 
          free(tf);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].link);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tf0 = 65025;
          struct ata_taskfile * tf = (struct ata_taskfile *) malloc(_len_tf0*sizeof(struct ata_taskfile));
          for(int _i0 = 0; _i0 < _len_tf0; _i0++) {
            tf[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].command = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev0 = 65025;
          struct ata_device * dev = (struct ata_device *) malloc(_len_dev0*sizeof(struct ata_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].multi_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__link0 = 1;
          dev[_i0].link = (struct TYPE_4__ *) malloc(_len_dev__i0__link0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__link0; _j0++) {
              int _len_dev__i0__link_ap0 = 1;
          dev[_i0].link->ap = (struct TYPE_3__ *) malloc(_len_dev__i0__link_ap0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__link_ap0; _j0++) {
            dev[_i0].link->ap->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ata_rwcmd_protocol(tf,dev);
          printf("%d\n", benchRet); 
          free(tf);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].link);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tf0 = 100;
          struct ata_taskfile * tf = (struct ata_taskfile *) malloc(_len_tf0*sizeof(struct ata_taskfile));
          for(int _i0 = 0; _i0 < _len_tf0; _i0++) {
            tf[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].command = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev0 = 100;
          struct ata_device * dev = (struct ata_device *) malloc(_len_dev0*sizeof(struct ata_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].multi_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__link0 = 1;
          dev[_i0].link = (struct TYPE_4__ *) malloc(_len_dev__i0__link0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__link0; _j0++) {
              int _len_dev__i0__link_ap0 = 1;
          dev[_i0].link->ap = (struct TYPE_3__ *) malloc(_len_dev__i0__link_ap0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__link_ap0; _j0++) {
            dev[_i0].link->ap->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ata_rwcmd_protocol(tf,dev);
          printf("%d\n", benchRet); 
          free(tf);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].link);
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
