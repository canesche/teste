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
 unsigned int* utf8_length ; 
 unsigned char* utf8_mask ; 
 unsigned int* utf8_minval ; 

__attribute__((used)) static inline unsigned int decode_utf8_char( unsigned char ch, const char **str, const char *strend )
{
    unsigned int len = utf8_length[ch-0x80];
    unsigned int res = ch & utf8_mask[len];
    const char *end = *str + len;

    if (end > strend) return ~0;
    switch(len)
    {
    case 3:
        if ((ch = end[-3] ^ 0x80) >= 0x40) break;
        res = (res << 6) | ch;
        (*str)++;
    case 2:
        if ((ch = end[-2] ^ 0x80) >= 0x40) break;
        res = (res << 6) | ch;
        (*str)++;
    case 1:
        if ((ch = end[-1] ^ 0x80) >= 0x40) break;
        res = (res << 6) | ch;
        (*str)++;
        if (res < utf8_minval[len]) break;
        return res;
    }
    return ~0;
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
          unsigned char ch = 100;
          int _len_str0 = 1;
          const char ** str = (const char **) malloc(_len_str0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            int _len_str1 = 1;
            str[_i0] = (const char *) malloc(_len_str1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_str1; _i1++) {
              str[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_strend0 = 1;
          const char * strend = (const char *) malloc(_len_strend0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_strend0; _i0++) {
            strend[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = decode_utf8_char(ch,str,strend);
          printf("%u\n", benchRet); 
          for(int i1 = 0; i1 < _len_str0; i1++) {
            int _len_str1 = 1;
              free(str[i1]);
          }
          free(str);
          free(strend);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char ch = 255;
          int _len_str0 = 65025;
          const char ** str = (const char **) malloc(_len_str0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            int _len_str1 = 1;
            str[_i0] = (const char *) malloc(_len_str1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_str1; _i1++) {
              str[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_strend0 = 65025;
          const char * strend = (const char *) malloc(_len_strend0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_strend0; _i0++) {
            strend[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = decode_utf8_char(ch,str,strend);
          printf("%u\n", benchRet); 
          for(int i1 = 0; i1 < _len_str0; i1++) {
            int _len_str1 = 1;
              free(str[i1]);
          }
          free(str);
          free(strend);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char ch = 10;
          int _len_str0 = 100;
          const char ** str = (const char **) malloc(_len_str0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            int _len_str1 = 1;
            str[_i0] = (const char *) malloc(_len_str1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_str1; _i1++) {
              str[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_strend0 = 100;
          const char * strend = (const char *) malloc(_len_strend0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_strend0; _i0++) {
            strend[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = decode_utf8_char(ch,str,strend);
          printf("%u\n", benchRet); 
          for(int i1 = 0; i1 < _len_str0; i1++) {
            int _len_str1 = 1;
              free(str[i1]);
          }
          free(str);
          free(strend);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
