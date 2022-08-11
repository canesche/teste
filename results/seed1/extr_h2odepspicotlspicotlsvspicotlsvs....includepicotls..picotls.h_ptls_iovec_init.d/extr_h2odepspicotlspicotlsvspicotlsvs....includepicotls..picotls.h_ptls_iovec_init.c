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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint8_t ;
struct TYPE_3__ {size_t len; int /*<<< orphan*/ * base; } ;
typedef  TYPE_1__ ptls_iovec_t ;

/* Variables and functions */

inline ptls_iovec_t ptls_iovec_init(const void *p, size_t len)
{
    /* avoid the "return (ptls_iovec_t){(uint8_t *)p, len};" construct because it requires C99
     * and triggers a warning "C4204: nonstandard extension used: non-constant aggregate initializer"
     * in Visual Studio */
    ptls_iovec_t r;
    r.base = (uint8_t *)p;
    r.len = len;
    return r;
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
          int _len_p0 = 1;
          const void * p = (const void *) malloc(_len_p0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = 0;
          }
          struct TYPE_3__ benchRet = ptls_iovec_init(p,len);
          printf("%lu\n", benchRet.len);
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int _len_p0 = 65025;
          const void * p = (const void *) malloc(_len_p0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = 0;
          }
          struct TYPE_3__ benchRet = ptls_iovec_init(p,len);
          printf("%lu\n", benchRet.len);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int _len_p0 = 100;
          const void * p = (const void *) malloc(_len_p0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = 0;
          }
          struct TYPE_3__ benchRet = ptls_iovec_init(p,len);
          printf("%lu\n", benchRet.len);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
