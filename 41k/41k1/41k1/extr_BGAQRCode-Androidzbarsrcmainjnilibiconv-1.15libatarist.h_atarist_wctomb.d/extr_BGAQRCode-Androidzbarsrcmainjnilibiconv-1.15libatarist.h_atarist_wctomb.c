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
typedef  int ucs4_t ;
typedef  int /*<<< orphan*/  conv_t ;

/* Variables and functions */
 int RET_ILUNI ; 
 unsigned char* atarist_page00 ; 
 unsigned char* atarist_page01 ; 
 unsigned char* atarist_page03 ; 
 unsigned char* atarist_page05 ; 
 unsigned char* atarist_page22 ; 
 unsigned char* atarist_page23 ; 

__attribute__((used)) static int
atarist_wctomb (conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
  unsigned char c = 0;
  if (wc < 0x0080) {
    *r = wc;
    return 1;
  }
  else if (wc >= 0x00a0 && wc < 0x0100)
    c = atarist_page00[wc-0x00a0];
  else if (wc >= 0x0130 && wc < 0x0198)
    c = atarist_page01[wc-0x0130];
  else if (wc >= 0x0390 && wc < 0x03c8)
    c = atarist_page03[wc-0x0390];
  else if (wc >= 0x05d0 && wc < 0x05f0)
    c = atarist_page05[wc-0x05d0];
  else if (wc == 0x2020)
    c = 0xbb;
  else if (wc == 0x207f)
    c = 0xfc;
  else if (wc == 0x2122)
    c = 0xbf;
  else if (wc >= 0x2208 && wc < 0x2268)
    c = atarist_page22[wc-0x2208];
  else if (wc >= 0x2310 && wc < 0x2328)
    c = atarist_page23[wc-0x2310];
  if (c != 0) {
    *r = c;
    return 1;
  }
  return RET_ILUNI;
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
          int conv = 100;
          int wc = 100;
          unsigned long n = 100;
          int _len_r0 = 1;
          unsigned char * r = (unsigned char *) malloc(_len_r0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = atarist_wctomb(conv,r,wc,n);
          printf("%d\n", benchRet); 
          free(r);
        
        break;
    }
    // big-arr
    case 1:
    {
          int conv = 255;
          int wc = 255;
          unsigned long n = 255;
          int _len_r0 = 65025;
          unsigned char * r = (unsigned char *) malloc(_len_r0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = atarist_wctomb(conv,r,wc,n);
          printf("%d\n", benchRet); 
          free(r);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int conv = 10;
          int wc = 10;
          unsigned long n = 10;
          int _len_r0 = 100;
          unsigned char * r = (unsigned char *) malloc(_len_r0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = atarist_wctomb(conv,r,wc,n);
          printf("%d\n", benchRet); 
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
