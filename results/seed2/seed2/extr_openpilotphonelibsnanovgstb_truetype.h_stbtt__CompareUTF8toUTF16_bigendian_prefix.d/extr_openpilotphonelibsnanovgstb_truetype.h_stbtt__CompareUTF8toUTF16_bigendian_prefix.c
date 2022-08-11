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
typedef  int stbtt_uint8 ;
typedef  int stbtt_uint32 ;
typedef  int stbtt_uint16 ;
typedef  scalar_t__ stbtt_int32 ;
typedef  int const ch ;
typedef  int const c ;

/* Variables and functions */

__attribute__((used)) static stbtt_int32 stbtt__CompareUTF8toUTF16_bigendian_prefix(const stbtt_uint8 *s1, stbtt_int32 len1, const stbtt_uint8 *s2, stbtt_int32 len2) 
{
   stbtt_int32 i=0;

   // convert utf16 to utf8 and compare the results while converting
   while (len2) {
      stbtt_uint16 ch = s2[0]*256 + s2[1];
      if (ch < 0x80) {
         if (i >= len1) return -1;
         if (s1[i++] != ch) return -1;
      } else if (ch < 0x800) {
         if (i+1 >= len1) return -1;
         if (s1[i++] != 0xc0 + (ch >> 6)) return -1;
         if (s1[i++] != 0x80 + (ch & 0x3f)) return -1;
      } else if (ch >= 0xd800 && ch < 0xdc00) {
         stbtt_uint32 c;
         stbtt_uint16 ch2 = s2[2]*256 + s2[3];
         if (i+3 >= len1) return -1;
         c = ((ch - 0xd800) << 10) + (ch2 - 0xdc00) + 0x10000;
         if (s1[i++] != 0xf0 + (c >> 18)) return -1;
         if (s1[i++] != 0x80 + ((c >> 12) & 0x3f)) return -1;
         if (s1[i++] != 0x80 + ((c >>  6) & 0x3f)) return -1;
         if (s1[i++] != 0x80 + ((c      ) & 0x3f)) return -1;
         s2 += 2; // plus another 2 below
         len2 -= 2;
      } else if (ch >= 0xdc00 && ch < 0xe000) {
         return -1;
      } else {
         if (i+2 >= len1) return -1;
         if (s1[i++] != 0xe0 + (ch >> 12)) return -1;
         if (s1[i++] != 0x80 + ((ch >> 6) & 0x3f)) return -1;
         if (s1[i++] != 0x80 + ((ch     ) & 0x3f)) return -1;
      }
      s2 += 2;
      len2 -= 2;
   }
   return i;
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
          long len1 = 100;
          long len2 = 100;
          int _len_s10 = 1;
          const int * s1 = (const int *) malloc(_len_s10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s20 = 1;
          const int * s2 = (const int *) malloc(_len_s20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = stbtt__CompareUTF8toUTF16_bigendian_prefix(s1,len1,s2,len2);
          printf("%ld\n", benchRet); 
          free(s1);
          free(s2);
        
        break;
    }
    // big-arr
    case 1:
    {
          long len1 = 255;
          long len2 = 255;
          int _len_s10 = 65025;
          const int * s1 = (const int *) malloc(_len_s10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s20 = 65025;
          const int * s2 = (const int *) malloc(_len_s20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = stbtt__CompareUTF8toUTF16_bigendian_prefix(s1,len1,s2,len2);
          printf("%ld\n", benchRet); 
          free(s1);
          free(s2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long len1 = 10;
          long len2 = 10;
          int _len_s10 = 100;
          const int * s1 = (const int *) malloc(_len_s10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s20 = 100;
          const int * s2 = (const int *) malloc(_len_s20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = stbtt__CompareUTF8toUTF16_bigendian_prefix(s1,len1,s2,len2);
          printf("%ld\n", benchRet); 
          free(s1);
          free(s2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
