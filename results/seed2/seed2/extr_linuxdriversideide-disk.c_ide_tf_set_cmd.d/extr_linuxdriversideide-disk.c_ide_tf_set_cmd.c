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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u8 ;
struct TYPE_4__ {int /*<<< orphan*/  command; } ;
struct ide_cmd {int tf_flags; TYPE_1__ tf; int /*<<< orphan*/  protocol; } ;
struct TYPE_5__ {scalar_t__ mult_count; } ;
typedef  TYPE_2__ ide_drive_t ;

/* Variables and functions */
 int /*<<< orphan*/  ATA_PROT_DMA ; 
 int /*<<< orphan*/  ATA_PROT_PIO ; 
 int IDE_TFLAG_LBA48 ; 
 int IDE_TFLAG_MULTI_PIO ; 
 int IDE_TFLAG_WRITE ; 
 int /*<<< orphan*/ * ide_rw_cmds ; 

__attribute__((used)) static void ide_tf_set_cmd(ide_drive_t *drive, struct ide_cmd *cmd, u8 dma)
{
	u8 index, lba48, write;

	lba48 = (cmd->tf_flags & IDE_TFLAG_LBA48) ? 2 : 0;
	write = (cmd->tf_flags & IDE_TFLAG_WRITE) ? 1 : 0;

	if (dma) {
		cmd->protocol = ATA_PROT_DMA;
		index = 8;
	} else {
		cmd->protocol = ATA_PROT_PIO;
		if (drive->mult_count) {
			cmd->tf_flags |= IDE_TFLAG_MULTI_PIO;
			index = 0;
		} else
			index = 4;
	}

	cmd->tf.command = ide_rw_cmds[index + lba48 + write];
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
          unsigned long dma = 100;
          int _len_drive0 = 1;
          struct TYPE_5__ * drive = (struct TYPE_5__ *) malloc(_len_drive0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
            drive[_i0].mult_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 1;
          struct ide_cmd * cmd = (struct ide_cmd *) malloc(_len_cmd0*sizeof(struct ide_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].tf_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].tf.command = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].protocol = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ide_tf_set_cmd(drive,cmd,dma);
          free(drive);
          free(cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long dma = 255;
          int _len_drive0 = 65025;
          struct TYPE_5__ * drive = (struct TYPE_5__ *) malloc(_len_drive0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
            drive[_i0].mult_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 65025;
          struct ide_cmd * cmd = (struct ide_cmd *) malloc(_len_cmd0*sizeof(struct ide_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].tf_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].tf.command = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].protocol = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ide_tf_set_cmd(drive,cmd,dma);
          free(drive);
          free(cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long dma = 10;
          int _len_drive0 = 100;
          struct TYPE_5__ * drive = (struct TYPE_5__ *) malloc(_len_drive0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
            drive[_i0].mult_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 100;
          struct ide_cmd * cmd = (struct ide_cmd *) malloc(_len_cmd0*sizeof(struct ide_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].tf_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].tf.command = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].protocol = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ide_tf_set_cmd(drive,cmd,dma);
          free(drive);
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
