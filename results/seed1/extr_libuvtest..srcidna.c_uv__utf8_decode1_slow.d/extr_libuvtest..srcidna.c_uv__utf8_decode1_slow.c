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

__attribute__((used)) static unsigned uv__utf8_decode1_slow(const char** p,
                                      const char* pe,
                                      unsigned a) {
  unsigned b;
  unsigned c;
  unsigned d;
  unsigned min;

  if (a > 0xF7)
    return -1;

  switch (*p - pe) {
  default:
    if (a > 0xEF) {
      min = 0x10000;
      a = a & 7;
      b = (unsigned char) *(*p)++;
      c = (unsigned char) *(*p)++;
      d = (unsigned char) *(*p)++;
      break;
    }
    /* Fall through. */
  case 2:
    if (a > 0xDF) {
      min = 0x800;
      b = 0x80 | (a & 15);
      c = (unsigned char) *(*p)++;
      d = (unsigned char) *(*p)++;
      a = 0;
      break;
    }
    /* Fall through. */
  case 1:
    if (a > 0xBF) {
      min = 0x80;
      b = 0x80;
      c = 0x80 | (a & 31);
      d = (unsigned char) *(*p)++;
      a = 0;
      break;
    }
    return -1;  /* Invalid continuation byte. */
  }

  if (0x80 != (0xC0 & (b ^ c ^ d)))
    return -1;  /* Invalid sequence. */

  b &= 63;
  c &= 63;
  d &= 63;
  a = (a << 18) | (b << 12) | (c << 6) | d;

  if (a < min)
    return -1;  /* Overlong sequence. */

  if (a > 0x10FFFF)
    return -1;  /* Four-byte sequence > U+10FFFF. */

  if (a >= 0xD800 && a <= 0xDFFF)
    return -1;  /* Surrogate pair. */

  return a;
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
          unsigned int a = 100;
          int _len_p0 = 1;
          const char ** p = (const char **) malloc(_len_p0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            int _len_p1 = 1;
            p[_i0] = (const char *) malloc(_len_p1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_p1; _i1++) {
              p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pe0 = 1;
          const char * pe = (const char *) malloc(_len_pe0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_pe0; _i0++) {
            pe[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = uv__utf8_decode1_slow(p,pe,a);
          printf("%u\n", benchRet); 
          for(int i1 = 0; i1 < _len_p0; i1++) {
            int _len_p1 = 1;
              free(p[i1]);
          }
          free(p);
          free(pe);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int a = 255;
          int _len_p0 = 65025;
          const char ** p = (const char **) malloc(_len_p0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            int _len_p1 = 1;
            p[_i0] = (const char *) malloc(_len_p1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_p1; _i1++) {
              p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pe0 = 65025;
          const char * pe = (const char *) malloc(_len_pe0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_pe0; _i0++) {
            pe[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = uv__utf8_decode1_slow(p,pe,a);
          printf("%u\n", benchRet); 
          for(int i1 = 0; i1 < _len_p0; i1++) {
            int _len_p1 = 1;
              free(p[i1]);
          }
          free(p);
          free(pe);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int a = 10;
          int _len_p0 = 100;
          const char ** p = (const char **) malloc(_len_p0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            int _len_p1 = 1;
            p[_i0] = (const char *) malloc(_len_p1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_p1; _i1++) {
              p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pe0 = 100;
          const char * pe = (const char *) malloc(_len_pe0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_pe0; _i0++) {
            pe[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = uv__utf8_decode1_slow(p,pe,a);
          printf("%u\n", benchRet); 
          for(int i1 = 0; i1 < _len_p0; i1++) {
            int _len_p1 = 1;
              free(p[i1]);
          }
          free(p);
          free(pe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
