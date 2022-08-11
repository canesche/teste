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
struct TYPE_2__ {scalar_t__ header_version_major; scalar_t__ header_version_minor; } ;
union amdgpu_firmware_header {TYPE_1__ common; } ;
typedef  scalar_t__ uint16_t ;

/* Variables and functions */

bool amdgpu_ucode_hdr_version(union amdgpu_firmware_header *hdr,
				uint16_t hdr_major, uint16_t hdr_minor)
{
	if ((hdr->common.header_version_major == hdr_major) &&
		(hdr->common.header_version_minor == hdr_minor))
		return false;
	return true;
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
          long hdr_major = 100;
          long hdr_minor = 100;
          int _len_hdr0 = 1;
          union amdgpu_firmware_header * hdr = (union amdgpu_firmware_header *) malloc(_len_hdr0*sizeof(union amdgpu_firmware_header));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = 0;
          }
          int benchRet = amdgpu_ucode_hdr_version(hdr,hdr_major,hdr_minor);
          printf("%d\n", benchRet); 
          free(hdr);
        
        break;
    }
    // big-arr
    case 1:
    {
          long hdr_major = 255;
          long hdr_minor = 255;
          int _len_hdr0 = 65025;
          union amdgpu_firmware_header * hdr = (union amdgpu_firmware_header *) malloc(_len_hdr0*sizeof(union amdgpu_firmware_header));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = 0;
          }
          int benchRet = amdgpu_ucode_hdr_version(hdr,hdr_major,hdr_minor);
          printf("%d\n", benchRet); 
          free(hdr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long hdr_major = 10;
          long hdr_minor = 10;
          int _len_hdr0 = 100;
          union amdgpu_firmware_header * hdr = (union amdgpu_firmware_header *) malloc(_len_hdr0*sizeof(union amdgpu_firmware_header));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = 0;
          }
          int benchRet = amdgpu_ucode_hdr_version(hdr,hdr_major,hdr_minor);
          printf("%d\n", benchRet); 
          free(hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
