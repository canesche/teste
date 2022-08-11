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
typedef  int /*<<< orphan*/  chksum ;

/* Variables and functions */

int amdgpu_virt_fw_reserve_get_checksum(void *obj,
					unsigned long obj_size,
					unsigned int key,
					unsigned int chksum)
{
	unsigned int ret = key;
	unsigned long i = 0;
	unsigned char *pos;

	pos = (char *)obj;
	/* calculate checksum */
	for (i = 0; i < obj_size; ++i)
		ret += *(pos + i);
	/* minus the chksum itself */
	pos = (char *)&chksum;
	for (i = 0; i < sizeof(chksum); ++i)
		ret -= *(pos + i);
	return ret;
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
          unsigned long obj_size = 100;
          unsigned int key = 100;
          unsigned int chksum = 100;
          void * obj;
          int benchRet = amdgpu_virt_fw_reserve_get_checksum(obj,obj_size,key,chksum);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long obj_size = 255;
          unsigned int key = 255;
          unsigned int chksum = 255;
          void * obj;
          int benchRet = amdgpu_virt_fw_reserve_get_checksum(obj,obj_size,key,chksum);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long obj_size = 10;
          unsigned int key = 10;
          unsigned int chksum = 10;
          void * obj;
          int benchRet = amdgpu_virt_fw_reserve_get_checksum(obj,obj_size,key,chksum);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
