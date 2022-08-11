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
struct skd_scsi_request {unsigned int* cdb; } ;

/* Variables and functions */
 int READ ; 
 unsigned int READ_10 ; 
 unsigned int WRITE_10 ; 

__attribute__((used)) static void
skd_prep_rw_cdb(struct skd_scsi_request *scsi_req,
		int data_dir, unsigned lba,
		unsigned count)
{
	if (data_dir == READ)
		scsi_req->cdb[0] = READ_10;
	else
		scsi_req->cdb[0] = WRITE_10;

	scsi_req->cdb[1] = 0;
	scsi_req->cdb[2] = (lba & 0xff000000) >> 24;
	scsi_req->cdb[3] = (lba & 0xff0000) >> 16;
	scsi_req->cdb[4] = (lba & 0xff00) >> 8;
	scsi_req->cdb[5] = (lba & 0xff);
	scsi_req->cdb[6] = 0;
	scsi_req->cdb[7] = (count & 0xff00) >> 8;
	scsi_req->cdb[8] = count & 0xff;
	scsi_req->cdb[9] = 0;
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
          int data_dir = 100;
          unsigned int lba = 100;
          unsigned int count = 100;
          int _len_scsi_req0 = 1;
          struct skd_scsi_request * scsi_req = (struct skd_scsi_request *) malloc(_len_scsi_req0*sizeof(struct skd_scsi_request));
          for(int _i0 = 0; _i0 < _len_scsi_req0; _i0++) {
              int _len_scsi_req__i0__cdb0 = 1;
          scsi_req[_i0].cdb = (unsigned int *) malloc(_len_scsi_req__i0__cdb0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_scsi_req__i0__cdb0; _j0++) {
            scsi_req[_i0].cdb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          skd_prep_rw_cdb(scsi_req,data_dir,lba,count);
          for(int _aux = 0; _aux < _len_scsi_req0; _aux++) {
          free(scsi_req[_aux].cdb);
          }
          free(scsi_req);
        
        break;
    }
    // big-arr
    case 1:
    {
          int data_dir = 255;
          unsigned int lba = 255;
          unsigned int count = 255;
          int _len_scsi_req0 = 65025;
          struct skd_scsi_request * scsi_req = (struct skd_scsi_request *) malloc(_len_scsi_req0*sizeof(struct skd_scsi_request));
          for(int _i0 = 0; _i0 < _len_scsi_req0; _i0++) {
              int _len_scsi_req__i0__cdb0 = 1;
          scsi_req[_i0].cdb = (unsigned int *) malloc(_len_scsi_req__i0__cdb0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_scsi_req__i0__cdb0; _j0++) {
            scsi_req[_i0].cdb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          skd_prep_rw_cdb(scsi_req,data_dir,lba,count);
          for(int _aux = 0; _aux < _len_scsi_req0; _aux++) {
          free(scsi_req[_aux].cdb);
          }
          free(scsi_req);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int data_dir = 10;
          unsigned int lba = 10;
          unsigned int count = 10;
          int _len_scsi_req0 = 100;
          struct skd_scsi_request * scsi_req = (struct skd_scsi_request *) malloc(_len_scsi_req0*sizeof(struct skd_scsi_request));
          for(int _i0 = 0; _i0 < _len_scsi_req0; _i0++) {
              int _len_scsi_req__i0__cdb0 = 1;
          scsi_req[_i0].cdb = (unsigned int *) malloc(_len_scsi_req__i0__cdb0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_scsi_req__i0__cdb0; _j0++) {
            scsi_req[_i0].cdb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          skd_prep_rw_cdb(scsi_req,data_dir,lba,count);
          for(int _aux = 0; _aux < _len_scsi_req0; _aux++) {
          free(scsi_req[_aux].cdb);
          }
          free(scsi_req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
