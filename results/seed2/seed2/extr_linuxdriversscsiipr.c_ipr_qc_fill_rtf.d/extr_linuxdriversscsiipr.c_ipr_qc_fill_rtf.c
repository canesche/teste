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
struct ipr_ioasa_gata {int /*<<< orphan*/  hob_lbah; int /*<<< orphan*/  hob_lbam; int /*<<< orphan*/  hob_lbal; int /*<<< orphan*/  hob_nsect; int /*<<< orphan*/  status; int /*<<< orphan*/  device; int /*<<< orphan*/  lbah; int /*<<< orphan*/  lbam; int /*<<< orphan*/  lbal; int /*<<< orphan*/  nsect; int /*<<< orphan*/  error; } ;
struct ipr_sata_port {struct ipr_ioasa_gata ioasa; } ;
struct ata_taskfile {int /*<<< orphan*/  hob_lbah; int /*<<< orphan*/  hob_lbam; int /*<<< orphan*/  hob_lbal; int /*<<< orphan*/  hob_nsect; int /*<<< orphan*/  command; int /*<<< orphan*/  device; int /*<<< orphan*/  lbah; int /*<<< orphan*/  lbam; int /*<<< orphan*/  lbal; int /*<<< orphan*/  nsect; int /*<<< orphan*/  feature; } ;
struct ata_queued_cmd {struct ata_taskfile result_tf; TYPE_1__* ap; } ;
struct TYPE_2__ {struct ipr_sata_port* private_data; } ;

/* Variables and functions */

__attribute__((used)) static bool ipr_qc_fill_rtf(struct ata_queued_cmd *qc)
{
	struct ipr_sata_port *sata_port = qc->ap->private_data;
	struct ipr_ioasa_gata *g = &sata_port->ioasa;
	struct ata_taskfile *tf = &qc->result_tf;

	tf->feature = g->error;
	tf->nsect = g->nsect;
	tf->lbal = g->lbal;
	tf->lbam = g->lbam;
	tf->lbah = g->lbah;
	tf->device = g->device;
	tf->command = g->status;
	tf->hob_nsect = g->hob_nsect;
	tf->hob_lbal = g->hob_lbal;
	tf->hob_lbam = g->hob_lbam;
	tf->hob_lbah = g->hob_lbah;

	return true;
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
            qc[_i0].result_tf.hob_lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.hob_lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.hob_lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.hob_nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.command = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.device = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.feature = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qc__i0__ap0 = 1;
          qc[_i0].ap = (struct TYPE_2__ *) malloc(_len_qc__i0__ap0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qc__i0__ap0; _j0++) {
              int _len_qc__i0__ap_private_data0 = 1;
          qc[_i0].ap->private_data = (struct ipr_sata_port *) malloc(_len_qc__i0__ap_private_data0*sizeof(struct ipr_sata_port));
          for(int _j0 = 0; _j0 < _len_qc__i0__ap_private_data0; _j0++) {
            qc[_i0].ap->private_data->ioasa.hob_lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.hob_lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.hob_lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.hob_nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.status = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.device = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ipr_qc_fill_rtf(qc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_qc0; _aux++) {
          free(qc[_aux].ap);
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
            qc[_i0].result_tf.hob_lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.hob_lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.hob_lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.hob_nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.command = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.device = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.feature = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qc__i0__ap0 = 1;
          qc[_i0].ap = (struct TYPE_2__ *) malloc(_len_qc__i0__ap0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qc__i0__ap0; _j0++) {
              int _len_qc__i0__ap_private_data0 = 1;
          qc[_i0].ap->private_data = (struct ipr_sata_port *) malloc(_len_qc__i0__ap_private_data0*sizeof(struct ipr_sata_port));
          for(int _j0 = 0; _j0 < _len_qc__i0__ap_private_data0; _j0++) {
            qc[_i0].ap->private_data->ioasa.hob_lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.hob_lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.hob_lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.hob_nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.status = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.device = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ipr_qc_fill_rtf(qc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_qc0; _aux++) {
          free(qc[_aux].ap);
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
            qc[_i0].result_tf.hob_lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.hob_lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.hob_lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.hob_nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.command = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.device = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].result_tf.feature = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qc__i0__ap0 = 1;
          qc[_i0].ap = (struct TYPE_2__ *) malloc(_len_qc__i0__ap0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qc__i0__ap0; _j0++) {
              int _len_qc__i0__ap_private_data0 = 1;
          qc[_i0].ap->private_data = (struct ipr_sata_port *) malloc(_len_qc__i0__ap_private_data0*sizeof(struct ipr_sata_port));
          for(int _j0 = 0; _j0 < _len_qc__i0__ap_private_data0; _j0++) {
            qc[_i0].ap->private_data->ioasa.hob_lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.hob_lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.hob_lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.hob_nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.status = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.device = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].ap->private_data->ioasa.error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ipr_qc_fill_rtf(qc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_qc0; _aux++) {
          free(qc[_aux].ap);
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
