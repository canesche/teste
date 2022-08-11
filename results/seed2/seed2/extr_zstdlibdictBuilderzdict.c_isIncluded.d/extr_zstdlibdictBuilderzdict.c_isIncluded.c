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

__attribute__((used)) static int isIncluded(const void* in, const void* container, size_t length)
{
    const char* const ip = (const char*) in;
    const char* const into = (const char*) container;
    size_t u;

    for (u=0; u<length; u++) {  /* works because end of buffer is a noisy guard band */
        if (ip[u] != into[u]) break;
    }

    return u==length;
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
          unsigned long length = 100;
          int _len_in0 = 1;
          const void * in = (const void *) malloc(_len_in0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = 0;
          }
          int _len_container0 = 1;
          const void * container = (const void *) malloc(_len_container0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_container0; _i0++) {
            container[_i0] = 0;
          }
          int benchRet = isIncluded(in,container,length);
          printf("%d\n", benchRet); 
          free(in);
          free(container);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long length = 255;
          int _len_in0 = 65025;
          const void * in = (const void *) malloc(_len_in0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = 0;
          }
          int _len_container0 = 65025;
          const void * container = (const void *) malloc(_len_container0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_container0; _i0++) {
            container[_i0] = 0;
          }
          int benchRet = isIncluded(in,container,length);
          printf("%d\n", benchRet); 
          free(in);
          free(container);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long length = 10;
          int _len_in0 = 100;
          const void * in = (const void *) malloc(_len_in0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = 0;
          }
          int _len_container0 = 100;
          const void * container = (const void *) malloc(_len_container0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_container0; _i0++) {
            container[_i0] = 0;
          }
          int benchRet = isIncluded(in,container,length);
          printf("%d\n", benchRet); 
          free(in);
          free(container);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
