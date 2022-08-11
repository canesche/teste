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
typedef  int /*<<< orphan*/  word ;

/* Variables and functions */
 size_t wmask ; 
 size_t wsize ; 

__attribute__((visibility("hidden")))
void * _libkernel_memmove(void *dst0, const void *src0, size_t length)
{
	char *dst = dst0;
	const char *src = src0;
	size_t t;
	
	if (length == 0 || dst == src)		/* nothing to do */
		goto done;
	
	/*
	 * Macros: loop-t-times; and loop-t-times, t>0
	 */
#define	TLOOP(s) if (t) TLOOP1(s)
#define	TLOOP1(s) do { s; } while (--t)
	
	if ((unsigned long)dst < (unsigned long)src) {
		/*
		 * Copy forward.
		 */
		t = (uintptr_t)src;	/* only need low bits */
		if ((t | (uintptr_t)dst) & wmask) {
			/*
			 * Try to align operands.  This cannot be done
			 * unless the low bits match.
			 */
			if ((t ^ (uintptr_t)dst) & wmask || length < wsize)
				t = length;
			else
				t = wsize - (t & wmask);
			length -= t;
			TLOOP1(*dst++ = *src++);
		}
		/*
		 * Copy whole words, then mop up any trailing bytes.
		 */
		t = length / wsize;
		TLOOP(*(word *)dst = *(word *)src; src += wsize; dst += wsize);
		t = length & wmask;
		TLOOP(*dst++ = *src++);
	} else {
		/*
		 * Copy backwards.  Otherwise essentially the same.
		 * Alignment works as before, except that it takes
		 * (t&wmask) bytes to align, not wsize-(t&wmask).
		 */
		src += length;
		dst += length;
		t = (uintptr_t)src;
		if ((t | (uintptr_t)dst) & wmask) {
			if ((t ^ (uintptr_t)dst) & wmask || length <= wsize)
				t = length;
			else
				t &= wmask;
			length -= t;
			TLOOP1(*--dst = *--src);
		}
		t = length / wsize;
		TLOOP(src -= wsize; dst -= wsize; *(word *)dst = *(word *)src);
		t = length & wmask;
		TLOOP(*--dst = *--src);
	}
done:
	return (dst0);
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
          void * dst0;
          int _len_src00 = 1;
          const void * src0 = (const void *) malloc(_len_src00*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_src00; _i0++) {
            src0[_i0] = 0;
          }
          void * benchRet = _libkernel_memmove(dst0,src0,length);
          free(src0);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long length = 255;
          void * dst0;
          int _len_src00 = 65025;
          const void * src0 = (const void *) malloc(_len_src00*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_src00; _i0++) {
            src0[_i0] = 0;
          }
          void * benchRet = _libkernel_memmove(dst0,src0,length);
          free(src0);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long length = 10;
          void * dst0;
          int _len_src00 = 100;
          const void * src0 = (const void *) malloc(_len_src00*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_src00; _i0++) {
            src0[_i0] = 0;
          }
          void * benchRet = _libkernel_memmove(dst0,src0,length);
          free(src0);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
