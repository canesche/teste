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
typedef  int u64 ;
typedef  int u32 ;
typedef  scalar_t__ u16 ;
typedef  int /*<<< orphan*/  s32 ;

/* Variables and functions */
 int /*<<< orphan*/  FM10K_ERR_PARAM ; 
 int FM10K_TLV_LEN_SHIFT ; 

s32 fm10k_tlv_attr_get_value(u32 *attr, void *value, u32 len)
{
	/* verify pointers are not NULL */
	if (!attr || !value)
		return FM10K_ERR_PARAM;

	if ((*attr >> FM10K_TLV_LEN_SHIFT) != len)
		return FM10K_ERR_PARAM;

	if (len == 8)
		*(u64 *)value = ((u64)attr[2] << 32) | attr[1];
	else if (len == 4)
		*(u32 *)value = attr[1];
	else if (len == 2)
		*(u16 *)value = (u16)attr[1];
	else
		*(u8 *)value = (u8)attr[1];

	return 0;
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
          int len = 100;
          int _len_attr0 = 1;
          int * attr = (int *) malloc(_len_attr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * value;
          int benchRet = fm10k_tlv_attr_get_value(attr,value,len);
          printf("%d\n", benchRet); 
          free(attr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_attr0 = 65025;
          int * attr = (int *) malloc(_len_attr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * value;
          int benchRet = fm10k_tlv_attr_get_value(attr,value,len);
          printf("%d\n", benchRet); 
          free(attr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_attr0 = 100;
          int * attr = (int *) malloc(_len_attr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * value;
          int benchRet = fm10k_tlv_attr_get_value(attr,value,len);
          printf("%d\n", benchRet); 
          free(attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
