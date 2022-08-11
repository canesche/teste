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
typedef  int /*<<< orphan*/  u8 ;
struct scsi_cmnd {int* cmnd; } ;

/* Variables and functions */
 int /*<<< orphan*/  SD_RSP_TYPE_R0 ; 
 int /*<<< orphan*/  SD_RSP_TYPE_R1 ; 
 int /*<<< orphan*/  SD_RSP_TYPE_R1b ; 
 int /*<<< orphan*/  SD_RSP_TYPE_R2 ; 
 int /*<<< orphan*/  SD_RSP_TYPE_R3 ; 
 int STATUS_FAIL ; 
 int STATUS_SUCCESS ; 

__attribute__((used)) static inline int get_rsp_type(struct scsi_cmnd *srb, u8 *rsp_type,
			       int *rsp_len)
{
	if (!rsp_type || !rsp_len)
		return STATUS_FAIL;

	switch (srb->cmnd[10]) {
	case 0x03:
		*rsp_type = SD_RSP_TYPE_R0;
		*rsp_len = 0;
		break;

	case 0x04:
		*rsp_type = SD_RSP_TYPE_R1;
		*rsp_len = 6;
		break;

	case 0x05:
		*rsp_type = SD_RSP_TYPE_R1b;
		*rsp_len = 6;
		break;

	case 0x06:
		*rsp_type = SD_RSP_TYPE_R2;
		*rsp_len = 17;
		break;

	case 0x07:
		*rsp_type = SD_RSP_TYPE_R3;
		*rsp_len = 6;
		break;

	default:
		return STATUS_FAIL;
	}

	return STATUS_SUCCESS;
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
          int _len_srb0 = 1;
          struct scsi_cmnd * srb = (struct scsi_cmnd *) malloc(_len_srb0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_srb0; _i0++) {
              int _len_srb__i0__cmnd0 = 1;
          srb[_i0].cmnd = (int *) malloc(_len_srb__i0__cmnd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_srb__i0__cmnd0; _j0++) {
            srb[_i0].cmnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rsp_type0 = 1;
          int * rsp_type = (int *) malloc(_len_rsp_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rsp_type0; _i0++) {
            rsp_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rsp_len0 = 1;
          int * rsp_len = (int *) malloc(_len_rsp_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rsp_len0; _i0++) {
            rsp_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_rsp_type(srb,rsp_type,rsp_len);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_srb0; _aux++) {
          free(srb[_aux].cmnd);
          }
          free(srb);
          free(rsp_type);
          free(rsp_len);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_srb0 = 65025;
          struct scsi_cmnd * srb = (struct scsi_cmnd *) malloc(_len_srb0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_srb0; _i0++) {
              int _len_srb__i0__cmnd0 = 1;
          srb[_i0].cmnd = (int *) malloc(_len_srb__i0__cmnd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_srb__i0__cmnd0; _j0++) {
            srb[_i0].cmnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rsp_type0 = 65025;
          int * rsp_type = (int *) malloc(_len_rsp_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rsp_type0; _i0++) {
            rsp_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rsp_len0 = 65025;
          int * rsp_len = (int *) malloc(_len_rsp_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rsp_len0; _i0++) {
            rsp_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_rsp_type(srb,rsp_type,rsp_len);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_srb0; _aux++) {
          free(srb[_aux].cmnd);
          }
          free(srb);
          free(rsp_type);
          free(rsp_len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_srb0 = 100;
          struct scsi_cmnd * srb = (struct scsi_cmnd *) malloc(_len_srb0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_srb0; _i0++) {
              int _len_srb__i0__cmnd0 = 1;
          srb[_i0].cmnd = (int *) malloc(_len_srb__i0__cmnd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_srb__i0__cmnd0; _j0++) {
            srb[_i0].cmnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rsp_type0 = 100;
          int * rsp_type = (int *) malloc(_len_rsp_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rsp_type0; _i0++) {
            rsp_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rsp_len0 = 100;
          int * rsp_len = (int *) malloc(_len_rsp_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rsp_len0; _i0++) {
            rsp_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_rsp_type(srb,rsp_type,rsp_len);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_srb0; _aux++) {
          free(srb[_aux].cmnd);
          }
          free(srb);
          free(rsp_type);
          free(rsp_len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
