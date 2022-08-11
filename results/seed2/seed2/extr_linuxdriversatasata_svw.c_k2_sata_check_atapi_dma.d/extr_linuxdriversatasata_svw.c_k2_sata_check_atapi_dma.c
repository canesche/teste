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
typedef  int u8 ;
struct ata_queued_cmd {TYPE_2__* ap; TYPE_1__* scsicmd; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int* cmnd; } ;

/* Variables and functions */
 int K2_FLAG_NO_ATAPI_DMA ; 
#define  READ_10 133 
#define  READ_12 132 
#define  READ_16 131 
#define  WRITE_10 130 
#define  WRITE_12 129 
#define  WRITE_16 128 

__attribute__((used)) static int k2_sata_check_atapi_dma(struct ata_queued_cmd *qc)
{
	u8 cmnd = qc->scsicmd->cmnd[0];

	if (qc->ap->flags & K2_FLAG_NO_ATAPI_DMA)
		return -1;	/* ATAPI DMA not supported */
	else {
		switch (cmnd) {
		case READ_10:
		case READ_12:
		case READ_16:
		case WRITE_10:
		case WRITE_12:
		case WRITE_16:
			return 0;

		default:
			return -1;
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
          int _len_qc0 = 1;
          struct ata_queued_cmd * qc = (struct ata_queued_cmd *) malloc(_len_qc0*sizeof(struct ata_queued_cmd));
          for(int _i0 = 0; _i0 < _len_qc0; _i0++) {
              int _len_qc__i0__ap0 = 1;
          qc[_i0].ap = (struct TYPE_4__ *) malloc(_len_qc__i0__ap0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qc__i0__ap0; _j0++) {
            qc[_i0].ap->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qc__i0__scsicmd0 = 1;
          qc[_i0].scsicmd = (struct TYPE_3__ *) malloc(_len_qc__i0__scsicmd0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_qc__i0__scsicmd0; _j0++) {
              int _len_qc__i0__scsicmd_cmnd0 = 1;
          qc[_i0].scsicmd->cmnd = (int *) malloc(_len_qc__i0__scsicmd_cmnd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_qc__i0__scsicmd_cmnd0; _j0++) {
            qc[_i0].scsicmd->cmnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = k2_sata_check_atapi_dma(qc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_qc0; _aux++) {
          free(qc[_aux].ap);
          }
          for(int _aux = 0; _aux < _len_qc0; _aux++) {
          free(qc[_aux].scsicmd);
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
              int _len_qc__i0__ap0 = 1;
          qc[_i0].ap = (struct TYPE_4__ *) malloc(_len_qc__i0__ap0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qc__i0__ap0; _j0++) {
            qc[_i0].ap->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qc__i0__scsicmd0 = 1;
          qc[_i0].scsicmd = (struct TYPE_3__ *) malloc(_len_qc__i0__scsicmd0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_qc__i0__scsicmd0; _j0++) {
              int _len_qc__i0__scsicmd_cmnd0 = 1;
          qc[_i0].scsicmd->cmnd = (int *) malloc(_len_qc__i0__scsicmd_cmnd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_qc__i0__scsicmd_cmnd0; _j0++) {
            qc[_i0].scsicmd->cmnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = k2_sata_check_atapi_dma(qc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_qc0; _aux++) {
          free(qc[_aux].ap);
          }
          for(int _aux = 0; _aux < _len_qc0; _aux++) {
          free(qc[_aux].scsicmd);
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
              int _len_qc__i0__ap0 = 1;
          qc[_i0].ap = (struct TYPE_4__ *) malloc(_len_qc__i0__ap0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qc__i0__ap0; _j0++) {
            qc[_i0].ap->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qc__i0__scsicmd0 = 1;
          qc[_i0].scsicmd = (struct TYPE_3__ *) malloc(_len_qc__i0__scsicmd0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_qc__i0__scsicmd0; _j0++) {
              int _len_qc__i0__scsicmd_cmnd0 = 1;
          qc[_i0].scsicmd->cmnd = (int *) malloc(_len_qc__i0__scsicmd_cmnd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_qc__i0__scsicmd_cmnd0; _j0++) {
            qc[_i0].scsicmd->cmnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = k2_sata_check_atapi_dma(qc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_qc0; _aux++) {
          free(qc[_aux].ap);
          }
          for(int _aux = 0; _aux < _len_qc0; _aux++) {
          free(qc[_aux].scsicmd);
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
