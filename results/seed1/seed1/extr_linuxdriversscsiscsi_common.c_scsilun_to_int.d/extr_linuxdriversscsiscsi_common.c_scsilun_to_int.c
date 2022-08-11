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
typedef  int u64 ;
struct scsi_lun {scalar_t__* scsi_lun; } ;
typedef  int /*<<< orphan*/  lun ;

/* Variables and functions */

u64 scsilun_to_int(struct scsi_lun *scsilun)
{
	int i;
	u64 lun;

	lun = 0;
	for (i = 0; i < sizeof(lun); i += 2)
		lun = lun | (((u64)scsilun->scsi_lun[i] << ((i + 1) * 8)) |
			     ((u64)scsilun->scsi_lun[i + 1] << (i * 8)));
	return lun;
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
          int _len_scsilun0 = 1;
          struct scsi_lun * scsilun = (struct scsi_lun *) malloc(_len_scsilun0*sizeof(struct scsi_lun));
          for(int _i0 = 0; _i0 < _len_scsilun0; _i0++) {
              int _len_scsilun__i0__scsi_lun0 = 1;
          scsilun[_i0].scsi_lun = (long *) malloc(_len_scsilun__i0__scsi_lun0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_scsilun__i0__scsi_lun0; _j0++) {
            scsilun[_i0].scsi_lun[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = scsilun_to_int(scsilun);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_scsilun0; _aux++) {
          free(scsilun[_aux].scsi_lun);
          }
          free(scsilun);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_scsilun0 = 65025;
          struct scsi_lun * scsilun = (struct scsi_lun *) malloc(_len_scsilun0*sizeof(struct scsi_lun));
          for(int _i0 = 0; _i0 < _len_scsilun0; _i0++) {
              int _len_scsilun__i0__scsi_lun0 = 1;
          scsilun[_i0].scsi_lun = (long *) malloc(_len_scsilun__i0__scsi_lun0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_scsilun__i0__scsi_lun0; _j0++) {
            scsilun[_i0].scsi_lun[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = scsilun_to_int(scsilun);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_scsilun0; _aux++) {
          free(scsilun[_aux].scsi_lun);
          }
          free(scsilun);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_scsilun0 = 100;
          struct scsi_lun * scsilun = (struct scsi_lun *) malloc(_len_scsilun0*sizeof(struct scsi_lun));
          for(int _i0 = 0; _i0 < _len_scsilun0; _i0++) {
              int _len_scsilun__i0__scsi_lun0 = 1;
          scsilun[_i0].scsi_lun = (long *) malloc(_len_scsilun__i0__scsi_lun0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_scsilun__i0__scsi_lun0; _j0++) {
            scsilun[_i0].scsi_lun[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = scsilun_to_int(scsilun);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_scsilun0; _aux++) {
          free(scsilun[_aux].scsi_lun);
          }
          free(scsilun);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
