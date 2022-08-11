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
typedef  unsigned char uint32_t ;

/* Variables and functions */

__attribute__((used)) static uint32_t
joaat_buf(void *buf, size_t len, uint32_t hval)
{
    size_t i;
    unsigned char *input = (unsigned char *)buf;

    for (i = 0; i < len; i++) {
        hval += input[i];
        hval += (hval << 10);
        hval ^= (hval >> 6);
    }

    hval += (hval << 3);
    hval ^= (hval >> 11);
    hval += (hval << 15);

    return hval;
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
          unsigned char hval = 100;
          void * buf;
          unsigned char benchRet = joaat_buf(buf,len,hval);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          unsigned char hval = 255;
          void * buf;
          unsigned char benchRet = joaat_buf(buf,len,hval);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          unsigned char hval = 10;
          void * buf;
          unsigned char benchRet = joaat_buf(buf,len,hval);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
