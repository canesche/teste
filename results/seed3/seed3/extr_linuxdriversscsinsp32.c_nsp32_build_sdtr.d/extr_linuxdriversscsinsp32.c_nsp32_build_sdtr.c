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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_6__ {int msgout_len; unsigned char* msgoutbuf; } ;
typedef  TYPE_3__ nsp32_hw_data ;
struct TYPE_5__ {scalar_t__ hostdata; } ;
struct TYPE_4__ {TYPE_2__* host; } ;

/* Variables and functions */
 unsigned char EXTENDED_MESSAGE ; 
 unsigned char EXTENDED_SDTR ; 
 unsigned char EXTENDED_SDTR_LEN ; 

__attribute__((used)) static void nsp32_build_sdtr(struct scsi_cmnd    *SCpnt,
			     unsigned char period,
			     unsigned char offset)
{
	nsp32_hw_data *data = (nsp32_hw_data *)SCpnt->device->host->hostdata;
	int pos             = data->msgout_len;

	data->msgoutbuf[pos] = EXTENDED_MESSAGE;  pos++;
	data->msgoutbuf[pos] = EXTENDED_SDTR_LEN; pos++;
	data->msgoutbuf[pos] = EXTENDED_SDTR;     pos++;
	data->msgoutbuf[pos] = period;            pos++;
	data->msgoutbuf[pos] = offset;            pos++;

	data->msgout_len = pos;
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
          unsigned char period = 100;
          unsigned char offset = 100;
          int _len_SCpnt0 = 1;
          struct scsi_cmnd * SCpnt = (struct scsi_cmnd *) malloc(_len_SCpnt0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_SCpnt0; _i0++) {
              int _len_SCpnt__i0__device0 = 1;
          SCpnt[_i0].device = (struct TYPE_4__ *) malloc(_len_SCpnt__i0__device0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_SCpnt__i0__device0; _j0++) {
              int _len_SCpnt__i0__device_host0 = 1;
          SCpnt[_i0].device->host = (struct TYPE_5__ *) malloc(_len_SCpnt__i0__device_host0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_SCpnt__i0__device_host0; _j0++) {
            SCpnt[_i0].device->host->hostdata = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          nsp32_build_sdtr(SCpnt,period,offset);
          for(int _aux = 0; _aux < _len_SCpnt0; _aux++) {
          free(SCpnt[_aux].device);
          }
          free(SCpnt);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char period = 255;
          unsigned char offset = 255;
          int _len_SCpnt0 = 65025;
          struct scsi_cmnd * SCpnt = (struct scsi_cmnd *) malloc(_len_SCpnt0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_SCpnt0; _i0++) {
              int _len_SCpnt__i0__device0 = 1;
          SCpnt[_i0].device = (struct TYPE_4__ *) malloc(_len_SCpnt__i0__device0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_SCpnt__i0__device0; _j0++) {
              int _len_SCpnt__i0__device_host0 = 1;
          SCpnt[_i0].device->host = (struct TYPE_5__ *) malloc(_len_SCpnt__i0__device_host0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_SCpnt__i0__device_host0; _j0++) {
            SCpnt[_i0].device->host->hostdata = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          nsp32_build_sdtr(SCpnt,period,offset);
          for(int _aux = 0; _aux < _len_SCpnt0; _aux++) {
          free(SCpnt[_aux].device);
          }
          free(SCpnt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char period = 10;
          unsigned char offset = 10;
          int _len_SCpnt0 = 100;
          struct scsi_cmnd * SCpnt = (struct scsi_cmnd *) malloc(_len_SCpnt0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_SCpnt0; _i0++) {
              int _len_SCpnt__i0__device0 = 1;
          SCpnt[_i0].device = (struct TYPE_4__ *) malloc(_len_SCpnt__i0__device0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_SCpnt__i0__device0; _j0++) {
              int _len_SCpnt__i0__device_host0 = 1;
          SCpnt[_i0].device->host = (struct TYPE_5__ *) malloc(_len_SCpnt__i0__device_host0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_SCpnt__i0__device_host0; _j0++) {
            SCpnt[_i0].device->host->hostdata = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          nsp32_build_sdtr(SCpnt,period,offset);
          for(int _aux = 0; _aux < _len_SCpnt0; _aux++) {
          free(SCpnt[_aux].device);
          }
          free(SCpnt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
