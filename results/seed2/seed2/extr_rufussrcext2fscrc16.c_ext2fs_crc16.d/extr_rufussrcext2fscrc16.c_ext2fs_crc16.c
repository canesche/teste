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
typedef  int crc16_t ;

/* Variables and functions */
 int* crc16_table ; 

crc16_t ext2fs_crc16(crc16_t crc, const void *buffer, unsigned int len)
{
	const unsigned char *cp = buffer;

	while (len--)
		/*
		 * for an unknown reason, PPC treats __u16 as signed
		 * and keeps doing sign extension on the value.
		 * Instead, use only the low 16 bits of an unsigned
		 * int for holding the CRC value to avoid this.
		 */
		crc = (((crc >> 8) & 0xffU) ^
		       crc16_table[(crc ^ *cp++) & 0xffU]) & 0x0000ffffU;
	return crc;
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
          int crc = 100;
          unsigned int len = 100;
          int _len_buffer0 = 1;
          const void * buffer = (const void *) malloc(_len_buffer0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = 0;
          }
          int benchRet = ext2fs_crc16(crc,buffer,len);
          printf("%d\n", benchRet); 
          free(buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int crc = 255;
          unsigned int len = 255;
          int _len_buffer0 = 65025;
          const void * buffer = (const void *) malloc(_len_buffer0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = 0;
          }
          int benchRet = ext2fs_crc16(crc,buffer,len);
          printf("%d\n", benchRet); 
          free(buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int crc = 10;
          unsigned int len = 10;
          int _len_buffer0 = 100;
          const void * buffer = (const void *) malloc(_len_buffer0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = 0;
          }
          int benchRet = ext2fs_crc16(crc,buffer,len);
          printf("%d\n", benchRet); 
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
