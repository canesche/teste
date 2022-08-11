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
typedef  scalar_t__ unicode_t ;
typedef  int u8 ;
struct utf8_table {int cmask; int cval; unsigned long lmask; unsigned long lval; } ;

/* Variables and functions */
 unsigned long SURROGATE_MASK ; 
 unsigned long SURROGATE_PAIR ; 
 unsigned long UNICODE_MAX ; 
 struct utf8_table* utf8_table ; 

int utf8_to_utf32(const u8 *s, int inlen, unicode_t *pu)
{
	unsigned long l;
	int c0, c, nc;
	const struct utf8_table *t;
  
	nc = 0;
	c0 = *s;
	l = c0;
	for (t = utf8_table; t->cmask; t++) {
		nc++;
		if ((c0 & t->cmask) == t->cval) {
			l &= t->lmask;
			if (l < t->lval || l > UNICODE_MAX ||
					(l & SURROGATE_MASK) == SURROGATE_PAIR)
				return -1;
			*pu = (unicode_t) l;
			return nc;
		}
		if (inlen <= nc)
			return -1;
		s++;
		c = (*s ^ 0x80) & 0xFF;
		if (c & 0xC0)
			return -1;
		l = (l << 6) | c;
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
          int inlen = 100;
          int _len_s0 = 1;
          const int * s = (const int *) malloc(_len_s0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pu0 = 1;
          long * pu = (long *) malloc(_len_pu0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pu0; _i0++) {
            pu[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = utf8_to_utf32(s,inlen,pu);
          printf("%d\n", benchRet); 
          free(s);
          free(pu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int inlen = 255;
          int _len_s0 = 65025;
          const int * s = (const int *) malloc(_len_s0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pu0 = 65025;
          long * pu = (long *) malloc(_len_pu0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pu0; _i0++) {
            pu[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = utf8_to_utf32(s,inlen,pu);
          printf("%d\n", benchRet); 
          free(s);
          free(pu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int inlen = 10;
          int _len_s0 = 100;
          const int * s = (const int *) malloc(_len_s0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pu0 = 100;
          long * pu = (long *) malloc(_len_pu0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pu0; _i0++) {
            pu[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = utf8_to_utf32(s,inlen,pu);
          printf("%d\n", benchRet); 
          free(s);
          free(pu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
