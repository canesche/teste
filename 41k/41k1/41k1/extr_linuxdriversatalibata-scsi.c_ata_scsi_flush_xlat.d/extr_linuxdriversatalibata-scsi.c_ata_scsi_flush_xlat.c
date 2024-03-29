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
struct ata_taskfile {int /*<<< orphan*/  command; int /*<<< orphan*/  protocol; int /*<<< orphan*/  flags; } ;
struct ata_queued_cmd {int /*<<< orphan*/  flags; TYPE_1__* dev; struct ata_taskfile tf; } ;
struct TYPE_2__ {int flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  ATA_CMD_FLUSH ; 
 int /*<<< orphan*/  ATA_CMD_FLUSH_EXT ; 
 int ATA_DFLAG_FLUSH_EXT ; 
 int /*<<< orphan*/  ATA_PROT_NODATA ; 
 int /*<<< orphan*/  ATA_QCFLAG_IO ; 
 int /*<<< orphan*/  ATA_TFLAG_DEVICE ; 

__attribute__((used)) static unsigned int ata_scsi_flush_xlat(struct ata_queued_cmd *qc)
{
	struct ata_taskfile *tf = &qc->tf;

	tf->flags |= ATA_TFLAG_DEVICE;
	tf->protocol = ATA_PROT_NODATA;

	if (qc->dev->flags & ATA_DFLAG_FLUSH_EXT)
		tf->command = ATA_CMD_FLUSH_EXT;
	else
		tf->command = ATA_CMD_FLUSH;

	/* flush is critical for IO integrity, consider it an IO command */
	qc->flags |= ATA_QCFLAG_IO;

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
          int _len_qc0 = 1;
          struct ata_queued_cmd * qc = (struct ata_queued_cmd *) malloc(_len_qc0*sizeof(struct ata_queued_cmd));
          for(int _i0 = 0; _i0 < _len_qc0; _i0++) {
            qc[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qc__i0__dev0 = 1;
          qc[_i0].dev = (struct TYPE_2__ *) malloc(_len_qc__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qc__i0__dev0; _j0++) {
            qc[_i0].dev->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        qc[_i0].tf.command = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].tf.protocol = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].tf.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = ata_scsi_flush_xlat(qc);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_qc0; _aux++) {
          free(qc[_aux].dev);
          }
          free(qc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_qc0 = 65025;
          struct ata_queued_cmd * qc = (struct ata_queued_cmd *) malloc(_len_qc0*sizeof(struct ata_queued_cmd));
          for(int _i0 = 0; _i0 < _len_qc0; _i0++) {
            qc[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qc__i0__dev0 = 1;
          qc[_i0].dev = (struct TYPE_2__ *) malloc(_len_qc__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qc__i0__dev0; _j0++) {
            qc[_i0].dev->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        qc[_i0].tf.command = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].tf.protocol = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].tf.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = ata_scsi_flush_xlat(qc);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_qc0; _aux++) {
          free(qc[_aux].dev);
          }
          free(qc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_qc0 = 100;
          struct ata_queued_cmd * qc = (struct ata_queued_cmd *) malloc(_len_qc0*sizeof(struct ata_queued_cmd));
          for(int _i0 = 0; _i0 < _len_qc0; _i0++) {
            qc[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qc__i0__dev0 = 1;
          qc[_i0].dev = (struct TYPE_2__ *) malloc(_len_qc__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qc__i0__dev0; _j0++) {
            qc[_i0].dev->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        qc[_i0].tf.command = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].tf.protocol = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].tf.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = ata_scsi_flush_xlat(qc);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_qc0; _aux++) {
          free(qc[_aux].dev);
          }
          free(qc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
