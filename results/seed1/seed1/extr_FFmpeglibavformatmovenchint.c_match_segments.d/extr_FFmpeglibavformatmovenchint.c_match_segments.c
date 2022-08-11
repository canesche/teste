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
typedef  scalar_t__ uint8_t ;

/* Variables and functions */

__attribute__((used)) static int match_segments(const uint8_t *haystack, int h_len,
                          const uint8_t *needle, int n_pos, int n_len,
                          int *match_h_offset_ptr, int *match_n_offset_ptr,
                          int *match_len_ptr)
{
    int h_pos;
    for (h_pos = 0; h_pos < h_len; h_pos++) {
        int match_len = 0;
        int match_h_pos, match_n_pos;

        /* Check how many bytes match at needle[n_pos] and haystack[h_pos] */
        while (h_pos + match_len < h_len && n_pos + match_len < n_len &&
               needle[n_pos + match_len] == haystack[h_pos + match_len])
            match_len++;
        if (match_len <= 8)
            continue;

        /* If a sufficiently large match was found, try to expand
         * the matched segment backwards. */
        match_h_pos = h_pos;
        match_n_pos = n_pos;
        while (match_n_pos > 0 && match_h_pos > 0 &&
               needle[match_n_pos - 1] == haystack[match_h_pos - 1]) {
            match_n_pos--;
            match_h_pos--;
            match_len++;
        }
        if (match_len <= 14)
            continue;
        *match_h_offset_ptr = match_h_pos;
        *match_n_offset_ptr = match_n_pos;
        *match_len_ptr = match_len;
        return 0;
    }
    return -1;
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
          int h_len = 100;
          int n_pos = 100;
          int n_len = 100;
          int _len_haystack0 = 1;
          const long * haystack = (const long *) malloc(_len_haystack0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_haystack0; _i0++) {
            haystack[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_needle0 = 1;
          const long * needle = (const long *) malloc(_len_needle0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_needle0; _i0++) {
            needle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_match_h_offset_ptr0 = 1;
          int * match_h_offset_ptr = (int *) malloc(_len_match_h_offset_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_match_h_offset_ptr0; _i0++) {
            match_h_offset_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_match_n_offset_ptr0 = 1;
          int * match_n_offset_ptr = (int *) malloc(_len_match_n_offset_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_match_n_offset_ptr0; _i0++) {
            match_n_offset_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_match_len_ptr0 = 1;
          int * match_len_ptr = (int *) malloc(_len_match_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_match_len_ptr0; _i0++) {
            match_len_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = match_segments(haystack,h_len,needle,n_pos,n_len,match_h_offset_ptr,match_n_offset_ptr,match_len_ptr);
          printf("%d\n", benchRet); 
          free(haystack);
          free(needle);
          free(match_h_offset_ptr);
          free(match_n_offset_ptr);
          free(match_len_ptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int h_len = 255;
          int n_pos = 255;
          int n_len = 255;
          int _len_haystack0 = 65025;
          const long * haystack = (const long *) malloc(_len_haystack0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_haystack0; _i0++) {
            haystack[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_needle0 = 65025;
          const long * needle = (const long *) malloc(_len_needle0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_needle0; _i0++) {
            needle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_match_h_offset_ptr0 = 65025;
          int * match_h_offset_ptr = (int *) malloc(_len_match_h_offset_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_match_h_offset_ptr0; _i0++) {
            match_h_offset_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_match_n_offset_ptr0 = 65025;
          int * match_n_offset_ptr = (int *) malloc(_len_match_n_offset_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_match_n_offset_ptr0; _i0++) {
            match_n_offset_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_match_len_ptr0 = 65025;
          int * match_len_ptr = (int *) malloc(_len_match_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_match_len_ptr0; _i0++) {
            match_len_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = match_segments(haystack,h_len,needle,n_pos,n_len,match_h_offset_ptr,match_n_offset_ptr,match_len_ptr);
          printf("%d\n", benchRet); 
          free(haystack);
          free(needle);
          free(match_h_offset_ptr);
          free(match_n_offset_ptr);
          free(match_len_ptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int h_len = 10;
          int n_pos = 10;
          int n_len = 10;
          int _len_haystack0 = 100;
          const long * haystack = (const long *) malloc(_len_haystack0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_haystack0; _i0++) {
            haystack[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_needle0 = 100;
          const long * needle = (const long *) malloc(_len_needle0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_needle0; _i0++) {
            needle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_match_h_offset_ptr0 = 100;
          int * match_h_offset_ptr = (int *) malloc(_len_match_h_offset_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_match_h_offset_ptr0; _i0++) {
            match_h_offset_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_match_n_offset_ptr0 = 100;
          int * match_n_offset_ptr = (int *) malloc(_len_match_n_offset_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_match_n_offset_ptr0; _i0++) {
            match_n_offset_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_match_len_ptr0 = 100;
          int * match_len_ptr = (int *) malloc(_len_match_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_match_len_ptr0; _i0++) {
            match_len_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = match_segments(haystack,h_len,needle,n_pos,n_len,match_h_offset_ptr,match_n_offset_ptr,match_len_ptr);
          printf("%d\n", benchRet); 
          free(haystack);
          free(needle);
          free(match_h_offset_ptr);
          free(match_n_offset_ptr);
          free(match_len_ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
