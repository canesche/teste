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
typedef  int u32 ;
struct be_res_desc_hdr {scalar_t__ desc_type; int desc_len; } ;
struct be_port_res_desc {int dummy; } ;

/* Variables and functions */
 scalar_t__ PORT_RESOURCE_DESC_TYPE_V1 ; 
 int RESOURCE_DESC_SIZE_V0 ; 

__attribute__((used)) static struct be_port_res_desc *be_get_port_desc(u8 *buf, u32 desc_count)
{
	struct be_res_desc_hdr *hdr = (struct be_res_desc_hdr *)buf;
	int i;

	for (i = 0; i < desc_count; i++) {
		if (hdr->desc_type == PORT_RESOURCE_DESC_TYPE_V1)
			return (struct be_port_res_desc *)hdr;

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
          int _len_buf0 = 1;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct be_port_res_desc * benchRet = be_get_port_desc(buf,desc_count);
          printf("%d\n", (*benchRet).dummy);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int desc_count = 255;
          int _len_buf0 = 65025;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct be_port_res_desc * benchRet = be_get_port_desc(buf,desc_count);
          printf("%d\n", (*benchRet).dummy);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int desc_count = 10;
          int _len_buf0 = 100;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct be_port_res_desc * benchRet = be_get_port_desc(buf,desc_count);
          printf("%d\n", (*benchRet).dummy);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
