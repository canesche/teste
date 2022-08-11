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
typedef  int /*<<< orphan*/  grub_uint8_t ;
typedef  int grub_uint32_t ;
typedef  scalar_t__ grub_size_t ;

/* Variables and functions */

grub_size_t
grub_utf8_to_ucs4 (grub_uint32_t *dest, grub_size_t destsize,
		   const grub_uint8_t *src, grub_size_t srcsize,
		   const grub_uint8_t **srcend)
{
  grub_uint32_t *p = dest;
  int count = 0;
  grub_uint32_t code = 0;

  if (srcend)
    *srcend = src;

  while (srcsize && destsize)
    {
      grub_uint32_t c = *src++;
      if (srcsize != (grub_size_t)-1)
	srcsize--;
      if (count)
	{
	  if ((c & 0xc0) != 0x80)
	    {
	      /* invalid */
	      code = '?';
	      /* Character c may be valid, don't eat it.  */
	      src--;
	      if (srcsize != (grub_size_t)-1)
		srcsize++;
	      count = 0;
	    }
	  else
	    {
	      code <<= 6;
	      code |= (c & 0x3f);
	      count--;
	    }
	}
      else
	{
	  if (c == 0)
	    break;

	  if ((c & 0x80) == 0x00)
	    code = c;
	  else if ((c & 0xe0) == 0xc0)
	    {
	      count = 1;
	      code = c & 0x1f;
	    }
	  else if ((c & 0xf0) == 0xe0)
	    {
	      count = 2;
	      code = c & 0x0f;
	    }
	  else if ((c & 0xf8) == 0xf0)
	    {
	      count = 3;
	      code = c & 0x07;
	    }
	  else if ((c & 0xfc) == 0xf8)
	    {
	      count = 4;
	      code = c & 0x03;
	    }
	  else if ((c & 0xfe) == 0xfc)
	    {
	      count = 5;
	      code = c & 0x01;
	    }
	  else
	    {
	      /* invalid */
	      code = '?';
	      count = 0;
	    }
	}

      if (count == 0)
	{
	  *p++ = code;
	  destsize--;
	}
    }

  if (srcend)
    *srcend = src;
  return p - dest;
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
          long destsize = 100;
          long srcsize = 100;
          int _len_dest0 = 1;
          int * dest = (int *) malloc(_len_dest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srcend0 = 1;
          const int ** srcend = (const int **) malloc(_len_srcend0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_srcend0; _i0++) {
            int _len_srcend1 = 1;
            srcend[_i0] = (const int *) malloc(_len_srcend1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_srcend1; _i1++) {
              srcend[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          long benchRet = grub_utf8_to_ucs4(dest,destsize,src,srcsize,srcend);
          printf("%ld\n", benchRet); 
          free(dest);
          free(src);
          for(int i1 = 0; i1 < _len_srcend0; i1++) {
            int _len_srcend1 = 1;
              free(srcend[i1]);
          }
          free(srcend);
        
        break;
    }
    // big-arr
    case 1:
    {
          long destsize = 255;
          long srcsize = 255;
          int _len_dest0 = 65025;
          int * dest = (int *) malloc(_len_dest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srcend0 = 65025;
          const int ** srcend = (const int **) malloc(_len_srcend0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_srcend0; _i0++) {
            int _len_srcend1 = 1;
            srcend[_i0] = (const int *) malloc(_len_srcend1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_srcend1; _i1++) {
              srcend[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          long benchRet = grub_utf8_to_ucs4(dest,destsize,src,srcsize,srcend);
          printf("%ld\n", benchRet); 
          free(dest);
          free(src);
          for(int i1 = 0; i1 < _len_srcend0; i1++) {
            int _len_srcend1 = 1;
              free(srcend[i1]);
          }
          free(srcend);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long destsize = 10;
          long srcsize = 10;
          int _len_dest0 = 100;
          int * dest = (int *) malloc(_len_dest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srcend0 = 100;
          const int ** srcend = (const int **) malloc(_len_srcend0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_srcend0; _i0++) {
            int _len_srcend1 = 1;
            srcend[_i0] = (const int *) malloc(_len_srcend1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_srcend1; _i1++) {
              srcend[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          long benchRet = grub_utf8_to_ucs4(dest,destsize,src,srcsize,srcend);
          printf("%ld\n", benchRet); 
          free(dest);
          free(src);
          for(int i1 = 0; i1 < _len_srcend0; i1++) {
            int _len_srcend1 = 1;
              free(srcend[i1]);
          }
          free(srcend);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
