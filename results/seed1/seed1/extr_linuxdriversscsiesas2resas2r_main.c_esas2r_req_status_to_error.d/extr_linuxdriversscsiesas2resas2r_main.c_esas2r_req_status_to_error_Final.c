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
typedef  int u8 ;

/* Variables and functions */
 int DID_ABORT ; 
 int DID_BUS_BUSY ; 
 int DID_ERROR ; 
 int DID_NO_CONNECT ; 
 int DID_OK ; 
 int DID_RESET ; 
#define  RS_ABORTED 136 
#define  RS_BUSY 135 
#define  RS_OVERRUN 134 
#define  RS_RESET 133 
#define  RS_SCSI_ERROR 132 
#define  RS_SEL 131 
#define  RS_SEL2 130 
#define  RS_SUCCESS 129 
#define  RS_UNDERRUN 128 

int esas2r_req_status_to_error(u8 req_stat)
{
	switch (req_stat) {
	case RS_OVERRUN:
	case RS_UNDERRUN:
	case RS_SUCCESS:
	/*
	 * NOTE: SCSI mid-layer wants a good status for a SCSI error, because
	 *       it will check the scsi_stat value in the completion anyway.
	 */
	case RS_SCSI_ERROR:
		return DID_OK;

	case RS_SEL:
	case RS_SEL2:
		return DID_NO_CONNECT;

	case RS_RESET:
		return DID_RESET;

	case RS_ABORTED:
		return DID_ABORT;

	case RS_BUSY:
		return DID_BUS_BUSY;
	}

	/* everything else is just an error. */

	return DID_ERROR;
}


// ------------------------------------------------------------------------- //




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
          int req_stat = 100;
          int benchRet = esas2r_req_status_to_error(req_stat);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int req_stat = 255;
          int benchRet = esas2r_req_status_to_error(req_stat);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int req_stat = 10;
          int benchRet = esas2r_req_status_to_error(req_stat);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
