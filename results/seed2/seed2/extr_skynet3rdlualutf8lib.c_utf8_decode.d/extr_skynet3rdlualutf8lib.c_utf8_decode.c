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
 unsigned int MAXUNICODE ; 

__attribute__((used)) static const char *utf8_decode (const char *o, int *val) {
  static const unsigned int limits[] = {0xFF, 0x7F, 0x7FF, 0xFFFF};
  const unsigned char *s = (const unsigned char *)o;
  unsigned int c = s[0];
  unsigned int res = 0;  /* final result */
  if (c < 0x80)  /* ascii? */
    res = c;
  else {
    int count = 0;  /* to count number of continuation bytes */
    while (c & 0x40) {  /* still have continuation bytes? */
      int cc = s[++count];  /* read next byte */
      if ((cc & 0xC0) != 0x80)  /* not a continuation byte? */
        return NULL;  /* invalid byte sequence */
      res = (res << 6) | (cc & 0x3F);  /* add lower 6 bits from cont. byte */
      c <<= 1;  /* to test next bit */
    }
    res |= ((c & 0x7F) << (count * 5));  /* add first byte */
    if (count > 3 || res > MAXUNICODE || res <= limits[count])
      return NULL;  /* invalid byte sequence */
    s += count;  /* skip continuation bytes read */
  }
  if (val) *val = res;
  return (const char *)s + 1;  /* +1 to include first byte */
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
          int _len_o0 = 1;
          const char * o = (const char *) malloc(_len_o0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
            o[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 1;
          int * val = (int *) malloc(_len_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = utf8_decode(o,val);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(o);
          free(val);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_o0 = 65025;
          const char * o = (const char *) malloc(_len_o0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
            o[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 65025;
          int * val = (int *) malloc(_len_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = utf8_decode(o,val);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(o);
          free(val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_o0 = 100;
          const char * o = (const char *) malloc(_len_o0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
            o[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 100;
          int * val = (int *) malloc(_len_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = utf8_decode(o,val);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(o);
          free(val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
