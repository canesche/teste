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

int
sodium_unpad(size_t *unpadded_buflen_p, const unsigned char *buf,
             size_t padded_buflen, size_t blocksize)
{
    const unsigned char *tail;
    unsigned char        acc = 0U;
    unsigned char        c;
    unsigned char        valid = 0U;
    volatile size_t      pad_len = 0U;
    size_t               i;
    size_t               is_barrier;

    if (padded_buflen < blocksize || blocksize <= 0U) {
        return -1;
    }
    tail = &buf[padded_buflen - 1U];

    for (i = 0U; i < blocksize; i++) {
        c = *(tail - i);
        is_barrier =
            (( (acc - 1U) & (pad_len - 1U) & ((c ^ 0x80) - 1U) ) >> 8) & 1U;
        acc |= c;
        pad_len |= i & (1U + ~is_barrier);
        valid |= (unsigned char) is_barrier;
    }
    *unpadded_buflen_p = padded_buflen - 1U - pad_len;

    return (int) (valid - 1U);
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
          unsigned long padded_buflen = 100;
          unsigned long blocksize = 100;
          int _len_unpadded_buflen_p0 = 1;
          unsigned long * unpadded_buflen_p = (unsigned long *) malloc(_len_unpadded_buflen_p0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_unpadded_buflen_p0; _i0++) {
            unpadded_buflen_p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          const unsigned char * buf = (const unsigned char *) malloc(_len_buf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sodium_unpad(unpadded_buflen_p,buf,padded_buflen,blocksize);
          printf("%d\n", benchRet); 
          free(unpadded_buflen_p);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long padded_buflen = 255;
          unsigned long blocksize = 255;
          int _len_unpadded_buflen_p0 = 65025;
          unsigned long * unpadded_buflen_p = (unsigned long *) malloc(_len_unpadded_buflen_p0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_unpadded_buflen_p0; _i0++) {
            unpadded_buflen_p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          const unsigned char * buf = (const unsigned char *) malloc(_len_buf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sodium_unpad(unpadded_buflen_p,buf,padded_buflen,blocksize);
          printf("%d\n", benchRet); 
          free(unpadded_buflen_p);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long padded_buflen = 10;
          unsigned long blocksize = 10;
          int _len_unpadded_buflen_p0 = 100;
          unsigned long * unpadded_buflen_p = (unsigned long *) malloc(_len_unpadded_buflen_p0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_unpadded_buflen_p0; _i0++) {
            unpadded_buflen_p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          const unsigned char * buf = (const unsigned char *) malloc(_len_buf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sodium_unpad(unpadded_buflen_p,buf,padded_buflen,blocksize);
          printf("%d\n", benchRet); 
          free(unpadded_buflen_p);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
