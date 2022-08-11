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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {unsigned char x; unsigned char y; unsigned char* buf; } ;
struct TYPE_5__ {TYPE_1__ rc4; } ;
typedef  TYPE_2__ prng_state ;

/* Variables and functions */

unsigned long rc4_read(unsigned char *buf, unsigned long len, prng_state *prng)
{
   unsigned char x, y, *s, tmp;
   unsigned long n;

   n = len;
   x = prng->rc4.x;
   y = prng->rc4.y;
   s = prng->rc4.buf;
   while (len--) {
      x = (x + 1) & 255;
      y = (y + s[x]) & 255;
      tmp = s[x]; s[x] = s[y]; s[y] = tmp;
      tmp = (s[x] + s[y]) & 255;
      *buf++ ^= s[tmp];
   }
   prng->rc4.x = x;
   prng->rc4.y = y;
   return n;
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
          unsigned long len = 100;
          int _len_buf0 = 1;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prng0 = 1;
          struct TYPE_5__ * prng = (struct TYPE_5__ *) malloc(_len_prng0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_prng0; _i0++) {
            prng[_i0].rc4.x = ((-2 * (next_i()%2)) + 1) * next_i();
        prng[_i0].rc4.y = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prng__i0__rc4_buf0 = 1;
          prng[_i0].rc4.buf = (unsigned char *) malloc(_len_prng__i0__rc4_buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_prng__i0__rc4_buf0; _j0++) {
            prng[_i0].rc4.buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = rc4_read(buf,len,prng);
          printf("%lu\n", benchRet); 
          free(buf);
          free(prng);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int _len_buf0 = 65025;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prng0 = 65025;
          struct TYPE_5__ * prng = (struct TYPE_5__ *) malloc(_len_prng0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_prng0; _i0++) {
            prng[_i0].rc4.x = ((-2 * (next_i()%2)) + 1) * next_i();
        prng[_i0].rc4.y = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prng__i0__rc4_buf0 = 1;
          prng[_i0].rc4.buf = (unsigned char *) malloc(_len_prng__i0__rc4_buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_prng__i0__rc4_buf0; _j0++) {
            prng[_i0].rc4.buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = rc4_read(buf,len,prng);
          printf("%lu\n", benchRet); 
          free(buf);
          free(prng);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int _len_buf0 = 100;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prng0 = 100;
          struct TYPE_5__ * prng = (struct TYPE_5__ *) malloc(_len_prng0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_prng0; _i0++) {
            prng[_i0].rc4.x = ((-2 * (next_i()%2)) + 1) * next_i();
        prng[_i0].rc4.y = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prng__i0__rc4_buf0 = 1;
          prng[_i0].rc4.buf = (unsigned char *) malloc(_len_prng__i0__rc4_buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_prng__i0__rc4_buf0; _j0++) {
            prng[_i0].rc4.buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = rc4_read(buf,len,prng);
          printf("%lu\n", benchRet); 
          free(buf);
          free(prng);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
