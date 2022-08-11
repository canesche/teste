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

__attribute__((used)) static int getoffs(short *offs, const unsigned char *base, const unsigned char *s)
{
	int i=0;
	for (;;) {
		while (*s & 0xc0) {
			if ((*s & 0xc0) != 0xc0) return 0;
			s = base + ((s[0]&0x3f)<<8 | s[1]);
		}
		if (!*s) return i;
		if (s-base >= 0x4000) return 0;
		offs[i++] = s-base;
		s += *s + 1;
	}
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
          int _len_offs0 = 1;
          short * offs = (short *) malloc(_len_offs0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_offs0; _i0++) {
            offs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 1;
          const unsigned char * base = (const unsigned char *) malloc(_len_base0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 1;
          const unsigned char * s = (const unsigned char *) malloc(_len_s0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = getoffs(offs,base,s);
          printf("%d\n", benchRet); 
          free(offs);
          free(base);
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_offs0 = 65025;
          short * offs = (short *) malloc(_len_offs0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_offs0; _i0++) {
            offs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 65025;
          const unsigned char * base = (const unsigned char *) malloc(_len_base0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 65025;
          const unsigned char * s = (const unsigned char *) malloc(_len_s0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = getoffs(offs,base,s);
          printf("%d\n", benchRet); 
          free(offs);
          free(base);
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_offs0 = 100;
          short * offs = (short *) malloc(_len_offs0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_offs0; _i0++) {
            offs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 100;
          const unsigned char * base = (const unsigned char *) malloc(_len_base0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 100;
          const unsigned char * s = (const unsigned char *) malloc(_len_s0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = getoffs(offs,base,s);
          printf("%d\n", benchRet); 
          free(offs);
          free(base);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
