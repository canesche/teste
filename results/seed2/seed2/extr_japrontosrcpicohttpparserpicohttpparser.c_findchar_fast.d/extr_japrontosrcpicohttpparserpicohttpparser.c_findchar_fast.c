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

__attribute__((used)) static const char *findchar_fast(const char *buf, const char *buf_end, const char *ranges, size_t ranges_size, int *found)
{
    *found = 0;
#if __SSE4_2__
    if (likely(buf_end - buf >= 16)) {
        __m128i ranges16 = _mm_loadu_si128((const __m128i *)ranges);

        size_t left = (buf_end - buf) & ~15;
        do {
            __m128i b16 = _mm_loadu_si128((void *)buf);
            int r = _mm_cmpestri(ranges16, ranges_size, b16, 16, _SIDD_LEAST_SIGNIFICANT | _SIDD_CMP_RANGES | _SIDD_UBYTE_OPS);
            if (unlikely(r != 16)) {
                buf += r;
                *found = 1;
                break;
            }
            buf += 16;
            left -= 16;
        } while (likely(left != 0));
    }
#else
    /* suppress unused parameter warning */
    (void)buf_end;
    (void)ranges;
    (void)ranges_size;
#endif
    return buf;
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
          unsigned long ranges_size = 100;
          int _len_buf0 = 1;
          const char * buf = (const char *) malloc(_len_buf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf_end0 = 1;
          const char * buf_end = (const char *) malloc(_len_buf_end0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf_end0; _i0++) {
            buf_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ranges0 = 1;
          const char * ranges = (const char *) malloc(_len_ranges0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_ranges0; _i0++) {
            ranges[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_found0 = 1;
          int * found = (int *) malloc(_len_found0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_found0; _i0++) {
            found[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = findchar_fast(buf,buf_end,ranges,ranges_size,found);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(buf);
          free(buf_end);
          free(ranges);
          free(found);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long ranges_size = 255;
          int _len_buf0 = 65025;
          const char * buf = (const char *) malloc(_len_buf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf_end0 = 65025;
          const char * buf_end = (const char *) malloc(_len_buf_end0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf_end0; _i0++) {
            buf_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ranges0 = 65025;
          const char * ranges = (const char *) malloc(_len_ranges0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_ranges0; _i0++) {
            ranges[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_found0 = 65025;
          int * found = (int *) malloc(_len_found0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_found0; _i0++) {
            found[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = findchar_fast(buf,buf_end,ranges,ranges_size,found);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(buf);
          free(buf_end);
          free(ranges);
          free(found);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long ranges_size = 10;
          int _len_buf0 = 100;
          const char * buf = (const char *) malloc(_len_buf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf_end0 = 100;
          const char * buf_end = (const char *) malloc(_len_buf_end0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf_end0; _i0++) {
            buf_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ranges0 = 100;
          const char * ranges = (const char *) malloc(_len_ranges0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_ranges0; _i0++) {
            ranges[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_found0 = 100;
          int * found = (int *) malloc(_len_found0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_found0; _i0++) {
            found[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = findchar_fast(buf,buf_end,ranges,ranges_size,found);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(buf);
          free(buf_end);
          free(ranges);
          free(found);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
