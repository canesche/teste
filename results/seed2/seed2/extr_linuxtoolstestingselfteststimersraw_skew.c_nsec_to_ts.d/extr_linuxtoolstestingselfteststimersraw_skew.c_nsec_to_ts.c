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
struct timespec {long long tv_sec; long long tv_nsec; } ;

/* Variables and functions */
 long long NSEC_PER_SEC ; 

struct timespec nsec_to_ts(long long ns)
{
	struct timespec ts;

	ts.tv_sec = ns/NSEC_PER_SEC;
	ts.tv_nsec = ns%NSEC_PER_SEC;
	return ts;
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
          long long ns = 100;
          struct timespec benchRet = nsec_to_ts(ns);
          printf("%lld\n", benchRet.tv_sec);
          printf("%lld\n", benchRet.tv_nsec);
        
        break;
    }
    // big-arr
    case 1:
    {
          long long ns = 255;
          struct timespec benchRet = nsec_to_ts(ns);
          printf("%lld\n", benchRet.tv_sec);
          printf("%lld\n", benchRet.tv_nsec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long long ns = 10;
          struct timespec benchRet = nsec_to_ts(ns);
          printf("%lld\n", benchRet.tv_sec);
          printf("%lld\n", benchRet.tv_nsec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
