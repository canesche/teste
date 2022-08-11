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
typedef  scalar_t__ wchar_t ;
struct utf8_table {int cmask; int cval; long lmask; long lval; } ;
typedef  int __u8 ;

/* Variables and functions */
 struct utf8_table* utf8_table ; 

int
utf8_mbtowc(wchar_t *p, const __u8 *s, int n)
{
	long l;
	int c0, c, nc;
	struct utf8_table *t;
  
	nc = 0;
	c0 = *s;
	l = c0;
	for (t = utf8_table; t->cmask; t++) {
		nc++;
		if ((c0 & t->cmask) == t->cval) {
			l &= t->lmask;
			if (l < t->lval)
				return -1;
			*p = (wchar_t) l;
			return nc;
		}
		if (n <= nc)
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
          int n = 100;
          int _len_p0 = 1;
          long * p = (long *) malloc(_len_p0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 1;
          const int * s = (const int *) malloc(_len_s0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = utf8_mbtowc(p,s,n);
          printf("%d\n", benchRet); 
          free(p);
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int _len_p0 = 65025;
          long * p = (long *) malloc(_len_p0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 65025;
          const int * s = (const int *) malloc(_len_s0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = utf8_mbtowc(p,s,n);
          printf("%d\n", benchRet); 
          free(p);
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int _len_p0 = 100;
          long * p = (long *) malloc(_len_p0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 100;
          const int * s = (const int *) malloc(_len_s0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = utf8_mbtowc(p,s,n);
          printf("%d\n", benchRet); 
          free(p);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
