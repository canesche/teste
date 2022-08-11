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
typedef  size_t u32 ;
struct scsi_cmnd {TYPE_1__* request; } ;
struct fnic {int /*<<< orphan*/ * io_req_lock; } ;
typedef  int /*<<< orphan*/  spinlock_t ;
struct TYPE_2__ {int tag; } ;

/* Variables and functions */
 int FNIC_IO_LOCKS ; 

__attribute__((used)) static inline spinlock_t *fnic_io_lock_hash(struct fnic *fnic,
					    struct scsi_cmnd *sc)
{
	u32 hash = sc->request->tag & (FNIC_IO_LOCKS - 1);

	return &fnic->io_req_lock[hash];
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
          int _len_fnic0 = 1;
          struct fnic * fnic = (struct fnic *) malloc(_len_fnic0*sizeof(struct fnic));
          for(int _i0 = 0; _i0 < _len_fnic0; _i0++) {
              int _len_fnic__i0__io_req_lock0 = 1;
          fnic[_i0].io_req_lock = (int *) malloc(_len_fnic__i0__io_req_lock0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fnic__i0__io_req_lock0; _j0++) {
            fnic[_i0].io_req_lock[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sc0 = 1;
          struct scsi_cmnd * sc = (struct scsi_cmnd *) malloc(_len_sc0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__request0 = 1;
          sc[_i0].request = (struct TYPE_2__ *) malloc(_len_sc__i0__request0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sc__i0__request0; _j0++) {
            sc[_i0].request->tag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = fnic_io_lock_hash(fnic,sc);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_fnic0; _aux++) {
          free(fnic[_aux].io_req_lock);
          }
          free(fnic);
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].request);
          }
          free(sc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fnic0 = 65025;
          struct fnic * fnic = (struct fnic *) malloc(_len_fnic0*sizeof(struct fnic));
          for(int _i0 = 0; _i0 < _len_fnic0; _i0++) {
              int _len_fnic__i0__io_req_lock0 = 1;
          fnic[_i0].io_req_lock = (int *) malloc(_len_fnic__i0__io_req_lock0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fnic__i0__io_req_lock0; _j0++) {
            fnic[_i0].io_req_lock[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sc0 = 65025;
          struct scsi_cmnd * sc = (struct scsi_cmnd *) malloc(_len_sc0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__request0 = 1;
          sc[_i0].request = (struct TYPE_2__ *) malloc(_len_sc__i0__request0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sc__i0__request0; _j0++) {
            sc[_i0].request->tag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = fnic_io_lock_hash(fnic,sc);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_fnic0; _aux++) {
          free(fnic[_aux].io_req_lock);
          }
          free(fnic);
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].request);
          }
          free(sc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fnic0 = 100;
          struct fnic * fnic = (struct fnic *) malloc(_len_fnic0*sizeof(struct fnic));
          for(int _i0 = 0; _i0 < _len_fnic0; _i0++) {
              int _len_fnic__i0__io_req_lock0 = 1;
          fnic[_i0].io_req_lock = (int *) malloc(_len_fnic__i0__io_req_lock0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fnic__i0__io_req_lock0; _j0++) {
            fnic[_i0].io_req_lock[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sc0 = 100;
          struct scsi_cmnd * sc = (struct scsi_cmnd *) malloc(_len_sc0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__request0 = 1;
          sc[_i0].request = (struct TYPE_2__ *) malloc(_len_sc__i0__request0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sc__i0__request0; _j0++) {
            sc[_i0].request->tag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = fnic_io_lock_hash(fnic,sc);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_fnic0; _aux++) {
          free(fnic[_aux].io_req_lock);
          }
          free(fnic);
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].request);
          }
          free(sc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
