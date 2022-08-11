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
struct i24 {long long i24; } ;
typedef  long long int8_t ;
typedef  long long int64_t ;
typedef  long long int32_t ;
typedef  long long int16_t ;

/* Variables and functions */

__attribute__((used)) static int argnumcpy(long long val, void *to, unsigned maxlen)
{
	switch (maxlen) {
		case 0:
			/* No write-back, caller just wants to know if arg was found */
			break;
		case 1:
			*(int8_t *)to = val;
			break;
		case 2:
			*(int16_t *)to = val;
			break;
		case 3:
			/* Unlikely in practice */
			((struct i24 *)to)->i24 = val;
			break;
		case 4:
			*(int32_t *)to = val;
			break;
		case 8:
			*(int64_t *)to = val;
			break;
		default:
			*(int32_t *)to = val;
			maxlen = 4;
			break;
	}

	return (int)maxlen;
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
          long long val = 100;
          unsigned int maxlen = 100;
          void * to;
          int benchRet = argnumcpy(val,to,maxlen);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long long val = 255;
          unsigned int maxlen = 255;
          void * to;
          int benchRet = argnumcpy(val,to,maxlen);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long long val = 10;
          unsigned int maxlen = 10;
          void * to;
          int benchRet = argnumcpy(val,to,maxlen);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
