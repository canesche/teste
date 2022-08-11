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
typedef  int /*<<< orphan*/  RSA ;

/* Variables and functions */
 int /*<<< orphan*/  SetKey ; 

__attribute__((used)) static int key2(RSA *key, unsigned char *c)
{
    static unsigned char n[] =
        "\x00\xA3\x07\x9A\x90\xDF\x0D\xFD\x72\xAC\x09\x0C\xCC\x2A\x78\xB8"
        "\x74\x13\x13\x3E\x40\x75\x9C\x98\xFA\xF8\x20\x4F\x35\x8A\x0B\x26"
        "\x3C\x67\x70\xE7\x83\xA9\x3B\x69\x71\xB7\x37\x79\xD2\x71\x7B\xE8"
        "\x34\x77\xCF";

    static unsigned char e[] = "\x3";

    static unsigned char d[] =
        "\x6C\xAF\xBC\x60\x94\xB3\xFE\x4C\x72\xB0\xB3\x32\xC6\xFB\x25\xA2"
        "\xB7\x62\x29\x80\x4E\x68\x65\xFC\xA4\x5A\x74\xDF\x0F\x8F\xB8\x41"
        "\x3B\x52\xC0\xD0\xE5\x3D\x9B\x59\x0F\xF1\x9B\xE7\x9F\x49\xDD\x21"
        "\xE5\xEB";

    static unsigned char p[] =
        "\x00\xCF\x20\x35\x02\x8B\x9D\x86\x98\x40\xB4\x16\x66\xB4\x2E\x92"
        "\xEA\x0D\xA3\xB4\x32\x04\xB5\xCF\xCE\x91";

    static unsigned char q[] =
        "\x00\xC9\x7F\xB1\xF0\x27\xF4\x53\xF6\x34\x12\x33\xEA\xAA\xD1\xD9"
        "\x35\x3F\x6C\x42\xD0\x88\x66\xB1\xD0\x5F";

    static unsigned char dmp1[] =
        "\x00\x8A\x15\x78\xAC\x5D\x13\xAF\x10\x2B\x22\xB9\x99\xCD\x74\x61"
        "\xF1\x5E\x6D\x22\xCC\x03\x23\xDF\xDF\x0B";

    static unsigned char dmq1[] =
        "\x00\x86\x55\x21\x4A\xC5\x4D\x8D\x4E\xCD\x61\x77\xF1\xC7\x36\x90"
        "\xCE\x2A\x48\x2C\x8B\x05\x99\xCB\xE0\x3F";

    static unsigned char iqmp[] =
        "\x00\x83\xEF\xEF\xB8\xA9\xA4\x0D\x1D\xB6\xED\x98\xAD\x84\xED\x13"
        "\x35\xDC\xC1\x08\xF3\x22\xD0\x57\xCF\x8D";

    static unsigned char ctext_ex[] =
        "\x14\xbd\xdd\x28\xc9\x83\x35\x19\x23\x80\xe8\xe5\x49\xb1\x58\x2a"
        "\x8b\x40\xb4\x48\x6d\x03\xa6\xa5\x31\x1f\x1f\xd5\xf0\xa1\x80\xe4"
        "\x17\x53\x03\x29\xa9\x34\x90\x74\xb1\x52\x13\x54\x29\x08\x24\x52"
        "\x62\x51";

    SetKey;
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
          int _len_key0 = 1;
          int * key = (int *) malloc(_len_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 1;
          unsigned char * c = (unsigned char *) malloc(_len_c0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = key2(key,c);
          printf("%d\n", benchRet); 
          free(key);
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_key0 = 65025;
          int * key = (int *) malloc(_len_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 65025;
          unsigned char * c = (unsigned char *) malloc(_len_c0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = key2(key,c);
          printf("%d\n", benchRet); 
          free(key);
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_key0 = 100;
          int * key = (int *) malloc(_len_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 100;
          unsigned char * c = (unsigned char *) malloc(_len_c0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = key2(key,c);
          printf("%d\n", benchRet); 
          free(key);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
