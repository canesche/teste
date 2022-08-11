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
typedef  int u32 ;
struct qlcnic_hardware_context {int pci_func; int fw_hal_version; } ;

/* Variables and functions */

__attribute__((used)) static inline u32 qlcnic_get_cmd_signature(struct qlcnic_hardware_context *ahw)
{
	return (ahw->pci_func & 0xff) | ((ahw->fw_hal_version & 0xff) << 8) |
	       (0xcafe << 16);
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
          int _len_ahw0 = 1;
          struct qlcnic_hardware_context * ahw = (struct qlcnic_hardware_context *) malloc(_len_ahw0*sizeof(struct qlcnic_hardware_context));
          for(int _i0 = 0; _i0 < _len_ahw0; _i0++) {
            ahw[_i0].pci_func = ((-2 * (next_i()%2)) + 1) * next_i();
        ahw[_i0].fw_hal_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qlcnic_get_cmd_signature(ahw);
          printf("%d\n", benchRet); 
          free(ahw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ahw0 = 65025;
          struct qlcnic_hardware_context * ahw = (struct qlcnic_hardware_context *) malloc(_len_ahw0*sizeof(struct qlcnic_hardware_context));
          for(int _i0 = 0; _i0 < _len_ahw0; _i0++) {
            ahw[_i0].pci_func = ((-2 * (next_i()%2)) + 1) * next_i();
        ahw[_i0].fw_hal_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qlcnic_get_cmd_signature(ahw);
          printf("%d\n", benchRet); 
          free(ahw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ahw0 = 100;
          struct qlcnic_hardware_context * ahw = (struct qlcnic_hardware_context *) malloc(_len_ahw0*sizeof(struct qlcnic_hardware_context));
          for(int _i0 = 0; _i0 < _len_ahw0; _i0++) {
            ahw[_i0].pci_func = ((-2 * (next_i()%2)) + 1) * next_i();
        ahw[_i0].fw_hal_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qlcnic_get_cmd_signature(ahw);
          printf("%d\n", benchRet); 
          free(ahw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
