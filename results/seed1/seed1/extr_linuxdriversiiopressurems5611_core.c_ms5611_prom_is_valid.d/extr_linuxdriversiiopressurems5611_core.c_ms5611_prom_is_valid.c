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
typedef  int uint16_t ;
typedef  int u16 ;

/* Variables and functions */

__attribute__((used)) static bool ms5611_prom_is_valid(u16 *prom, size_t len)
{
	int i, j;
	uint16_t crc = 0, crc_orig = prom[7] & 0x000F;

	prom[7] &= 0xFF00;

	for (i = 0; i < len * 2; i++) {
		if (i % 2 == 1)
			crc ^= prom[i >> 1] & 0x00FF;
		else
			crc ^= prom[i >> 1] >> 8;

		for (j = 0; j < 8; j++) {
			if (crc & 0x8000)
				crc = (crc << 1) ^ 0x3000;
			else
				crc <<= 1;
		}
	}

	crc = (crc >> 12) & 0x000F;

	return crc_orig != 0x0000 && crc == crc_orig;
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
          unsigned long len = 100;
          int _len_prom0 = 1;
          int * prom = (int *) malloc(_len_prom0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_prom0; _i0++) {
            prom[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ms5611_prom_is_valid(prom,len);
          printf("%d\n", benchRet); 
          free(prom);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int _len_prom0 = 65025;
          int * prom = (int *) malloc(_len_prom0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_prom0; _i0++) {
            prom[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ms5611_prom_is_valid(prom,len);
          printf("%d\n", benchRet); 
          free(prom);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int _len_prom0 = 100;
          int * prom = (int *) malloc(_len_prom0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_prom0; _i0++) {
            prom[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ms5611_prom_is_valid(prom,len);
          printf("%d\n", benchRet); 
          free(prom);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
