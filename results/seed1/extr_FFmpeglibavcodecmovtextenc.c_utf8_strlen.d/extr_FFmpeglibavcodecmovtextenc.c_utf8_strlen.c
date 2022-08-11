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
typedef  int uint16_t ;

/* Variables and functions */

__attribute__((used)) static uint16_t utf8_strlen(const char *text, int len)
{
    uint16_t i = 0, ret = 0;
    while (i < len) {
        char c = text[i];
        if ((c & 0x80) == 0)
            i += 1;
        else if ((c & 0xE0) == 0xC0)
            i += 2;
        else if ((c & 0xF0) == 0xE0)
            i += 3;
        else if ((c & 0xF8) == 0xF0)
            i += 4;
        else
            return 0;
        ret++;
    }
    return ret;
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
          int len = 100;
          int _len_text0 = 1;
          const char * text = (const char *) malloc(_len_text0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_text0; _i0++) {
            text[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = utf8_strlen(text,len);
          printf("%d\n", benchRet); 
          free(text);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_text0 = 65025;
          const char * text = (const char *) malloc(_len_text0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_text0; _i0++) {
            text[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = utf8_strlen(text,len);
          printf("%d\n", benchRet); 
          free(text);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_text0 = 100;
          const char * text = (const char *) malloc(_len_text0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_text0; _i0++) {
            text[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = utf8_strlen(text,len);
          printf("%d\n", benchRet); 
          free(text);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
