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
typedef  int /*<<< orphan*/  uint32_t ;
typedef  int /*<<< orphan*/  uint16_t ;
struct lpfc_hba {int dummy; } ;

/* Variables and functions */

inline void
lpfc_debugfs_nvme_trc(struct lpfc_hba *phba, char *fmt,
		      uint16_t data1, uint16_t data2, uint32_t data3)
{
#ifdef CONFIG_SCSI_LPFC_DEBUG_FS
	struct lpfc_debugfs_nvmeio_trc *dtp;
	int index;

	if (!phba->nvmeio_trc_on || !phba->nvmeio_trc)
		return;

	index = atomic_inc_return(&phba->nvmeio_trc_cnt) &
		(phba->nvmeio_trc_size - 1);
	dtp = phba->nvmeio_trc + index;
	dtp->fmt = fmt;
	dtp->data1 = data1;
	dtp->data2 = data2;
	dtp->data3 = data3;
#endif
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
          int data1 = 100;
          int data2 = 100;
          int data3 = 100;
          int _len_phba0 = 1;
          struct lpfc_hba * phba = (struct lpfc_hba *) malloc(_len_phba0*sizeof(struct lpfc_hba));
          for(int _i0 = 0; _i0 < _len_phba0; _i0++) {
            phba[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fmt0 = 1;
          char * fmt = (char *) malloc(_len_fmt0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lpfc_debugfs_nvme_trc(phba,fmt,data1,data2,data3);
          free(phba);
          free(fmt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int data1 = 255;
          int data2 = 255;
          int data3 = 255;
          int _len_phba0 = 65025;
          struct lpfc_hba * phba = (struct lpfc_hba *) malloc(_len_phba0*sizeof(struct lpfc_hba));
          for(int _i0 = 0; _i0 < _len_phba0; _i0++) {
            phba[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fmt0 = 65025;
          char * fmt = (char *) malloc(_len_fmt0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lpfc_debugfs_nvme_trc(phba,fmt,data1,data2,data3);
          free(phba);
          free(fmt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int data1 = 10;
          int data2 = 10;
          int data3 = 10;
          int _len_phba0 = 100;
          struct lpfc_hba * phba = (struct lpfc_hba *) malloc(_len_phba0*sizeof(struct lpfc_hba));
          for(int _i0 = 0; _i0 < _len_phba0; _i0++) {
            phba[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fmt0 = 100;
          char * fmt = (char *) malloc(_len_fmt0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lpfc_debugfs_nvme_trc(phba,fmt,data1,data2,data3);
          free(phba);
          free(fmt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
