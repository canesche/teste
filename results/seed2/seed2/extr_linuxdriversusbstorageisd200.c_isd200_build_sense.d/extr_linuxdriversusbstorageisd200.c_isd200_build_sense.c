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
struct us_data {scalar_t__ extra; } ;
struct sense_data {int ErrorCode; int AdditionalSenseLength; scalar_t__ AdditionalSenseCodeQualifier; scalar_t__ AdditionalSenseCode; void* Flags; } ;
struct scsi_cmnd {int /*<<< orphan*/ * sense_buffer; } ;
struct isd200_info {unsigned char* ATARegs; } ;

/* Variables and functions */
 unsigned char ATA_ERROR_MEDIA_CHANGE ; 
 unsigned char ATA_MCR ; 
 size_t ATA_REG_ERROR_OFFSET ; 
 unsigned char ATA_TRK0NF ; 
 unsigned char ATA_UNC ; 
 void* DATA_PROTECT ; 
 void* NOT_READY ; 
 int SENSE_ERRCODE_VALID ; 
 void* UNIT_ATTENTION ; 

__attribute__((used)) static void isd200_build_sense(struct us_data *us, struct scsi_cmnd *srb)
{
	struct isd200_info *info = (struct isd200_info *)us->extra;
	struct sense_data *buf = (struct sense_data *) &srb->sense_buffer[0];
	unsigned char error = info->ATARegs[ATA_REG_ERROR_OFFSET];

	if(error & ATA_ERROR_MEDIA_CHANGE) {
		buf->ErrorCode = 0x70 | SENSE_ERRCODE_VALID;
		buf->AdditionalSenseLength = 0xb;
		buf->Flags = UNIT_ATTENTION;
		buf->AdditionalSenseCode = 0;
		buf->AdditionalSenseCodeQualifier = 0;
	} else if (error & ATA_MCR) {
		buf->ErrorCode = 0x70 | SENSE_ERRCODE_VALID;
		buf->AdditionalSenseLength = 0xb;
		buf->Flags =  UNIT_ATTENTION;
		buf->AdditionalSenseCode = 0;
		buf->AdditionalSenseCodeQualifier = 0;
	} else if (error & ATA_TRK0NF) {
		buf->ErrorCode = 0x70 | SENSE_ERRCODE_VALID;
		buf->AdditionalSenseLength = 0xb;
		buf->Flags =  NOT_READY;
		buf->AdditionalSenseCode = 0;
		buf->AdditionalSenseCodeQualifier = 0;
	} else if (error & ATA_UNC) {
		buf->ErrorCode = 0x70 | SENSE_ERRCODE_VALID;
		buf->AdditionalSenseLength = 0xb;
		buf->Flags =  DATA_PROTECT;
		buf->AdditionalSenseCode = 0;
		buf->AdditionalSenseCodeQualifier = 0;
	} else {
		buf->ErrorCode = 0;
		buf->AdditionalSenseLength = 0;
		buf->Flags =  0;
		buf->AdditionalSenseCode = 0;
		buf->AdditionalSenseCodeQualifier = 0;
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
          int _len_us0 = 1;
          struct us_data * us = (struct us_data *) malloc(_len_us0*sizeof(struct us_data));
          for(int _i0 = 0; _i0 < _len_us0; _i0++) {
            us[_i0].extra = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srb0 = 1;
          struct scsi_cmnd * srb = (struct scsi_cmnd *) malloc(_len_srb0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_srb0; _i0++) {
              int _len_srb__i0__sense_buffer0 = 1;
          srb[_i0].sense_buffer = (int *) malloc(_len_srb__i0__sense_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_srb__i0__sense_buffer0; _j0++) {
            srb[_i0].sense_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          isd200_build_sense(us,srb);
          free(us);
          for(int _aux = 0; _aux < _len_srb0; _aux++) {
          free(srb[_aux].sense_buffer);
          }
          free(srb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_us0 = 65025;
          struct us_data * us = (struct us_data *) malloc(_len_us0*sizeof(struct us_data));
          for(int _i0 = 0; _i0 < _len_us0; _i0++) {
            us[_i0].extra = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srb0 = 65025;
          struct scsi_cmnd * srb = (struct scsi_cmnd *) malloc(_len_srb0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_srb0; _i0++) {
              int _len_srb__i0__sense_buffer0 = 1;
          srb[_i0].sense_buffer = (int *) malloc(_len_srb__i0__sense_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_srb__i0__sense_buffer0; _j0++) {
            srb[_i0].sense_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          isd200_build_sense(us,srb);
          free(us);
          for(int _aux = 0; _aux < _len_srb0; _aux++) {
          free(srb[_aux].sense_buffer);
          }
          free(srb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_us0 = 100;
          struct us_data * us = (struct us_data *) malloc(_len_us0*sizeof(struct us_data));
          for(int _i0 = 0; _i0 < _len_us0; _i0++) {
            us[_i0].extra = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srb0 = 100;
          struct scsi_cmnd * srb = (struct scsi_cmnd *) malloc(_len_srb0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_srb0; _i0++) {
              int _len_srb__i0__sense_buffer0 = 1;
          srb[_i0].sense_buffer = (int *) malloc(_len_srb__i0__sense_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_srb__i0__sense_buffer0; _j0++) {
            srb[_i0].sense_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          isd200_build_sense(us,srb);
          free(us);
          for(int _aux = 0; _aux < _len_srb0; _aux++) {
          free(srb[_aux].sense_buffer);
          }
          free(srb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
