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
typedef  scalar_t__ u8 ;
typedef  int u32 ;
struct be_res_desc_hdr {scalar_t__ desc_type; int desc_len; } ;
struct be_pcie_res_desc {scalar_t__ pf_num; } ;

/* Variables and functions */
 scalar_t__ PCIE_RESOURCE_DESC_TYPE_V0 ; 
 scalar_t__ PCIE_RESOURCE_DESC_TYPE_V1 ; 
 int RESOURCE_DESC_SIZE_V0 ; 

__attribute__((used)) static struct be_pcie_res_desc *be_get_pcie_desc(u8 *buf, u32 desc_count,
						 u8 pf_num)
{
	struct be_res_desc_hdr *hdr = (struct be_res_desc_hdr *)buf;
	struct be_pcie_res_desc *pcie;
	int i;

	for (i = 0; i < desc_count; i++) {
		if (hdr->desc_type == PCIE_RESOURCE_DESC_TYPE_V0 ||
		    hdr->desc_type == PCIE_RESOURCE_DESC_TYPE_V1) {
			pcie = (struct be_pcie_res_desc *)hdr;
			if (pcie->pf_num == pf_num)
				return pcie;
		}

		hdr->desc_len = hdr->desc_len ? : RESOURCE_DESC_SIZE_V0;
		hdr = (void *)hdr + hdr->desc_len;
	}
	return NULL;
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
          int desc_count = 100;
          long pf_num = 100;
          int _len_buf0 = 1;
          long * buf = (long *) malloc(_len_buf0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct be_pcie_res_desc * benchRet = be_get_pcie_desc(buf,desc_count,pf_num);
          printf("%ld\n", (*benchRet).pf_num);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int desc_count = 255;
          long pf_num = 255;
          int _len_buf0 = 65025;
          long * buf = (long *) malloc(_len_buf0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct be_pcie_res_desc * benchRet = be_get_pcie_desc(buf,desc_count,pf_num);
          printf("%ld\n", (*benchRet).pf_num);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int desc_count = 10;
          long pf_num = 10;
          int _len_buf0 = 100;
          long * buf = (long *) malloc(_len_buf0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct be_pcie_res_desc * benchRet = be_get_pcie_desc(buf,desc_count,pf_num);
          printf("%ld\n", (*benchRet).pf_num);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
