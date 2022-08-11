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
 int AVC_DEBUG_CA2HOST ; 
 int AVC_DEBUG_DSD ; 
 int AVC_DEBUG_DSIT ; 
 int AVC_DEBUG_HOST2CA ; 
 int AVC_DEBUG_LNB_CONTROL ; 
 int AVC_DEBUG_READ_DESCRIPTOR ; 
 int AVC_DEBUG_REGISTER_REMOTE_CONTROL ; 
 int AVC_DEBUG_TUNE_QPSK ; 
 int AVC_DEBUG_TUNE_QPSK2 ; 
#define  AVC_OPCODE_DSD 137 
#define  AVC_OPCODE_DSIT 136 
#define  AVC_OPCODE_READ_DESCRIPTOR 135 
#define  AVC_OPCODE_VENDOR 134 
 int const SFE_VENDOR_DE_COMPANYID_0 ; 
 int const SFE_VENDOR_DE_COMPANYID_1 ; 
 int const SFE_VENDOR_DE_COMPANYID_2 ; 
#define  SFE_VENDOR_OPCODE_CA2HOST 133 
#define  SFE_VENDOR_OPCODE_HOST2CA 132 
#define  SFE_VENDOR_OPCODE_LNB_CONTROL 131 
#define  SFE_VENDOR_OPCODE_REGISTER_REMOTE_CONTROL 130 
#define  SFE_VENDOR_OPCODE_TUNE_QPSK 129 
#define  SFE_VENDOR_OPCODE_TUNE_QPSK2 128 
 int avc_debug ; 

__attribute__((used)) static const char *debug_fcp_opcode(unsigned int opcode,
				    const u8 *data, int length)
{
	switch (opcode) {
	case AVC_OPCODE_VENDOR:
		break;
	case AVC_OPCODE_READ_DESCRIPTOR:
		return avc_debug & AVC_DEBUG_READ_DESCRIPTOR ?
				"ReadDescriptor" : NULL;
	case AVC_OPCODE_DSIT:
		return avc_debug & AVC_DEBUG_DSIT ?
				"DirectSelectInfo.Type" : NULL;
	case AVC_OPCODE_DSD:
		return avc_debug & AVC_DEBUG_DSD ? "DirectSelectData" : NULL;
	default:
		return "Unknown";
	}

	if (length < 7 ||
	    data[3] != SFE_VENDOR_DE_COMPANYID_0 ||
	    data[4] != SFE_VENDOR_DE_COMPANYID_1 ||
	    data[5] != SFE_VENDOR_DE_COMPANYID_2)
		return "Vendor/Unknown";

	switch (data[6]) {
	case SFE_VENDOR_OPCODE_REGISTER_REMOTE_CONTROL:
		return avc_debug & AVC_DEBUG_REGISTER_REMOTE_CONTROL ?
				"RegisterRC" : NULL;
	case SFE_VENDOR_OPCODE_LNB_CONTROL:
		return avc_debug & AVC_DEBUG_LNB_CONTROL ? "LNBControl" : NULL;
	case SFE_VENDOR_OPCODE_TUNE_QPSK:
		return avc_debug & AVC_DEBUG_TUNE_QPSK ? "TuneQPSK" : NULL;
	case SFE_VENDOR_OPCODE_TUNE_QPSK2:
		return avc_debug & AVC_DEBUG_TUNE_QPSK2 ? "TuneQPSK2" : NULL;
	case SFE_VENDOR_OPCODE_HOST2CA:
		return avc_debug & AVC_DEBUG_HOST2CA ? "Host2CA" : NULL;
	case SFE_VENDOR_OPCODE_CA2HOST:
		return avc_debug & AVC_DEBUG_CA2HOST ? "CA2Host" : NULL;
	}
	return "Vendor/Unknown";
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
          unsigned int opcode = 100;
          int length = 100;
          int _len_data0 = 1;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = debug_fcp_opcode(opcode,data,length);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int opcode = 255;
          int length = 255;
          int _len_data0 = 65025;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = debug_fcp_opcode(opcode,data,length);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int opcode = 10;
          int length = 10;
          int _len_data0 = 100;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = debug_fcp_opcode(opcode,data,length);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
