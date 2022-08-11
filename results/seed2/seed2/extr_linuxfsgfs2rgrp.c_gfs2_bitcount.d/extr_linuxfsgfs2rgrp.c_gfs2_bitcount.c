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
typedef  int u8 ;
typedef  scalar_t__ u32 ;
struct gfs2_rgrpd {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static u32 gfs2_bitcount(struct gfs2_rgrpd *rgd, const u8 *buffer,
			 unsigned int buflen, u8 state)
{
	const u8 *byte = buffer;
	const u8 *end = buffer + buflen;
	const u8 state1 = state << 2;
	const u8 state2 = state << 4;
	const u8 state3 = state << 6;
	u32 count = 0;

	for (; byte < end; byte++) {
		if (((*byte) & 0x03) == state)
			count++;
		if (((*byte) & 0x0C) == state1)
			count++;
		if (((*byte) & 0x30) == state2)
			count++;
		if (((*byte) & 0xC0) == state3)
			count++;
	}

	return count;
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
          unsigned int buflen = 100;
          int state = 100;
          int _len_rgd0 = 1;
          struct gfs2_rgrpd * rgd = (struct gfs2_rgrpd *) malloc(_len_rgd0*sizeof(struct gfs2_rgrpd));
          for(int _i0 = 0; _i0 < _len_rgd0; _i0++) {
            rgd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 1;
          const int * buffer = (const int *) malloc(_len_buffer0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = gfs2_bitcount(rgd,buffer,buflen,state);
          printf("%ld\n", benchRet); 
          free(rgd);
          free(buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int buflen = 255;
          int state = 255;
          int _len_rgd0 = 65025;
          struct gfs2_rgrpd * rgd = (struct gfs2_rgrpd *) malloc(_len_rgd0*sizeof(struct gfs2_rgrpd));
          for(int _i0 = 0; _i0 < _len_rgd0; _i0++) {
            rgd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 65025;
          const int * buffer = (const int *) malloc(_len_buffer0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = gfs2_bitcount(rgd,buffer,buflen,state);
          printf("%ld\n", benchRet); 
          free(rgd);
          free(buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int buflen = 10;
          int state = 10;
          int _len_rgd0 = 100;
          struct gfs2_rgrpd * rgd = (struct gfs2_rgrpd *) malloc(_len_rgd0*sizeof(struct gfs2_rgrpd));
          for(int _i0 = 0; _i0 < _len_rgd0; _i0++) {
            rgd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 100;
          const int * buffer = (const int *) malloc(_len_buffer0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = gfs2_bitcount(rgd,buffer,buflen,state);
          printf("%ld\n", benchRet); 
          free(rgd);
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
