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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__* sqrTable; } ;

/* Variables and functions */
 TYPE_1__ cin ; 

long RllDecodeStereoToStereo(unsigned char *from,short *to,unsigned int size,char signedOutput, unsigned short flag)
{
	unsigned int z;
	unsigned char *zz = from;
	int	prevL, prevR;

	if (signedOutput) {
		prevL = (flag & 0xff00) - 0x8000;
		prevR = ((flag & 0x00ff) << 8) - 0x8000;
	} else {
		prevL = flag & 0xff00;
		prevR = (flag & 0x00ff) << 8;
	}

	for (z=0;z<size;z+=2) {
                prevL = (short)(prevL + cin.sqrTable[*zz++]); 
                prevR = (short)(prevR + cin.sqrTable[*zz++]);
                to[z+0] = (short)(prevL);
                to[z+1] = (short)(prevR);
	}
	
	return (size>>1);	//*sizeof(short));
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
          unsigned int size = 100;
          char signedOutput = 100;
          unsigned short flag = 100;
          int _len_from0 = 1;
          unsigned char * from = (unsigned char *) malloc(_len_from0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
            from[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_to0 = 1;
          short * to = (short *) malloc(_len_to0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_to0; _i0++) {
            to[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = RllDecodeStereoToStereo(from,to,size,signedOutput,flag);
          printf("%ld\n", benchRet); 
          free(from);
          free(to);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int size = 255;
          char signedOutput = 255;
          unsigned short flag = 255;
          int _len_from0 = 65025;
          unsigned char * from = (unsigned char *) malloc(_len_from0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
            from[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_to0 = 65025;
          short * to = (short *) malloc(_len_to0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_to0; _i0++) {
            to[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = RllDecodeStereoToStereo(from,to,size,signedOutput,flag);
          printf("%ld\n", benchRet); 
          free(from);
          free(to);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int size = 10;
          char signedOutput = 10;
          unsigned short flag = 10;
          int _len_from0 = 100;
          unsigned char * from = (unsigned char *) malloc(_len_from0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
            from[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_to0 = 100;
          short * to = (short *) malloc(_len_to0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_to0; _i0++) {
            to[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = RllDecodeStereoToStereo(from,to,size,signedOutput,flag);
          printf("%ld\n", benchRet); 
          free(from);
          free(to);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
