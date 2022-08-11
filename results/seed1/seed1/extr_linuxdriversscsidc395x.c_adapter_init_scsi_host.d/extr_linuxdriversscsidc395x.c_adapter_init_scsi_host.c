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
struct Scsi_Host {int max_cmd_len; int this_id; int dma_channel; int max_id; int max_lun; int /*<<< orphan*/  irq; int /*<<< orphan*/  unique_id; int /*<<< orphan*/  n_io_port; int /*<<< orphan*/  io_port; int /*<<< orphan*/  cmd_per_lun; int /*<<< orphan*/  can_queue; scalar_t__ hostdata; } ;
struct NvRamType {int scsi_id; int channel_cfg; } ;
struct AdapterCtlBlk {int /*<<< orphan*/  last_reset; int /*<<< orphan*/  irq_level; int /*<<< orphan*/  io_port_base; int /*<<< orphan*/  io_port_len; struct NvRamType eeprom; } ;

/* Variables and functions */
 int /*<<< orphan*/  DC395x_MAX_CMD_PER_LUN ; 
 int /*<<< orphan*/  DC395x_MAX_CMD_QUEUE ; 
 int NAC_SCANLUN ; 
 int /*<<< orphan*/  jiffies ; 

__attribute__((used)) static void adapter_init_scsi_host(struct Scsi_Host *host)
{
        struct AdapterCtlBlk *acb = (struct AdapterCtlBlk *)host->hostdata;
	struct NvRamType *eeprom = &acb->eeprom;
        
	host->max_cmd_len = 24;
	host->can_queue = DC395x_MAX_CMD_QUEUE;
	host->cmd_per_lun = DC395x_MAX_CMD_PER_LUN;
	host->this_id = (int)eeprom->scsi_id;
	host->io_port = acb->io_port_base;
	host->n_io_port = acb->io_port_len;
	host->dma_channel = -1;
	host->unique_id = acb->io_port_base;
	host->irq = acb->irq_level;
	acb->last_reset = jiffies;

	host->max_id = 16;
	if (host->max_id - 1 == eeprom->scsi_id)
		host->max_id--;

	if (eeprom->channel_cfg & NAC_SCANLUN)
		host->max_lun = 8;
	else
		host->max_lun = 1;
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
          int _len_host0 = 1;
          struct Scsi_Host * host = (struct Scsi_Host *) malloc(_len_host0*sizeof(struct Scsi_Host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].max_cmd_len = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].this_id = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].dma_channel = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].max_id = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].max_lun = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].irq = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].unique_id = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].n_io_port = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].io_port = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].cmd_per_lun = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].can_queue = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].hostdata = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          adapter_init_scsi_host(host);
          free(host);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_host0 = 65025;
          struct Scsi_Host * host = (struct Scsi_Host *) malloc(_len_host0*sizeof(struct Scsi_Host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].max_cmd_len = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].this_id = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].dma_channel = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].max_id = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].max_lun = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].irq = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].unique_id = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].n_io_port = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].io_port = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].cmd_per_lun = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].can_queue = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].hostdata = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          adapter_init_scsi_host(host);
          free(host);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_host0 = 100;
          struct Scsi_Host * host = (struct Scsi_Host *) malloc(_len_host0*sizeof(struct Scsi_Host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].max_cmd_len = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].this_id = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].dma_channel = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].max_id = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].max_lun = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].irq = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].unique_id = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].n_io_port = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].io_port = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].cmd_per_lun = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].can_queue = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].hostdata = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          adapter_init_scsi_host(host);
          free(host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
