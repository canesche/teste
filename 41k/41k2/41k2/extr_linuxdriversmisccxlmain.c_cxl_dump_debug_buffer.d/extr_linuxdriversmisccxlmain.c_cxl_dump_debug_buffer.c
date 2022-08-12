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

/* Variables and functions */

void cxl_dump_debug_buffer(void *buf, size_t buf_len)
{
#ifdef DEBUG
	int i, *ptr;

	/*
	 * We want to regroup up to 4 integers per line, which means they
	 * need to be in the same pr_devel() statement
	 */
	ptr = (int *) buf;
	for (i = 0; i * 4 < buf_len; i += 4) {
		if ((i + 3) * 4 < buf_len)
			pr_devel("%.8x %.8x %.8x %.8x\n", ptr[i], ptr[i + 1],
				ptr[i + 2], ptr[i + 3]);
		else if ((i + 2) * 4 < buf_len)
			pr_devel("%.8x %.8x %.8x\n", ptr[i], ptr[i + 1],
				ptr[i + 2]);
		else if ((i + 1) * 4 < buf_len)
			pr_devel("%.8x %.8x\n", ptr[i], ptr[i + 1]);
		else
			pr_devel("%.8x\n", ptr[i]);
	}
#endif /* DEBUG */
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
          unsigned long buf_len = 100;
          void * buf;
          cxl_dump_debug_buffer(buf,buf_len);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long buf_len = 255;
          void * buf;
          cxl_dump_debug_buffer(buf,buf_len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long buf_len = 10;
          void * buf;
          cxl_dump_debug_buffer(buf,buf_len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
