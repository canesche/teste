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
typedef  int /*<<< orphan*/  BF_word ;

/* Variables and functions */
 void** BF_itoa64 ; 

__attribute__((used)) static void BF_encode(char *dst, const BF_word *src, int size)
{
	const unsigned char *sptr = (const unsigned char *)src;
	const unsigned char *end = sptr + size;
	unsigned char *dptr = (unsigned char *)dst;
	unsigned int c1, c2;

	do {
		c1 = *sptr++;
		*dptr++ = BF_itoa64[c1 >> 2];
		c1 = (c1 & 0x03) << 4;
		if (sptr >= end) {
			*dptr++ = BF_itoa64[c1];
			break;
		}

		c2 = *sptr++;
		c1 |= c2 >> 4;
		*dptr++ = BF_itoa64[c1];
		c1 = (c2 & 0x0f) << 2;
		if (sptr >= end) {
			*dptr++ = BF_itoa64[c1];
			break;
		}

		c2 = *sptr++;
		c1 |= c2 >> 6;
		*dptr++ = BF_itoa64[c1];
		*dptr++ = BF_itoa64[c2 & 0x3f];
	} while (sptr < end);
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
          int size = 100;
          int _len_dst0 = 1;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          BF_encode(dst,src,size);
          free(dst);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          int size = 255;
          int _len_dst0 = 65025;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          BF_encode(dst,src,size);
          free(dst);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int size = 10;
          int _len_dst0 = 100;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          BF_encode(dst,src,size);
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
