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
typedef  int wchar_t ;

/* Variables and functions */
 int EINVAL ; 
 int ENAMETOOLONG ; 
 unsigned char** page_uni2charset ; 
 unsigned char** u2c_00hi ; 

__attribute__((used)) static int uni2char(const wchar_t uni,
                    unsigned char *out, int boundlen)
{
    unsigned char *uni2charset;
    unsigned char cl = uni&0xFF;
    unsigned char ch = (uni>>8)&0xFF;

    if (boundlen <= 0)
        return -ENAMETOOLONG;

    if (ch == 0xFF && 0x61 <= cl && cl <= 0x9F) {
        out[0] = cl + 0x40;
        return 1;
    }
    uni2charset = page_uni2charset[ch];
    if (uni2charset) {
        if (boundlen < 2)
            return -ENAMETOOLONG;

        out[0] = uni2charset[cl*2];
        out[1] = uni2charset[cl*2+1];
        if (out[0] == 0x00 && out[1] == 0x00)
            return -EINVAL;
        return 2;
    } else if (ch == 0) {
        if (cl <= 0x7F) {
            out[0] = cl;
            return 1;
        } else if (0xA0 <= cl) {
            out[0] = u2c_00hi[cl - 0xA0][0];
            out[1] = u2c_00hi[cl - 0xA0][1];
            if (out[0] && out[1])
                return 2;
        }
        return -EINVAL;
    }
    else
        return -EINVAL;
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
          const int uni = 100;
          int boundlen = 100;
          int _len_out0 = 1;
          unsigned char * out = (unsigned char *) malloc(_len_out0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uni2char(uni,out,boundlen);
          printf("%d\n", benchRet); 
          free(out);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int uni = 255;
          int boundlen = 255;
          int _len_out0 = 65025;
          unsigned char * out = (unsigned char *) malloc(_len_out0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uni2char(uni,out,boundlen);
          printf("%d\n", benchRet); 
          free(out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int uni = 10;
          int boundlen = 10;
          int _len_out0 = 100;
          unsigned char * out = (unsigned char *) malloc(_len_out0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uni2char(uni,out,boundlen);
          printf("%d\n", benchRet); 
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
