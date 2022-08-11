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

void *memmove(void *d, const void *s, size_t count)
{
	unsigned long dst, src;

	if (!count)
		return d;

	if (d < s) {
		dst = (unsigned long) d;
		src = (unsigned long) s;

		if ((count < 8) || ((dst ^ src) & 3))
			goto restup;

		if (dst & 1) {
			*(char *)dst++ = *(char *)src++;
			count--;
		}
		if (dst & 2) {
			*(short *)dst = *(short *)src;
			src += 2;
			dst += 2;
			count -= 2;
		}
		while (count > 3) {
			*(long *)dst = *(long *)src;
			src += 4;
			dst += 4;
			count -= 4;
		}
restup:
		while (count--)
			*(char *)dst++ = *(char *)src++;
	} else {
		dst = (unsigned long) d + count;
		src = (unsigned long) s + count;

		if ((count < 8) || ((dst ^ src) & 3))
			goto restdown;

		if (dst & 1) {
			src--;
			dst--;
			count--;
			*(char *)dst = *(char *)src;
		}
		if (dst & 2) {
			src -= 2;
			dst -= 2;
			count -= 2;
			*(short *)dst = *(short *)src;
		}
		while (count > 3) {
			src -= 4;
			dst -= 4;
			count -= 4;
			*(long *)dst = *(long *)src;
		}
restdown:
		while (count--) {
			src--;
			dst--;
			*(char *)dst = *(char *)src;
		}
	}

	return d;
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
          unsigned long count = 100;
          void * d;
          int _len_s0 = 1;
          const void * s = (const void *) malloc(_len_s0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = 0;
          }
          void * benchRet = memmove(d,s,count);
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long count = 255;
          void * d;
          int _len_s0 = 65025;
          const void * s = (const void *) malloc(_len_s0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = 0;
          }
          void * benchRet = memmove(d,s,count);
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long count = 10;
          void * d;
          int _len_s0 = 100;
          const void * s = (const void *) malloc(_len_s0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = 0;
          }
          void * benchRet = memmove(d,s,count);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
