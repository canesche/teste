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
typedef  int ut8 ;
typedef  int ut32 ;
typedef  int /*<<< orphan*/  ut16 ;

/* Variables and functions */
 int POLY ; 

ut16 crc16(const unsigned char *data_p, size_t length) {
	ut8 i;
	ut32 data;
	ut32 crc = 0xFFFF;

	if (length == 0) {
		return 0;
	}
	do {
		data = *data_p++;
		for (i = 0; i < 8; i++) {
			if ((crc ^ data) & 1) {
				crc = (crc >> 1) ^ POLY;
			} else {
				crc >>= 1;
			}
			data >>= 1;
		}
	} while (--length > 0);

	crc = ~crc;
	data = crc;
	crc = (crc << 8) | ((data >> 8) & 0xff);
	return (ut16) (crc);
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
          unsigned long length = 100;
          int _len_data_p0 = 1;
          const unsigned char * data_p = (const unsigned char *) malloc(_len_data_p0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data_p0; _i0++) {
            data_p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = crc16(data_p,length);
          printf("%d\n", benchRet); 
          free(data_p);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long length = 255;
          int _len_data_p0 = 65025;
          const unsigned char * data_p = (const unsigned char *) malloc(_len_data_p0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data_p0; _i0++) {
            data_p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = crc16(data_p,length);
          printf("%d\n", benchRet); 
          free(data_p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long length = 10;
          int _len_data_p0 = 100;
          const unsigned char * data_p = (const unsigned char *) malloc(_len_data_p0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_data_p0; _i0++) {
            data_p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = crc16(data_p,length);
          printf("%d\n", benchRet); 
          free(data_p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
