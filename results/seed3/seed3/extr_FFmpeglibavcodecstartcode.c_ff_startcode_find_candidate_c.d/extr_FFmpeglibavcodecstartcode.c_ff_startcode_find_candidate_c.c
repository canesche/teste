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
typedef  int /*<<< orphan*/  uint8_t ;

/* Variables and functions */

int ff_startcode_find_candidate_c(const uint8_t *buf, int size)
{
    int i = 0;
#if HAVE_FAST_UNALIGNED
    /* we check i < size instead of i + 3 / 7 because it is
     * simpler and there must be AV_INPUT_BUFFER_PADDING_SIZE
     * bytes at the end.
     */
#if HAVE_FAST_64BIT
    while (i < size &&
            !((~*(const uint64_t *)(buf + i) &
                    (*(const uint64_t *)(buf + i) - 0x0101010101010101ULL)) &
                    0x8080808080808080ULL))
        i += 8;
#else
    while (i < size &&
            !((~*(const uint32_t *)(buf + i) &
                    (*(const uint32_t *)(buf + i) - 0x01010101U)) &
                    0x80808080U))
        i += 4;
#endif
#endif
    for (; i < size; i++)
        if (!buf[i])
            break;
    return i;
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
          int size = 100;
          int _len_buf0 = 1;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ff_startcode_find_candidate_c(buf,size);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int size = 255;
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ff_startcode_find_candidate_c(buf,size);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int size = 10;
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ff_startcode_find_candidate_c(buf,size);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
