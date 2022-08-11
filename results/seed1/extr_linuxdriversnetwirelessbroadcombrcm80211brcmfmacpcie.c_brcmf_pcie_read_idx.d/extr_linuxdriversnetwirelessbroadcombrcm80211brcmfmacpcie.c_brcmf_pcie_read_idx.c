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
typedef  int /*<<< orphan*/  u16 ;
struct brcmf_pciedev_info {int /*<<< orphan*/ * idxbuf; } ;

/* Variables and functions */

__attribute__((used)) static u16
brcmf_pcie_read_idx(struct brcmf_pciedev_info *devinfo, u32 mem_offset)
{
	u16 *address = devinfo->idxbuf + mem_offset;

	return (*(address));
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
          int mem_offset = 100;
          int _len_devinfo0 = 1;
          struct brcmf_pciedev_info * devinfo = (struct brcmf_pciedev_info *) malloc(_len_devinfo0*sizeof(struct brcmf_pciedev_info));
          for(int _i0 = 0; _i0 < _len_devinfo0; _i0++) {
              int _len_devinfo__i0__idxbuf0 = 1;
          devinfo[_i0].idxbuf = (int *) malloc(_len_devinfo__i0__idxbuf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_devinfo__i0__idxbuf0; _j0++) {
            devinfo[_i0].idxbuf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = brcmf_pcie_read_idx(devinfo,mem_offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_devinfo0; _aux++) {
          free(devinfo[_aux].idxbuf);
          }
          free(devinfo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mem_offset = 255;
          int _len_devinfo0 = 65025;
          struct brcmf_pciedev_info * devinfo = (struct brcmf_pciedev_info *) malloc(_len_devinfo0*sizeof(struct brcmf_pciedev_info));
          for(int _i0 = 0; _i0 < _len_devinfo0; _i0++) {
              int _len_devinfo__i0__idxbuf0 = 1;
          devinfo[_i0].idxbuf = (int *) malloc(_len_devinfo__i0__idxbuf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_devinfo__i0__idxbuf0; _j0++) {
            devinfo[_i0].idxbuf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = brcmf_pcie_read_idx(devinfo,mem_offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_devinfo0; _aux++) {
          free(devinfo[_aux].idxbuf);
          }
          free(devinfo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mem_offset = 10;
          int _len_devinfo0 = 100;
          struct brcmf_pciedev_info * devinfo = (struct brcmf_pciedev_info *) malloc(_len_devinfo0*sizeof(struct brcmf_pciedev_info));
          for(int _i0 = 0; _i0 < _len_devinfo0; _i0++) {
              int _len_devinfo__i0__idxbuf0 = 1;
          devinfo[_i0].idxbuf = (int *) malloc(_len_devinfo__i0__idxbuf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_devinfo__i0__idxbuf0; _j0++) {
            devinfo[_i0].idxbuf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = brcmf_pcie_read_idx(devinfo,mem_offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_devinfo0; _aux++) {
          free(devinfo[_aux].idxbuf);
          }
          free(devinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
