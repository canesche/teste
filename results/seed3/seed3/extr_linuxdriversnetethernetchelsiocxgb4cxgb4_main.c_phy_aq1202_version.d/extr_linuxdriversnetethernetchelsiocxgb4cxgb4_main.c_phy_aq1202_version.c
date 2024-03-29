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

__attribute__((used)) static int phy_aq1202_version(const u8 *phy_fw_data,
			      size_t phy_fw_size)
{
	int offset;

	/* At offset 0x8 you're looking for the primary image's
	 * starting offset which is 3 Bytes wide
	 *
	 * At offset 0xa of the primary image, you look for the offset
	 * of the DRAM segment which is 3 Bytes wide.
	 *
	 * The FW version is at offset 0x27e of the DRAM and is 2 Bytes
	 * wide
	 */
	#define be16(__p) (((__p)[0] << 8) | (__p)[1])
	#define le16(__p) ((__p)[0] | ((__p)[1] << 8))
	#define le24(__p) (le16(__p) | ((__p)[2] << 16))

	offset = le24(phy_fw_data + 0x8) << 12;
	offset = le24(phy_fw_data + offset + 0xa);
	return be16(phy_fw_data + offset + 0x27e);

	#undef be16
	#undef le16
	#undef le24
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
          unsigned long phy_fw_size = 100;
          int _len_phy_fw_data0 = 1;
          const int * phy_fw_data = (const int *) malloc(_len_phy_fw_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_phy_fw_data0; _i0++) {
            phy_fw_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = phy_aq1202_version(phy_fw_data,phy_fw_size);
          printf("%d\n", benchRet); 
          free(phy_fw_data);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long phy_fw_size = 255;
          int _len_phy_fw_data0 = 65025;
          const int * phy_fw_data = (const int *) malloc(_len_phy_fw_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_phy_fw_data0; _i0++) {
            phy_fw_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = phy_aq1202_version(phy_fw_data,phy_fw_size);
          printf("%d\n", benchRet); 
          free(phy_fw_data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long phy_fw_size = 10;
          int _len_phy_fw_data0 = 100;
          const int * phy_fw_data = (const int *) malloc(_len_phy_fw_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_phy_fw_data0; _i0++) {
            phy_fw_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = phy_aq1202_version(phy_fw_data,phy_fw_size);
          printf("%d\n", benchRet); 
          free(phy_fw_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
