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
struct TYPE_3__ {char const* dict; size_t dictSize; } ;
typedef  TYPE_1__ ZBUFF_DCtx ;

/* Variables and functions */

__attribute__((used)) static size_t ZBUFF_decompressWithDictionary(ZBUFF_DCtx* zbc, const void* src, size_t srcSize)
{
    zbc->dict = (const char*)src;
    zbc->dictSize = srcSize;
    return 0;
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
          unsigned long srcSize = 100;
          int _len_zbc0 = 1;
          struct TYPE_3__ * zbc = (struct TYPE_3__ *) malloc(_len_zbc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_zbc0; _i0++) {
              int _len_zbc__i0__dict0 = 1;
          zbc[_i0].dict = (const char *) malloc(_len_zbc__i0__dict0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_zbc__i0__dict0; _j0++) {
            zbc[_i0].dict[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        zbc[_i0].dictSize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          const void * src = (const void *) malloc(_len_src0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = 0;
          }
          unsigned long benchRet = ZBUFF_decompressWithDictionary(zbc,src,srcSize);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_zbc0; _aux++) {
          free(zbc[_aux].dict);
          }
          free(zbc);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long srcSize = 255;
          int _len_zbc0 = 65025;
          struct TYPE_3__ * zbc = (struct TYPE_3__ *) malloc(_len_zbc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_zbc0; _i0++) {
              int _len_zbc__i0__dict0 = 1;
          zbc[_i0].dict = (const char *) malloc(_len_zbc__i0__dict0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_zbc__i0__dict0; _j0++) {
            zbc[_i0].dict[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        zbc[_i0].dictSize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          const void * src = (const void *) malloc(_len_src0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = 0;
          }
          unsigned long benchRet = ZBUFF_decompressWithDictionary(zbc,src,srcSize);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_zbc0; _aux++) {
          free(zbc[_aux].dict);
          }
          free(zbc);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long srcSize = 10;
          int _len_zbc0 = 100;
          struct TYPE_3__ * zbc = (struct TYPE_3__ *) malloc(_len_zbc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_zbc0; _i0++) {
              int _len_zbc__i0__dict0 = 1;
          zbc[_i0].dict = (const char *) malloc(_len_zbc__i0__dict0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_zbc__i0__dict0; _j0++) {
            zbc[_i0].dict[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        zbc[_i0].dictSize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          const void * src = (const void *) malloc(_len_src0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = 0;
          }
          unsigned long benchRet = ZBUFF_decompressWithDictionary(zbc,src,srcSize);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_zbc0; _aux++) {
          free(zbc[_aux].dict);
          }
          free(zbc);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
