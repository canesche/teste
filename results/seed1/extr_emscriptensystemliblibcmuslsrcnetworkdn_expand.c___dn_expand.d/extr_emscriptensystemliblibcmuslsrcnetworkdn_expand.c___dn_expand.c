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

int __dn_expand(const unsigned char *base, const unsigned char *end, const unsigned char *src, char *dest, int space)
{
	const unsigned char *p = src;
	char *dend, *dbegin = dest;
	int len = -1, i, j;
	if (p==end || space <= 0) return -1;
	dend = dest + (space > 254 ? 254 : space);
	/* detect reference loop using an iteration counter */
	for (i=0; i < end-base; i+=2) {
		/* loop invariants: p<end, dest<dend */
		if (*p & 0xc0) {
			if (p+1==end) return -1;
			j = ((p[0] & 0x3f) << 8) | p[1];
			if (len < 0) len = p+2-src;
			if (j >= end-base) return -1;
			p = base+j;
		} else if (*p) {
			if (dest != dbegin) *dest++ = '.';
			j = *p++;
			if (j >= end-p || j >= dend-dest) return -1;
			while (j--) *dest++ = *p++;
		} else {
			*dest = 0;
			if (len < 0) len = p+1-src;
			return len;
		}
	}
	return -1;
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
          int space = 100;
          int _len_base0 = 1;
          const unsigned char * base = (const unsigned char *) malloc(_len_base0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 1;
          const unsigned char * end = (const unsigned char *) malloc(_len_end0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          const unsigned char * src = (const unsigned char *) malloc(_len_src0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 1;
          char * dest = (char *) malloc(_len_dest0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __dn_expand(base,end,src,dest,space);
          printf("%d\n", benchRet); 
          free(base);
          free(end);
          free(src);
          free(dest);
        
        break;
    }
    // big-arr
    case 1:
    {
          int space = 255;
          int _len_base0 = 65025;
          const unsigned char * base = (const unsigned char *) malloc(_len_base0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 65025;
          const unsigned char * end = (const unsigned char *) malloc(_len_end0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          const unsigned char * src = (const unsigned char *) malloc(_len_src0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 65025;
          char * dest = (char *) malloc(_len_dest0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __dn_expand(base,end,src,dest,space);
          printf("%d\n", benchRet); 
          free(base);
          free(end);
          free(src);
          free(dest);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int space = 10;
          int _len_base0 = 100;
          const unsigned char * base = (const unsigned char *) malloc(_len_base0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 100;
          const unsigned char * end = (const unsigned char *) malloc(_len_end0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          const unsigned char * src = (const unsigned char *) malloc(_len_src0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 100;
          char * dest = (char *) malloc(_len_dest0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __dn_expand(base,end,src,dest,space);
          printf("%d\n", benchRet); 
          free(base);
          free(end);
          free(src);
          free(dest);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
